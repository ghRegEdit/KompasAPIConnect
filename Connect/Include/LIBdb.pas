(***************************************
   System  : ������-������ API
   Module  : Libdb

****************************************)
unit LIBdb;
{$ALIGN OFF}

interface

uses
  Windows,SysUtils,Ltdefine;

const
{$IFDEF __LIGHT_VERSION__}
  APPTOOL5 = 'klAPI2D5.DLL';
{$ELSE}
  APPTOOL5 = 'kAPI2D5.dll';
{$ENDIF}

// ���������� ����� - 2    kAPI2D5.dll
//------------------------------------------------------------------------------
// ��������� �������� - ��������� ��������� ��� ���� ������.
// � ���� ������������ ����� ���� ���������� ������� ������ ���������.
// ��������� ����� ������ ��� ���������� ����� ������
// Relation( bd ); ������ ��������� ��������� ���  struct {
//   RInt("d");                                      short int d;  - �������� ����
//   RFloat("");                                     float     l;
//  EndRelation( );                                }
// ---
function Relation( db : reference  ): reference ; stdcall; // db - ��������� ��


// ���������� ����� - 3    kAPI2D5.dll
//------------------------------------------------------------------------------
//  ������� ��������� ��������� ��������
// ---
procedure EndRelation;   stdcall;


// ���������� ����� - 4    kAPI2D5.dll
//------------------------------------------------------------------------------
//  ��������� ������ ���� ������
//  ������� ���������� ��������� �� ������ ��� 0 � ������ �������
//  ������������ ����� ������������ ������� ������ �������� ���
// ---
function CreateDB( s : PChar ):reference; stdcall;  //s  - ��� �� "TXT_DB"- ��������� ����  "ODBC_DB" - ODBC ����


// ���������� ����� - 935    kAPI2D5.dll
//------------------------------------------------------------------------------
//  ��������� ������ ���� ������
//  ������� ���������� ��������� �� ������ ��� 0 � ������ �������
//  ������������ ����� ������������ ������� ������ �������� ���  ( Unicode )
// ---
function CreateDBW( s : PWideChar ):reference; stdcall;  //s  - ��� �� "TXT_DB"- ��������� ����  "ODBC_DB" - ODBC ����


// ���������� ����� - 5    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ������ ���� ������. ��������� ��� ���������, ������������ � ����, ���� ������������� � ���������� ����� ������
// ������� ���������� 1  � ������ ������ ��� 0 � ������ �������
// ---
function DeleteDB( db : reference ) : integer; stdcall;

// ���������� ����� - 6    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ������ �� � ���������� ����� ������
// ������� ���������� 1  � ������ ������ ��� 0 � ������ �������
// ---
function ConnectDB( db : reference; //��������� �� ������ ��
                    DBName : PChar ) : integer; stdcall;//��� �� ( ��� ODBC - ��� �� � �������������� ODBC, ��� ���������� ����� - ��� ����� )


// ���������� ����� - 936    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ������ �� � ���������� ����� ������ ( Unicode )
// ������� ���������� 1  � ������ ������ ��� 0 � ������ �������
// ---
function ConnectDBW( db : reference; //��������� �� ������ ��
                     DBName : PWideChar ) : integer; stdcall;//��� �� ( ��� ODBC - ��� �� � �������������� ODBC, ��� ���������� ����� - ��� ����� )

// ���������� ����� - 7    kAPI2D5.dll
//------------------------------------------------------------------------------
//  �������  �������� ������������� � ���������� ����� ������.
// ������� ���������� 1  � ������ ������ ��� 0 � ������ �������.
// ---
function DisconnectDB( db : reference ) : integer; stdcall;


//------------------------------------------------------------------------------
// ���������� ����� - 8    kAPI2D5.dll
// ---
function FreeStatement( db     : reference;
                        r      : reference;
                        fOptio : Word ) : integer; stdcall;


// ���������� ����� - 9    kAPI2D5.dll
//------------------------------------------------------------------------------
// ���������� ������ ��� ������� ��
// Select d, s, p from bolt where d = 10  - ������ ������� ������� �� ��, ��� d, s, p - �������� ������� ��� * ��� ���� �������.
//                                          ���  - ������ ������� "2, 4, 7" ��� ���������� �����, ������� � ������� ����� �������.
//                                          bolt - ��� ������� � �� ��� "" ��� ���� ������� ���������� �����, d - ��� ������� � ���������
//                                          ����� �������������� ��������� r �� ���������.
// Insert into bolt (d,p,s) values( 10, 1.5, 14 ) - ������ ������� ��� ������� ������ � ������� bolt
// Delete from bolt where d = 10                  - ������ ������� ��� �������� ������ �� ������� bolt
// Update bolt set p = 2.5, s = 20 where d =10    - ������ ������� ��� ������ ������ � ������ ������� bolt
// ��� ODBC ��� ��������� �� ������������ � ������ Insert, Delete, Update. ��� ���������� ����� ���������
// � ���� ������ ����������, ����� ����������  ����� �������
// ---
function DoStatement( db    :  reference;
                      r     :  reference;
                      stSQL :  PChar ) : integer; stdcall;


