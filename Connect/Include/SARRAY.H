#ifndef __SARRAY_H
#define __SARRAY_H

//��� K8 #ifndef __STDLIB_H
//��� K8 #include <stdlib.h>
//��� K8 #endif

//��� K8 #ifndef __MEM_H
//��� K8 #include <mem.h>
//��� K8 #endif


#include <systypes.h>

#ifdef __BORLANDC__
#define SYS_MAX_UINT (0xffffffff) // ((unsigned int)-1)
#define TEMPLATE_TYPENAME 
#endif // _MSC_VER

//��� K8 #if !defined(SERVICES_DEFS_H)
//��� K8 #include <services\defs.h>
//��� K8 #endif


///////////////////////////////////////////////////////
// ���������� ������ �������� �� ���������� ���������� !!!!!!!
// � ������� ������ ������� ��'���� ���������� ��������� ���
// ������ � �����������, � ����� ����������� ������ � ������������
// ---
template <class Type>
class /*_SYSCLASS*/ SArray {
protected :
  uint   count; // ����������� �������
	uint   upper;
	uint16 delta;
	Type*  parr;

public :
	SArray( uint i_max=0, uint16 i_delta=1 );
	SArray( const SArray<Type>& other );
	~SArray() { delete [] (char *)(parr); }

	uint16 Delta() const                                 { return delta; }
	void   Delta( uint16 newDelta )                      { delta = newDelta; }

  void   SetSize( uint newSize, bool clear=true );     // ������� ����� ������ �������
  void   Reserve( uint additionalSpace );              // ��������������� ����� ��� ��������
  void   Flush() { count = 0; }                        // �������� ���������� ���������
  void   HardFlush() { Flush(); Adjust(); }            // ���������� ��� ������
  void   Adjust();                                     // ������� ������ ������
  Type*  Add();                                        // �������� ������� � ����� �������
  Type*  AddItems( uint n );                           // �������� n ��������� � ����� �������
  Type*  Add(const Type& ent);                         // �������� ������� � ����� �������
  Type*  AddAt( const Type& ent, uint index )          { return InsertInd( index, ent ); }
  Type*  AddAfter( const Type& ent, uint index );      // �������� ������� ����� ����������
  Type*  InsertObj( const Type& index, const Type& ent ); // �������� ������� ����� ���������
  Type*  InsertInd( uint index, const Type& ent );        // �������� ������� ����� ���������
  void   RemoveInd( uint delIndex );                   // ������� ������� �� �������
  void   RemoveObj( const Type& delObject );           // ������� ������� �� �������
  void   Fill( uint fillCount, const Type& fillData ); // ��������� ������ ����������
  uint   FindIt( const Type& object ) const;           // ������� ������ �������� � �������
  bool   IsExist( const Type& object ) const;          // true ���� ������� ������
  uint   Count()    const { return count; }            // ���� ���������� ��������� �������
  int    MaxIndex() const { return count-1; }          // ���� ���������� ��������� �������
  void   SetCArray( const Type * o, uint count );      // ��������� �������� �� c-�������

  SArray<Type>& operator = ( const SArray<Type>& o );
  SArray<Type>& operator += ( const SArray<Type>& o );
  bool          operator == ( const SArray<Type>& w ) const;

  Type& operator []( uint loc ) const { return parr[loc]; }

  typedef int (*CompFunc)( const Type *, const Type * );
	void   Sort( CompFunc comp );                        // ����������� ������

	Type	*GetAddr() { return parr; }	                   // ������ ����� ������ �������

protected :
	void   CatchMemory();                                // ��������� ������
  void   AddMemory( uint n );                          // ���������� ����� ��� n ���������, ���������� �� AutoDelta

  TEMPLATE_TYPENAME friend void  set_array_size( SArray<Type>& to, uint newSize, bool clear );
  TEMPLATE_TYPENAME friend Type* add_n_to_array( SArray<Type>& to, uint n );
  TEMPLATE_TYPENAME friend uint  find_in_array( const SArray<Type>& arr, const Type& object );
  TEMPLATE_TYPENAME friend void  fill_array( SArray<Type>& arr, uint fillCount, const Type& fillData );
  TEMPLATE_TYPENAME friend void  reserve_space( SArray<Type>& arr, uint addSpace );

};





///////////////////////////////////////////////////////
// ����������� �������
// ---
template <class Type>
inline SArray<Type>::SArray( uint i_max, uint16 i_delta ) {
  count = 0;
	upper = 0;
	parr  = 0;
	delta = i_delta;
	SetSize( i_max );
}



///////////////////////////////////////////////////////
// ����������� ����������� �������
// ---
template <class Type>
inline SArray<Type>::SArray( const SArray<Type>& o ) {
  count = o.count;
  upper = o.upper;
  delta = o.delta;
  parr  = !upper? 0 : (Type*)new char[ upper*sizeof(Type) ];
  if ( count ) {
    if ( count > upper )
      count = upper;
    memcpy( parr, o.parr, count*sizeof(Type) );
  }
}



