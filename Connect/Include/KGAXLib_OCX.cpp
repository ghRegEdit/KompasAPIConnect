// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.134.1.39  $
// File generated on 19.12.2006 15:25:18 from Type Library described below.

// ************************************************************************ //
// Type Lib: kGAX.TLB (1)
// IID\LCID: {B97871C2-BB9B-49E7-8FD3-C1201922EDD8}\0
// Helpfile: sdk.hlp
// DepndLst:
//   (1) v2.0 stdole, (C:\WINDOWS\System32\stdole2.tlb)
//   (2) v4.0 StdVCL, (C:\WINDOWS\System32\stdvcl40.dll)
//   (3) v1.0 Kompas6API5, kAPI5.TLB
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#if defined(USING_ATL)
#include <atl\atlvcl.h>
#endif

#include "KGAXLib_OCX.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Kgaxlib_tlb
{



// *********************************************************************//
// OCX PROXY CLASS IMPLEMENTATION
// (The following variables/methods implement the class TKGAX which
// allows "KGAX Control" to be hosted in CBuilder IDE/apps).
// *********************************************************************//
int   TKGAX::EventDispIDs[12] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006,
    0x00000007, 0x00000008, 0x00000009, 0x0000000A, 0x0000000B, 0x0000000C};

TControlData TKGAX::CControlData =
{
  // GUID of CoClass and Event Interface of Control
  {0x6B943E71, 0x5CA2, 0x435D,{ 0xAF, 0xA3, 0xD7, 0x81, 0x7B, 0x13, 0xAC, 0xA2} }, // CoClass
  {0x464F746A, 0xAC6D, 0x4919,{ 0x82, 0xE9, 0xA7, 0x36, 0x3E, 0x66, 0x1E, 0xCF} }, // Events

  // Count of Events and array of their DISPIDs
  12, &EventDispIDs,

  // Pointer to Runtime License string
  NULL,  // HRESULT(0x80004005)

  // Flags for OnChanged PropertyNotification
  0x00000030,
  300,// (IDE Version)

  // Count of Font Prop and array of their DISPIDs
  0, NULL,

  // Count of Pict Prop and array of their DISPIDs
  0, NULL,
  0, // Reserved
  0, // Instance count (used internally)
  0, // List of Enum descriptions (internal)
};

GUID     TKGAX::DEF_CTL_INTF = {0x92B3A942, 0x4E70, 0x463B,{ 0x94, 0x62, 0x64, 0x24, 0xD9, 0xCE, 0x40, 0xCB} };
TNoParam TKGAX::OptParam;

static inline void ValidCtrCheck(TKGAX *)
{
   delete new TKGAX((TComponent*)(0));
};

void __fastcall TKGAX::InitControlData()
{
  ControlData = &CControlData;
};

void __fastcall TKGAX::CreateControl()
{
  if (!m_OCXIntf)
  {
    _ASSERTE(DefaultDispatch);
    DefaultDispatch->QueryInterface(DEF_CTL_INTF, (LPVOID*)&m_OCXIntf);
  }
};

_DKGAXDisp __fastcall TKGAX::GetDefaultInterface()
{
  CreateControl();
  return m_OCXIntf;
};

Kompas6api5_tlb::KompasObjectPtr __fastcall TKGAX::GetKompasObject(void)
{
  return GetDefaultInterface()->GetKompasObject();
}

Kgaxlib_tlb::KDocumentType __fastcall TKGAX::GetDocumentType(OleVariant index/*[in]*/)
{
  return GetDefaultInterface()->GetDocumentType(index/*[in]*/);
}

LPDISPATCH __fastcall TKGAX::GetDocumentInterface(OleVariant index/*[in]*/, long newAPI)
{
  return GetDefaultInterface()->GetDocumentInterface(index/*[in]*/, newAPI);
}

long __fastcall TKGAX::GetActiveDocumentID(void)
{
  return GetDefaultInterface()->GetActiveDocumentID();
}

long __fastcall TKGAX::GetDocumentsCount(void)
{
  return GetDefaultInterface()->GetDocumentsCount();
}

long __fastcall TKGAX::AddDocument(BSTR fileName/*[in]*/)
{
  return GetDefaultInterface()->AddDocument(fileName/*[in]*/);
}

