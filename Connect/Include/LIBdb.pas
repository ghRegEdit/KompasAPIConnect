(***************************************
   System  : КОМПАС-График API
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

// Экспортный номер - 2    kAPI2D5.dll
//------------------------------------------------------------------------------
// Составной оператор - открывает отношение для базы данных.
// У базы одновременно может быть определено сколько угодно отношений.
// Формирует буфер памяти для считывания одной записи
// Relation( bd ); Пример формирует отношение для  struct {
//   RInt("d");                                      short int d;  - ключевое поле
//   RFloat("");                                     float     l;
//  EndRelation( );                                }
// ---
function Relation( db : reference  ): reference ; stdcall; // db - указатель БД


// Экспортный номер - 3    kAPI2D5.dll
//------------------------------------------------------------------------------
//  Функция завершает составной оператор
// ---
procedure EndRelation;   stdcall;


// Экспортный номер - 4    kAPI2D5.dll
//------------------------------------------------------------------------------
//  Создается объект база данных
//  Функция возвращает указатель на объект или 0 в случае неудачи
//  Одновременно может существовать сколько угодно объектов баз
// ---
function CreateDB( s : PChar ):reference; stdcall;  //s  - тип БД "TXT_DB"- текстовый файл  "ODBC_DB" - ODBC база


// Экспортный номер - 935    kAPI2D5.dll
//------------------------------------------------------------------------------
//  Создается объект база данных
//  Функция возвращает указатель на объект или 0 в случае неудачи
//  Одновременно может существовать сколько угодно объектов баз  ( Unicode )
// ---
function CreateDBW( s : PWideChar ):reference; stdcall;  //s  - тип БД "TXT_DB"- текстовый файл  "ODBC_DB" - ODBC база


// Экспортный номер - 5    kAPI2D5.dll
//------------------------------------------------------------------------------
// Удалить объект базы данных. Очищаются все отношения, подключенные к базе, идет рассоединение с конкретной базой данных
// Функция возвращает 1  в случае успеха или 0 в случае неудачи
// ---
function DeleteDB( db : reference ) : integer; stdcall;

// Экспортный номер - 6    kAPI2D5.dll
//------------------------------------------------------------------------------
// Связать объект БД с конкретной базой данных
// Функция возвращает 1  в случае успеха или 0 в случае неудачи
// ---
function ConnectDB( db : reference; //указатель на объект БД
                    DBName : PChar ) : integer; stdcall;//имя БД ( для ODBC - имя БД в администраторе ODBC, для текстового файла - имя файла )


// Экспортный номер - 936    kAPI2D5.dll
//------------------------------------------------------------------------------
// Связать объект БД с конкретной базой данных ( Unicode )
// Функция возвращает 1  в случае успеха или 0 в случае неудачи
// ---
function ConnectDBW( db : reference; //указатель на объект БД
                     DBName : PWideChar ) : integer; stdcall;//имя БД ( для ODBC - имя БД в администраторе ODBC, для текстового файла - имя файла )

// Экспортный номер - 7    kAPI2D5.dll
//------------------------------------------------------------------------------
//  Функция  проводит рассоединение с конкретной базой данных.
// Функция возвращает 1  в случае успеха или 0 в случае неудачи.
// ---
function DisconnectDB( db : reference ) : integer; stdcall;


//------------------------------------------------------------------------------
// Экспортный номер - 8    kAPI2D5.dll
// ---
function FreeStatement( db     : reference;
                        r      : reference;
                        fOptio : Word ) : integer; stdcall;


// Экспортный номер - 9    kAPI2D5.dll
//------------------------------------------------------------------------------
// Установить запрос для объекта БД
// Select d, s, p from bolt where d = 10  - пример запроса выборки из БД, где d, s, p - названия колонок или * для всех колонок.
//                                          или  - номера колонок "2, 4, 7" для текстового файла, начиная с единицы слева направо.
//                                          bolt - имя таблицы в БД или "" для всех колонок текстового файла, d - имя колонки в отношении
//                                          Нужен действительный указатель r на отношение.
// Insert into bolt (d,p,s) values( 10, 1.5, 14 ) - пример запроса для вставки строки в таблицу bolt
// Delete from bolt where d = 10                  - пример запроса для удаления строки из таблицы bolt
// Update bolt set p = 2.5, s = 20 where d =10    - пример запроса для замены данных в строке таблицы bolt
// Для ODBC баз отношение не объязательно в случае Insert, Delete, Update. Для текстового файла отношение
// в этом случае необходимо, чтобы определить  имена колонок
// ---
function DoStatement( db    :  reference;
                      r     :  reference;
                      stSQL :  PChar ) : integer; stdcall;


// Экспортный номер - 9    kAPI2D5.dll
//------------------------------------------------------------------------------
// Установить запрос для объекта БД  ( Unicode )
// Select d, s, p from bolt where d = 10  - пример запроса выборки из БД, где d, s, p - названия колонок или * для всех колонок.
//                                          или  - номера колонок "2, 4, 7" для текстового файла, начиная с единицы слева направо.
//                                          bolt - имя таблицы в БД или "" для всех колонок текстового файла, d - имя колонки в отношении
//                                          Нужен действительный указатель r на отношение.
// Insert into bolt (d,p,s) values( 10, 1.5, 14 ) - пример запроса для вставки строки в таблицу bolt
// Delete from bolt where d = 10                  - пример запроса для удаления строки из таблицы bolt
// Update bolt set p = 2.5, s = 20 where d =10    - пример запроса для замены данных в строке таблицы bolt
// Для ODBC баз отношение не объязательно в случае Insert, Delete, Update. Для текстового файла отношение
// в этом случае необходимо, чтобы определить  имена колонок
// ---
function DoStatementW( db    :  reference;
                       r     :  reference;
                       stSQL :  PWideChar ) : integer; stdcall;


// Экспортный номер - 10    kAPI2D5.dll
//------------------------------------------------------------------------------
// Считать запись. Действительно для запроса Select...
// Функция возращает 1, если еще существуют не считанные записи. 0 - если все записи  прочитаны
// ---
function ReadRecord(  db : reference;
                      r  : reference;
                      v  : pointer ) : integer; stdcall;

// Экспортный номер - 11    kAPI2D5.dll
//------------------------------------------------------------------------------
// Изменить условие для заданного запроса. Действительно для запроса Select...
// Пример условия - "where d > 10 and d < 14"
// ---
function Condition( db   : reference;
                    r    : reference;
                    stSQL: PChar     ): integer; stdcall;


// Экспортный номер - 938    kAPI2D5.dll
//------------------------------------------------------------------------------
// Изменить условие для заданного запроса. Действительно для запроса Select...
// Пример условия - "where d > 10 and d < 14"
// ---
function ConditionW( db   : reference;
                     r    : reference;
                     stSQL: PWideChar   ): integer; stdcall;


// Экспортный номер - 12    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  double в отношение  БД
// ---
function  RDouble( name : PChar ) : integer;
                    stdcall;


// Экспортный номер - 939    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле double в отношение  БД
// ---
function  RDoubleW( name : PWideChar ) : integer;
                    stdcall;


// Экспортный номер - 13    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  float в отношение  БД
// ---
function  RFloat( name : PChar ) : integer; stdcall;


// Экспортный номер - 940    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  float в отношение  БД
// ---
function  RFloatW( name : PWideChar ) : integer; stdcall;


// Экспортный номер - 14    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  short int в отношение  БД
// ---
function RInt( name : PChar ) : integer; stdcall;


// Экспортный номер - 941 kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  short int в отношение  БД
// ---
function RIntW( name : PWideChar ) : integer; stdcall;


// Экспортный номер - 15    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  int или long int в отношение  БД
// ---
function RLong( name : PChar ) : integer; stdcall;


// Экспортный номер - 942  kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  int или long int в отношение  БД
// ---
function RLongW( name : PWideChar ) : integer; stdcall;


// Экспортный номер - 16    kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  char[size] в отношение  БД
// ---
function RChar( name : PChar;  //имя колонки; действительно для TXT баз
                size : integer; //размер буфера
                tip  : longint) : integer; stdcall;//тип данных хранящийся в БД; действительно для ODBC баз


// Экспортный номер - 943  kAPI2D5.dll
//--------------------------------------------------------------------------
//  Вводится поле  WideChar[size] в отношение  БД
// ---
function RCharW( name : PWideChar; // имя колонки; действительно для TXT баз
                 size : integer;   // размер буфера
                 tip  : longint) : integer; stdcall; // тип данных хранящийся в БД; действительно для ODBC баз


// Экспортный номер - 17  kAPI2D5.dll
//--------------------------------------------------------------------------
// Открытие текстового файла
// ---
function OpenTextFile( fileName : PChar ) : reference; stdcall;


// Экспортный номер - 944  kAPI2D5.dll
//--------------------------------------------------------------------------
// Открытие текстового файла ( Unicode )
// ---
function OpenTextFileW( fileName : PWideChar ) : reference; stdcall;


// Экспортный номер - 18    kAPI2D5.dll
//--------------------------------------------------------------------------
// закрытие текстового файла
// ---
procedure CloseTextFile( f : reference ); stdcall;


// Экспортный номер - 19    kAPI2D5.dll
//--------------------------------------------------------------------------
// Чтение строки из текстового файла
// ---
function ReadStrFromTextFile( f    : reference;
                              buff : PChar;
                              numb : integer ): integer; stdcall;


// Экспортный номер - 946   kAPI2D5.dll
//--------------------------------------------------------------------------
// Чтение строки из текстового файла
// ---
function ReadStrFromTextFileW( f    : reference;
                              buff : PWideChar;
                              numb : integer ): integer; stdcall;


// Экспортный номер - 20 kAPI2D5.dll
//------------------------------------------------------------------------------
// Считать имя таблицы.
// Функция возращает 1, если еще существуют не считанные имена таблиц.
// 0 - если все имена таблиц прочитаны
// ---
function GetTableName( db : Reference;       // db - указатель БД
                       tableName : PChar;    // возвращает имя таблицы
                       size : Integer;       // размер буфера
                       firstOrNext : Byte  ) : Integer; stdcall;  // F - первая таблица, N - следующая

// Экспортный номер - 935    kAPI2D5.dll
//------------------------------------------------------------------------------
// Считать имя таблицы. ( Unicode )
// Функция возращает 1, если еще существуют не считанные имена таблиц.
// 0 - если все имена таблиц прочитаны
// ---
function GetTableNameW( db          : Reference;    // db - указатель БД
                        tableName   : PWideChar;    // возвращает имя таблицы
                        size        : Integer;      // размер буфера
                        firstOrNext : Byte  ) : Integer; stdcall;  // F - первая таблица, N - следующая


// Экспортный номер - 21    kAPI2D5.dll
//------------------------------------------------------------------------------
// Считать имя колонки таблицы.
// Функция возращает 1, если еще существуют не считанные имена колонок таблиц.
// 0 - если все имена колонок таблиц прочитаны
// ---
function GetColumnName( db : Reference;      // db - указатель БД
                        tableName : PChar;   // ODBC-имя таблицы,текстовая БД-имя файла
                        columnName : PChar;  // возвращаент имя колонки
                        size : Integer;      // размер буфера
                        firstOrNext : Byte ) : Integer; stdcall;  // F - первая колонка N - следующая

// Экспортный номер - 21    kAPI2D5.dll
//------------------------------------------------------------------------------
// Считать имя колонки таблицы.
// Функция возращает 1, если еще существуют не считанные имена колонок таблиц.
// 0 - если все имена колонок таблиц прочитаны
// ---
function GetColumnNameW( db          : Reference;  // db - указатель БД
                         tableName   : PWideChar;  // ODBC-имя таблицы,текстовая БД-имя файла
                         columnName  : PWideChar;  // возвращаент имя колонки
                         size        : Integer;    // размер буфера
                         firstOrNext : Byte ) : Integer; stdcall;  // F - первая колонка N - следующая


// Экспортный номер - 22    kAPI2D5.dll
//------------------------------------------------------------------------------
// проверка соединения с ODBC
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
