unit KGAXLib_TLB;

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
// File generated on 24.05.2010 11:54:23 from Type Library described below.

// ************************************************************************ //
// Type Lib: kGAX.TLB (1)
// IID\LCID: {B97871C2-BB9B-49E7-8FD3-C1201922EDD8}\0
// Helpfile: KGAX.hlp
// DepndLst:
//   (1) v2.0 stdole, (C:\WINDOWS\System32\stdole2.tlb)
//   (2) v4.0 StdVCL, (C:\WINDOWS\system32\stdvcl40.dll)
//   (3) v1.0 Kompas6API5, kAPI5.TLB
// Errors:
//   Hint: Parameter 'type' of _DKGAX.AddNewDocument changed to 'type_'
//   Hint: Parameter 'type' of _DKGAX.InsertNewDocument changed to 'type_'
//   Hint: Parameter 'type' of _DKGAX.ZoomWindow changed to 'type_'
// ************************************************************************ //
{$TYPEDADDRESS OFF} // Unit must be compiled without type-checked pointers. 
interface

uses Windows, ActiveX, Classes, Graphics, OleServer, OleCtrls, StdVCL, 
  ksTLB;

// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLASS_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
const
  // TypeLibrary Major and minor versions
  KGAXLibMajorVersion = 1;
  KGAXLibMinorVersion = 0;

  LIBID_KGAXLib: TGUID = '{B97871C2-BB9B-49E7-8FD3-C1201922EDD8}';

  DIID_PaintObject: TGUID = '{89D7DB83-B61E-4A0A-8317-CE2481FFF4BA}';
  DIID_GLObject: TGUID = '{89D7DB83-B61E-4A0A-8317-CE2481FFF4BB}';
  DIID_GabaritObject: TGUID = '{89D7DB83-B61E-4A0A-8317-CE2481FFF4BC}';
  DIID__DKGAX: TGUID = '{92B3A942-4E70-463B-9462-6424D9CE40CB}';
  DIID__DKGAXEvents: TGUID = '{464F746A-AC6D-4919-82E9-A7363E661ECF}';
  CLASS_KGAX: TGUID = '{6B943E71-5CA2-435D-AFA3-D7817B13ACA2}';

// *********************************************************************//
// Declaration of Enumerations defined in Type Library                    
// *********************************************************************//
// Constants for enum KZoomType
type
  KZoomType = TOleEnum;
const
  vt_ZoomWindow = $00000001;
  vt_ZoomIn = $00000002;
  vt_ZoomOut = $00000003;
  vt_ZoomSelected = $00000004;
  vt_ZoomEntureDocument = $00000005;
  vt_Refresh = $00000006;

// Constants for enum KDocumentType
type
  KDocumentType = TOleEnum;
const
  vt_SheetStandart = $00000001;
  vt_SheetUser = $00000002;
  vt_Fragment = $00000003;
  vt_Spc = $00000004;
  vt_3DPart = $00000005;
  vt_3DAssembly = $00000006;
  vt_TextStandart = $00000007;
  vt_TextUser = $00000008;
  vt_SpcUser = $00000009;

// Constants for enum KDocument3DDrawMode
type
  KDocument3DDrawMode = TOleEnum;
const
  vt_WireframeMode = $00000000;
  vt_HiddenRemovedMode = $00000001;
  vt_HiddenThinMode = $00000002;
  vt_ShadedMode = $00000003;

// Constants for enum KLibManagerMode
type
  KLibManagerMode = TOleEnum;
const
  vt_MainLibManager = $FFFFFFFF;
  vt_Default = $00000000;
  vt_CurrentLibManager = $00000001;

type

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
  PaintObject = dispinterface;
  GLObject = dispinterface;
  GabaritObject = dispinterface;
  _DKGAX = dispinterface;
  _DKGAXEvents = dispinterface;

// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
// *********************************************************************//
  KGAX = _DKGAX;


