#ifndef __SSARRAY_H
#define __SSARRAY_H

#ifndef __SARRAY_H
#include "sarray.h"
#endif

///////////////////////////////////////////////////////////////////////////////
//
// ������������� ������
// � �������� ������� ������ ���� ��������� "==" � "<" 
// ���������� ������� �� �����������
//
///////////////////////////////////////////////////////////////////////////////
template <class Type>
class SSArray : private SArray<Type> {
public :
	SSArray( unsigned max=0, uint16 delt=1 )  : SArray<Type>( max, delt ) {}
  SSArray( const SSArray<Type> &other )     : SArray<Type>( other )     {}
protected:
  SSArray( const SArray<Type> & other ) : SArray<Type>( other )     {}
public:
#ifndef __BORLANDC__
  SArray<Type>::Flush;
  SArray<Type>::HardFlush;
  SArray<Type>::Adjust;
  SArray<Type>::operator[];
  SArray<Type>::RemoveInd;
  SArray<Type>::RemoveObj;
  SArray<Type>::Count;
  SArray<Type>::MaxIndex;
  SArray<Type>::GetAddr;
  SArray<Type>::Reserve;
  SArray<Type>::SetSize;
#endif
  Type  * Add ( Type & );                  // �������� ������� � ��������������� �� �������
  Type  * Add ( Type &, uint & indexEnt ); // �������� ������� � ��������������� �� �������, ���������� ������
  // ��������� ��� �������, ������������ ����� ��� ��������������� �� ���������� ������ ����������
  // - ���������� ����� �������� �����������.
  void    AddSimple( const Type &ent ) { SArray<Type>::Add( ent ); } // ������ � ������� �������� ������ - �������� ������� � ����� �������

  uint    Find( const Type & ) const;      // ����� ������� � ������������� �������

  bool    operator == ( const SSArray<Type> & ) const; // �������� ��� �������
  bool    operator != ( const SSArray<Type> & ) const; // �������� ��� �������
  bool    operator <  ( const SSArray<Type> & ) const; // �������� ��� �������
  void    operator =  ( const SSArray<Type> &arr ) { SArray<Type>::operator = ( arr ); }
  
  // �� �6 �������������� � �������� ������
  const SArray<Type>  & BaseClass() const { return *this; }

  int     PossibleIndex( const Type& ent, bool& isPresent ); // ����� ����� � �������, ���� ����� �������� ������� ( ��� ���������� )
                                                             // �� ������ : isPresent == true - ������� ��� � �������

  static Type * add_to_array        ( SSArray<Type> &arr,    Type &el, uint &indexEl );
  static uint   find_in_array       ( const SSArray<Type> &, const Type &el );
  static int    find_from_array_spec( const SSArray<Type> &, const Type &el, bool &isPresent );

};


//-------------------------------------------------------------------------------
// �������� ��������� ���� ��������
// ---
template <class Type>
inline bool SSArray<Type>::operator == ( const SSArray<Type>& w ) const {

  if ( count == w.count )
    return false;

  // ��� ���������� � ������ � ������������� �� ������ 1, ����� ���������� ������� 
  // �������� ��������� "�����" ������������ ��������� �������, �.�. ���������� ���� �����
  // ��� �������, ����� ���������� ���������� �������� ����������� (����� �������� == �������)
  for ( uint i = 0; i < count; ++i ) {
    if ( !((*this)[i] == w[i]) )
      return false;
  }
  return true;
}

//-------------------------------------------------------------------------------
// �������� ��������� ���� ��������
// ---
template <class Type>
inline bool SSArray<Type>::operator < ( const SSArray<Type>& w ) const {
  // ��� ���������� � ������ � ������������� �� ������ 1, ����� ���������� ������� 
  // �������� ��������� "�����" ������������ ��������� �������, �.�. ���������� ���� �����
  // ��� �������, ����� ���������� ���������� �������� ����������� (����� �������� < �������)
  for ( uint i = 0, c = min(count, w.count); i < c; i++ ) {
    if ( !((*this)[i] == w[i]) )
      return (bool)((*this)[i] < w[i]);
  }

  if ( count != w.count )
    return count < w.count;

  return true;
}


