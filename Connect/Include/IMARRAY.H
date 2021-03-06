#ifndef __IMARRAY_H
#define __IMARRAY_H

#include "sarray.h"
#include "parray.h"

////////////////////////////////////////////////////////////////////////////////
//
// ������������� ������ �������� ����������� PArray
//
////////////////////////////////////////////////////////////////////////////////
template <class Type>
#ifdef __BORLANDC__  
  class  IMArray : private SArray<uint> {
#else  // __BORLANDC__ 
  #ifndef _DOT_NET  
    class  IMArray : private SArray<uint> {  
  #else
    class IMArray : private SArray<uint> {  
  #endif //_DOT_NET
#endif // __BORLANDC__

public :
  typedef int (Type::*Compare_t)( const Type * );
  typedef int (Type::*Compare_v)( const void * );

  PArray <Type> & array;
  Compare_t       compT;  //������� ���������� ������������ ��� ���������� �������
  Compare_v       compV;  //������� ���������� ������������ ��� ������ �������

public:
  IMArray( PArray< Type > &arr, Compare_t c_t, Compare_v c_v,  unsigned max=0, uint16 delt=1 );

  SArray<uint>::Flush;
  SArray<uint>::Count;
  SArray<uint>::Sort;                            // ����������� ������
  SArray<uint>::Reserve;

  Type  * Add( uint  ind, uint * /*= NULL*/ );   // �������� ������� � ��������������� �� �������
  uint    Add( Type* ent, uint * /*= NULL*/ );   // �������� ������� � ��������������� �� �������

  Type          * operator [] ( uint ) const;
  uint          & operator () ( uint ) const;
  IMArray<Type> & operator = ( const IMArray<Type> & );

  uint    Find( const void *, uint* /*= NULL*/ ) const; // ����� ������� � ������������� �������
  uint    GetIndex( uint myIndex ) const;
  uint    GetMyIndex( uint parentIndex ) const;

  void    RemoveInd( uint delIndex, bool completely = true );         // ������� ������� �� �������
  void    RemoveObj( const uint& delObject, bool completely = true ); // ������� ������� �� �������

  Type  * ReindexInd( uint ind, uint * = NULL ); // �������� ������� � ��������������� �� �������
  uint    ReindexObj( Type* ent, uint * = NULL );// �������� ������� � ��������������� �� �������
  Type  * ReindexMyInd( uint );                  // �������� ������� � ��������������� �� �������

  bool    Exchange    ( uint ind1, uint ind2 );     // �������� ������� �� �������� � ������� �������
  void    ReindexAll  ();                           // ����������� ��������� ������

  bool    ReductionObj( const uint& delObject );    // ��������� ���� �������� > delObject

  TEMPLATE_TYPENAME friend  Type  * add_to_array        ( IMArray<Type> &, uint  ind, uint * );
  TEMPLATE_TYPENAME friend  uint    add_to_array        ( IMArray<Type> &, Type* el, uint *  );
  TEMPLATE_TYPENAME friend  uint    find_in_array       ( const IMArray<Type> &, const void *, uint * );
  TEMPLATE_TYPENAME friend  void    array_remove_ind    ( IMArray<Type> &, uint delIndex, bool completely );
  TEMPLATE_TYPENAME friend  void    array_remove_obj    ( IMArray<Type> &, const  uint& delObj, bool completely );
  TEMPLATE_TYPENAME friend  uint    find_my_index       ( const IMArray<Type> &, uint );
  TEMPLATE_TYPENAME friend  Type  * reindex_array_obj   ( IMArray<Type> &, uint ind, uint * myIndex );
  TEMPLATE_TYPENAME friend  uint    reindex_array_obj   ( IMArray<Type> &, Type* el, uint * myIndex );
  TEMPLATE_TYPENAME friend  Type  * reindex_array_ind   ( IMArray<Type> &, uint myIndex );
  TEMPLATE_TYPENAME friend  bool    exchange_to_array   ( IMArray<Type> &, uint ind1, uint ind2 );
  TEMPLATE_TYPENAME friend  void    reindexall_to_array ( IMArray<Type> & );
  TEMPLATE_TYPENAME friend  bool    array_reduction_obj ( IMArray<Type> &arr, const uint & delObject );

private:
  IMArray( const IMArray<Type> & ); // ��������� !!!
};


//------------------------------------------------------------------------------
//
// ---
#ifdef __DEBUG_MEMORY_ALLOCATE_FREE_
template <class Type>
inline void * IMArray<Type>::operator new( size_t size ) {
  return ::Allocate( size, typeid(IMArray<Type>).name() );
}
//------------------------------------------------------------------------------
//
// ---
template <class Type>
inline void IMArray<Type>::operator delete ( void *ptr, size_t size ) {
  ::Free( ptr, typeid(IMArray<Type>).name(), size );
}
#endif // __DEBUG_MEMORY_ALLOCATE_FREE_

//-------------------------------------------------------------------------------
// ����������� �������
// ---
template <class Type>
inline	IMArray<Type>::IMArray( PArray< Type > & arr, Compare_t c_t, Compare_v c_v,  unsigned max, uint16 delt )
  : SArray<uint>( max, delt ), array(arr), compT(c_t), compV(c_v)  {}


//-------------------------------------------------------------------------------
// �������� ������ �� ������� � PAarray
// ---
template <class Type>
inline Type* IMArray<Type>::Add( uint ind, uint * myIndex ) {
  return add_to_array( *this, ind, myIndex );
}


//-------------------------------------------------------------------------------
// �������� ������, ������ � PArray ������ ����
// ---
template <class Type>
inline uint IMArray<Type>::Add( Type* el, uint * myIndex ) {
  return add_to_array( *this, el, myIndex );
}


//-------------------------------------------------------------------------------
// ������� ������ �� �������
// completely  = true - � ���������� ���� �������� > delIndex
// ---
template <class Type>
inline void IMArray<Type>::RemoveInd( uint delIndex, bool completely ) {
  array_remove_ind( *this, delIndex, completely );
}


//-------------------------------------------------------------------------------
// ������� ������ 
// completely  = true - � ���������� ���� �������� > delIndex
// ---
template <class Type>
inline void IMArray<Type>::RemoveObj( const uint& delObject, bool completely ){
  array_remove_obj( *this, delObject, completely );
}


//-------------------------------------------------------------------------------
// ��������� ���� �������� > delObject
// ---
template <class Type>
inline bool IMArray<Type>::ReductionObj( const uint& delObject ) {
  return array_reduction_obj( *this, delObject );
}


//-------------------------------------------------------------------------------
// ��������������� ������ �� ������� � PArray
// ������� ���������� ��������� �� ������ � ������ ������� � IMArray
// ---
template <class Type>
inline Type* IMArray<Type>::ReindexInd( uint ind, uint * myIndex ) {
  return reindex_array_obj( *this, ind, myIndex );
}


//-------------------------------------------------------------------------------
// ��������������� ������ 
// ������� ���������� ������ ������� � PArray � ������ ������� � IMArray
// ---
template <class Type>
inline uint  IMArray<Type>::ReindexObj( Type* ent, uint * myIndex ) {
  return reindex_array_obj( *this, ent, myIndex );
}


//-------------------------------------------------------------------------------
// ��������������� ������ 
// ������� ���������� ��������� �� ������
// ---
template <class Type>
inline Type* IMArray<Type>::ReindexMyInd( uint myIndex ) {
  return reindex_array_ind( *this, myIndex );
}


//-------------------------------------------------------------------------------
// �������� ������ � PArray �������
// ---
template <class Type>
inline bool IMArray<Type>::Exchange ( uint ind1, uint ind2 ) {
  return exchange_to_array( *this, ind1, ind2 );
}


//-------------------------------------------------------------------------------
// ��������������� ���� ������
// ---
template <class Type>
inline void  IMArray<Type>::ReindexAll() {
  reindexall_to_array( *this );
}


//-------------------------------------------------------------------------------
// �������� ��������������
// ---
template <class Type>
inline Type* IMArray<Type>::operator [] ( uint ind ) const {
  return array[ SArray < uint >::operator []( ind ) ];
}


//-------------------------------------------------------------------------------
// �������� ����������
// ---
template <class Type>
inline IMArray<Type>& IMArray<Type>::operator = ( const IMArray<Type>& o ) {
/*
  array = o.array;
  compT = o.compT;
  compV = o.compV;
*/
  SArray<uint>::operator = ( o );
  return *this;
}


//-------------------------------------------------------------------------------
// ����� ������ ��������������� �������
// ---
template <class Type>
inline uint IMArray<Type>::Find( const void * val, uint * myIndex ) const {
  return find_in_array( *this, val, myIndex );
}


//-------------------------------------------------------------------------------
// �������� ������ ������� � PArray �� ������� � IMArray
// ---
template <class Type>
inline uint IMArray<Type>::GetIndex( uint myIndex ) const {
//return parr[myIndex];
  return SArray<uint>::operator[] (myIndex);
}


//-------------------------------------------------------------------------------
// �������� ������ ������� � IMArray �� ������� � PArray 
// ---
template <class Type>
inline uint IMArray<Type>::GetMyIndex( uint parentIndex ) const {
  return find_my_index( *this, parentIndex );
}


//-------------------------------------------------------------------------------
// �������� ����������
// ---
template <class Type>
inline uint & IMArray<Type>::operator ()( uint myIndex ) const {
//return parr[myIndex];
  return SArray<uint>::operator[] (myIndex);
}


//-------------------------------------------------------------------------------
// �������� ������ � ���������������
// ---
template <class Type>
Type* add_to_array( IMArray<Type> &arr, uint ind, uint * myIndex ) {
  PRECONDITION( ind < arr.array.Count() );
  
  Type* el = arr.array[ind];
  if( !el ){
    if ( myIndex )
      *myIndex = SYS_MAX_UINT;
    return el;
  }

  if ( !arr.count ) {
    arr.SArray<uint>::Add( ind );
    if ( myIndex )
      *myIndex = 0;
    return el;
  }

  //��������� ������ ��.
  int res = (el->*arr.compT)( arr.array[ arr.GetIndex(0)/*arr.parr[0]*/ ] );

  //���� ������� ������ �������, ��������� ����� ������
  if ( res < 0 ) {
    arr.InsertInd( 0, ind );
    if ( myIndex )
      *myIndex = 0;
    return el;
  }

  uint mx = arr.count - 1;

  //��������� ��������� ��.
  int res1 = !mx ? res : (el->*arr.compT)( arr.array[arr.GetIndex(mx)/*arr.parr[mx]*/] );

  //���� ���� ������ � ������� ��� ��. ������ ��� ����� ����������,
  //������ ������� ����
  if ( !mx || res1 > 0 || !res1  ) {
    arr.SArray<uint>::Add( ind );
    if ( myIndex )
      *myIndex = mx+1;
    return el;
  }

  if ( arr.count == 2 ) {
    arr.InsertInd( 1, ind );
    if ( myIndex )
      *myIndex = 1;
    return el;
  }

  uint mn = 0;

  while ( mn + 1 < mx ) {  // ���� �� ����� - ����
    if ( (el->*arr.compT)( arr.array[ arr.GetIndex(mn)/*arr.parr[mn]*/ ] ) == 0 ) {
      mx = mn;
    	do
      	mx++;
      while ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0 );
      break;
    }
    else if ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0) {
    	do
      	mx++;
      while ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0 );
      break;
    }
    else {
      uint md = ( mn + mx ) / 2;
      res = (el->*arr.compT)( arr.array[ arr.GetIndex(md)/*arr.parr[md]*/ ] );
      if ( res > 0 )
        mn = md;
      else if ( res < 0 )
        mx = md;
      else  {
        mx = md;
        do
          mx++;
        while ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0 );
        break;
      }
    }
  }

  arr.InsertInd( mx, ind );
  if ( myIndex )
    *myIndex = mx;
  return el;
}


