#ifndef __SYSTYPES_H
#define __SYSTYPES_H

typedef signed char int8;
typedef signed short int16;
typedef signed long int32;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

//
// Some nonfixed-size types defined similar to the fixedsize in systypes.h
//
typedef unsigned long  ulong;
typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;

typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;

typedef unsigned short word16;
typedef unsigned long word32;

#define SYS_MAX_UINT (0xffffffff) // ((unsigned int)-1)

//------------------------------------------------------------------------------
//
//---
#ifdef __BORLANDC__
#define TEMPLATE_TYPENAME 
#else
#if _MSC_VER < 1300
#define TEMPLATE_TYPENAME
#else
#if _MSC_VER < 1400
#define TEMPLATE_TYPENAME template<class Type>
#else
#define TEMPLATE_TYPENAME template<typename Type>
#endif // _MSC_VER
#endif // _MSC_VER
#endif // _MSC_VER


//------------------------------------------------------------------------------
// Получить количество элементов массива (длину массива)
//---
#define COUNTOF(array) (sizeof(array)/sizeof(array[0]))

#ifndef _WINDEF_
  typedef unsigned int UINT;
#endif // _WINDEF_

//#define ULONG_MAX       4294967295UL    /* maximum unsigned long value */
//#define UINT_MAX        ULONG_MAX

//-- __PRECOMPILED_HEADER_OPTIMIZE -------------------------------------------------
#ifdef _PCH_OPT
#pragma message( "----" __FILE__ )
#endif
//----------------------------------------------------------------------------------

#endif  /* __SYSTYPES_H  */
