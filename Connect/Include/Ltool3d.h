////////////////////////////////////////////////////////////////////////////////
//
// Ltool3d.h  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LTOOL3D_H
#define __LTOOL3D_H

#ifdef __BORLANDC__  
#ifndef MIDL_INTERFACE
// MIDL_INTERFACE в Borland C++ не определен - используется в kAPI3D5COM.h
#define MIDL_INTERFACE(x) struct
#endif
#endif

#ifndef __LDEFIN2D_H
#include "ldefin2d.h"
#endif

#ifndef __LDEFIN3D_H
#include "ldefin3d.h"
#endif

#ifndef __kAPI2D5COM_h__
#include "kAPI2D5COM.h"
#endif

#ifndef __kAPI3D5COM_h__
#include "kAPI3D5COM.h"
#endif

#ifndef __LHEAD3D_H
#include "lhead3d.h"
#endif   

#endif // __LTOOL3D_H