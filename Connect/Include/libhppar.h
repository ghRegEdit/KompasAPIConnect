////////////////////////////////////////////////////////////////////////////////
//
// libhppar.h  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LIBHPPAR_H
#define __LIBHPPAR_H

#ifdef __BORLANDC__  
#ifndef MIDL_INTERFACE
// MIDL_INTERFACE � Borland C++ �� ��������� - ������������ � kAPI3D5COM.h
#define MIDL_INTERFACE(x) struct
#endif
#endif


//-------------------------------------------------------------------------------
// ��������� ���������� ��� ������� �����
// ---
struct HotPointDescription {
  // ��������� ����� � ������� ��������� �������
  double    x;
  double    y;
  // ��������� ������ (������������), ������������� ����� hot point'�
  // ��������!!! ����� �� ���������.
  //             ����� ������ ���� ����������� ���� �� �� �����
  //             ������ � ������������ ���������
  char    * text;
  int       cursorId; // �������� �������� ������� ��� ����������� ��� ������
  HINSTANCE cursorInst;
};



//-------------------------------------------------------------------------------
// ��������� ���������� ��� ������� ����� ��� ��������������� ����������
// ---
struct HotPointDescription1 {
  // ��������� ������ (������������), ������������� ����� hot point'�
  LPOLESTR text; //����� ��� UNICODE ������ HotPointDescription::text
  
  int       bitmapId;      // ������������� ������� ����������� �����
  int       bitmapIdMove;  // ������������� ������� ����������� ����� ��� ����������� ��� ������
  int       bitmapIdSelect;// ������������� ������� ����������� ����� ��� �� ��������������

  HINSTANCE bitmapInst;
  int       bitmapCO;   //������� ���������, � ������� �������������� ������ 0 - �� �����, 1 - �� ����, 2 - �� ���������
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
// ��������� ������� �����
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

  // ������������� � �������������� ������� �������� �� hot point(Mouse L Btn Down)
  STDMETHOD_(BOOL, LibHotPnt_Prepare)(THIS_ int index ) PURE;

  // ��������� �������������� ������� �������� �� hot point (Mouse L Btn Up  )
  // success = TRUE  - ���������� ���������� ������
  //         = FALSE - �� ����� ������ ������ [Esc]
  STDMETHOD_(BOOL, LibHotPnt_Complete)(THIS_ int index, BOOL success ) PURE;

  // �������� ������� �������� hot point
  // ��������!!! 1. ������� ���������� � ����� ��� ������ ����� (���������� ��������
  //                index), ���� �� ����� false
  //             2. �������� ��������� ���������� ������������� � �����������
  //                ������� ��������� �������
  STDMETHOD_(BOOL, LibHotPnt_Get)(THIS_ HotPointDescription* point, int index) PURE;

  // ���������� ��������� hot point'�
  // ��������!!! 1. ������������ ����� ������ ���������� (x, y),
  //                ��������� ���� ������ ��������������
  //             2. �������� ��������� �������� � ����������� ������� ��������� �������
  STDMETHOD_(BOOL, LibHotPnt_Set)(THIS_ HotPointDescription* point, int index ) PURE;

  // �������� ����� ��� ����������� ��������
  // ��������!!! � ���������� ������ ��������� �����,
  //             ���� �������� ������ �� ���������.
  STDMETHOD_(BOOL, LibHotPnt_GetCursorText)(THIS_ int index, char** text ) PURE;

  // �������� popup-���� �������������� � ������ ������������ ���������
  // ��������!!! ���������� ���� ����� ��������������� � �������.
  //             ���������� ���� ����� ���������� ������� ������� DestroyMenu()
  // �� ����� ���� �-�� ������ ���������� HMENU
  STDMETHOD_(int, LibHotPnt_GetMenu)(THIS) PURE;

  // ��������� ������� �� ����, ����������� �� LibHotPnt_GetMenu() ��� LibHotPnt_GetMenuEx
  // return = TRUE  - ��� �� ���������� � ��������� ������� � UNDO � �������� Hot point'��
  //        = FALSE - ������� �� ����������
  STDMETHOD_(BOOL, LibHotPnt_ExecuteCommand)(THIS_ int id )PURE;
};

typedef ILibHPObject FAR * LPLIBHPOBJECT;

//-------------------------------------------------------------------------------
// �������������� ��������� ������� �����. ���������� ���������� ILibHPObject
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

  // �������� ������� �������� hot point
  // ��������!!! 1. ������� ���������� � ����� ��� ������ ����� (���������� ��������
  //                index), ���� �� ����� false
  STDMETHOD_(BOOL, LibHotPnt_GetEx)(THIS_ HotPointDescription1 * point, int index) PURE;

  // �������� ����� ��� ����������� ��������  ����� ��� UNICODE ������ ILibHPObject::LibHotPnt_GetCursorText
  STDMETHOD_(LPOLESTR, LibHotPnt_GetCursorTextEx)(THIS_ int index ) PURE;

  // �������� popup-���� �������������� � ������ ������������ ���������, ���� index = -1 �
  //                     � �������������� � ������ hot-������, ���� index > -1 
  // ��������!!! ���������� ���� ����� ��������������� � �������.
  //             ���������� ���� ����� ���������� ������� ������� DestroyMenu()
  // �� ����� ���� �-�� ������ ���������� HMENU
  STDMETHOD_(int, LibHotPnt_GetMenuEx)(THIS_  int index ) PURE;

  //���������� ��������� ������ �� ����, ����������� �� LibHotPnt_GetMenu() ��� LibHotPnt_GetMenuEx
  //TRUE - ������� �� ���� ��������
  //FALSE - ������� �� ���� �� ��������
  STDMETHOD_(BOOL, LibHotPnt_UpdateCommand)(THIS_ int id ) PURE;

  //"������������� hot point
  STDMETHOD_(BOOL, LibHotPnt_Select)( THIS_ int index ) PURE;

  //"���������������� hot point
  STDMETHOD_(BOOL, LibHotPnt_Unselect)( THIS_ int index ) PURE;

};

typedef ILibHPObject1 FAR * LPLIBHPOBJECT1;



//-------------------------------------------------------------------------------
// ��������� ������ �����������
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