//-------------------------------------------------------------------------------
// �������� ������ � ���������������
// ---
template <class Type>
uint add_to_array( IMArray<Type> &arr, Type* el, uint * myIndex ) {
  uint ind = arr.array.FindIt(el);
  if ( ind == SYS_MAX_UINT ) {
    if ( myIndex )
      *myIndex = SYS_MAX_UINT;
    return ind;
  }

  if ( !arr.count ) {
    arr.SArray<uint>::Add( ind );
    if ( myIndex )
      *myIndex = 0;
    return ind;
  }

  //��������� ������ ��.
  int res = (el->*arr.compT)( arr.array[ arr.GetIndex(0)/*arr.parr[0]*/ ] );

  //���� ������� ������ �������, ��������� ����� ������
  if ( res < 0 ) {
    arr.InsertInd( 0, ind );
    if ( myIndex )
      *myIndex = 0;
    return ind;
  }

  uint mx = arr.count - 1;

  //��������� ��������� ��.
  int res1 = !mx ? res : (el->*arr.compT)( arr.array[arr.GetIndex(mx)/*arr.parr[mx]*/] );

  //���� ���� ������ � ������� ��� ��. ������ ��� ����� ����������,
  //������ ������� ����
  if ( !mx || res1 > 0 || !res1 ) {
      arr.SArray<uint>::Add( ind );
      if ( myIndex )
        *myIndex = mx+1;
      return  ind;
  }

  if ( arr.count == 2 ) {
    // ������ ����� 0  � 1
    arr.InsertInd( 1, ind );
    if ( myIndex )
      *myIndex = 1;
    return ind;
  }

  uint mn = 0;

  while ( mn + 1 < mx ) {  // ���� �� ����� - ����
    if ( (el->*arr.compT)( arr.array[ arr.GetIndex(mn)/*arr.parr[mn]*/ ] ) == 0 ) {
      mx = mn;
    	do
      	mx++;
      while ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0 );
      break;
    }
    else if ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0) {
    	do
      	mx++;
      while ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0 );
      break;
    }
    else {
      uint md = ( mn + mx ) / 2;
      res = (el->*arr.compT)( arr.array[ arr.GetIndex(md)/*arr.parr[md]*/ ] );
      if ( res > 0 )
        mn = md;
      else if ( res < 0 )
        mx = md;
      else  {
        mx = md;
        do
          mx++;
        while ( (el->*arr.compT)( arr.array[ arr.GetIndex(mx)/*arr.parr[mx]*/ ] ) == 0 );
        break;
      }
    }
  }

  arr.InsertInd( mx, ind );
  if ( myIndex )
    *myIndex = mx;
  return arr.GetIndex(mx); //arr.parr[ mx ];
}


