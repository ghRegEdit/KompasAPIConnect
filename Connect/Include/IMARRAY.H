#ifndef __IMARRAY_H
#define __IMARRAY_H

#include "sarray.h"
#include "parray.h"

////////////////////////////////////////////////////////////////////////////////
//
// упорядоченный массив индексов присланного PArray
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
  Compare_t       compT;  //функция сортировки используется при добавлении объекта
  Compare_v       compV;  //функция сортировки используется при поиске объекта

public:
  IMArray( PArray< Type > &arr, Compare_t c_t, Compare_v c_v,  unsigned max=0, uint16 delt=1 );

  SArray<uint>::Flush;
  SArray<uint>::Count;
  SArray<uint>::Sort;                            // сортировать массив
  SArray<uint>::Reserve;

  Type  * Add( uint  ind, uint * /*= NULL*/ );   // добавить элемент с упорядочиванием по массиву
  uint    Add( Type* ent, uint * /*= NULL*/ );   // добавить элемент с упорядочиванием по массиву

  Type          * operator [] ( uint ) const;
  uint          & operator () ( uint ) const;
  IMArray<Type> & operator = ( const IMArray<Type> & );

  uint    Find( const void *, uint* /*= NULL*/ ) const; // найти элемент в упорядоченном массиве
  uint    GetIndex( uint myIndex ) const;
  uint    GetMyIndex( uint parentIndex ) const;

  void    RemoveInd( uint delIndex, bool completely = true );         // удалить элемент из массива
  void    RemoveObj( const uint& delObject, bool completely = true ); // удалить элемент из массива

  Type  * ReindexInd( uint ind, uint * = NULL ); // заменить элемент с упорядочиванием по массиву
  uint    ReindexObj( Type* ent, uint * = NULL );// заменить элемент с упорядочиванием по массиву
  Type  * ReindexMyInd( uint );                  // заменить элемент с упорядочиванием по массиву

  bool    Exchange    ( uint ind1, uint ind2 );     // поменять местами по индексам в папином массиве
  void    ReindexAll  ();                           // перестроить индексный массив

  bool    ReductionObj( const uint& delObject );    // понижение всех индексов > delObject

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
  IMArray( const IMArray<Type> & ); // запрещено !!!
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
// конструктор массива
// ---
template <class Type>
inline	IMArray<Type>::IMArray( PArray< Type > & arr, Compare_t c_t, Compare_v c_v,  unsigned max, uint16 delt )
  : SArray<uint>( max, delt ), array(arr), compT(c_t), compV(c_v)  {}


//-------------------------------------------------------------------------------
// добавить объект по индексу в PAarray
// ---
template <class Type>
inline Type* IMArray<Type>::Add( uint ind, uint * myIndex ) {
  return add_to_array( *this, ind, myIndex );
}


//-------------------------------------------------------------------------------
// добавить объект, объект в PArray должен быть
// ---
template <class Type>
inline uint IMArray<Type>::Add( Type* el, uint * myIndex ) {
  return add_to_array( *this, el, myIndex );
}


//-------------------------------------------------------------------------------
// удалить объект по индексу
// completely  = true - с понижением всех индексов > delIndex
// ---
template <class Type>
inline void IMArray<Type>::RemoveInd( uint delIndex, bool completely ) {
  array_remove_ind( *this, delIndex, completely );
}


//-------------------------------------------------------------------------------
// удалить объект 
// completely  = true - с понижением всех индексов > delIndex
// ---
template <class Type>
inline void IMArray<Type>::RemoveObj( const uint& delObject, bool completely ){
  array_remove_obj( *this, delObject, completely );
}


//-------------------------------------------------------------------------------
// понижение всех индексов > delObject
// ---
template <class Type>
inline bool IMArray<Type>::ReductionObj( const uint& delObject ) {
  return array_reduction_obj( *this, delObject );
}


