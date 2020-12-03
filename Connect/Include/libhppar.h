////////////////////////////////////////////////////////////////////////////////
//
// libhppar.h  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LIBHPPAR_H
#define __LIBHPPAR_H

#ifdef __BORLANDC__  
#ifndef MIDL_INTERFACE
// MIDL_INTERFACE в Borland C++ не определен - используется в kAPI3D5COM.h
#define MIDL_INTERFACE(x) struct
#endif
#endif


//-------------------------------------------------------------------------------
// Структура параметров для горячих точек
// ---
struct HotPointDescription {
  // положение точки в системе координат объекта
  double    x;
  double    y;
  // текстовая строка (однострочная), расположенная около hot point'а
  // Внимание!!! Копия не снимается.
  //             Текст должен быть статическим хотя бы на время
  //             работы с библиотечным элементом
  char    * text;
  int       cursorId; // описание мышиного курсора при прохождении над точкой
  HINSTANCE cursorInst;
};



//-------------------------------------------------------------------------------
// Структура параметров для горячих точек для дополнительного интерфейса
// ---
struct HotPointDescription1 {
  // текстовая строка (однострочная), расположенная около hot point'а
  LPOLESTR text; //текст для UNICODE вместо HotPointDescription::text
  
  int       bitmapId;      // идентификатор битмапа характерной точки
  int       bitmapIdMove;  // идентификатор битмапа характерной точки при прохождении над точкой
  int       bitmapIdSelect;// идентификатор битмапа характерной точки при ее селектировании

  HINSTANCE bitmapInst;
  int       bitmapCO;   //система координат, в которой отрисовывается битмар 0 - СК листа, 1 - СК вида, 2 - СК владельца
};


#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif


// {234EBFE0-477B-11D4-A840-00504E05BD01}
DEFINE_GUID(IID_ILibHPObject,          0x234EBFE0, 0x477B, 0x11D4, 0xA8, 0x40, 0x00, 0x50, 0x4E, 0x05, 0xBD, 0x01);
// {234EBFE0-477B-11D4-A841-00504E05BD01}
DEFINE_GUID(IID_ILibExternalObject,    0x234EBFE0, 0x477B, 0x11D4, 0xA8, 0x41, 0x00, 0x50, 0x4E, 0x05, 0xBD, 0x01);
// {C8632527-F69F-4e22-9414-5F6433C33D07}
DEFINE_GUID(IID_ILibHPObject1,          0xc8632527, 0xf69f, 0x4e22, 0x94, 0x14, 0x5f, 0x64, 0x33, 0xc3, 0x3d, 0x7);


//-------------------------------------------------------------------------------
// Интерфейс горячих точек
// ---
#undef  INTERFACE
#define INTERFACE  ILibHPObject
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
BEGIN_INTERFACE
  /* IUnknown methods */
  STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;

  /* ILibHPObject methods */

  // подготовиться к редактированию методом таскания за hot point(Mouse L Btn Down)
  STDMETHOD_(BOOL, LibHotPnt_Prepare)(THIS_ int index ) PURE;

  // завершить редактирование методом таскания за hot point (Mouse L Btn Up  )
  // success = TRUE  - нормальное завершение сдвига
  //         = FALSE - во время сдвига нажали [Esc]
  STDMETHOD_(BOOL, LibHotPnt_Complete)(THIS_ int index, BOOL success ) PURE;

  // получить текущее описание hot point
  // Внимание!!! 1. Функция вызывается в цикле для каждой точки (увеличивая значение
  //                index), пока не вернёт false
  //             2. Значения координат необходимо устанавливать в собственной
  //                системе координат объекта
  STDMETHOD_(BOOL, LibHotPnt_Get)(THIS_ HotPointDescription* point, int index) PURE;

  // изменилось положение hot point'а
  // Внимание!!! 1. Актуальность имеют только координаты (x, y),
  //                остальные поля должны игнорироваться
  //             2. Значения координат приходит в собственной системе координат объекта
  STDMETHOD_(BOOL, LibHotPnt_Set)(THIS_ HotPointDescription* point, int index ) PURE;

  // получить текст для отображения курсором
  // Внимание!!! С присланной строки снимается копия,
  //             сама исходная строка не удаляется.
  STDMETHOD_(BOOL, LibHotPnt_GetCursorText)(THIS_ int index, char** text ) PURE;

  // Получить popup-меню ассоциированое с данным библиотечным элементом
  // Внимание!!! Присланное меню будет модифицированно в системе.
  //             Присланное меню будет уничтожено вызовом функции DestroyMenu()
  // На самом деле ф-ия должна возвращать HMENU
  STDMETHOD_(int, LibHotPnt_GetMenu)(THIS) PURE;

  // Выполнить команду из меню, присланного по LibHotPnt_GetMenu() или LibHotPnt_GetMenuEx
  // return = TRUE  - что то изменилось и требуется укладка в UNDO и пересчет Hot point'ов
  //        = FALSE - команда не обработана
  STDMETHOD_(BOOL, LibHotPnt_ExecuteCommand)(THIS_ int id )PURE;
};