//-------------------------------------------------------------------------------
// ����� ������ � �������, ��������������� �������
// ����� ������� ������� ���������� �������
// ---
template <class Type>
uint find_in_array( const IMArray<Type> &arr, const void *val, uint * myIndex ) {
  if ( !arr.count ) {
    if ( myIndex )
      *myIndex = SYS_MAX_UINT;
    return SYS_MAX_UINT;
  }

  if ( arr.count == 1 )  {
    if ( ((arr.array[arr.GetIndex(0)/*arr.parr[0]*/]->*arr.compV)( val )==0) ) {
      if ( myIndex )
        *myIndex = 0;
      return arr.GetIndex(0); //arr.parr[0];
    }
    else {
      if ( myIndex )
        *myIndex = SYS_MAX_UINT;
      return SYS_MAX_UINT;
    }
  }
  else if ( arr.count == 2 )  {
    if ( ((arr.array[arr.GetIndex(0)/*arr.parr[0]*/]->*arr.compV)( val )==0) ) {
      if ( myIndex )
        *myIndex = 0;
      return arr.GetIndex(0); //arr.parr[0];
    }
    else {
      if ( ((arr.array[arr.GetIndex(1)/*arr.parr[1]*/]->*arr.compV)( val )==0) ) {
        if ( myIndex )
          *myIndex = 1;
        return arr.GetIndex(1); //arr.parr[1];
      }
      else {
        if ( myIndex )
          *myIndex = SYS_MAX_UINT;
        return SYS_MAX_UINT;
      }
    }
  }

  if  ( (arr.array[arr.GetIndex(0)/*arr.parr[0]*/]->*arr.compV)( val )>0 ) {
    if ( myIndex )
      *myIndex = SYS_MAX_UINT;
    return SYS_MAX_UINT;
  }

  uint mx = arr.count - 1;

  if ( ((arr.array[arr.GetIndex(mx)/*arr.parr[mx]*/]->*arr.compV)( val )<0) ) {
    if ( myIndex )
      *myIndex = SYS_MAX_UINT;
    return SYS_MAX_UINT;
  }

  uint mn = 0;

  while ( mn + 1 < mx ) {  // ���� �� ����� - ����
    if ( ((arr.array[arr.GetIndex(mn)/*arr.parr[mn]*/]->*arr.compV)( val )==0) ) {
      if ( myIndex )
        *myIndex = mn;
      return arr.GetIndex(mn); //arr.parr[mn];
    }
    else if ( ((arr.array[arr.GetIndex(mx)/*arr.parr[mx]*/]->*arr.compV)( val )==0) ) {
      if ( myIndex )
        *myIndex = mx;
      return arr.GetIndex(mx); //arr.parr[mx];
    }
    else {
      uint md = ( mn + mx ) / 2;
      int res = (arr.array[arr.GetIndex(md)/*arr.parr[md]*/]->*arr.compV)( val );
      if ( res < 0 )
        mn = md;
      else if ( res > 0 )
        mx = md;
      else {
        if ( myIndex )
          *myIndex = md;
        return arr.GetIndex(md); //arr.parr[md];
      }
    }
  }
  if ( myIndex )
    *myIndex = SYS_MAX_UINT;
  return SYS_MAX_UINT;
}


