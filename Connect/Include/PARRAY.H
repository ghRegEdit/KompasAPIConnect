#ifndef __PARRAY_H
#define __PARRAY_H

#include <systypes.h>

#ifdef __BORLANDC__
#define SYS_MAX_UINT (0xffffffff) // ((unsigned int)-1)
#define TEMPLATE_TYPENAME 
#endif // _MSC_VER

typedef enum { defDelete, noDelete, Delete } DelType;

///////////////////////////////////////////////////////
// одномерный массив указателей на обьекты
// классы с указателями
// ---
template <class Type>
class  PArray {

protected :
	typedef Type* TPtr;
  bool          owns;  // элементы можно удалять
	uint          count; // размерность массива
  uint          upper;
  uint16        delta;
	TPtr*         parr;  // массив укзателей на элементы

public :

	PArray();
	PArray( uint i_upper, uint16 i_delta=1, bool shouldDelete=true );
	~PArray();

	bool     OwnsElem() const                              { return owns; }
	void     OwnsElem( bool ownsEl )                       { owns = ownsEl; }

	uint16   Delta() const                                 { return delta; }
	void     Delta( uint16 newDelta )                      { delta = newDelta; }

	void     Add( Type* ent );                             // добавить элемент в конец массива
	void     AddAt( Type *ent, uint index )                { Insert( index, ent ); }
  void     AddAfter(Type* ent, uint index );             // добавить элемент после указанного
	void     Add( PArray<Type>& o );                       // добавить массив
  void     Add( PArray<Type>& o, uint index );           // добавить массив в позицию
  void     Insert( uint index, Type *ent );              // вставить элемент перед указанным
  void     EatAway( PArray<Type>& o );                   // съесть массив
	void     EatAway( PArray<Type>& o, uint index );       // съесть массив
  PArray<Type>& operator +=( PArray<Type>& o );          // добавить массив

	void     Flush( DelType = defDelete );                 // удалить все элементы
  void     Adjust();                                     // удалить лишнюю память
	void     RemoveAll( DelType shdl = defDelete )            { Flush(shdl); } // удалить все элементы обнулить количество элементов
  Type*    RemoveObj( Type *delObject, DelType=defDelete ); // удалить элемент из массива
  Type*    RemoveInd( uint delIndex, DelType del=defDelete ); // удалить элемент из массива
	void     DetachInd( uint delIndex );                      // отсоединить элемент от массива
	void     DetachObj( const Type *delObject );              // отсоединить элемент от массива

	uint     FindIt( const Type *el ) const;               // найти элемент по указателю
	bool     IsExist( const Type *el ) const;              // true если элемент найден
	uint     Count()    const { return count; }            // дать количество элементов массива
  int      MaxIndex() const { return count-1; }          // дать количество элементов массива

	Type*&   operator []( uint loc ) const                 { return parr[loc]; }

protected:
	void     CatchMemory();                                // захватить память

private:
	PArray( const PArray<Type>& other );                   // запрещено !!!
	PArray<Type>& operator =( const PArray<Type>& o );     // запрещено !!!

  TEMPLATE_TYPENAME friend void destroy_array( PArray<Type>& arr );
  TEMPLATE_TYPENAME friend void join_arrays( PArray<Type>& to, PArray<Type>& from );
  TEMPLATE_TYPENAME friend void insert_array( PArray<Type>& to, PArray<Type>& from, uint index );
  TEMPLATE_TYPENAME friend uint find_in_array( const PArray<Type>& arr, const Type* el );

};



///////////////////////////////////////////////////////
// конструктор массива
// ---
template <class Type>
inline PArray<Type>::PArray()
  : owns( true ),
    count( 0 ),
    upper( 0 ),
    delta( 1 ),
    parr( 0 ) {
}




///////////////////////////////////////////////////////
// конструктор массива
// ---
template <class Type>
inline PArray<Type>::PArray( uint i_upper, uint16 i_delta, bool shouldDelete )
  : owns( shouldDelete ),
    count( 0 ),
    upper( i_upper ),
    delta( i_delta ),
    parr( i_upper ? new TPtr[i_upper] : 0 ) {
}