///////////////////////////////////////////////////////
// ������� ����� ������ �������
// ���� clear != 0 ������ ���������
// ---
template <class Type>
inline void SArray<Type>::SetSize( uint newSize, bool clear ) {
  set_array_size( *this, newSize, clear );
}




///////////////////////////////////////////////////////
// ��������������� ����� ��� n ���������
// ---
template <class Type>
inline void SArray<Type>::Reserve( uint additionalSpace ) {
  reserve_space( *this, additionalSpace );
}


//------------------------------------------------------------------------------
// ���������� ����� ��� n ���������, ���������� �� AutoDelta
// ---
template <class Type>
inline void SArray<Type>::AddMemory( uint n ) {
  if ( upper - count < n )
    set_array_size( *this, count + n, false/*clear*/ );
}


///////////////////////////////////////////////////////
// ������ �������������� �����
// ---
template <class Type>
inline void SArray<Type>::Adjust() {
  if ( count < upper )
    SetSize( count, 0 );
}



///////////////////////////////////////////////////////
// �������� ������� � ����� �������
// � ������� ��������� �� ����
// --- !!!!!!!!!!!
template <class Type>
inline Type* SArray<Type>::Add() {
  CatchMemory();
  return &parr[ count++ ];
}




///////////////////////////////////////////////////////
// �������� n ��������� � ����� �������
// � ������� ��������� �� ������ �����������
// --- 
template <class Type>
inline Type* SArray<Type>::AddItems( uint n ) {
  return n ? add_n_to_array(*this,n) : 0;
}




///////////////////////////////////////////////////////
// �������� ������� � ����� �������
// ---
template <class Type>
inline Type* SArray<Type>::Add( const Type& ent ) {
  CatchMemory();
  return (Type*)memcpy( parr+count++, &ent, sizeof(Type) );
}




///////////////////////////////////////////////////////
// �������� ������� ����� ���������
// ---
template <class Type>
inline Type* SArray<Type>::AddAfter( const Type& ent, uint index ) {
  CatchMemory();
  memmove( parr+index+2, parr+index+1, sizeof(Type)*(count++-index-1) );
  return (Type*)memcpy( parr+index+1, &ent, sizeof(Type) );
}




///////////////////////////////////////////////////////
// �������� ������� ����� ���������
// ---
template <class Type>
inline Type* SArray<Type>::InsertInd( uint index, const Type& ent ) {
  CatchMemory();                             // �������� ������, ���� ��� ������������
  memmove( parr+index+1, parr+index, (count++-index) * sizeof(Type) );
                                             // ���������� ������ ��� �������� ������� � ���������� �� ����������
  return (Type*)memcpy( parr+index, &ent, sizeof(Type) );  // ���������� ����� �������
}



///////////////////////////////////////////////////////
// �������� ������� ����� ���������
// ---
template <class Type>
inline Type* SArray<Type>::InsertObj( const Type& ind, const Type& ent ) {
  uint index = FindIt(ind);
  if ( index != SYS_MAX_UINT )
    return InsertInd( index, ent );
  else
    return 0;
}



///////////////////////////////////////////////////////
// ������� ������ �������� � �������
// --- 
template <class Type>
inline uint SArray<Type>::FindIt( const Type& object ) const {
  return find_in_array( *this, object );
}




///////////////////////////////////////////////////////
// true ���� ������� ������
// --- 
template <class Type>
inline bool SArray<Type>::IsExist( const Type& object ) const {
  return find_in_array( *this, object ) != SYS_MAX_UINT;
}



///////////////////////////////////////////////////////
// ������� ������� �� �������
// ---
template <class Type>
inline void SArray<Type>::RemoveObj( const Type& delObject ) {
  uint ind = FindIt( delObject );
  if ( ind != SYS_MAX_UINT )
    RemoveInd( ind );
}




///////////////////////////////////////////////////////
// ������� ������� �� �������
// ---
template <class Type>
inline void SArray<Type>::RemoveInd( uint delIndex ) { 
  memcpy( parr+delIndex, parr+delIndex+1, (count-- - delIndex-1)*sizeof(Type) );
} 


///////////////////////////////////////////////////////
// ��������� ������ ����������
// ---
template <class Type>
inline void SArray<Type>::Fill( uint fillCount, const Type& fillData ) {
  fill_array( *this, fillCount, fillData );
}




///////////////////////////////////////////////////////
// ���������� ������� �������
// ---
template <class Type>
inline SArray<Type>& SArray<Type>::operator = ( const SArray<Type>& o ) {
  if ( upper < o.count ) {
    delete [] (char *)( parr );
    upper=o.count;
    parr = o.count ? (Type*)new char[ o.count * sizeof(Type) ] : 0;
  }
  count = o.count;
  memcpy( parr, o.parr, count * sizeof(Type) );
  return *this;
}


