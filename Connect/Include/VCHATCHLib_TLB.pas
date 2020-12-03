unit VCHATCHLib_TLB;

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
// File generated on 01.09.2004 17:15:48 from Type Library described below.

// ************************************************************************ //
// Type Lib: C:\Library\SDK\lib\VCHatch.ocx (1)
// IID\LCID: {2AFD2EAF-A5DE-4A3D-95BA-D2C1E43C1088}\0
// Helpfile: C:\Library\SDK\OCX\VCHatch\VCHatch.hlp
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINNT\System32\stdole2.tlb)
//   (2) v4.0 StdVCL, (C:\WINNT\System32\STDVCL40.DLL)
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
  VCHATCHLibMajorVersion = 1;
  VCHATCHLibMinorVersion = 0;

  LIBID_VCHATCHLib: TGUID = '{2AFD2EAF-A5DE-4A3D-95BA-D2C1E43C1088}';

  DIID__DVCHatch: TGUID = '{3FFE9799-DF8D-4936-980C-BEA28964A3A7}';
  DIID__DVCHatchEvents: TGUID = '{26776524-F601-42CE-A49E-90CF804111A5}';
  CLASS_VCHatch: TGUID = '{FFED03F1-481A-4ACD-A39E-C5D4A8828236}';
type

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
  _DVCHatch = dispinterface;
  _DVCHatchEvents = dispinterface;

// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
// *********************************************************************//
  VCHatch = _DVCHatch;


// *********************************************************************//
// DispIntf:  _DVCHatch
// Flags:     (4112) Hidden Dispatchable
// GUID:      {3FFE9799-DF8D-4936-980C-BEA28964A3A7}
// *********************************************************************//
  _DVCHatch = dispinterface
    ['{3FFE9799-DF8D-4936-980C-BEA28964A3A7}']
    property Angle: Double dispid 1;
    property Step: Double dispid 2;
    property Enable: WordBool dispid 3;
  end;

// *********************************************************************//
// DispIntf:  _DVCHatchEvents
// Flags:     (4096) Dispatchable
// GUID:      {26776524-F601-42CE-A49E-90CF804111A5}
// *********************************************************************//
  _DVCHatchEvents = dispinterface
    ['{26776524-F601-42CE-A49E-90CF804111A5}']
    procedure ChangeAngle; dispid 1;
    procedure ChangeStep; dispid 2;
  end;


// *********************************************************************//
// OLE Control Proxy class declaration
// Control Name     : TVCHatch
// Help String      : VCHatch Control
// Default Interface: _DVCHatch
// Def. Intf. DISP? : Yes
// Event   Interface: _DVCHatchEvents
// TypeFlags        : (34) CanCreate Control
// *********************************************************************//
  TVCHatch = class(TOleControl)
  private
    FOnChangeAngle: TNotifyEvent;
    FOnChangeStep: TNotifyEvent;
    FIntf: _DVCHatch;
    function  GetControlInterface: _DVCHatch;
  protected
    procedure CreateControl;
    procedure InitControlData; override;
  public
    property  ControlInterface: _DVCHatch read GetControlInterface;
    property  DefaultInterface: _DVCHatch read GetControlInterface;
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
    property Angle: Double index 1 read GetDoubleProp write SetDoubleProp stored False;
    property Step: Double index 2 read GetDoubleProp write SetDoubleProp stored False;
    property Enable: WordBool index 3 read GetWordBoolProp write SetWordBoolProp stored False;
    property OnChangeAngle: TNotifyEvent read FOnChangeAngle write FOnChangeAngle;
    property OnChangeStep: TNotifyEvent read FOnChangeStep write FOnChangeStep;
  end;

procedure Register;

implementation

uses ComObj;

procedure TVCHatch.InitControlData;
const
  CEventDispIDs: array [0..1] of DWORD = (
    $00000001, $00000002);
  CControlData: TControlData2 = (
    ClassID: '{FFED03F1-481A-4ACD-A39E-C5D4A8828236}';
    EventIID: '{26776524-F601-42CE-A49E-90CF804111A5}';
    EventCount: 2;
    EventDispIDs: @CEventDispIDs;
    LicenseKey: nil (*HR:$80004005*);
    Flags: $00000000;
    Version: 401);
begin
  ControlData := @CControlData;
  TControlData2(CControlData).FirstEventOfs := Cardinal(@@FOnChangeAngle) - Cardinal(Self);
end;

procedure TVCHatch.CreateControl;

  procedure DoCreate;
  begin
    FIntf := IUnknown(OleObject) as _DVCHatch;
  end;

begin
  if FIntf = nil then DoCreate;
end;

function TVCHatch.GetControlInterface: _DVCHatch;
begin
  CreateControl;
  Result := FIntf;
end;

procedure Register;
begin
  RegisterComponents('ActiveX',[TVCHatch]);
end;

end.