//-------------------------------------------------------------------------------
// ������� ������ �� �������
// completely  = true - � ���������� ���� �������� > delIndex
// ---
template <class Type>
void array_remove_ind( IMArray<Type> &arr, uint delIndex, bool completely ){
  PRECONDITION( delIndex < arr.count );
  uint arrayIndex = arr.GetIndex(delIndex); //arr.parr[ delIndex ];
  arr.SArray<uint>::RemoveInd( delIndex );
  if ( completely ) {
//��� K8     const uint *parr = arr.GetAddr();
//��� K8     for ( uint i = 0; i < arr.count; i++ ) {
//��� K8       uint *parrI = (uint *)(parr + i);
//��� K8       if ( *parrI/*arr.parr[i]*/ > arrayIndex )
//��� K8         (*parrI)--; /*arr.parr[i]--;*/
//��� K8     }
    array_reduction_obj( arr, arrayIndex );
  }
/*
  uint arrayIndex = arr.parr[ delIndex ];
  arr.SArray<uint>::RemoveInd( delIndex );
  if ( completely ) {
    for( uint i=0; i < arr.count; i++ )
      if ( arr.parr[i] > arrayIndex )
        arr.parr[i]--;
  }
*/
}


//-------------------------------------------------------------------------------
// ������� ������
// completely  = true - � ���������� ���� �������� > delIndex
// ---
template <class Type>
void array_remove_obj( IMArray<Type> &arr, const uint & delObject, bool completely ){
  arr.SArray<uint>::RemoveObj( delObject );

  if ( completely ) {
//��� K8     const uint *parr = arr.GetAddr();
//��� K8     for( uint i=0; i < arr.count; i++ ) {
//��� K8       uint *parrI = (uint *)(parr + i);
//��� K8       if ( *parrI/*arr.parr[i]*/ > delObject )
//��� K8         (*parrI)--; //arr.parr[i]--;
//��� K8     }
    array_reduction_obj( arr, delObject );
  }
/*
  arr.SArray<uint>::RemoveObj( delObject );
  if ( completely ) {
    for( uint i=0; i < arr.count; i++ )
      if ( arr.parr[i] > delObject )
        arr.parr[i]--;
  }
*/
}

