unit LTool3D;

interface

uses
  Windows, Ltdefine, LDefin2D, LDefin3D, ks3DCOM_TLB;


type
  Reference = type LongInt;
  // ������� �������� ����� ��� ���������� ��������
  USERSELECTFILTERPROC = function( iEntity : PIEntity ) : Integer; stdcall;
  // ������� �������� ����� ��������
  USERSELECTCALLBACKPROC = function( iEntity : PIEntity; iRequestInfo : PIRequestInfo ) : Integer;


const

{$IFNDEF __LIGHT_VERSION__}
  API3DDLL = 'kAPI3D5.dll';
{$ELSE}
  API3DDLL = 'klAPI3D5.dll';
{$ENDIF}

// ��������� -------------------------------------------------------------------
IID_IPlaneDefaultXOYDefinition: TGUID = '{7AA0E540-0324-11D4-A3A3-00C026EE094F}';
IID_IPlaneDefaultXOZDefinition: TGUID = '{7AA0E540-0325-11D4-A30E-00C026EE094F}';
IID_IPlaneDefaultYOZDefinition: TGUID = '{7AA0E540-0326-11D4-A30E-00C026EE094F}';
IID_IDefaultCSDefinition      : TGUID = '{7AA0E540-0327-11D4-A30E-00C026EE094F}';

// �������� --------------------------------------------------------------------
IID_IHoleDefinition           : TGUID = '{7AA0E540-0383-11D4-A30E-00C026EE094F}';


// ���������� ����� - 2
//-----------------------------------------------------------------------------
// ���������� ��������� �� ������ - 3d ���������
//---
function ksGet3dDocument : PIDocument3D; stdcall;

// ���������� ����� - 3   kAPI3D5.dll
//------------------------------------------------------------------------------
// �������� ��������� �� �������� 3d ��������
// ���������� NULL, ���� ��������� ��������� ���
// ---
function ksGetActive3dDocument : PIDocument3D; stdcall;

// ���������� ����� - 4   kAPI3D5.dll
//------------------------------------------------------------------------------
// �������� ��������� �� 3d ��������, ��������������� ����������� ���������
// ���������� NULL, ���� ��������� ���
// ---
function ksGet3dDocumentFromReference( doc : Reference ): PIDocument3D; stdcall;

// ���������� ����� - 5   kAPI3D5.dll
//------------------------------------------------------------------------------
// �������� ��������� �� 3d ��������, ��������������� ����������� ����������
// ���������� NULL, ���� ��������� ���
// ---
function ksGetReferenceFrom3dDocument( doc : PIDocument3D{LPDOCUMENT3D} ) : Reference; stdcall;

// ���������� ����� - 8   kAPI3D5.dll
//------------------------------------------------------------------------------
// �������� ��������� �� ��������� ������������ �������
// ---
function ksGetModelLibrary : PIModelLibrary{LPMODELLIBRARY}; stdcall;

// ���������� ����� - 10   kAPI3D5.dll
//-----------------------------------------------------------------------------
//  �������  ������� �� ������ ���� �������� ��  ���������� libname
//  ���� libname = NULL- ��� �������� ������� � ���������
//  ������� ���������� ��������� �� �������  ��� 0 ��� �������
//  pObj - ����� ���� :
//       NULL ��� LPDOCUMENT3D - ������� � ���������
//       LPFEATURECOLLECTION   - ������� ���������
//       LPFEATURE             - ������� � ������������� �������
//       ������� ����� �������� �� ���� �������� ������ ����������, ����� �����������, ����������, ������ ����������.
//
// ---
function ksCreateAttr3D( pObj   : PIUnknown;              // ��������� ������� � �������� ������������ �������
                         attr   : PksAttribute;           // ���������� �� ��������
                         attrID : Double;                 // ���������� ����� ����
                         libname: PChar ) : PIAttribute3D;// ��� ���������� ����� ���������
                         stdcall;

// ���������� ����� - 11   kAPI3D5.dll
//------------------------------------------------------------------------------
//  ������� �������
//  ������� ���������� 1 � ������ ������ ��� 0 ��� �������
// ---
function ksDeleteAttr3D( pObj     : PIUnknown;            //  ��������� ������� � �������� ��������� �������
                         pAttr    : PIAttribute3D;        //  ���������  ��������
                         password : PChar ) : Integer;    //  ������ ��������
                         stdcall;

// ���������� ����� - 12   kAPI3D5.dll
//------------------------------------------------------------------------------
//  ��������� ������ ��� ��������� ��������� ������� � ������ ������� ��������.
//  ������� ����������  ��������� �� ������� � ������ ������ ��� 0 ��� �������.
// ---
function ksChoiceAttr3D( pObj     : PIUnknown )           // ��������� ������� � �������� ���������� ��������
                                  : PIAttribute3D; stdcall;

