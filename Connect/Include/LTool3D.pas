unit LTool3D;

interface

uses
  Windows, Ltdefine, LDefin2D, LDefin3D, ks3DCOM_TLB;


type
  Reference = type LongInt;
  // Функции обратной связи для фильтрации объектов
  USERSELECTFILTERPROC = function( iEntity : PIEntity ) : Integer; stdcall;
  // Функции обратной связи процесса
  USERSELECTCALLBACKPROC = function( iEntity : PIEntity; iRequestInfo : PIRequestInfo ) : Integer;


const

{$IFNDEF __LIGHT_VERSION__}
  API3DDLL = 'kAPI3D5.dll';
{$ELSE}
  API3DDLL = 'klAPI3D5.dll';
{$ENDIF}

// Примитивы -------------------------------------------------------------------
IID_IPlaneDefaultXOYDefinition: TGUID = '{7AA0E540-0324-11D4-A3A3-00C026EE094F}';
IID_IPlaneDefaultXOZDefinition: TGUID = '{7AA0E540-0325-11D4-A30E-00C026EE094F}';
IID_IPlaneDefaultYOZDefinition: TGUID = '{7AA0E540-0326-11D4-A30E-00C026EE094F}';
IID_IDefaultCSDefinition      : TGUID = '{7AA0E540-0327-11D4-A30E-00C026EE094F}';

// Операции --------------------------------------------------------------------
IID_IHoleDefinition           : TGUID = '{7AA0E540-0383-11D4-A30E-00C026EE094F}';


// Экспортный номер - 2
//-----------------------------------------------------------------------------
// Возвращает указатель на объект - 3d документа
//---
function ksGet3dDocument : PIDocument3D; stdcall;

// Экспортный номер - 3   kAPI3D5.dll
//------------------------------------------------------------------------------
// Получить указатель на активный 3d документ
// возвращает NULL, если активного документа нет
// ---
function ksGetActive3dDocument : PIDocument3D; stdcall;

// Экспортный номер - 4   kAPI3D5.dll
//------------------------------------------------------------------------------
// Получить интерфейс на 3d документ, соответствующий присланному указателю
// возвращает NULL, если документа нет
// ---
function ksGet3dDocumentFromReference( doc : Reference ): PIDocument3D; stdcall;

// Экспортный номер - 5   kAPI3D5.dll
//------------------------------------------------------------------------------
// Получить указатель на 3d документ, соответствующий присланному интерфейсу
// возвращает NULL, если документа нет
// ---
function ksGetReferenceFrom3dDocument( doc : PIDocument3D{LPDOCUMENT3D} ) : Reference; stdcall;

// Экспортный номер - 8   kAPI3D5.dll
//------------------------------------------------------------------------------
// Получить указатель на интерфейс библиотекаря моделей
// ---
function ksGetModelLibrary : PIModelLibrary{LPMODELLIBRARY}; stdcall;

// Экспортный номер - 10   kAPI3D5.dll
//-----------------------------------------------------------------------------
//  создать  атрибут по номеру типа атрибута из  библиотеки libname
//  если libname = NULL- тип атрибута берется в документе
//  функция возвращает указатель на атрибут  или 0 при неудаче
//  pObj - может быть :
//       NULL или LPDOCUMENT3D - атрибут у документа
//       LPFEATURECOLLECTION   - атрибут групповой
//       LPFEATURE             - атрибут у определенного объекта
//       Атрибут можно добавить ко всем объектам дерева построений, кроме компонентов, сопряжений, группы сопряжений.
//
// ---
function ksCreateAttr3D( pObj   : PIUnknown;              // указатель объекта к которому подключается атрибут
                         attr   : PksAttribute;           // информация об атрибуте
                         attrID : Double;                 // уникальный номер типа
                         libname: PChar ) : PIAttribute3D;// имя библиотеки типов атрибутов
                         stdcall;