// *********************************************************************//
// Declaration of structures, unions and aliases.                         
// *********************************************************************//
  PDouble1 = ^Double; {*}


// *********************************************************************//
// DispIntf:  PaintObject
// Flags:     (4096) Dispatchable
// GUID:      {89D7DB83-B61E-4A0A-8317-CE2481FFF4BA}
// *********************************************************************//
  PaintObject = dispinterface
    ['{89D7DB83-B61E-4A0A-8317-CE2481FFF4BA}']
    function  GetHWND: OLE_HANDLE; dispid 1;
    function  GetDC: OLE_HANDLE; dispid 2;
    function  ReleaseDC(dc: OLE_HANDLE): WordBool; dispid 3;
    function  GetTransformMatrix(out a11: Double; out a12: Double; out a13: Double; 
                                 out a14: Double; out a21: Double; out a22: Double; 
                                 out a23: Double; out a24: Double): WordBool; dispid 4;
  end;

// *********************************************************************//
// DispIntf:  GLObject
// Flags:     (4096) Dispatchable
// GUID:      {89D7DB83-B61E-4A0A-8317-CE2481FFF4BB}
// *********************************************************************//
  GLObject = dispinterface
    ['{89D7DB83-B61E-4A0A-8317-CE2481FFF4BB}']
    function  glBegin(mode: Integer): WordBool; dispid 1;
    function  glEnd: WordBool; dispid 2;
    function  glEnable(cap: Integer): WordBool; dispid 3;
    function  glDisable(cap: Integer): WordBool; dispid 4;
    function  glColor3d(r: Double; g: Double; b: Double): WordBool; dispid 20;
    function  glLineWidth(w: Double): WordBool; dispid 21;
    function  glLineStipple(factor: Integer; pattern: Smallint): WordBool; dispid 22;
    function  glPointSize(w: Double): WordBool; dispid 23;
    function  glPolygonMode(face: Integer; mode: Integer): WordBool; dispid 24;
    function  glVertex2d(x: Double; y: Double): WordBool; dispid 40;
    function  glVertex2dv(var pData: Double; countDouble: Integer): WordBool; dispid 41;
    function  glVertex3d(x: Double; y: Double; z: Double): WordBool; dispid 42;
    function  glVertex3dv(var pData: Double; countDouble: Integer): WordBool; dispid 43;
    function  glVertex4d(x: Double; y: Double; z: Double; w: Double): WordBool; dispid 44;
    function  glVertex4dv(var pData: Double; countDouble: Integer): WordBool; dispid 45;
  end;

// *********************************************************************//
// DispIntf:  GabaritObject
// Flags:     (4096) Dispatchable
// GUID:      {89D7DB83-B61E-4A0A-8317-CE2481FFF4BC}
// *********************************************************************//
  GabaritObject = dispinterface
    ['{89D7DB83-B61E-4A0A-8317-CE2481FFF4BC}']
    function  AddGabarit(p1X: Double; p1Y: Double; p1Z: Double; p2X: Double; p2Y: Double; 
                         p2Z: Double): WordBool; dispid 1;
  end;