// ���������� ����� - 13   kAPI3D5.dll
//------------------------------------------------------------------------------
//  �������� ��������� ���������� �������� 3D.
// ---
function ksGetObjectsFilter3D : PIObjectsFilter3D; stdcall;

// ���������� ����� - 14   kAPI3D5.dll
//-----------------------------------------------------------------------------
//  �������  ������� �� ������ ���� �������� ��  ���������� libname
//  ���� libname = NULL- ��� �������� ������� � ���������
//  ������� ���������� ��������� �� �������  ��� 0 ��� �������
//  pObj - ����� ���� :
//       NULL ��� LPDOCUMENT3D - ������� � ���������
//       LPFEATURECOLLECTION   - ������� ���������
//       LPFEATURE             - ������� � ������������� �������
//       ������� ����� �������� �� ���� �������� ������ ����������, ����� �����������, ����������, ������ ����������.
//
// sourcePart - ����� ����:
//       NULL ��� pTop_Part    - ������� ����� ������ � ������� ���������
//       ! = NULL              - ������ ��� ��������� ����������� � ������ - ������� ����� ������ � ���������-���������
// ---
function ksCreateAttr3DEx( pObj      : PIUnknown;                      // ��������� ������� � �������� ������������ �������
                         sorcePart : PIPart;                           // �������� - ��������
                         attr      : PksAttribute;                     // ���������� �� ��������
                         attrID    : Double;                           // ���������� ����� ����
                         libname   : PChar ) : PIAttribute3D; stdcall; // ��� ���������� ����� ���������


// ���������� ����� - 11   kAPI3D5.dll
//------------------------------------------------------------------------------
//  ������� �������
//  ������� ���������� 1 � ������ ������ ��� 0 ��� �������
// (Unicode)
// ---
function ksDeleteAttr3DW( pObj     : PIUnknown;             //  ��������� ������� � �������� ��������� �������
                          pAttr    : PIAttribute3D;         //  ���������  ��������
                          password : PWideChar ) : Integer; //  ������ ��������
                          stdcall;

// ���������� ����� - 17   kAPI3D5.dll
//-----------------------------------------------------------------------------
//  �������  ������� �� ������ ���� �������� ��  ���������� libname
//  ���� libname = NULL- ��� �������� ������� � ���������
//  ������� ���������� ��������� �� �������  ��� 0 ��� �������
//  pObj - ����� ���� :
//       NULL ��� LPDOCUMENT3D - ������� � ���������
//       LPFEATURECOLLECTION   - ������� ���������
//       LPFEATURE             - ������� � ������������� �������
//       ������� ����� �������� �� ���� �������� ������ ����������, ����� �����������, ����������, ������ ����������.
//
// sourcePart - ����� ����:
//       NULL ��� pTop_Part    - ������� ����� ������ � ������� ���������
//       ! = NULL              - ������ ��� ��������� ����������� � ������ - ������� ����� ������ � ���������-���������
// (Unicode)
// ---
function ksCreateAttr3DExW( pObj      : PIUnknown;                   // ��������� ������� � �������� ������������ �������
                            sorcePart : PIPart;                      // �������� - ��������
                            attr      : PksAttributeW;               // ���������� �� ��������
                            attrID    : Double;                      // ���������� ����� ����
                            libname   : PWideChar ) : PIAttribute3D; // ��� ���������� ����� ���������
                            stdcall;
implementation

function  ksGet3dDocument;              external API3DDLL Name 'ksGet3dDocument';
function  ksGetActive3dDocument;        external API3DDLL Name 'ksGetActive3dDocument';
function  ksGet3dDocumentFromReference; external API3DDLL Name 'ksGet3dDocumentFromReference';
function  ksGetReferenceFrom3dDocument; external API3DDLL Name 'ksGetReferenceFrom3dDocument';
function  ksGetModelLibrary;            external API3DDLL Name 'ksGetModelLibrary';
function  ksCreateAttr3D;               external API3DDLL Name 'ksCreateAttr3D';
function  ksDeleteAttr3D;               external API3DDLL Name 'ksDeleteAttr3D';
function  ksChoiceAttr3D;               external API3DDLL Name 'ksChoiceAttr3D';
function  ksGetObjectsFilter3D;         external API3DDLL Name 'ksGetObjectsFilter3D';
function  ksCreateAttr3DEx;             external API3DDLL Name 'ksCreateAttr3DEx';
function  ksDeleteAttr3DW;              external API3DDLL Name 'ksDeleteAttr3DW';
function  ksCreateAttr3DExW;            external API3DDLL Name 'ksCreateAttr3DExW';

end.