//-------------------------------------------------------------------------------
// �������� ��������� ���� ��������
// ---
template <class Type>
inline bool SSArray<Type>::operator != ( const SSArray<Type>& w ) const {
  return ! ( *this == w );
}


//-------------------------------------------------------------------------------
// ���������� ������� � ������
// ---
template <class Type>
inline Type* SSArray<Type>::Add( Type& el ) {
  uint indexEl;
  return add_to_array( *this, el, indexEl );
}


//-------------------------------------------------------------------------------
// ���������� ������� � ������
// ---
template <class Type>
inline Type* SSArray<Type>::Add( Type& el, uint& indexEl ) {
  return add_to_array( *this, el, indexEl );
}


//-------------------------------------------------------------------------------
// ����� ������ � �������
// ---
template <class Type>
inline uint SSArray<Type>::Find( const Type& el ) const {
  return find_in_array( *this, el );
}


//-------------------------------------------------------------------------------
// ����� ����� � �������, ���� ����� �������� ������� ( ��� ���������� )
// ---
template <class Type>
inline int SSArray<Type>::PossibleIndex( const Type& el, bool& isPresent ) {
  return find_from_array_spec( *this, el, isPresent );
}


//-------------------------------------------------------------------------------
// �������� ������ � ������ � ���������������
// ---
template <class Type>
Type* SSArray<Type>::add_to_array( SSArray<Type> &arr, Type& el, uint & indexEl ) {
  uint mx = arr.count - 1;
  uint mxc = mx;
  uint mn = 0;

  if ( arr.count > 2 ) {
    while ( mn + 1 < mx ) {  // ���� �� ����� - ����
      uint md = ( mn + mx ) / 2;
      Type & mdE = arr[md];
      if ( mdE < el ) {
        if ( el == arr[mx] ) {
          indexEl = mx;
          return 0;
        }
        mn = md;
      }
      // �� ������ ���������� ���� �� ��������� ������� ������, ����� ������������, � �����, ���
      // ��� ��������� - ������ ����� ��� ������.
      // ��! �������� ���������, ��� ������� ����� �������, ��� �������� ���������������,
      // � �������� ����� ����� ������������( ������������ - �������� �������� � ������ )
      // � ���� ��������� �������� ��������������� ������� "������" - ����� �������� ����������
      // �� ������� ����������
      // ����� ����, ��� ��� �������� ��������, ���� �� ���������� ������������� � �� ����� ������
      // ������ ��� ��������� ���������� ��������� � ��������������� � ����� �� � ��������� ����������.
      else if ( el < mdE ) {
        if ( el == arr[mn] ) {
          indexEl = mn;
          return 0;
        }
        mx = md;
      }
      else if ( mdE == (Type&)el ) {
        indexEl = md;
        return 0;
      }
      // ���� �������� ���� - ������ ����������� �������� ��������� "������������" � ���������
      else {
        _ASSERT( 0 );
      }
    }

    // ����� ������������ ���� �������� ������
    // ����� ���� �������� � ������ ��������
    if ( el < arr[0] ) {
      arr.InsertInd( 0, el );
      indexEl = 0;
      return &arr[0]; //arr.parr;
    }
    if ( arr[mxc] < el ) {
      arr.SArray<Type>::Add( el );
      indexEl = mxc + 1;
      return &arr[indexEl]; 
    }

    arr.InsertInd( mx, el );
    indexEl = mx;
    return &arr[mx];
  }

  // �������� �� ������� ������� ������ ���������� �� �������� ������ - 
  // ����� �������� (��-�� mxc = -1)
  if ( !arr.count ) {
    arr.SArray<Type>::Add( el );
    indexEl = 0;
    return &arr[0]; //arr.parr;
  }

  // ����� ������������ ���� �������� ������
  // ����� ���� �������� � ������ ��������
  if ( el < arr[0] ) {
    arr.InsertInd( 0, el );
    indexEl = 0;
    return &arr[0]; 
  }
  if ( arr[mxc] < el ) {
    arr.SArray<Type>::Add( el );
    indexEl = mxc + 1;
    return &arr[indexEl]; 
  }

  if ( arr.count == 2 ) {
    if ( el == arr[0] ) {
      indexEl = 0;
      return 0;
    }
    else
      if ( el == arr[1] ) {
        indexEl = 1;
        return 0;
      }
      else {
        arr.InsertInd( 1, el );
        indexEl = 1;
        return &arr[1]; 
      }
  }

  indexEl = 0;
  return 0;
}