// *********************************************************************//
// DispIntf:  _DKGAX
// Flags:     (4112) Hidden Dispatchable
// GUID:      {92B3A942-4E70-463B-9462-6424D9CE40CB}
// *********************************************************************//
  _DKGAX = dispinterface
    ['{92B3A942-4E70-463B-9462-6424D9CE40CB}']
    property Caption: WideString dispid -518;
    property Text: WideString dispid -517;
    property DocumentType: KDocumentType dispid 1;
    property DocumenFileName: WideString dispid 2;
    property Document3DDrawMode: KDocument3DDrawMode dispid 3;
    property Document3DWireframeShadedMode: WordBool dispid 4;
    function  GetKompasObject: KompasObject; dispid 5;
    function  GetDocumentType(index: OleVariant): KDocumentType; dispid 6;
    function  GetDocumentInterface(index: OleVariant; newAPI: Integer): IDispatch; dispid 7;
    function  GetActiveDocumentID: Integer; dispid 8;
    function  GetDocumentsCount: Integer; dispid 9;
    function  AddDocument(const fileName: WideString): Integer; dispid 10;
    function  AddNewDocument(type_: KDocumentType): Integer; dispid 11;
    function  InsertDocument(const fileName: WideString; index: OleVariant): Integer; dispid 12;
    function  InsertNewDocument(type_: KDocumentType; index: OleVariant): Integer; dispid 13;
    function  RemoveDocument(index: OleVariant): WordBool; dispid 14;
    function  ActivateDocument(index: OleVariant): WordBool; dispid 15;
    function  CloseAll: Integer; dispid 16;
    function  TestLoadDocument(const fileName: WideString): SYSINT; dispid 17;
    function  InvalidateActiveDocument(erase: WordBool): WordBool; dispid 18;
    procedure ZoomEntireDocument; dispid 19;
    procedure MoveViewDocument; dispid 20;
    procedure PanoramaViewDocument; dispid 21;
    procedure RotateViewDocument; dispid 22;
    procedure OrientationDocument; dispid 23;
    procedure ZoomWindow(type_: KZoomType); dispid 24;
    procedure StopCurrentProcess(cancel: WordBool); dispid 25;
    function  DrawToDC(dc: OLE_HANDLE; left: Integer; top: Integer; width: Integer; height: Integer): WordBool; dispid 26;
    procedure SetCurrentLibManager(t: Integer); dispid 27;
    procedure SetGabaritModifying; dispid 28;
    function  GetDocumentID(index: OleVariant): Integer; dispid 29;
  end;

// *********************************************************************//
// DispIntf:  _DKGAXEvents
// Flags:     (4096) Dispatchable
// GUID:      {464F746A-AC6D-4919-82E9-A7363E661ECF}
// *********************************************************************//
  _DKGAXEvents = dispinterface
    ['{464F746A-AC6D-4919-82E9-A7363E661ECF}']
    procedure OnKgMouseDown(nButton: Smallint; nShiftState: Smallint; x: Integer; y: Integer; 
                            out proceed: WordBool); dispid 1;
    procedure OnKgMouseUp(nButton: Smallint; nShiftState: Smallint; x: Integer; y: Integer; 
                          out proceed: WordBool); dispid 2;
    procedure OnKgMouseDblClick(nButton: Smallint; nShiftState: Smallint; x: Integer; y: Integer; 
                                out proceed: WordBool); dispid 3;
    procedure OnKgStopCurrentProcess; dispid 4;
    procedure OnKgCreate(docID: Integer); dispid 5;
    procedure OnKgPaint(const paintObj: PaintObject); dispid 6;
    procedure OnKgCreateGLList(const glObj: GLObject; drawMode: KDocument3DDrawMode); dispid 7;
    procedure OnKgAddGabatit(const gabObj: GabaritObject); dispid 8;
    procedure OnKgErrorLoadDocument(docID: Integer; const fileName: WideString; errorID: Integer); dispid 9;
    procedure OnKgKeyDown(var key: Integer; nShiftState: Smallint); dispid 10;
    procedure OnKgKeyUp(var key: Integer; nShiftState: Smallint); dispid 11;
    procedure OnKgKeyPress(var key: Integer); dispid 12;
  end;