//------------------------------------------------------------------------------
// ���������� ������� �������
// ---
template <class Type>
inline void SArray<Type>::SetCArray( const Type * o, uint countC ) {
  Flush();
  AddMemory( countC );  // ���������� ������ �� ����� ���-�� ���������
  
  count = countC;
  if ( count && parr )
    memcpy( parr, o, count * sizeof(Type) );
}


///////////////////////////////////////////////////////
// ���������� ������� �������
// ---
template <class Type>
inline SArray<Type>& SArray<Type>::operator += ( const SArray<Type>& o ) {
  if ( upper < count + o.count ) {
    upper = uint16(count + o.count);
		Type* p_tmp = upper ? (Type*)new char[ upper * sizeof(Type) ] : 0;
		memcpy( p_tmp, parr, count * sizeof(Type) );
		delete [] (char *)( parr );
		parr = p_tmp;
  }
  memcpy( parr+count, o.parr, o.count * sizeof(Type) );
	count += o.count;
  return *this;
}




///////////////////////////////////////////////////////
// ������ �������� ����� ������ ( ���� ����� )
// ---
template <class Type>
inline void SArray<Type>::CatchMemory() {
	if (upper == count) {
    uint   cpy = upper;
		Type *p_tmp = (Type*)new char[ (upper+=delta) * sizeof(Type) ];
		memcpy( p_tmp, parr, cpy * sizeof(Type) );
    delete [] (char *)( parr );
    parr = p_tmp;
  }
}





//-------------------------------------------------------------------------------
// �������� ��������� ���� ��������
// ---
template <class Type>
inline bool SArray<Type>::operator == ( const SArray<Type>& w ) const {
  if ( count != w.count )
    return false;
  
  //OV K6 ��� ���������� � ������ � ������������� �� ������ 1, ����� ���������� ������� 
  //      �������� ��������� "�����" ������������ ��������� �������, �.�. ���������� ���� �����
  //      ��� �������, ����� ���������� ���������� �������� ����������� (����� �������� == �������)
  for ( uint i = 0; i < count; i++ ) {
    if ( !::IsEquObjectsForSArrayCompare( (*this)[i], w[i] ) )
      return false;
  }
  
  return true;
}


///////////////////////////////////////////////////////
// ����������� ������
// --- !!!!!!!!!!
template <class Type>
inline void SArray<Type>::Sort( CompFunc fcmp ) {
  typedef int (*QCompFunc)( const void*, const void* );
	qsort( (void *)parr, count, sizeof(Type), (QCompFunc)fcmp );
}
// ---
template <class Type>
void set_array_size( SArray<Type>& arr, uint newSize, bool clear ) {
  if ( newSize != arr.upper ) {
    arr.upper = newSize;
    Type *p_tmp = newSize ? (Type*)new char[ newSize * sizeof(Type) ] : 0;
    if ( clear )
      arr.count = 0;
    else {
      arr.count = arr.count < newSize ? arr.count : newSize;
      if ( arr.count && arr.parr )
        memcpy( p_tmp, arr.parr, arr.count * sizeof(Type) );
    }
    delete [] (char *)( arr.parr );
    arr.parr = p_tmp;
  }
  else if ( clear )
    arr.count = 0;
}

// ---
template <class Type>
Type* add_n_to_array( SArray<Type>& to, uint n ) {
  uint oc = to.count;
  to.count += n;
  if (to.upper < to.count ) {
    while( to.upper < to.count )
      to.upper += to.delta;
    Type *p_tmp = (Type*)new char[ to.upper * sizeof(Type) ];
    memcpy( p_tmp, to.parr, oc * sizeof(Type) );
    delete [] (char *)( to.parr );
    to.parr = p_tmp;
  }
  return &to.parr[oc];
}

// ---
template <class Type>
uint find_in_array( const SArray<Type>& arr, const Type& object ) {
  Type* parr = (Type*)arr.parr;
  for( uint i=0; i<arr.count; i++,parr++ )
    if ( !memcmp( parr, &object, sizeof(Type) ) )
      return i;
  return SYS_MAX_UINT;
}
// ---
template <class Type>
void fill_array( SArray<Type>& arr, uint fillCount, const Type& fillData ) {
  if ( arr.upper < fillCount ) {
    delete [] (char *)( arr.parr );
    arr.parr = (Type*)new char[ (arr.upper=fillCount) * sizeof(Type) ];
  }
  arr.count = fillCount;
  Type* parr = (Type*)arr.parr;
  for ( uint i=0; i<arr.count; i++,parr++ )
    memcpy( parr, &fillData, sizeof(Type) );
}

// ---
template <class Type>
void reserve_space( SArray<Type>& arr, uint additionalSpace ) {
  uint space = arr.upper - arr.count;
  if ( additionalSpace > space ) {
    additionalSpace -= space;
    arr.upper += additionalSpace;
    Type *p_tmp = (Type*)new char[ arr.upper * sizeof(Type) ];
    if ( arr.count && arr.parr )
      memcpy( p_tmp, arr.parr, arr.count * sizeof(Type) );
    delete [] (char *)( arr.parr );
    arr.parr = p_tmp;
  }
}

#endif  // __SARRAY_H

