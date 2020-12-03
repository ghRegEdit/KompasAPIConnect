////////////////////////////////////////////////////////////////////////////////
//
// IUptr.h  шаблон указателя на интерфейс
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __IUPTR_H
#define __IUPTR_H

#ifndef __unknwn_h__
#include <Unknwn.h>
#endif

#ifdef __BORLANDC__  
#ifndef __CHECKS_H
#include <checks.h>
#endif
#else
#ifndef _INC_CRTDBG
#include <crtdbg.h>
#endif

#define PRECONDITION      _ASSERT
#endif

#define IIDR_UNKNOWN     0

////////////////////////////////////////////////////////////////////////////////
//
// IUPtr - Smart Interface Pointer - это СИММЕТРИЧНАЯ оболочка
//   Use:  IUPtr<IX, &IID_IX> spIX;
//   Do not use with IUnknown; IUPtr<IUnknown, &IID_IUnknown>
//     will not compile.  Instead, use IUnknownPtr.
//
////////////////////////////////////////////////////////////////////////////////
template <class T, const IID* piid>
class IUPtr {
private:
  // Pointer variable
  T* m_pI;

public:
  // Constructors
  IUPtr()                         : m_pI(0)     {}
  IUPtr( T* pI )                  : m_pI(pI)    { if ( m_pI != 0 ) m_pI->AddRef(); }
  IUPtr( IUnknown* pI )           : m_pI(0)     { if ( pI   != 0 ) pI->QueryInterface( *piid, (void **)&m_pI ); }
  IUPtr( const IUPtr<T,piid> & o ) : m_pI(o.m_pI){ if ( m_pI != 0 ) m_pI->AddRef(); }

  // Destructor
  ~IUPtr();

  // GUID
  const IID*  GetIid()          const { return piid; }

                // Conversion
  operator      T*()              const { return m_pI; }

                // сравнение на принадлежность одному сомпоненту
  bool          IsSame ( T* pI )  const;

                // Pointer operations
  T&            operator *()            { PRECONDITION(m_pI != 0); return *m_pI; }
  T**           operator &()            { PRECONDITION(m_pI == 0); return &m_pI; }
  T*            operator->()            { PRECONDITION(m_pI != 0); return m_pI;  }

                // Assignment from the same interface
  T*            operator= ( T* pI );
  T*            operator= ( const IUPtr<T,piid> & o ) { return operator=(o.m_pI); }

                // Assignment from another interface
  T*            operator= ( IUnknown* pI );

}; // class IUPtr


////////////////////////////////////////////////////////////////////////////////
//
// для упрощения написания
//
////////////////////////////////////////////////////////////////////////////////
#define IU_NULL              ( (IUnknown*)NULL )
#define IUPTR(Interface)      IUPtr< I ## Interface, &IID_I ## Interface >

#ifdef __BORLANDC__  
////////////////////////////////////////////////////////////////////////////////
//
// IUnknownPtr is a smart interface for IUnknown.
//
////////////////////////////////////////////////////////////////////////////////
class IUnknownPtr
{
private:
  // Pointer variable
  IUnknown* m_pI;

public:
  // Constructors
  IUnknownPtr() : m_pI(0) {}
  IUnknownPtr(IUnknown* pI) : m_pI (pI) { if ( m_pI != 0 ) m_pI->AddRef(); }
  IUnknownPtr(const IUnknownPtr & o ) : m_pI( o.m_pI) { if ( m_pI != 0 ) m_pI->AddRef(); }

  // Destructor
  ~IUnknownPtr();

  // Conversion
  operator IUnknown*() const { return (IUnknown*)m_pI;}

  // Pointer operations
  IUnknown&  operator *() { PRECONDITION(m_pI != 0); return *m_pI;}
  IUnknown** operator &() { PRECONDITION(m_pI == 0); return &m_pI;}
  IUnknown*  operator->() { PRECONDITION(m_pI != 0); return m_pI;}

  // Assignment
  IUnknown* operator = ( IUnknown* pI );
  IUnknown* operator = ( const IUnknownPtr & o ) { return operator=(o.m_pI); }

}; // class IUnknownPtr
#endif

////////////////////////////////////////////////////////////////////////////////
//
// конверт для интерфейса - это НЕСИММЕТРИЧНАЯ оболочка
//
////////////////////////////////////////////////////////////////////////////////
template <class T>
class IUEnv {
public :
  T * m_pI;
  IUEnv( T * pI ) : m_pI(pI) {};
  ~IUEnv() { if (m_pI) m_pI->Release(); }