// *********************************************************************//
// OLE Control Proxy class declaration
// Control Name     : TKGAX
// Help String      : KGAX Control
// Default Interface: _DKGAX
// Def. Intf. DISP? : Yes
// Event   Interface: _DKGAXEvents
// TypeFlags        : (34) CanCreate Control
// *********************************************************************//
  TKGAXOnKgMouseDown = procedure(Sender: TObject; nButton: Smallint; nShiftState: Smallint; 
                                                  x: Integer; y: Integer; out proceed: WordBool) of object;
  TKGAXOnKgMouseUp = procedure(Sender: TObject; nButton: Smallint; nShiftState: Smallint; 
                                                x: Integer; y: Integer; out proceed: WordBool) of object;
  TKGAXOnKgMouseDblClick = procedure(Sender: TObject; nButton: Smallint; nShiftState: Smallint; 
                                                      x: Integer; y: Integer; out proceed: WordBool) of object;
  TKGAXOnKgCreate = procedure(Sender: TObject; docID: Integer) of object;
  TKGAXOnKgPaint = procedure(Sender: TObject; const paintObj: PaintObject) of object;
  TKGAXOnKgCreateGLList = procedure(Sender: TObject; const glObj: GLObject; 
                                                     drawMode: KDocument3DDrawMode) of object;
  TKGAXOnKgAddGabatit = procedure(Sender: TObject; const gabObj: GabaritObject) of object;
  TKGAXOnKgErrorLoadDocument = procedure(Sender: TObject; docID: Integer; 
                                                          const fileName: WideString; 
                                                          errorID: Integer) of object;
  TKGAXOnKgKeyDown = procedure(Sender: TObject; var key: Integer; nShiftState: Smallint) of object;
  TKGAXOnKgKeyUp = procedure(Sender: TObject; var key: Integer; nShiftState: Smallint) of object;
  TKGAXOnKgKeyPress = procedure(Sender: TObject; var key: Integer) of object;

  TKGAX = class(TOleControl)
  private
    FOnKgMouseDown: TKGAXOnKgMouseDown;
    FOnKgMouseUp: TKGAXOnKgMouseUp;
    FOnKgMouseDblClick: TKGAXOnKgMouseDblClick;
    FOnKgStopCurrentProcess: TNotifyEvent;
    FOnKgCreate: TKGAXOnKgCreate;
    FOnKgPaint: TKGAXOnKgPaint;
    FOnKgCreateGLList: TKGAXOnKgCreateGLList;
    FOnKgAddGabatit: TKGAXOnKgAddGabatit;
    FOnKgErrorLoadDocument: TKGAXOnKgErrorLoadDocument;
    FOnKgKeyDown: TKGAXOnKgKeyDown;
    FOnKgKeyUp: TKGAXOnKgKeyUp;
    FOnKgKeyPress: TKGAXOnKgKeyPress;
    FIntf: _DKGAX;
    function  GetControlInterface: _DKGAX;
  protected
    procedure CreateControl;
    procedure InitControlData; override;
  public
    function  GetKompasObject: KompasObject;
    function  GetDocumentType(index: OleVariant): KDocumentType;
    function  GetDocumentInterface(index: OleVariant; newAPI: Integer): IDispatch;
    function  GetActiveDocumentID: Integer;
    function  GetDocumentsCount: Integer;
    function  AddDocument(const fileName: WideString): Integer;
    function  AddNewDocument(type_: KDocumentType): Integer;
    function  InsertDocument(const fileName: WideString; index: OleVariant): Integer;
    function  InsertNewDocument(type_: KDocumentType; index: OleVariant): Integer;
    function  RemoveDocument(index: OleVariant): WordBool;
    function  ActivateDocument(index: OleVariant): WordBool;
    function  CloseAll: Integer;
    function  TestLoadDocument(const fileName: WideString): SYSINT;
    function  InvalidateActiveDocument(erase: WordBool): WordBool;
    procedure ZoomEntireDocument;
    procedure MoveViewDocument;
    procedure PanoramaViewDocument;
    procedure RotateViewDocument;
    procedure OrientationDocument;
    procedure ZoomWindow(type_: KZoomType);
    procedure StopCurrentProcess(cancel: WordBool);
    function  DrawToDC(dc: OLE_HANDLE; left: Integer; top: Integer; width: Integer; height: Integer): WordBool;
    procedure SetCurrentLibManager(t: Integer);
    procedure SetGabaritModifying;
    function  GetDocumentID(index: OleVariant): Integer;
    property  ControlInterface: _DKGAX read GetControlInterface;
    property  DefaultInterface: _DKGAX read GetControlInterface;
  published
    property  TabStop;
    property  Align;
    property  DragCursor;
    property  DragMode;
    property  ParentShowHint;
    property  PopupMenu;
    property  ShowHint;
    property  TabOrder;
    property  Visible;
    property  OnDragDrop;
    property  OnDragOver;
    property  OnEndDrag;
    property  OnEnter;
    property  OnExit;
    property  OnStartDrag;
    property Caption: WideString index -518 read GetWideStringProp write SetWideStringProp stored False;
    property Text: WideString index -517 read GetWideStringProp write SetWideStringProp stored False;
    property DocumentType: TOleEnum index 1 read GetTOleEnumProp write SetTOleEnumProp stored False;
    property DocumenFileName: WideString index 2 read GetWideStringProp write SetWideStringProp stored False;
    property Document3DDrawMode: TOleEnum index 3 read GetTOleEnumProp write SetTOleEnumProp stored False;
    property Document3DWireframeShadedMode: WordBool index 4 read GetWordBoolProp write SetWordBoolProp stored False;
    property OnKgMouseDown: TKGAXOnKgMouseDown read FOnKgMouseDown write FOnKgMouseDown;
    property OnKgMouseUp: TKGAXOnKgMouseUp read FOnKgMouseUp write FOnKgMouseUp;
    property OnKgMouseDblClick: TKGAXOnKgMouseDblClick read FOnKgMouseDblClick write FOnKgMouseDblClick;
    property OnKgStopCurrentProcess: TNotifyEvent read FOnKgStopCurrentProcess write FOnKgStopCurrentProcess;
    property OnKgCreate: TKGAXOnKgCreate read FOnKgCreate write FOnKgCreate;
    property OnKgPaint: TKGAXOnKgPaint read FOnKgPaint write FOnKgPaint;
    property OnKgCreateGLList: TKGAXOnKgCreateGLList read FOnKgCreateGLList write FOnKgCreateGLList;
    property OnKgAddGabatit: TKGAXOnKgAddGabatit read FOnKgAddGabatit write FOnKgAddGabatit;
    property OnKgErrorLoadDocument: TKGAXOnKgErrorLoadDocument read FOnKgErrorLoadDocument write FOnKgErrorLoadDocument;
    property OnKgKeyDown: TKGAXOnKgKeyDown read FOnKgKeyDown write FOnKgKeyDown;
    property OnKgKeyUp: TKGAXOnKgKeyUp read FOnKgKeyUp write FOnKgKeyUp;
    property OnKgKeyPress: TKGAXOnKgKeyPress read FOnKgKeyPress write FOnKgKeyPress;
  end;