// ���������� ����� - 9    kAPI2D5.dll
//------------------------------------------------------------------------------
// ���������� ������ ��� ������� ��  ( Unicode )
// Select d, s, p from bolt where d = 10  - ������ ������� ������� �� ��, ��� d, s, p - �������� ������� ��� * ��� ���� �������.
//                                          ���  - ������ ������� "2, 4, 7" ��� ���������� �����, ������� � ������� ����� �������.
//                                          bolt - ��� ������� � �� ��� "" ��� ���� ������� ���������� �����, d - ��� ������� � ���������
//                                          ����� �������������� ��������� r �� ���������.
// Insert into bolt (d,p,s) values( 10, 1.5, 14 ) - ������ ������� ��� ������� ������ � ������� bolt
// Delete from bolt where d = 10                  - ������ ������� ��� �������� ������ �� ������� bolt
// Update bolt set p = 2.5, s = 20 where d =10    - ������ ������� ��� ������ ������ � ������ ������� bolt
// ��� ODBC ��� ��������� �� ������������ � ������ Insert, Delete, Update. ��� ���������� ����� ���������
// � ���� ������ ����������, ����� ����������  ����� �������
// ---
function DoStatementW( db    :  reference;
                       r     :  reference;
                       stSQL :  PWideChar ) : integer; stdcall;


// ���������� ����� - 10    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ������. ������������� ��� ������� Select...
// ������� ��������� 1, ���� ��� ���������� �� ��������� ������. 0 - ���� ��� ������  ���������
// ---
function ReadRecord(  db : reference;
                      r  : reference;
                      v  : pointer ) : integer; stdcall;

// ���������� ����� - 11    kAPI2D5.dll
//------------------------------------------------------------------------------
// �������� ������� ��� ��������� �������. ������������� ��� ������� Select...
// ������ ������� - "where d > 10 and d < 14"
// ---
function Condition( db   : reference;
                    r    : reference;
                    stSQL: PChar     ): integer; stdcall;


// ���������� ����� - 938    kAPI2D5.dll
//------------------------------------------------------------------------------
// �������� ������� ��� ��������� �������. ������������� ��� ������� Select...
// ������ ������� - "where d > 10 and d < 14"
// ---
function ConditionW( db   : reference;
                     r    : reference;
                     stSQL: PWideChar   ): integer; stdcall;


// ���������� ����� - 12    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  double � ���������  ��
// ---
function  RDouble( name : PChar ) : integer;
                    stdcall;


// ���������� ����� - 939    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ���� double � ���������  ��
// ---
function  RDoubleW( name : PWideChar ) : integer;
                    stdcall;


// ���������� ����� - 13    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  float � ���������  ��
// ---
function  RFloat( name : PChar ) : integer; stdcall;


// ���������� ����� - 940    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  float � ���������  ��
// ---
function  RFloatW( name : PWideChar ) : integer; stdcall;


// ���������� ����� - 14    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  short int � ���������  ��
// ---
function RInt( name : PChar ) : integer; stdcall;


// ���������� ����� - 941 kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  short int � ���������  ��
// ---
function RIntW( name : PWideChar ) : integer; stdcall;


// ���������� ����� - 15    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  int ��� long int � ���������  ��
// ---
function RLong( name : PChar ) : integer; stdcall;


// ���������� ����� - 942  kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  int ��� long int � ���������  ��
// ---
function RLongW( name : PWideChar ) : integer; stdcall;


// ���������� ����� - 16    kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  char[size] � ���������  ��
// ---
function RChar( name : PChar;  //��� �������; ������������� ��� TXT ���
                size : integer; //������ ������
                tip  : longint) : integer; stdcall;//��� ������ ���������� � ��; ������������� ��� ODBC ���


// ���������� ����� - 943  kAPI2D5.dll
//--------------------------------------------------------------------------
//  �������� ����  WideChar[size] � ���������  ��
// ---
function RCharW( name : PWideChar; // ��� �������; ������������� ��� TXT ���
                 size : integer;   // ������ ������
                 tip  : longint) : integer; stdcall; // ��� ������ ���������� � ��; ������������� ��� ODBC ���


// ���������� ����� - 17  kAPI2D5.dll
//--------------------------------------------------------------------------
// �������� ���������� �����
// ---
function OpenTextFile( fileName : PChar ) : reference; stdcall;


// ���������� ����� - 944  kAPI2D5.dll
//--------------------------------------------------------------------------
// �������� ���������� ����� ( Unicode )
// ---
function OpenTextFileW( fileName : PWideChar ) : reference; stdcall;


// ���������� ����� - 18    kAPI2D5.dll
//--------------------------------------------------------------------------
// �������� ���������� �����
// ---
procedure CloseTextFile( f : reference ); stdcall;


// ���������� ����� - 19    kAPI2D5.dll
//--------------------------------------------------------------------------
// ������ ������ �� ���������� �����
// ---
function ReadStrFromTextFile( f    : reference;
                              buff : PChar;
                              numb : integer ): integer; stdcall;


