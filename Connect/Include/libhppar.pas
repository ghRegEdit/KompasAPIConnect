unit LibHpPar;

interface
uses
  Windows, SysUtils;

type

//-------------------------------------------------------------------------------
// Структура параметров для горячих точек
// ---
PHotPointDescription = ^HotPointDescription;
HotPointDescription  = record
  // положение точки в системе координат объекта
  x : Double;
  y : Double;
  // текстовая строка (однострочная), расположенная около hot point'а
  // Внимание!!! Копия не снимается.
  //             Текст должен быть статическим хотя бы на время
  //             работы с библиотечным элементом
  text       : PChar;
  // описание мышиного курсора при прохождении над точкой
  cursorId   : Integer;
  cursorInst : HINST;
end;

//-------------------------------------------------------------------------------
// Структура параметров для горячих точек для дополнительного интерфейса
// ---
PHotPointDescription1 = ^HotPointDescription1;
HotPointDescription1  = record
  // текстовая строка (однострочная), расположенная около hot point'а
  text           : PWideChar ; //текст для UNICODE вместо HotPointDescription::text
  bitmapId       : Integer;      // идентификатор битмапа характерной точки
  bitmapIdMove   : Integer;  // идентификатор битмапа характерной точки при прохождении над точкой
  bitmapIdSelect : Integer;// идентификатор битмапа характерной точки при ее селектировании
  bitmapInst     : HINST;
  bitmapCO       : Integer;   //система координат, в которой отрисовывается битмар 0 - СК листа, 1 - СК вида, 2 - СК владельца
end;


PPChar = ^PChar;

PPILibHPObject = ^PILibHPObject;
PILibHPObject  = ^ILibHPObject;
ILibHPObject   = interface
['{234EBFE0-477B-11D4-A840-00504E05BD01}']
//public
  // подготовиться к редактированию (Mouse L Btn Down)
  function LibHotPnt_Prepare( index : Integer ): LongBool; stdcall; //virtual; abstract;

  // завершить редактирование (Mouse L Btn Up  )
  // success = TRUE  - нормальное завершение сдвига
  //         = FALSE - во время сдвига нажали [Esc]
  function LibHotPnt_Complete( index : Integer; success : LongBool ): LongBool; stdcall; //virtual; abstract;

  // получить список hot point'ов
  // Внимание!!! Память под элементы уже выделена до вызова функции.
  //             Количество элементов в массиве points предварительно определяется
  //             в функции LibHotPnt_Count()
  function LibHotPnt_Get( point : PHotPointDescription;
                          index : Integer ) : LongBool; stdcall; //virtual; abstract;

  // изменилось положение hot point'а
  function LibHotPnt_Set( point : PHotPointDescription;
                                    index : Integer ) : LongBool; stdcall; //virtual; abstract;

  // получить текст для отображения курсором
  // Внимание!!! С присланной строки снимается копия,
  //             сама исходная строка не удаляется.
  function LibHotPnt_GetCursorText( index : Integer;
                                    Var text  : PChar ) : LongBool; stdcall; //virtual; abstract;

  // Получить меню ассоциированое с данным библиотечным элементом
  // Внимание!!! Присланное меню будет модифицированно в системе.
  //             Присланное меню будет уничтожено вызовом функции DestroyMenu()
  function LibHotPnt_GetMenu : Integer; stdcall; //virtual; abstract;

  // Выполнить команду из меню, присланного по LibHotPnt_GetMenu()
  // return = TRUE  - что то изменилось и требуется укладка в UNDO и пересчет Hot point'ов
  //        = FALSE - команда не обработана
  function LibHotPnt_ExecuteCommand( id : Integer ) : LongBool; stdcall; //virtual; abstract;

end;

//------------------------------------------------------------------------------
PLibHPTransData = ^LibHPTransData;
LibHPTransData  = record
  locData     : Pointer;       // данные для инициирования объекта
  _object     : PILibHPObject;
  loadedForMe : Boolean;       // библиотека загружена для работы с HotPoint'ами и по окончении работы ее надо выгрузить
end;

PPILibHPObject1 = ^PILibHPObject1;
PILibHPObject1  = ^ILibHPObject1;
ILibHPObject1   = interface
['{c8632527-f69f-4e22-9414-5f6433c33d07}']
  // подготовиться к редактированию (Mouse L Btn Down)
  // получить текущее описание hot point
  // Внимание!!! 1. Функция вызывается в цикле для каждой точки (увеличивая значение
  //                index), пока не вернёт false
  //             2. Значения координат необходимо устанавливать в собственной
  //                системе координат объекта
  function LibHotPnt_GetEx( point : PHotPointDescription1; index : Integer ): LongBool; stdcall; //virtual; abstract;

  // получить текст для отображения курсором  текст для UNICODE вместо ILibHPObject::LibHotPnt_GetCursorText
  // Внимание!!! С присланной строки снимается копия,
  //             сама исходная строка не удаляется.
  function LibHotPnt_GetCursorTextEx( index : Integer ): PWideChar; stdcall; //virtual; abstract;
  // Получить popup-меню ассоциированое с данным библиотечным элементом, если index = -1 и
  //                     и ассоциированое с данной hot-точкой, если index > -1
  // Внимание!!! Присланное меню будет модифицированно в системе.
  //             Присланное меню будет уничтожено вызовом функции DestroyMenu()
  // На самом деле ф-ия должна возвращать HMENU
  function LibHotPnt_GetMenuEx( index : Integer ) : LongBool; stdcall;   //virtual; abstract;

  // Установить состояния команд из меню, присланного по LibHotPnt_GetMenu() или LibHotPnt_GetMenuEx
  // TRUE - команда из меню доступна
  // FALSE - команда из меню не доступна
  function LibHotPnt_UpdateCommand( id : Integer ) : LongBool; stdcall;  //virtual; abstract;

  // Селектировали hot point
  function LibHotPnt_Select( index : Integer ): LongBool; stdcall;       //virtual; abstract;

  // Расселектировали hot point
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