procedure Register;

implementation

uses ComObj;

procedure TKGAX.InitControlData;
const
  CEventDispIDs: array [0..11] of DWORD = (
    $00000001, $00000002, $00000003, $00000004, $00000005, $00000006,
    $00000007, $00000008, $00000009, $0000000A, $0000000B, $0000000C);
  CControlData: TControlData2 = (
    ClassID: '{6B943E71-5CA2-435D-AFA3-D7817B13ACA2}';
    EventIID: '{464F746A-AC6D-4919-82E9-A7363E661ECF}';
    EventCount: 12;
    EventDispIDs: @CEventDispIDs;
    LicenseKey: nil (*HR:$80004005*);
    Flags: $00000030;
    Version: 401);
begin
  ControlData := @CControlData;
  TControlData2(CControlData).FirstEventOfs := Cardinal(@@FOnKgMouseDown) - Cardinal(Self);
end;

procedure TKGAX.CreateControl;

  procedure DoCreate;
  begin
    FIntf := IUnknown(OleObject) as _DKGAX;
  end;

begin
  if FIntf = nil then DoCreate;
end;

function TKGAX.GetControlInterface: _DKGAX;
begin
  CreateControl;
  Result := FIntf;
end;

function  TKGAX.GetKompasObject: KompasObject;
begin
  Result := DefaultInterface.GetKompasObject;