  T* operator ->  () { return m_pI; }
  operator bool() const  { return !!m_pI; }

  bool operator == ( const T* ) const;

  T*    GetI         () const  { return m_pI; }
  void  SetI         ( T* pI ); // { SwapIF<T>( m_pI, pI ); }



private:
  IUEnv( const IUEnv & );
  void operator = ( const IUEnv & );
};


////////////////////////////////////////////////////////////////////////////////
//
//  IUPtr : реализация inline
//
////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------------
// Destructor
// ---
template <class T, const IID* piid>
inline IUPtr<T, piid>::~IUPtr() {
  if ( m_pI )
    m_pI->Release();
}


//------------------------------------------------------------------------------
// Assignment from the same interface
// ---
template <class T, const IID* piid>
inline T* IUPtr<T, piid>::operator = ( T* pI ) {
  if ( m_pI != pI ) {

    IUnknown* pOld = m_pI;    // Save current value.
    m_pI = pI;                  // Assign new value.

    if ( m_pI != 0 )
      m_pI->AddRef();

    if ( pOld != 0 )
      pOld->Release();           // Release the old interface.

  }

  return m_pI;
} // T* operator = ( T* pI )


//------------------------------------------------------------------------------
// Assignment from another interface
// ---
template <class T, const IID* piid>
inline T* IUPtr<T, piid>::operator = ( IUnknown* pI ) {
  IUnknown* pOld = m_pI;       // Save current value.
  m_pI = 0;

  // Query for correct interface.
  if ( pI != 0 )
    pI->QueryInterface( *piid, (void **)&m_pI );

  if ( pOld != 0 )
    pOld->Release();         // Release old pointer.

  return m_pI;
} // T* operator = ( IUnknown* pI )

//------------------------------------------------------------------------------
// оператор сравнения
// ---
template <class T, const IID* iid>
inline bool IUPtr<T, iid>::IsSame( T* pI ) const {
  bool yes = false;

  if ( pI == m_pI ) {
    yes = true;
  }
  else {
    if ( pI && m_pI ) {

      IUnknown * thisSmth = NULL;
      m_pI->QueryInterface( IID_IUnknown, (void **)&thisSmth );
      IUnknown * otherSmth = NULL;
      pI  ->QueryInterface( IID_IUnknown, (void **)&otherSmth );

      yes = ( thisSmth == otherSmth );

      if ( thisSmth )
        thisSmth->Release();

      if ( otherSmth )
        otherSmth->Release();
    }
  }

  return yes;
}
 
#ifdef __BORLANDC__  
////////////////////////////////////////////////////////////////////////////////
//
//  IUnknownPtr : реализация inline
//
////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------------
// Destructor
// ---
inline IUnknownPtr::~IUnknownPtr() {
  if ( m_pI ) {
    IUnknown* pOld = m_pI;
    m_pI = 0;
    pOld->Release();
  }
}

//------------------------------------------------------------------------------
// Assignment
// ---
inline IUnknown* IUnknownPtr::operator = ( IUnknown* pI ) {
  if ( m_pI != pI ) {
    IUnknown* pOld = m_pI;      // Save current value.
    m_pI = pI;                  // Assign new value.

    if ( m_pI != 0 )
      m_pI->AddRef();

    if ( pOld != 0 )            // Release the old interface.
      pOld->Release();
  }

  return m_pI;
}
#endif

//------------------------------------------------------------------------------
//
// ---
template <class T>
inline void  IUEnv<T>::SetI( T* pI ) {
  IUnknown* pOld = m_pI;       // Save current value.
  m_pI = pI;                   // Assign new value.

  if ( pOld )
    pOld->Release();           // Release the old interface.
}


//------------------------------------------------------------------------------
//
// ---
template <class T>
inline bool IUEnv<T>::operator == ( const T* pI ) const {
  bool yes = false;

  if ( pI == m_pI ) {
    yes = true;
  }
  else {
    if ( pI && m_pI ) {

      IUnknown * thisSmth = NULL;
      m_pI    ->QueryInterface( IID_IUnknown, (void **)&thisSmth );
      IUnknown * otherSmth = NULL;
      ((T*)pI)->QueryInterface( IID_IUnknown, (void **)&otherSmth );

      yes = ( thisSmth == otherSmth );

      if ( thisSmth )
        thisSmth->Release();

      if ( otherSmth )
        otherSmth->Release();
    }
  }

  return yes;
}

#undef IIDR_SOMETHING

#endif