///////////////////////////////////////////////////////
// деструктор массива
// ---
template <class Type>
inline PArray<Type>::~PArray() {
  if ( owns )
    destroy_array( *this );
  delete [] parr;
}




///////////////////////////////////////////////////////
// обнулить количество элементов
// ---
template <class Type>
inline void PArray<Type>::Flush( DelType del ) {
	if ( del==Delete || (del==defDelete && owns) )
    destroy_array( *this );
  else
    count = 0;
}



///////////////////////////////////////////////////////
// удалить лишнюю память
// ---
template <class Type>
inline void PArray<Type>::Adjust() {
  if ( count < upper ) {
    TPtr* p_tmp = ((upper = count) > 0) ? (TPtr*)memcpy(new TPtr[upper],parr,upper*sizeof(TPtr)) : 0;
    delete [] parr;
    parr = p_tmp;
  }
}



///////////////////////////////////////////////////////
// добавить элемент в конец массива
// ---
template <class Type>
inline void PArray<Type>::Add( Type* ent ) {
  CatchMemory();
  parr[count++] = ent;
}




///////////////////////////////////////////////////////
// добавить элемент после заданного
// ---
template <class Type>
inline void PArray<Type>::AddAfter( Type* ent, uint index ) {
  CatchMemory();         // добавить памяти, если все использовано
  if ( index > count-1 )
    index = count - 1;
  memmove( parr+index+2, parr+index+1, (count-index-1)*sizeof(TPtr) );
                         // передвинем вправо все элементы массива с index+1 до последнего
  parr[ index+1 ] = ent; // записываем новый элемент
	count++;
}



///////////////////////////////////////////////////////
// добавить массив
// в зависимости от владения эл-тами у приемника
// признак владения у источника будет обнуляться
// ---
template <class Type>
inline void PArray<Type>::Add( PArray<Type>& o ) {
  join_arrays( *this, o );
}



///////////////////////////////////////////////////////
// добавить массив в позицию index
// (если index>count, то в конец)
// в зависимости от владения эл-тами у приемника
// признак владения у источника будет обнуляться
// ---
template <class Type>
inline void PArray<Type>::Add( PArray<Type>& o, uint index ) {
  insert_array( *this, o, index );
}




///////////////////////////////////////////////////////
// вставить элемент перед указанным
// ---
template <class Type>
inline void PArray<Type>::Insert( uint index, Type *ent ) {
  CatchMemory();         // добавить памяти, если все использовано
	if ( index > count )
    index = count;
  memmove( parr+index+1, parr+index, (count-index) * sizeof(TPtr) );
                         // передвинем вправо все элементы массива с последнего до указанного
	parr[index] = ent;     // записываем новый элемент
  count++;
}




///////////////////////////////////////////////////////
// съесть массив
// ---
template <class Type>
inline void PArray<Type>::EatAway( PArray<Type>& o ) {
  Add( o );  // снялся флаг 'o.owns'
  o.count = 0;
}





///////////////////////////////////////////////////////
// съесть массив
// ---
template <class Type>
inline void PArray<Type>::EatAway( PArray<Type>& o, uint index ) {
  Add( o, index );  // снялся флаг 'o.owns'
  o.count = 0;
}





///////////////////////////////////////////////////////
// скопировать один массив в другой
// в зависимсти от признака владения элементами
// массива приемника, указатели будут перемещаться
// или копироваться
// ---
template <class Type>
inline PArray<Type>& PArray<Type>::operator += ( PArray<Type>& o ) {
  Add( o );
  return *this;
}




///////////////////////////////////////////////////////
// вернуть индекс элемента в массиве
// ---
template <class Type>
inline uint PArray<Type>::FindIt( const Type *el ) const {
  return find_in_array( *this, el );
}



///////////////////////////////////////////////////////
// вернуть индекс элемента в массиве
// ---
template <class Type>
inline bool PArray<Type>::IsExist( const Type *el ) const {
  return find_in_array( *this, el ) != SYS_MAX_UINT;
}



