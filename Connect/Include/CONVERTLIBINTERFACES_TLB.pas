unit CONVERTLIBINTERFACES_TLB;

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

// PASTLWTR : $Revision:   1.88  $
// File generated on 07.04.2010 13:52:08 from Type Library described below.

// ************************************************************************ //
// Type Lib: D:\KOMPAS_V12_FIX\DebugU\Exe\ConvertLibInterfaces.tlb (1)
// IID\LCID: {BC89C6E1-8016-429C-A093-300B3F18DB21}\0
// Helpfile: 
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINDOWS\System32\stdole2.tlb)
// Parent TypeLibrary:
//   (0) v1.0 ACADEXPORTLib, (D:\Distr\ ŒÃœ¿—-3D_V12\pro\base\libs\ImpExp\dwgdxfExp.rtw)
// ************************************************************************ //
{$TYPEDADDRESS OFF} // Unit must be compiled without type-checked pointers. 
interface

uses Windows, ActiveX, Classes, Graphics, OleServer, OleCtrls, StdVCL;

// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLASS_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
const
  // TypeLibrary Major and minor versions
  CONVERTLIBINTERFACESMajorVersion = 1;
  CONVERTLIBINTERFACESMinorVersion = 0;

  LIBID_CONVERTLIBINTERFACES: TGUID = '{BC89C6E1-8016-429C-A093-300B3F18DB21}';

  IID_IKompasConverter: TGUID = '{735140E9-F6B5-42E9-9008-71730C617067}';
type

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
  IKompasConverter = interface;
  IKompasConverterDisp = dispinterface;

// *********************************************************************//
// Interface: IKompasConverter
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {735140E9-F6B5-42E9-9008-71730C617067}
// *********************************************************************//
  IKompasConverter = interface(IDispatch)
    ['{735140E9-F6B5-42E9-9008-71730C617067}']
    function  ConverterParameters(command: Integer): IUnknown; safecall;
    function  Get_CanUnloadLibrary: WordBool; safecall;
    function  GetFilter(docType: Integer; saveAs: WordBool; out command: Integer): WideString; safecall;
    function  Convert(const inputFile: WideString; const outfile: WideString; command: Integer; 
                      showParam: WordBool): Integer; safecall;
    function  VisualEditConvertParam(parentHwnd: OLE_HANDLE; command: Integer): WordBool; safecall;
    property CanUnloadLibrary: WordBool read Get_CanUnloadLibrary;
  end;

// *********************************************************************//
// DispIntf:  IKompasConverterDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {735140E9-F6B5-42E9-9008-71730C617067}
// *********************************************************************//
  IKompasConverterDisp = dispinterface
    ['{735140E9-F6B5-42E9-9008-71730C617067}']
    function  ConverterParameters(command: Integer): IUnknown; dispid 1;
    property CanUnloadLibrary: WordBool readonly dispid 2;
    function  GetFilter(docType: Integer; saveAs: WordBool; out command: Integer): WideString; dispid 3;
    function  Convert(const inputFile: WideString; const outfile: WideString; command: Integer; 
                      showParam: WordBool): Integer; dispid 4;
    function  VisualEditConvertParam(parentHwnd: OLE_HANDLE; command: Integer): WordBool; dispid 5;
  end;

implementation

uses ComObj;

end.