//-------------------------------------------------------------------------------
// переупорядочить объект по индексу в PArray
// функция возвращает указатель на объект и индекс объекта в IMArray
// ---
template <class Type>
inline Type* IMArray<Type>::ReindexInd( uint ind, uint * myIndex ) {
  return reindex_array_obj( *this, ind, myIndex );
}


//-------------------------------------------------------------------------------
// переупорядочить объект 
// функция возвращает индекс объекта в PArray и индекс объекта в IMArray
// ---
template <class Type>
inline uint  IMArray<Type>::ReindexObj( Type* ent, uint * myIndex ) {
  return reindex_array_obj( *this, ent, myIndex );
}


//-------------------------------------------------------------------------------
// переупорядочить объект 
// функция возвращает указатель на объект
// ---
template <class Type>
inline Type* IMArray<Type>::ReindexMyInd( uint myIndex ) {
  return reindex_array_ind( *this, myIndex );
}


//-------------------------------------------------------------------------------
// поменять идексы в PArray местами
// ---
template <class Type>
inline bool IMArray<Type>::Exchange ( uint ind1, uint ind2 ) {
  return exchange_to_array( *this, ind1, ind2 );
}


//-------------------------------------------------------------------------------
// переупорядочить весь массив
// ---
template <class Type>
inline void  IMArray<Type>::ReindexAll() {
  reindexall_to_array( *this );
}


//-------------------------------------------------------------------------------
// оператор индексирования
// ---
template <class Type>
inline Type* IMArray<Type>::operator [] ( uint ind ) const {
  return array[ SArray < uint >::operator []( ind ) ];
}


//-------------------------------------------------------------------------------
// оператор присвоения
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
// найти объект удовлетворяющий условию
// ---
template <class Type>
inline uint IMArray<Type>::Find( const void * val, uint * myIndex ) const {
  return find_in_array( *this, val, myIndex );
}


//-------------------------------------------------------------------------------
// получить индекс объекта в PArray по иедексу в IMArray
// ---
template <class Type>
inline uint IMArray<Type>::GetIndex( uint myIndex ) const {
//return parr[myIndex];
  return SArray<uint>::operator[] (myIndex);
}


//-------------------------------------------------------------------------------
// получить индекс объекта в IMArray по индексу в PArray 
// ---
template <class Type>
inline uint IMArray<Type>::GetMyIndex( uint parentIndex ) const {
  return find_my_index( *this, parentIndex );
}


//-------------------------------------------------------------------------------
// оператор приведения
// ---
template <class Type>
inline uint & IMArray<Type>::operator ()( uint myIndex ) const {
//return parr[myIndex];
  return SArray<uint>::operator[] (myIndex);
}