//-------------------------------------------------------------------------------
// ��������� ���� �������� > delObject
// ---
template <class Type>
bool array_reduction_obj( IMArray<Type> &arr, const uint & delObject ){
  bool res = false;
  const uint *parr = arr.GetAddr();
  for( uint i = 0; i < arr.count; i++ ) {
    uint *parrI = (uint *)(parr + i);
    if ( *parrI/*arr.parr[i]*/ > delObject ){
      (*parrI)--; //arr.parr[i]--;
      res = true;
    }
  }
  return res;
}


//-------------------------------------------------------------------------------
// �������� ������ ������� � IMArray �� ������� � PArray 
// ---
template <class Type>
uint  find_my_index( const IMArray<Type> &arr, uint parentIndex ) {
  for ( uint i = 0; i < arr.count; i++ )
    if ( arr.GetIndex(i)/*arr.parr[i]*/ == parentIndex )
      return i;

  return  SYS_MAX_UINT;
}


//-------------------------------------------------------------------------------
// ��������������� ������ � �������
// ---
template <class Type>
uint reindex_array_obj( IMArray<Type> &arr, Type* el, uint * myIndex ) {
  uint ind = arr.array.FindIt(el);
  if ( ind == SYS_MAX_UINT ) {
    if ( myIndex )
      *myIndex = SYS_MAX_UINT;
    return ind;
  }
  reindex_array_obj( arr, ind, myIndex );
  return ind;
}