// Экспортный номер - 11   kAPI3D5.dll
//------------------------------------------------------------------------------
//  удалить атрибут
//  функция возвращает 1 в случае успеха или 0 при неудаче
// ---
function ksDeleteAttr3D( pObj     : PIUnknown;            //  указатель объекта к которому подключен атрибут
                         pAttr    : PIAttribute3D;        //  указатель  атрибута
                         password : PChar ) : Integer;    //  пароль атрибута
                         stdcall;

// Экспортный номер - 12   kAPI3D5.dll
//------------------------------------------------------------------------------
//  Выводится диалог для просмотра атрибутов объекта и выбора нужного атрибута.
//  Функция возвращает  указатель на атрибут в случае успеха или 0 при неудаче.
// ---
function ksChoiceAttr3D( pObj     : PIUnknown )           // указатель объекта к которому подключены атрибуты
                                  : PIAttribute3D; stdcall;

// Экспортный номер - 13   kAPI3D5.dll
//------------------------------------------------------------------------------
//  Получить интерфейс фильтрации объектов 3D.
// ---
function ksGetObjectsFilter3D : PIObjectsFilter3D; stdcall;

// Экспортный номер - 14   kAPI3D5.dll
//-----------------------------------------------------------------------------
//  создать  атрибут по номеру типа атрибута из  библиотеки libname
//  если libname = NULL- тип атрибута берется в документе
//  функция возвращает указатель на атрибут  или 0 при неудаче
//  pObj - может быть :
//       NULL или LPDOCUMENT3D - атрибут у документа
//       LPFEATURECOLLECTION   - атрибут групповой
//       LPFEATURE             - атрибут у определенного объекта
//       Атрибут можно добавить ко всем объектам дерева построений, кроме компонентов, сопряжений, группы сопряжений.
//
// sourcePart - может быть:
//       NULL или pTop_Part    - атрибут будет создан в текущем документе
//       ! = NULL              - деталь или подсборка вставленная в сборку - атрибут будет создан в документе-источнике
// ---
function ksCreateAttr3DEx( pObj      : PIUnknown;                      // указатель объекта к которому подключается атрибут
                         sorcePart : PIPart;                           // вствавка - источник
                         attr      : PksAttribute;                     // информация об атрибуте
                         attrID    : Double;                           // уникальный номер типа
                         libname   : PChar ) : PIAttribute3D; stdcall; // имя библиотеки типов атрибутов


// Экспортный номер - 11   kAPI3D5.dll
//------------------------------------------------------------------------------
//  удалить атрибут
//  функция возвращает 1 в случае успеха или 0 при неудаче
// (Unicode)
// ---
function ksDeleteAttr3DW( pObj     : PIUnknown;             //  указатель объекта к которому подключен атрибут
                          pAttr    : PIAttribute3D;         //  указатель  атрибута
                          password : PWideChar ) : Integer; //  пароль атрибута
                          stdcall;

// Экспортный номер - 17   kAPI3D5.dll
//-----------------------------------------------------------------------------
//  создать  атрибут по номеру типа атрибута из  библиотеки libname
//  если libname = NULL- тип атрибута берется в документе
//  функция возвращает указатель на атрибут  или 0 при неудаче
//  pObj - может быть :
//       NULL или LPDOCUMENT3D - атрибут у документа
//       LPFEATURECOLLECTION   - атрибут групповой
//       LPFEATURE             - атрибут у определенного объекта
//       Атрибут можно добавить ко всем объектам дерева построений, кроме компонентов, сопряжений, группы сопряжений.
//
// sourcePart - может быть:
//       NULL или pTop_Part    - атрибут будет создан в текущем документе
//       ! = NULL              - деталь или подсборка вставленная в сборку - атрибут будет создан в документе-источнике
// (Unicode)
// ---
function ksCreateAttr3DExW( pObj      : PIUnknown;                   // указатель объекта к которому подключается атрибут
                            sorcePart : PIPart;                      // вствавка - источник
                            attr      : PksAttributeW;               // информация об атрибуте
                            attrID    : Double;                      // уникальный номер типа
                            libname   : PWideChar ) : PIAttribute3D; // имя библиотеки типов атрибутов
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