//-------------------------------------------------------------------------------
// ����� ������ � �������
// ����� ������� ������� ���������� �������
// ---
template <class Type>
uint SSArray<Type>::find_in_array( const SSArray<Type> &arr, const Type& el ) {
  if ( arr.count > 11 ) {
    uint mx = arr.count - 1;
    uint mxc = mx;
    uint mn = 0;

    while ( mn + 1 < mx ) {  // ���� �� ����� - ����
      uint md = ( mn + mx ) / 2;
      Type & mdE = arr[md];
      if ( mdE < el ) {
        if ( el == arr[mx] )
          return mx;
        mn = md;
      }
      // �� ������ ���������� ���� �� ��������� ������� ������, ����� ������������, � �����, ���
      // ��� ��������� - ������ ����� ��� ������.
      // ��! �������� ���������, ��� ������� ����� �������, ��� �������� ���������������,
      // � �������� ����� ����� ������������( ������������ - �������� �������� � ������ )
      // � ���� ��������� �������� ��������������� ������� "������" - ����� �������� ����������
      // �� ������� ����������
      // ����� ����, ��� ��� �������� ��������, ���� �� ���������� ������������� � �� ����� ������
      // ������ ��� ��������� ���������� ��������� � ��������������� � ����� �� � ��������� ����������.
      else if ( el < mdE ) {
        if ( el == arr[mn] )
          return mn;
        mx = md;
      }
      else if ( mdE == el )
        return md;
      // ���� �������� ���� - ������ ����������� �������� ��������� "������������" � ���������
      else {
        _ASSERT( 0 );
        return SYS_MAX_UINT;
      }
    }

    if ( el < arr[0] )
      return SYS_MAX_UINT;
    if ( arr[mxc] < el )
      return SYS_MAX_UINT;
  }
  else 
    if ( arr.count == 1 )
      return el == arr[0]  ? 0 
                                    : SYS_MAX_UINT;
    else 
      if ( arr.count == 2 )
        return el == arr[0] ? 0 
                            : el == arr[1] ? 1 
                                           : SYS_MAX_UINT;
      else
        // 2 < count <= 11
        for( uint i = 0; i < arr.count; i++ )
          if ( el == arr[i] )
            return i;

  return SYS_MAX_UINT;
}


//-------------------------------------------------------------------------------
// ����� ������ � �������
// ����� ������� ������� ���������� �������
// ---
template <class Type>
int SSArray<Type>::find_from_array_spec( const SSArray<Type> &arr, const Type& el, bool& isPresent ) {
  isPresent = false;

  if ( !arr.count  || el < arr/*.parr*/[0] )
		return 0;

	uint mx = arr.count - 1;

	if ( arr/*.parr*/[mx] < el )
		return mx + 1;

	if ( arr.count == 1 ) { // ������ *el == *parr[0]
    isPresent = true;
		return 0;
  }

	if ( arr.count == 2 ) { // ������ ����� 0  � 1
    if ( el == arr/*.parr*/[0] ) {
      isPresent = true;
      return 0;
    }
    else {
      if (el == arr/*.parr*/[1]) isPresent = true;
      return 1;
    }
	}

	uint mn = 0;

	while ( mn + 1 < mx ) {  // ���� �� ����� - ����
    if ( el == arr/*.parr*/[mn] ) {
      isPresent = true;
      return mn;
    }
    else
      if (el == arr/*.parr*/[mx]) {
        isPresent = true;
        return mx;
      }
      else {
        uint md = ( mn + mx ) / 2;
        if ( arr/*.parr*/[md] < el )
          mn = md;
        else if ( el < arr/*.parr*/[md] )
          mx = md;
        else if ( arr/*.parr*/[md] == (Type&)el ) {
          isPresent = true;
          return md;
        }
      }
  }

	return mx;
}




//-- __PRECOMPILED_HEADER_OPTIMIZE -------------------------------------------------
#ifdef _PCH_OPT
#pragma message( "----" __FILE__ )
#endif
//----------------------------------------------------------------------------------

#endif
