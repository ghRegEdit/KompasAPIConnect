////////////////////////////////////////////////////////////////////////////////
//
// LIBDB.H  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LIBDB_H
#define __LIBDB_H

#define LODBC_FUNC WINAPI

typedef  long reference;


extern "C" {


// Экспортный номер - 2    libodbc.dll
//------------------------------------------------------------------------------
// Составной оператор - открывает отношение для базы данных.
// У базы одновременно может быть определено сколько угодно отношений.
// Формирует буфер памяти для считывания одной записи
// Relation( bd ); Пример формирует отношение для  struct {
//   RInt("d");                                      short int d;  - ключевое поле
//   RFloat("");                                     float     l;
//  EndRelation( );                                }
// ---
reference LODBC_FUNC Relation( reference db );  // db - указатель БД

// Экспортный номер - 3    libodbc.dll
//------------------------------------------------------------------------------
//  Функция завершает составной оператор
// ---
void      LODBC_FUNC EndRelation( );

// Экспортный номер - 4    libodbc.dll
//------------------------------------------------------------------------------
//  Создается объект база данных
//  Функция возвращает указатель на объект или 0 в случае неудачи
//  Одновременно может существовать сколько угодно объектов баз
// ---
reference LODBC_FUNC CreateDB( char *s );  //s  - тип БД "TXT_DB"- текстовый файл  "ODBC_DB" - ODBC база

// Экспортный номер - 935    libodbc.dll
//------------------------------------------------------------------------------
//  Создается объект база данных
//  Функция возвращает указатель на объект или 0 в случае неудачи
//  Одновременно может существовать сколько угодно объектов баз
//  (Unicode)
// ---
reference LODBC_FUNC CreateDBW( LPWSTR s );  //s  - тип БД "TXT_DB"- текстовый файл  "ODBC_DB" - ODBC база

#ifdef _UNICODE
#define CreateDBT  CreateDBW
#else
#define CreateDBT  CreateDB
#endif // !UNICODE

// Экспортный номер - 5    libodbc.dll
//------------------------------------------------------------------------------
// Удалить объект базы данных. Очищаются все отношения, подключенные к базе, идет рассоединение с конкретной базой данных
// Функция возвращает 1  в случае успеха или 0 в случае неудачи
// ---
int       LODBC_FUNC DeleteDB( reference db );

// Экспортный номер - 6    libodbc.dll
//------------------------------------------------------------------------------
// Связать объект БД с конкретной базой данных
// Функция возвращает 1  в случае успеха или 0 в случае неудачи
// ---
int       LODBC_FUNC ConnectDB( reference db, //указатель на объект БД
															  char * DBName );//имя БД ( для ODBC - имя БД в администраторе ODBC, для текстового файла - имя файла )

// Экспортный номер - 936    libodbc.dll
//------------------------------------------------------------------------------
// Связать объект БД с конкретной базой данных
// Функция возвращает 1  в случае успеха или 0 в случае неудачи
// (Unicode)
// ---
int       LODBC_FUNC ConnectDBW( reference db, //указатель на объект БД
															   LPWSTR DBName );//имя БД ( для ODBC - имя БД в администраторе ODBC, для текстового файла - имя файла )

#ifdef _UNICODE
#define ConnectDBT  ConnectDBW
#else
#define ConnectDBT  ConnectDB
#endif // !UNICODE


// Экспортный номер - 7    libodbc.dll
//------------------------------------------------------------------------------
//  Функция  проводит рассоединение с конкретной базой данных.
// Функция возвращает 1  в случае успеха или 0 в случае неудачи.
// ---
int       LODBC_FUNC DisconnectDB( reference db );

// Экспортный номер - 8    libodbc.dll
int       LODBC_FUNC FreeStatement( reference db,
																	reference r,
																	unsigned short int fOption );

// Экспортный номер - 9    libodbc.dll
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
int       LODBC_FUNC DoStatement( reference db,
                                reference r,
                                char * stSQL );

// Экспортный номер - 937    libodbc.dll
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
// (Unicode)
// ---
int       LODBC_FUNC DoStatementW( reference db,
                                   reference r,
                                   LPWSTR stSQL );

#ifdef _UNICODE
#define DoStatementT  DoStatementW
#else
#define DoStatementT  DoStatement
#endif // !UNICODE


// Экспортный номер - 10    libodbc.dll
//------------------------------------------------------------------------------
// Считать запись. Действительно для запроса Select...
// Функция возращает 1, если еще существуют не считанные записи. 0 - если все записи  прочитаны
// ---
int       LODBC_FUNC ReadRecord( reference db,
                               reference r,
                               void *v );

// Экспортный номер - 11    libodbc.dll
//------------------------------------------------------------------------------
// Изменить условие для заданного запроса. Действительно для запроса Select...
// Пример условия - "where d > 10 and d < 14"
// ---
int       LODBC_FUNC Condition( reference db,
                              reference r,
                              char * stSQL );

// Экспортный номер - 938    libodbc.dll
//------------------------------------------------------------------------------
// Изменить условие для заданного запроса. Действительно для запроса Select...
// Пример условия - "where d > 10 and d < 14"
// (Unicode)
// ---
int       LODBC_FUNC ConditionW( reference db,
                                 reference r,
                                    LPWSTR stSQL );

#ifdef _UNICODE
#define ConditionT  ConditionW
#else
#define ConditionT  Condition
#endif // !UNICODE


// Экспортный номер - 12    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  double в отношение  БД
// ---
int       LODBC_FUNC RDouble( char *name );

// Экспортный номер - 939    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  double в отношение  БД (Unicode)
// ---
int       LODBC_FUNC RDoubleW( LPWSTR name );

#ifdef _UNICODE
#define RDoubleT  RDoubleW
#else
#define RDoubleT  RDouble
#endif // !UNICODE

// Экспортный номер - 13    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  float в отношение  БД
// ---
int       LODBC_FUNC RFloat( char *name );

// Экспортный номер - 940    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  float в отношение  БД (Unicode)
// ---
int       LODBC_FUNC RFloatW( LPWSTR name );

#ifdef _UNICODE
#define RFloatT  RFloatW
#else
#define RFloatT  RFloat
#endif // !UNICODE

// Экспортный номер - 14    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  short int в отношение  БД
// ---
int       LODBC_FUNC RInt( char *name  );

// Экспортный номер - 941    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  short int в отношение  БД (Unicode)
// ---
int       LODBC_FUNC RIntW( LPWSTR name  );

#ifdef _UNICODE
#define RIntT  RIntW
#else
#define RIntT  RInt
#endif // !UNICODE

// Экспортный номер - 15    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  int или long int в отношение  БД
// ---
int       LODBC_FUNC RLong( char *name );

// Экспортный номер - 942    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  int или long int в отношение  БД (Unicode)
// ---
int       LODBC_FUNC RLongW( LPWSTR name );

#ifdef _UNICODE
#define RLongT  RLongW
#else
#define RLongT  RLong
#endif // !UNICODE

// Экспортный номер - 16    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  char[size] в отношение  БД
// ---
int       LODBC_FUNC RChar( char *name,//имя колонки; действительно для TXT баз
                          int size,    //размер буфера
                          long int  ); //тип данных хранящийся в БД; действительно для ODBC баз

// Экспортный номер - 943    libodbc.dll
//--------------------------------------------------------------------------
//  Вводится поле  wchar_t[size] в отношение  БД (Unicode)
// ---
int       LODBC_FUNC RCharW( LPWSTR name,//имя колонки; действительно для TXT баз
                             int size,    //размер буфера
                             long int  ); //тип данных хранящийся в БД; действительно для ODBC баз

#ifdef _UNICODE
#define RCharT  RCharW
#else
#define RCharT  RChar
#endif // !UNICODE

// Экспортный номер - 17    libodbc.dll
//-----------------------------------------------------------------------------
// Открытие текстовой базы 
// В текстовой базе считываются строки имеющие номера строк 
// Например:
//   1: строка 1  
// ---
reference LODBC_FUNC OpenTextFile( char * fileName );

// Экспортный номер - 944    libodbc.dll (Unicode)
//-----------------------------------------------------------------------------
// Открытие текстовой базы 
// В текстовой базе считываются строки имеющие номера строк 
// Например:
//   1: строка 1  
// ---
reference LODBC_FUNC OpenTextFileW( LPWSTR fileName );

#ifdef _UNICODE
#define OpenTextFileT  OpenTextFileW
#else
#define OpenTextFileT  OpenTextFile
#endif // !UNICODE

// Экспортный номер - 17    libodbc.dll
//////////////////////////////////////////////////////////////////////////
// Открыть текстовый файл в котором хранятся SQL запросы
// textFileType - 0 - текстовая база данных
// textFileType - 1 - простой текстовый файл
// textFileType - 2 - текстовый файл с комментариями ( коментарии не выдаются )
//                    коментарии имеют формат 
/*
  многострочный
  коментарий 
*/
// или 
// однострочный коментарий  
//////////////////////////////////////////////////////////////////////////
reference LODBC_FUNC ksOpenTextFileEx( char * fileName, int textFileType );

// Экспортный номер - 944    libodbc.dll (Unicode)
//-----------------------------------------------------------------------------
// textFileType - 0 - текстовая база данных
// textFileType - 1 - простой текстовый файл
// textFileType - 2 - текстовый файл с комментариями ( коментарии не выдаются )
// ---
//                    коментарии имеют формат 
/*
  многострочный
  коментарий 
*/
// или 
reference LODBC_FUNC ksOpenTextFileExW( LPWSTR fileName, int textFileType );

#ifdef _UNICODE
#define ksOpenTextFileExT  ksOpenTextFileExW
#else
#define ksOpenTextFileExT  ksOpenTextFileEx
#endif // !UNICODE


// Экспортный номер - 18    libodbc.dll
//-----------------------------------------------------------------------------
// Закрытие текстовой базы 
// ---
void      LODBC_FUNC CloseTextFile( reference f );

// Экспортный номер - 19    
//-----------------------------------------------------------------------------
// Чтение строки из текстового файла 
// ---
int       LODBC_FUNC ReadStrFromTextFile( reference f,
                                          char * buff,
                                          int numb );

// Экспортный номер - 946    
//-----------------------------------------------------------------------------
// Чтение строки из текстового файла 
// ---
int       LODBC_FUNC ReadStrFromTextFileW( reference f,
                                           LPWSTR buff,
                                           int numb );

#ifdef _UNICODE
#define ReadStrFromTextFileT  ReadStrFromTextFileW
#else
#define ReadStrFromTextFileT  ReadStrFromTextFile
#endif // !UNICODE


// Экспортный номер - 20    
//------------------------------------------------------------------------------
// Считать имя таблицы.
// Функция возращает 1, если еще существуют не считанные имена таблиц.
// 0 - если все имена таблиц прочитаны
// ---
int       LODBC_FUNC GetTableName( reference db,       // db - указатель БД
                                   char * tableName,       // возвращает имя таблицы
                                   int size,               // размер буфера
                                   unsigned char firstOrNext  );  // F - первая таблица, N - следующая

// Экспортный номер - 935    
//------------------------------------------------------------------------------
// Считать имя таблицы.
// Функция возращает 1, если еще существуют не считанные имена таблиц.
// 0 - если все имена таблиц прочитаны
// (Unicode)
// ---
int       LODBC_FUNC GetTableNameW( reference db,       // db - указатель БД
                               LPWSTR tableName,       // возвращает имя таблицы
                               int size,               // размер буфера
                               unsigned char firstOrNext  );  // F - первая таблица, N - следующая

#ifdef _UNICODE
#define GetTableNameT  GetTableNameW
#else
#define GetTableNameT  GetTableName
#endif // !UNICODE

// Экспортный номер - 21    
//------------------------------------------------------------------------------
// Считать имя колонки таблицы.
// Функция возращает 1, если еще существуют не считанные имена колонок таблиц.
// 0 - если все имена колонок таблиц прочитаны
// ---
int       LODBC_FUNC GetColumnName( reference db,      // db - указатель БД
                               char * tableName,       // ODBC-имя таблицы,текстовая БД-имя файла
                               char * columnName,      // возвращаент имя колонки
                               int size,               // размер буфера
                               unsigned char firstOrNext  );  // F - первая колонка N - следующая

// Экспортный номер - 955   
//------------------------------------------------------------------------------
// Считать имя колонки таблицы.
// Функция возращает 1, если еще существуют не считанные имена колонок таблиц.
// 0 - если все имена колонок таблиц прочитаны
// (Unicode)
// ---
int       LODBC_FUNC GetColumnNameW( reference db,      // db - указатель БД
                               LPWSTR tableName,       // ODBC-имя таблицы,текстовая БД-имя файла
                               LPWSTR columnName,      // возвращаент имя колонки
                               int size,               // размер буфера
                               unsigned char firstOrNext  );  // F - первая колонка N - следующая

#ifdef _UNICODE
#define GetColumnNameT  GetColumnNameW
#else
#define GetColumnNameT  GetColumnName
#endif // !UNICODE

// Экспортный номер - 22    
//------------------------------------------------------------------------------
// проверка соединения с ODBC
// ---
int       LODBC_FUNC IsODBCOkey();

} //extern "C"


#endif