typedef ILibHPObject FAR * LPLIBHPOBJECT;

//-------------------------------------------------------------------------------
// Дополнительный интерфейс горячих точек. Расширение интерфейса ILibHPObject
// ---
#undef  INTERFACE
#define INTERFACE  ILibHPObject1
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
BEGIN_INTERFACE
  /* IUnknown methods */
  STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;

  /* ILibHPObject1 methods */

  // получить текущее описание hot point
  // Внимание!!! 1. Функция вызывается в цикле для каждой точки (увеличивая значение
  //                index), пока не вернёт false
  STDMETHOD_(BOOL, LibHotPnt_GetEx)(THIS_ HotPointDescription1 * point, int index) PURE;

  // получить текст для отображения курсором  текст для UNICODE вместо ILibHPObject::LibHotPnt_GetCursorText
  STDMETHOD_(LPOLESTR, LibHotPnt_GetCursorTextEx)(THIS_ int index ) PURE;

  // Получить popup-меню ассоциированое с данным библиотечным элементом, если index = -1 и
  //                     и ассоциированое с данной hot-точкой, если index > -1 
  // Внимание!!! Присланное меню будет модифицированно в системе.
  //             Присланное меню будет уничтожено вызовом функции DestroyMenu()
  // На самом деле ф-ия должна возвращать HMENU
  STDMETHOD_(int, LibHotPnt_GetMenuEx)(THIS_  int index ) PURE;

  //Установить состояния команд из меню, присланного по LibHotPnt_GetMenu() или LibHotPnt_GetMenuEx
  //TRUE - команда из меню доступна
  //FALSE - команда из меню не доступна
  STDMETHOD_(BOOL, LibHotPnt_UpdateCommand)(THIS_ int id ) PURE;

  //"Селектировали hot point
  STDMETHOD_(BOOL, LibHotPnt_Select)( THIS_ int index ) PURE;

  //"Расселектировали hot point
  STDMETHOD_(BOOL, LibHotPnt_Unselect)( THIS_ int index ) PURE;

};

typedef ILibHPObject1 FAR * LPLIBHPOBJECT1;



//-------------------------------------------------------------------------------
// Интерфейс внеших воздействий
// ---
#undef  INTERFACE
#define INTERFACE  ILibExternalObject
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
BEGIN_INTERFACE
  /* IUnknown methods */
  STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;

  /* ILibExternalObject methods */
  //======== Group TRANSFORM ===================================================
  STDMETHOD_(BOOL, Lib_Move)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Rotate)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Transform)(THIS)PURE;

  STDMETHOD_(BOOL, Lib_Delete)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Restore)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Deform)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_AddToModel)(THIS)PURE;

};

typedef ILibExternalObject    FAR * LPLIBEXTERNALOBJECT;

#endif