long __fastcall TKGAX::AddNewDocument(Kgaxlib_tlb::KDocumentType type/*[in]*/)
{
  return GetDefaultInterface()->AddNewDocument(type/*[in]*/);
}

long __fastcall TKGAX::InsertDocument(BSTR fileName/*[in]*/, OleVariant index/*[in]*/)
{
  return GetDefaultInterface()->InsertDocument(fileName/*[in]*/, index/*[in]*/);
}

long __fastcall TKGAX::InsertNewDocument(Kgaxlib_tlb::KDocumentType type/*[in]*/, 
                                         OleVariant index/*[in]*/)
{
  return GetDefaultInterface()->InsertNewDocument(type/*[in]*/, index/*[in]*/);
}

TOLEBOOL __fastcall TKGAX::RemoveDocument(OleVariant index/*[in]*/)
{
  return GetDefaultInterface()->RemoveDocument(index/*[in]*/);
}

TOLEBOOL __fastcall TKGAX::ActivateDocument(OleVariant index/*[in]*/)
{
  return GetDefaultInterface()->ActivateDocument(index/*[in]*/);
}

long __fastcall TKGAX::CloseAll(void)
{
  return GetDefaultInterface()->CloseAll();
}

int __fastcall TKGAX::TestLoadDocument(BSTR fileName/*[in]*/)
{
  return GetDefaultInterface()->TestLoadDocument(fileName/*[in]*/);
}

TOLEBOOL __fastcall TKGAX::InvalidateActiveDocument(TOLEBOOL erase/*[in]*/)
{
  return GetDefaultInterface()->InvalidateActiveDocument(erase/*[in]*/);
}

void __fastcall TKGAX::ZoomEntireDocument(void)
{
  GetDefaultInterface()->ZoomEntireDocument();
}

void __fastcall TKGAX::MoveViewDocument(void)
{
  GetDefaultInterface()->MoveViewDocument();
}

void __fastcall TKGAX::PanoramaViewDocument(void)
{
  GetDefaultInterface()->PanoramaViewDocument();
}

void __fastcall TKGAX::RotateViewDocument(void)
{
  GetDefaultInterface()->RotateViewDocument();
}

void __fastcall TKGAX::OrientationDocument(void)
{
  GetDefaultInterface()->OrientationDocument();
}

void __fastcall TKGAX::ZoomWindow(Kgaxlib_tlb::KZoomType type/*[in,def,opt]*/)
{
  GetDefaultInterface()->ZoomWindow(type/*[in,def,opt]*/);
}

void __fastcall TKGAX::StopCurrentProcess(TOLEBOOL cancel/*[in,def,opt]*/)
{
  GetDefaultInterface()->StopCurrentProcess(cancel/*[in,def,opt]*/);
}

TOLEBOOL __fastcall TKGAX::DrawToDC(OLE_HANDLE dc/*[in]*/, long left/*[in]*/, long top/*[in]*/, 
                                    long width/*[in]*/, long height/*[in]*/)
{
  return GetDefaultInterface()->DrawToDC(dc/*[in]*/, left/*[in]*/, top/*[in]*/, width/*[in]*/, 
                                         height/*[in]*/);
}

void __fastcall TKGAX::SetCurrentLibManager(long t/*[in]*/)
{
  GetDefaultInterface()->SetCurrentLibManager(t/*[in]*/);
}

void __fastcall TKGAX::SetGabaritModifying(void)
{
  GetDefaultInterface()->SetGabaritModifying();
}

long __fastcall TKGAX::GetDocumentID(OleVariant index/*[in]*/)
{
  return GetDefaultInterface()->GetDocumentID(index/*[in]*/);
}


};     // namespace Kgaxlib_tlb


// *********************************************************************//
// The Register function is invoked by the IDE when this module is 
// installed in a Package. It provides the list of Components (including
// OCXes) implemented by this module. The following implementation
// informs the IDE of the OCX proxy classes implemented here.
// *********************************************************************//
namespace Kgaxlib_ocx
{

void __fastcall PACKAGE Register()
{
  // [1]
  TComponentClass cls_ocx[] = {
                              __classid(Kgaxlib_tlb::TKGAX)
                           };
  RegisterComponents("ActiveX", cls_ocx,
                     sizeof(cls_ocx)/sizeof(cls_ocx[0])-1);
}

};     // namespace Kgaxlib_ocx
