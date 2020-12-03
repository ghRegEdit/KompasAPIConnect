unit LibHpPar;

interface
uses
  Windows, SysUtils;

type

//-------------------------------------------------------------------------------
// ��������� ���������� ��� ������� �����
// ---
PHotPointDescription = ^HotPointDescription;
HotPointDescription  = record
  // ��������� ����� � ������� ��������� �������
  x : Double;
  y : Double;
  // ��������� ������ (������������), ������������� ����� hot point'�
  // ��������!!! ����� �� ���������.
  //             ����� ������ ���� ����������� ���� �� �� �����
  //             ������ � ������������ ���������
  text       : PChar;
  // �������� �������� ������� ��� ����������� ��� ������
  cursorId   : Integer;
  cursorInst : HINST;
end;

//-------------------------------------------------------------------------------
// ��������� ���������� ��� ������� ����� ��� ��������������� ����������
// ---
PHotPointDescription1 = ^HotPointDescription1;
HotPointDescription1  = record
  // ��������� ������ (������������), ������������� ����� hot point'�
  text           : PWideChar ; //����� ��� UNICODE ������ HotPointDescription::text
  bitmapId       : Integer;      // ������������� ������� ����������� �����
  bitmapIdMove   : Integer;  // ������������� ������� ����������� ����� ��� ����������� ��� ������
  bitmapIdSelect : Integer;// ������������� ������� ����������� ����� ��� �� ��������������
  bitmapInst     : HINST;
  bitmapCO       : Integer;   //������� ���������, � ������� �������������� ������ 0 - �� �����, 1 - �� ����, 2 - �� ���������
end;


PPChar = ^PChar;

PPILibHPObject = ^PILibHPObject;
PILibHPObject  = ^ILibHPObject;
ILibHPObject   = interface
['{234EBFE0-477B-11D4-A840-00504E05BD01}']
//public
  // ������������� � �������������� (Mouse L Btn Down)
  function LibHotPnt_Prepare( index : Integer ): LongBool; stdcall; //virtual; abstract;

  // ��������� �������������� (Mouse L Btn Up  )
  // success = TRUE  - ���������� ���������� ������
  //         = FALSE - �� ����� ������ ������ [Esc]
  function LibHotPnt_Complete( index : Integer; success : LongBool ): LongBool; stdcall; //virtual; abstract;

  // �������� ������ hot point'��
  // ��������!!! ������ ��� �������� ��� �������� �� ������ �������.
  //             ���������� ��������� � ������� points �������������� ������������
  //             � ������� LibHotPnt_Count()
  function LibHotPnt_Get( point : PHotPointDescription;
                          index : Integer ) : LongBool; stdcall; //virtual; abstract;

  // ���������� ��������� hot point'�
  function LibHotPnt_Set( point : PHotPointDescription;
                                    index : Integer ) : LongBool; stdcall; //virtual; abstract;

  // �������� ����� ��� ����������� ��������
  // ��������!!! � ���������� ������ ��������� �����,
  //             ���� �������� ������ �� ���������.
  function LibHotPnt_GetCursorText( index : Integer;
                                    Var text  : PChar ) : LongBool; stdcall; //virtual; abstract;

  // �������� ���� �������������� � ������ ������������ ���������
  // ��������!!! ���������� ���� ����� ��������������� � �������.
  //             ���������� ���� ����� ���������� ������� ������� DestroyMenu()
  function LibHotPnt_GetMenu : Integer; stdcall; //virtual; abstract;

  // ��������� ������� �� ����, ����������� �� LibHotPnt_GetMenu()
  // return = TRUE  - ��� �� ���������� � ��������� ������� � UNDO � �������� Hot point'��
  //        = FALSE - ������� �� ����������
  function LibHotPnt_ExecuteCommand( id : Integer ) : LongBool; stdcall; //virtual; abstract;

end;

//------------------------------------------------------------------------------
PLibHPTransData = ^LibHPTransData;
LibHPTransData  = record
  locData     : Pointer;       // ������ ��� ������������� �������
  _object     : PILibHPObject;
  loadedForMe : Boolean;       // ���������� ��������� ��� ������ � HotPoint'��� � �� ��������� ������ �� ���� ���������
end;

PPILibHPObject1 = ^PILibHPObject1;
PILibHPObject1  = ^ILibHPObject1;
ILibHPObject1   = interface
['{c8632527-f69f-4e22-9414-5f6433c33d07}']
  // ������������� � �������������� (Mouse L Btn Down)
  // �������� ������� �������� hot point
  // ��������!!! 1. ������� ���������� � ����� ��� ������ ����� (���������� ��������
  //                index), ���� �� ����� false
  //             2. �������� ��������� ���������� ������������� � �����������
  //                ������� ��������� �������
  function LibHotPnt_GetEx( point : PHotPointDescription1; index : Integer ): LongBool; stdcall; //virtual; abstract;

  // �������� ����� ��� ����������� ��������  ����� ��� UNICODE ������ ILibHPObject::LibHotPnt_GetCursorText
  // ��������!!! � ���������� ������ ��������� �����,
  //             ���� �������� ������ �� ���������.
  function LibHotPnt_GetCursorTextEx( index : Integer ): PWideChar; stdcall; //virtual; abstract;
  // �������� popup-���� �������������� � ������ ������������ ���������, ���� index = -1 �
  //                     � �������������� � ������ hot-������, ���� index > -1
  // ��������!!! ���������� ���� ����� ��������������� � �������.
  //             ���������� ���� ����� ���������� ������� ������� DestroyMenu()
  // �� ����� ���� �-�� ������ ���������� HMENU
  function LibHotPnt_GetMenuEx( index : Integer ) : LongBool; stdcall;   //virtual; abstract;

  // ���������� ��������� ������ �� ����, ����������� �� LibHotPnt_GetMenu() ��� LibHotPnt_GetMenuEx
  // TRUE - ������� �� ���� ��������
  // FALSE - ������� �� ���� �� ��������
  function LibHotPnt_UpdateCommand( id : Integer ) : LongBool; stdcall;  //virtual; abstract;

  // ������������� hot point
  function LibHotPnt_Select( index : Integer ): LongBool; stdcall;       //virtual; abstract;

  // ���������������� hot point
  function LibHotPnt_Unselect( index : Integer ): LongBool; stdcall;     //virtual; abstract;

end;

PPILibExternalObject = ^PILibExternalObject;
PILibExternalObject  = ^IILibExternalObject;
IILibExternalObject   = interface
['{234EBFE0-477B-11D4-A841-00504E05BD01}']
  function Lib_Move():       LongBool; stdcall;
  function Lib_Rotate():     LongBool; stdcall;
  function Lib_Transform():  LongBool; stdcall;
  function Lib_Delete():     LongBool; stdcall;
  function Lib_Restore():    LongBool; stdcall;
  function Lib_Deform():     LongBool; stdcall;
  function Lib_AddToModel(): LongBool; stdcall;
end;


implementation

end.