//-------------------------------------------------------------------------------
// добавить объект с упорядочиванием
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

  //проверяем первый эл.
  int res = (el->*arr.compT)( arr.array[ arr.GetIndex(0)/*arr.parr[0]*/ ] );

  //если элемент меньше первого, вставляем перед первым
  if ( res < 0 ) {
    arr.InsertInd( 0, ind );
    if ( myIndex )
      *myIndex = 0;
    return el;
  }

  uint mx = arr.count - 1;

  //проверяем последний эл.
  int res1 = !mx ? res : (el->*arr.compT)( arr.array[arr.GetIndex(mx)/*arr.parr[mx]*/] );

  //если один объект в массиве или эл. больше или равен последнему,
  //должны попасть сюда
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

  while ( mn + 1 < mx ) {  // пока не нашли - ищем
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
// добавить объект с упорядочиванием
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

  //проверяем первый эл.
  int res = (el->*arr.compT)( arr.array[ arr.GetIndex(0)/*arr.parr[0]*/ ] );

  //если элемент меньше первого, вставляем перед первым
  if ( res < 0 ) {
    arr.InsertInd( 0, ind );
    if ( myIndex )
      *myIndex = 0;
    return ind;
  }

  uint mx = arr.count - 1;

  //проверяем последний эл.
  int res1 = !mx ? res : (el->*arr.compT)( arr.array[arr.GetIndex(mx)/*arr.parr[mx]*/] );

  //если один объект в массиве или эл. больше или равен последнему,
  //должны попасть сюда
  if ( !mx || res1 > 0 || !res1 ) {
      arr.SArray<uint>::Add( ind );
      if ( myIndex )
        *myIndex = mx+1;
      return  ind;
  }

  if ( arr.count == 2 ) {
    // значит между 0  и 1
    arr.InsertInd( 1, ind );
    if ( myIndex )
      *myIndex = 1;
    return ind;
  }

  uint mn = 0;

  while ( mn + 1 < mx ) {  // пока не нашли - ищем
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
// найти объект в массиве, удовлетворяющий условию
// поиск ведется методом половинных делений
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

  while ( mn + 1 < mx ) {  // пока не нашли - ищем
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
// удалить объект по индексу
// completely  = true - с понижением всех индексов > delIndex
// ---
template <class Type>
void array_remove_ind( IMArray<Type> &arr, uint delIndex, bool completely ){
  PRECONDITION( delIndex < arr.count );
  uint arrayIndex = arr.GetIndex(delIndex); //arr.parr[ delIndex ];
  arr.SArray<uint>::RemoveInd( delIndex );
  if ( completely ) {
//КВН K8     const uint *parr = arr.GetAddr();
//КВН K8     for ( uint i = 0; i < arr.count; i++ ) {
//КВН K8       uint *parrI = (uint *)(parr + i);
//КВН K8       if ( *parrI/*arr.parr[i]*/ > arrayIndex )
//КВН K8         (*parrI)--; /*arr.parr[i]--;*/
//КВН K8     }
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
// удалить объект
// completely  = true - с понижением всех индексов > delIndex
// ---
template <class Type>
void array_remove_obj( IMArray<Type> &arr, const uint & delObject, bool completely ){
  arr.SArray<uint>::RemoveObj( delObject );

  if ( completely ) {
//КВН K8     const uint *parr = arr.GetAddr();
//КВН K8     for( uint i=0; i < arr.count; i++ ) {
//КВН K8       uint *parrI = (uint *)(parr + i);
//КВН K8       if ( *parrI/*arr.parr[i]*/ > delObject )
//КВН K8         (*parrI)--; //arr.parr[i]--;
//КВН K8     }
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
// понижение всех индексов > delObject
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
// получить индекс объекта в IMArray по индексу в PArray 
// ---
template <class Type>
uint  find_my_index( const IMArray<Type> &arr, uint parentIndex ) {
  for ( uint i = 0; i < arr.count; i++ )
    if ( arr.GetIndex(i)/*arr.parr[i]*/ == parentIndex )
      return i;

  return  SYS_MAX_UINT;
}


//-------------------------------------------------------------------------------
// переупорядочить объект в массиве
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
// переупорядочить объект в массиве
// ---
template <class Type>
Type* reindex_array_obj( IMArray<Type> &arr, uint ind, uint * myIndex ) {
  arr.SArray<uint>::RemoveObj( ind );
  return add_to_array( arr, ind, myIndex );
}


//-------------------------------------------------------------------------------
// переупорядочить объект в массиве
// ---
template <class Type>
Type* reindex_array_ind( IMArray<Type> &arr, uint myIndex ){
  uint ind = arr.GetIndex( myIndex ); //arr.parr[ myIndex ];
  arr.SArray<uint>::RemoveInd( myIndex );
  return add_to_array( arr, ind, 0 );
}


//-------------------------------------------------------------------------------
// переупорядочить весь массив
// ---
template <class Type>
void reindexall_to_array( IMArray<Type> &arr ) {
  arr.SArray<uint>::Flush();
	for( uint i=0; i < arr.array.Count(); i++ )
    add_to_array( arr, i, 0 );
}


//-------------------------------------------------------------------------------
// поменять идексы в PArray местами
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