///////////////////////////////////////////////////////
// удалить элемент из массива
// ---
template <class Type>
inline Type* PArray<Type>::RemoveInd( uint delIndex, DelType del ) {
  TPtr* d = parr + delIndex;
  TPtr  r = (del==Delete || (del==defDelete && owns)) ? (delete *d,(TPtr)0) : *d;
  memcpy( d, d+1, (count-- - delIndex - 1)*sizeof(TPtr) );
  return r;
}




///////////////////////////////////////////////////////
// удалить элемент из массива
// ---
template <class Type>
inline Type* PArray<Type>::RemoveObj( Type *delObject, DelType del ) {
  uint i = find_in_array( *this, delObject );
  return ( i != SYS_MAX_UINT ) ? RemoveInd(i,del) : 0;
}




///////////////////////////////////////////////////////
// отсоединить элемент от массива
// ---
template <class Type>
inline void PArray<Type>::DetachInd( uint delIndex ) {
  memcpy( parr+delIndex, parr+delIndex+1, (count-- - delIndex - 1)*sizeof(TPtr) );
}




///////////////////////////////////////////////////////
// отсоединить элемент от массива
// ---
template <class Type>
inline void PArray<Type>::DetachObj( const Type *delObject ) {
  uint i = find_in_array( *this, delObject );
  if ( i != SYS_MAX_UINT )
    DetachInd( i );
}





///////////////////////////////////////////////////////
// захват большего куска памяти ( если нужно )
// ---
template <class Type>
inline void PArray<Type>::CatchMemory() {
	if ( upper == count ) {
    uint size = upper;
		TPtr* p_tmp = (TPtr*)memcpy( new TPtr[upper+=delta], parr, size*sizeof(TPtr) );
		delete [] parr;
		parr = p_tmp;
	}
}

// ---
template <class Type>
void destroy_array( PArray<Type>& arr ) {
  uint i = 0;
  for( PArray<Type>::TPtr* parr=arr.parr; i<arr.count; i++,parr++ ) {
    delete *parr;
    *parr = 0;
  }
  arr.count = 0;
}

// ---
template <class Type>
void join_arrays( PArray<Type>& to, PArray<Type>& from ) {
  uint newUpper;
  uint newCount = to.count + from.count;

  for( newUpper=to.upper; newUpper<newCount; newUpper+=to.delta );
  if ( newUpper > to.upper ) {
    PArray<Type>::TPtr* p_tmp = (PArray<Type>::TPtr*)memcpy( new PArray<Type>::TPtr[ to.upper = newUpper ], to.parr, to.count * sizeof(PArray<Type>::TPtr) );
    delete [] to.parr;
    to.parr = p_tmp;
  }
  memcpy( to.parr+to.count, from.parr, from.count * sizeof(PArray<Type>::TPtr) );
  to.count = newCount;

  if ( to.owns )
    from.owns = 0;
}



// ---
template <class Type>
void insert_array( PArray<Type>& to, PArray<Type>& from, uint index ) {

	if ( index > to.count )
		index = to.count;

  uint newUpper;
  uint newCount = to.count + from.count;
                                 
  for( newUpper=to.upper; newUpper < newCount; newUpper+=to.delta );
  PArray<Type>::TPtr* p_tmp = new PArray<Type>::TPtr[ to.upper = newUpper ];
  memcpy( p_tmp,                  to.parr,       index * sizeof(PArray<Type>::TPtr) );
  memcpy( p_tmp+index,            from.parr,     from.count * sizeof(PArray<Type>::TPtr) );
  memcpy( p_tmp+index+from.count, to.parr+index, (to.count-index) * sizeof(PArray<Type>::TPtr) );

  delete [] to.parr;
  to.parr = p_tmp;
  to.count = newCount;

  if ( to.owns )
		from.owns = 0;
}



// ---
template <class Type>
uint find_in_array( const PArray<Type>& arr, const Type* el ) {
  PArray<Type>::TPtr* parr = arr.parr;

  for( uint i=0,c=arr.count; i<c; i++,parr++ )
    if ( *parr == el )
      return i;
  return SYS_MAX_UINT;
}


#endif  // __PARRAY_H