//-------------------------------------------------------------------------------
// ��������������� ������ � �������
// ---
template <class Type>
Type* reindex_array_obj( IMArray<Type> &arr, uint ind, uint * myIndex ) {
  arr.SArray<uint>::RemoveObj( ind );
  return add_to_array( arr, ind, myIndex );
}


//-------------------------------------------------------------------------------
// ��������������� ������ � �������
// ---
template <class Type>
Type* reindex_array_ind( IMArray<Type> &arr, uint myIndex ){
  uint ind = arr.GetIndex( myIndex ); //arr.parr[ myIndex ];
  arr.SArray<uint>::RemoveInd( myIndex );
  return add_to_array( arr, ind, 0 );
}


//-------------------------------------------------------------------------------
// ��������������� ���� ������
// ---
template <class Type>
void reindexall_to_array( IMArray<Type> &arr ) {
  arr.SArray<uint>::Flush();
	for( uint i=0; i < arr.array.Count(); i++ )
    add_to_array( arr, i, 0 );
}


//-------------------------------------------------------------------------------
// �������� ������ � PArray �������
// ---
template <class Type>
bool exchange_to_array( IMArray<Type> &arr, uint ind1, uint ind2 ) {
  uint myInd1 = arr.SArray<uint>::FindIt( ind1 );
  if ( !(myInd1 == SYS_MAX_UINT) ) {
    uint myInd2 = arr.SArray<uint>::FindIt( ind2 );
    if ( !(myInd2 == SYS_MAX_UINT) ) {
//    arr.parr[ myInd1 ] = ind2;
//    arr.parr[ myInd2 ] = ind1;
      const uint *parr = arr.GetAddr();
      *(uint*)(parr + myInd1) = ind2;
      *(uint*)(parr + myInd2) = ind1;
      return true;
    }
  }
  return false;
}

//-- __PRECOMPILED_HEADER_OPTIMIZE -------------------------------------------------
#ifdef _PCH_OPT
#pragma message( "----" __FILE__ )
#endif
//----------------------------------------------------------------------------------

#endif