end;

function  TKGAX.GetDocumentType(index: OleVariant): KDocumentType;
begin
  Result := DefaultInterface.GetDocumentType(index);
end;

function  TKGAX.GetDocumentInterface(index: OleVariant; newAPI: Integer): IDispatch;
begin
  Result := DefaultInterface.GetDocumentInterface(index, newAPI);
end;

function  TKGAX.GetActiveDocumentID: Integer;
begin
  Result := DefaultInterface.GetActiveDocumentID;
end;

function  TKGAX.GetDocumentsCount: Integer;
begin
  Result := DefaultInterface.GetDocumentsCount;
end;

function  TKGAX.AddDocument(const fileName: WideString): Integer;
begin
  Result := DefaultInterface.AddDocument(fileName);
end;

function  TKGAX.AddNewDocument(type_: KDocumentType): Integer;
begin
  Result := DefaultInterface.AddNewDocument(type_);
end;

function  TKGAX.InsertDocument(const fileName: WideString; index: OleVariant): Integer;
begin
  Result := DefaultInterface.InsertDocument(fileName, index);
end;

function  TKGAX.InsertNewDocument(type_: KDocumentType; index: OleVariant): Integer;
begin
  Result := DefaultInterface.InsertNewDocument(type_, index);
end;

function  TKGAX.RemoveDocument(index: OleVariant): WordBool;
begin
  Result := DefaultInterface.RemoveDocument(index);
end;

function  TKGAX.ActivateDocument(index: OleVariant): WordBool;
begin
  Result := DefaultInterface.ActivateDocument(index);
end;

function  TKGAX.CloseAll: Integer;
begin
  Result := DefaultInterface.CloseAll;
end;

function  TKGAX.TestLoadDocument(const fileName: WideString): SYSINT;
begin
  Result := DefaultInterface.TestLoadDocument(fileName);
end;

function  TKGAX.InvalidateActiveDocument(erase: WordBool): WordBool;
begin
  Result := DefaultInterface.InvalidateActiveDocument(erase);
end;

procedure TKGAX.ZoomEntireDocument;
begin
  DefaultInterface.ZoomEntireDocument;
end;

procedure TKGAX.MoveViewDocument;
begin
  DefaultInterface.MoveViewDocument;
end;

procedure TKGAX.PanoramaViewDocument;
begin
  DefaultInterface.PanoramaViewDocument;
end;

procedure TKGAX.RotateViewDocument;
begin
  DefaultInterface.RotateViewDocument;
end;

procedure TKGAX.OrientationDocument;
begin
  DefaultInterface.OrientationDocument;
end;

procedure TKGAX.ZoomWindow(type_: KZoomType);
begin
  DefaultInterface.ZoomWindow(type_);
end;

procedure TKGAX.StopCurrentProcess(cancel: WordBool);
begin
  DefaultInterface.StopCurrentProcess(cancel);
end;

function  TKGAX.DrawToDC(dc: OLE_HANDLE; left: Integer; top: Integer; width: Integer; 
                         height: Integer): WordBool;
begin
  Result := DefaultInterface.DrawToDC(dc, left, top, width, height);
end;

procedure TKGAX.SetCurrentLibManager(t: Integer);
begin
  DefaultInterface.SetCurrentLibManager(t);
end;

procedure TKGAX.SetGabaritModifying;
begin
  DefaultInterface.SetGabaritModifying;
end;

function  TKGAX.GetDocumentID(index: OleVariant): Integer;
begin
  Result := DefaultInterface.GetDocumentID(index);
end;

procedure Register;
begin
  RegisterComponents('ActiveX',[TKGAX]);
end;

end.