// ���������� ����� - 946   kAPI2D5.dll
//--------------------------------------------------------------------------
// ������ ������ �� ���������� �����
// ---
function ReadStrFromTextFileW( f    : reference;
                              buff : PWideChar;
                              numb : integer ): integer; stdcall;


// ���������� ����� - 20 kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ��� �������.
// ������� ��������� 1, ���� ��� ���������� �� ��������� ����� ������.
// 0 - ���� ��� ����� ������ ���������
// ---
function GetTableName( db : Reference;       // db - ��������� ��
                       tableName : PChar;    // ���������� ��� �������
                       size : Integer;       // ������ ������
                       firstOrNext : Byte  ) : Integer; stdcall;  // F - ������ �������, N - ���������

// ���������� ����� - 935    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ��� �������. ( Unicode )
// ������� ��������� 1, ���� ��� ���������� �� ��������� ����� ������.
// 0 - ���� ��� ����� ������ ���������
// ---
function GetTableNameW( db          : Reference;    // db - ��������� ��
                        tableName   : PWideChar;    // ���������� ��� �������
                        size        : Integer;      // ������ ������
                        firstOrNext : Byte  ) : Integer; stdcall;  // F - ������ �������, N - ���������


// ���������� ����� - 21    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ��� ������� �������.
// ������� ��������� 1, ���� ��� ���������� �� ��������� ����� ������� ������.
// 0 - ���� ��� ����� ������� ������ ���������
// ---
function GetColumnName( db : Reference;      // db - ��������� ��
                        tableName : PChar;   // ODBC-��� �������,��������� ��-��� �����
                        columnName : PChar;  // ����������� ��� �������
                        size : Integer;      // ������ ������
                        firstOrNext : Byte ) : Integer; stdcall;  // F - ������ ������� N - ���������

// ���������� ����� - 21    kAPI2D5.dll
//------------------------------------------------------------------------------
// ������� ��� ������� �������.
// ������� ��������� 1, ���� ��� ���������� �� ��������� ����� ������� ������.
// 0 - ���� ��� ����� ������� ������ ���������
// ---
function GetColumnNameW( db          : Reference;  // db - ��������� ��
                         tableName   : PWideChar;  // ODBC-��� �������,��������� ��-��� �����
                         columnName  : PWideChar;  // ����������� ��� �������
                         size        : Integer;    // ������ ������
                         firstOrNext : Byte ) : Integer; stdcall;  // F - ������ ������� N - ���������


// ���������� ����� - 22    kAPI2D5.dll
//------------------------------------------------------------------------------
// �������� ���������� � ODBC
// ---
function IsODBCOkey : Integer; stdcall;

implementation

function  Relation; external APPTOOL5 Name 'Relation'
procedure EndRelation; external APPTOOL5 Name 'EndRelation'
function  CreateDB; external APPTOOL5 Name 'CreateDB'
function  DeleteDB; external APPTOOL5 Name 'DeleteDB'
function  ConnectDB; external APPTOOL5 Name 'ConnectDB'
function  DisconnectDB; external APPTOOL5 Name 'DisconnectDB'
function  FreeStatement; external APPTOOL5 Name 'FreeStatement'
function  DoStatement; external APPTOOL5 Name 'DoStatement'
function  ReadRecord; external APPTOOL5 Name 'ReadRecord'
function  Condition; external APPTOOL5 Name 'Condition'
function  RDouble; external APPTOOL5 Name 'RDouble'
function  RFloat; external APPTOOL5 Name 'RFloat'
function  RInt; external APPTOOL5 Name 'RInt'
function  RLong; external APPTOOL5 Name 'RLong'
function  RChar; external APPTOOL5 Name 'RChar'
function  OpenTextFile; external APPTOOL5 Name 'OpenTextFile'
procedure CloseTextFile; external APPTOOL5 Name 'CloseTextFile'
function  ReadStrFromTextFile; external APPTOOL5 Name 'ReadStrFromTextFile'
function  GetTableName; external APPTOOL5 Name 'GetTableName'
function  GetColumnName; external APPTOOL5 Name 'GetColumnName'
function  IsODBCOkey; external APPTOOL5 Name 'IsODBCOkey'

function  CreateDBW; external APPTOOL5 Name 'CreateDBW'
function  ConnectDBW; external APPTOOL5 Name 'ConnectDBW'
function  DoStatementW; external APPTOOL5 Name 'DoStatementW'
function  ConditionW; external APPTOOL5 Name 'ConditionW'
function  RDoubleW; external APPTOOL5 Name 'RDoubleW'
function  RFloatW; external APPTOOL5 Name 'RFloatW'
function  RIntW; external APPTOOL5 Name 'RIntW'
function  RLongW; external APPTOOL5 Name 'RLongW'
function  RCharW; external APPTOOL5 Name 'RCharW'
function  OpenTextFileW; external APPTOOL5 Name 'OpenTextFileW'
function  ReadStrFromTextFileW; external APPTOOL5 Name 'ReadStrFromTextFileW'
function  GetTableNameW; external APPTOOL5 Name 'GetTableNameW'
function  GetColumnNameW; external APPTOOL5 Name 'GetColumnNameW'

end.
