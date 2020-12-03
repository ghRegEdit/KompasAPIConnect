////////////////////////////////////////////////////////////////////////////////
//
// ������ "����������� ������". LT_GRDLG
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LT_GRDLG_H
#define __LT_GRDLG_H

#ifndef __LTDEFINE_H
#include "ltdefine.h"
#endif


#ifndef __LIB_FUNC__
#define __LIB_FUNC__
#define LIB_FUNC WINAPI
#endif


extern "C" {

// ���������� ����� - 5
//-----------------------------------------------------------------------------
// ��������� ���������, ��������������� ���������� ������ ����������.
//-----------------------------------------------------------------------------
void    LIB_FUNC  MessageBoxResult();

// ���������� ����� - 7
//-----------------------------------------------------------------------------
// 24.9.97 - ������� ��������, ���������������� ������������ ksChoiceFile
// ������ ������ � ������� ��� ����� ��� ������ (�� ����������).
// ������� ���������� ��������� ����� ������.
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName.
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ChoiceFile( char        *ext,       // ���������� �����
                                    char        *filter,    // ������ ������ (0 - ����������� �������������)
                                    char        *name,      // ����� ��� ����� �����
                                    unsigned int bufLen );  // ����� ����������� ������ name � ��������


// ���������� ����� - 180
//-----------------------------------------------------------------------------
// ������ ������ � ������� ��� ����� ��� ������ (�� ����������).
// ������� ���������� ��������� ����� ������.
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName.
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ksChoiceFile( char         *ext,       // ���������� ����� �����
                                      char         *filter,    // ������ ������ (0 - ����������� �������������)
                                      char         *name,      // ����� ��� ����� �����
                                      unsigned int  bufLen,    // ����� ����������� ������ name � ��������
                                      unsigned char preview ); // 1-� ������������ ���� ���������������� ���������, 0-���

// ���������� ����� - 831
//-----------------------------------------------------------------------------
// ������ ������ � ������� ��� ����� ��� ������ (�� ����������).
// ������� ���������� ��������� ����� ������.
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName. (Unicode)
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ksChoiceFileW( LPWSTR        ext,       // ���������� ����� �����
                                       LPWSTR        filter,    // ������ ������ (0 - ����������� �������������)
                                       LPWSTR        name,      // ����� ��� ����� �����
                                       unsigned int  bufLen,    // ����� ����������� ������ name � ��������
                                       unsigned char preview ); // 1-� ������������ ���� ���������������� ���������, 0-���

#ifdef _UNICODE
#define ksChoiceFileT  ksChoiceFileW
#else
#define ksChoiceFileT  ksChoiceFile
#endif // !UNICODE


// ���������� ����� - 213
//-----------------------------------------------------------------------------
// ������ ������ � ������� ��� ����� ��� ������ (�� ����������).
// ������� ���������� ��������� ����� ������.
// ���������� typeDir ����������� ��������� ���������� (���� ���������� � ltdefine.h)
// typeDir = sptSYSTEM_FILES 	0  - ����������� ������� ��������� ������
//           sptLIBS_FILES 		1  - ����������� ������� ������ ���������
//                            ����� ����������� ������� �������
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName.
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ksChoiceFileAppointedDir( char         *ext,      // ���������� ����� �����
                                                  char         *filter,   // ������ ������ (0 - ����������� �������������)
                                                  char         *name,     // ����� ��� ����� �����
                                                  unsigned int  bufLen,   // ����� ����������� ������ name � ��������
                                                  unsigned char preview,  // 1-� ������������ ���� ���������������� ���������, 0-���
                                                  int           typeDir );

// ���������� ����� - 837
//-----------------------------------------------------------------------------
// ������ ������ � ������� ��� ����� ��� ������ (�� ����������).
// ������� ���������� ��������� ����� ������.
// ���������� typeDir ����������� ��������� ���������� (���� ���������� � ltdefine.h)
// typeDir = sptSYSTEM_FILES 	0  - ����������� ������� ��������� ������
//           sptLIBS_FILES 		1  - ����������� ������� ������ ���������
//                            ����� ����������� ������� �������
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName. (Unicode)
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ksChoiceFileAppointedDirW( LPWSTR        ext,      // ���������� ����� �����
                                                   LPWSTR        filter,   // ������ ������ (0 - ����������� �������������)
                                                   LPWSTR        name,     // ����� ��� ����� �����
                                                   unsigned int  bufLen,   // ����� ����������� ������ name � ��������
                                                   unsigned char preview,  // 1-� ������������ ���� ���������������� ���������, 0-���
                                                   int           typeDir );

#ifdef _UNICODE
#define ksChoiceFileAppointedDirT  ksChoiceFileAppointedDirW
#else
#define ksChoiceFileAppointedDirT  ksChoiceFileAppointedDir
#endif // !UNICODE


// ���������� ����� - 147
//-----------------------------------------------------------------------------
// 24.9.97 - ������� ��������, ���������������� ������������ ksChoiceFiles
// ������ ������ � ������� ������ ������ ��� ������.
//-----------------------------------------------------------------------------
int           LIB_FUNC  ChoiceFiles( char     *ext,    // ���������� ����� �����
                                     char     *filter, // ������ ������ (0 - ����������� �������������)
                                     reference p );    // ������ �������������� ����� �� ������ CHAR_STR_ARR ��� CHAR_STR_ARR_W



// ���������� ����� - 181
//-----------------------------------------------------------------------------
// ������ ������ � ������� ������ ������ ��� ������.
//-----------------------------------------------------------------------------
int           LIB_FUNC  ksChoiceFiles( char         *ext,       // ���������� ����� �����
                                       char         *filter,    // ������ ������ (0 - ����������� �������������)
                                       reference     p,         // ������ �������������� ����� �� ������ CHAR_STR_ARR ��� CHAR_STR_ARR_W
                                       unsigned char preview ); // 1-� ������������ ���� ���������������� ���������, 0-���


// ���������� ����� - 839
//-----------------------------------------------------------------------------
// ������ ������ � ������� ������ ������ ��� ������. (Unicode)
//-----------------------------------------------------------------------------
int           LIB_FUNC  ksChoiceFilesW( LPWSTR        ext,       // ���������� ����� �����
                                        LPWSTR        filter,    // ������ ������ (0 - ����������� �������������)
                                        reference     p,         // ������ �������������� ����� �� ������ CHAR_STR_ARR ��� CHAR_STR_ARR_W
                                        unsigned char preview ); // 1-� ������������ ���� ���������������� ���������, 0-���


#ifdef _UNICODE
#define ksChoiceFilesT  ksChoiceFilesW
#else
#define ksChoiceFilesT  ksChoiceFiles
#endif // !UNICODE


// ���������� ����� - 8
//-----------------------------------------------------------------------------
// 24.9.97 - ������� ��������, ���������������� ������������ ksSaveFile
// ������ ������ � ������� ��� ����� ��� ������.
// ������� ���������� ��������� ����� ������.
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName.
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  SaveFile( char        *ext,       // ���������� ����� �����
                                  char        *oldName,   // ��� ����� �� ���������
                                  char        *filter,    // ������ ������ (0 - ����������� �������������)
                                  char        *name,      // ����� ��� ����� �����
                                  unsigned int bufLen );  // ������ ����������� ������ name


// ���������� ����� - 182
//-----------------------------------------------------------------------------
// ������ ������ � ������� ��� ����� ��� ������.
// ������� ���������� ��������� ����� ������.
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName.
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ksSaveFile( char         *ext,       // ���������� ����� �����
                                    char         *oldName,   // ��� ����� �� ���������
                                    char         *filter,    // ������ ������ (0 - ����������� �������������)
                                    char         *name,      // ����� ��� ����� �����
                                    unsigned int  bufLen,    // ����� ����������� ������ name � ��������
                                    unsigned char preview ); // 1-� ������������ ���� ���������������� ���������, 0-���

// ���������� ����� - 841
//-----------------------------------------------------------------------------
// ������ ������ � ������� ��� ����� ��� ������.
// ������� ���������� ��������� ����� ������.
// ���� bufLen ������ ��������� ����� - name �� �����������.
// � ���� ������ name ����� �������� �������� GetRightFileName. (Unicode)
//-----------------------------------------------------------------------------
unsigned  int LIB_FUNC  ksSaveFileW( LPWSTR        ext,       // ���������� ����� �����
                                     LPWSTR        oldName,   // ��� ����� �� ���������
                                     LPWSTR        filter,    // ������ ������ (0 - ����������� �������������)
                                     LPWSTR        name,      // ����� ��� ����� �����
                                     unsigned int  bufLen,    // ����� ����������� ������ name � ��������
                                     unsigned char preview ); // 1-� ������������ ���� ���������������� ���������, 0-���

#ifdef _UNICODE
#define ksSaveFileT  ksSaveFileW
#else
#define ksSaveFileT  ksSaveFile
#endif // !UNICODE


// ���������� ����� - 245
//------------------------------------------------------------------------------
// ��������������� ����� ���������������� ������� ��������� ����������������� �����
// ---
int    LIB_FUNC ksInitFilePreviewFunc( FilePreviewFuncCallBack func );

// ���������� ����� - 842
//------------------------------------------------------------------------------
// ��������������� ����� ���������������� ������� ��������� ����������������� �����
// (Unicode)
// ---
int    LIB_FUNC ksInitFilePreviewFuncW( FilePreviewFuncCallBackW func );

#ifdef _UNICODE
#define ksInitFilePreviewFuncT  ksInitFilePreviewFuncW
#else
#define ksInitFilePreviewFuncT  ksInitFilePreviewFunc
#endif // !UNICODE


// ���������� ����� - 9
//-----------------------------------------------------------------------------
// ������ ���������.
//-----------------------------------------------------------------------------
void    LIB_FUNC  Message( LPSTR s ); // s - ������ ���������

// ���������� ����� - 800
//-----------------------------------------------------------------------------
// ������ ��������� (Unicode).
//-----------------------------------------------------------------------------
void    LIB_FUNC  MessageW( LPWSTR s ); // s - ������ ���������

#ifdef _UNICODE
#define MessageT  MessageW
#else
#define MessageT  Message
#endif // !UNICODE

// ���������� ����� - 10
//-----------------------------------------------------------------------------
// ������ ��������� �� ������.
//-----------------------------------------------------------------------------
void    LIB_FUNC  Error( LPSTR s );  // s - ������ ��������� �� ������

// ���������� ����� - 804
//-----------------------------------------------------------------------------
// ������ ��������� �� ������ (Unicode).
//-----------------------------------------------------------------------------
void    LIB_FUNC  ErrorW( LPWSTR s );  // s - ������ ��������� �� ������

#ifdef _UNICODE
#define ErrorT  ErrorW
#else
#define ErrorT  Error
#endif // !UNICODE

// ���������� ����� - 11
//-----------------------------------------------------------------------------
// ������ ������ ��� ������� ������������� �� ���������� ������-�� ��������.
// ������������ 1 - Yes; 0 - No; -1 - CANCEL;
//-----------------------------------------------------------------------------
int     LIB_FUNC  YesNo( LPSTR s );  // s - ������ ���������

// ���������� ����� - 806
//-----------------------------------------------------------------------------
// ������ ������ ��� ������� ������������� �� ���������� ������-�� ��������.
// ������������ 1 - Yes; 0 - No; -1 - CANCEL; (Unicode)
//-----------------------------------------------------------------------------
int     LIB_FUNC  YesNoW( LPWSTR s );  // s - ������ ���������

#ifdef _UNICODE
#define YesNoT  YesNoW
#else
#define YesNoT  YesNo
#endif // !UNICODE

// ���������� ����� - 12
//-----------------------------------------------------------------------------
// ���������� BMP � ��������������� bmpID � �������� ����(HWindow).
// ������������ 1 � ������ ������, 0 � ������ �������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  DrawBitmap( void        *HWindow, // HWND ����
															unsigned int bmpID ); // ������������� BMP � ����� �������� ����������

// ���������� ����� - 748
//-----------------------------------------------------------------------------
// [21.7.04]
// ���������� BMP ����������� �������
//-----------------------------------------------------------------------------
int     LIB_FUNC ksDrawBitmapEx( void        *HWindow,     // HWND ����
                                 unsigned int bmpID,       // ������������� BMP � ����� �������� ����������
                                 HINSTANCE    hInstance ); //NULL - ��������� � ������� ����������, hInstance - � ������������ 


// ���������� ����� - 302
//-----------------------------------------------------------------------------
// ���������� ����� � ��������������� sldID � �������� ����(HWindow).
// ����� ����������� � ��������� ����� ���������� ��� ������ ������� RCDATA.
// ������������ 1 � ������ ������, 0 � ������ �������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  DrawSlide( void        *HWindow, // HWND ����
                             unsigned int sldID ); // ������������� ������ � ����� �������� ����������


// ���������� ����� - 359
//-----------------------------------------------------------------------------
// ���������� ����� �� ���������� �����, ����������� ���� RCDATA, � ��������
// ����(HWindow).
// ������������ 1 � ������ ������, 0 � ������ �������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  ksDrawSlideFromFile( void *HWindow,    // HWND ����
												               char *fileName ); // ������ ��� �����


// ���������� ����� - 843
//-----------------------------------------------------------------------------
// ���������� ����� �� ���������� �����, ����������� ���� RCDATA, � ��������
// ����(HWindow).
// ������������ 1 � ������ ������, 0 � ������ �������. (Unicode)
//-----------------------------------------------------------------------------
int     LIB_FUNC  ksDrawSlideFromFileW( void  *HWindow,    // HWND ����
												                LPWSTR fileName ); // ������ ��� �����

#ifdef _UNICODE
#define ksDrawSlideFromFileT  ksDrawSlideFromFileW
#else
#define ksDrawSlideFromFileT  ksDrawSlideFromFile
#endif // !UNICODE


// ���������� ����� - 453
//-------------------------------------------------------------------------
//  ���������� ����� ����������� �������
//-------------------------------------------------------------------------
int LIB_FUNC ksDrawSlideEx( void         *HWindow,       //������������� ����
                            unsigned int sldID,        //����� ������ � ����� �������� ����������
                            HINSTANCE    hInstance );    //NULL - ��������� � ������� ����������, hInstance - � ������������ 

// ���������� ����� - 303
//-----------------------------------------------------------------------------
// �������� ������ �������������� � ������� ������ � ��������� ���� � ������
// fileName. �������� ������ ���� ������ � ������������ �� ������.
// ������������ 1 � ������ ������, 0 � ������ �������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  WriteSlide( char *filename,        // ��� ����� ��� ������
                              unsigned int iD,       // ������������� ������
                              double x, double y  ); // ����� �������� ������ �� �������

// ���������� ����� - 844
//-----------------------------------------------------------------------------
// �������� ������ �������������� � ������� ������ � ��������� ���� � ������
// fileName. �������� ������ ���� ������ � ������������ �� ������.
// ������������ 1 � ������ ������, 0 � ������ �������. (Unicode)
//-----------------------------------------------------------------------------
int     LIB_FUNC  WriteSlideW( LPWSTR filename,        // ��� ����� ��� ������
                               unsigned int iD,       // ������������� ������
                               double x, double y  ); // ����� �������� ������ �� �������

#ifdef _UNICODE
#define WriteSlideT  WriteSlideW
#else
#define WriteSlideT  WriteSlide
#endif // !UNICODE


// ���������� ����� - 343
//-----------------------------------------------------------------------------
// ��������� ���� ���� �� ��������� ��� ��������� ������.
//-----------------------------------------------------------------------------
void    LIB_FUNC  ksSlideBackground( COLORREF color );


// ���������� ����� - 13
//-----------------------------------------------------------------------------
// ��������� ���� ������������� ����� � ��������� ��������� �������� �
// �������� ��������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadDouble( char   *mess,            // ������ �����������
                              double  defValue,        // �������� �� ���������
															double  min, double max, // ��������, � ������� ������ ���������� ��������
															double *value );         // ������������ ��������

// ���������� ����� - 845
//-----------------------------------------------------------------------------
// ��������� ���� ������������� ����� � ��������� ��������� �������� �
// �������� ��������. (Unicode)
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadDoubleW( LPWSTR  mess,            // ������ �����������
                               double  defValue,        // �������� �� ���������
															 double  min, double max, // ��������, � ������� ������ ���������� ��������
															 double *value );         // ������������ ��������

#ifdef _UNICODE
#define ReadDoubleT  ReadDoubleW
#else
#define ReadDoubleT  ReadDouble
#endif // !UNICODE


// ���������� ����� - 14
//-----------------------------------------------------------------------------
// ��������� ���� ������ ����� � ��������� ��������� �������� � �������� ��������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadInt( char *mess,         // ������ �����������
													 int   defValue,     // �������� �� ���������
													 int   min, int max, // ��������, � ������� ������ ���������� ��������
													 int  *value );      // ������������ ��������


// ���������� ����� - 846
//-----------------------------------------------------------------------------
// ��������� ���� ������ ����� � ��������� ��������� �������� � �������� ��������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadIntW( LPWSTR mess,         // ������ �����������
													  int    defValue,     // �������� �� ���������
													  int    min, int max, // ��������, � ������� ������ ���������� ��������
													  int   *value );      // ������������ ��������


#ifdef _UNICODE
#define ReadIntT  ReadIntW
#else
#define ReadIntT  ReadInt
#endif // !UNICODE


// ���������� ����� - 15
//-----------------------------------------------------------------------------
// ���� ������ �������� �����.
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadString( char *smess,   // ������ �����������
									 					  char *str,     // ������������ ������
															int   maxlen); // ���������� ����� ������


// ���������� ����� - 847
//-----------------------------------------------------------------------------
// ���� ������ �������� �����. (Unicode)
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadStringW( LPWSTR smess,   // ������ �����������
									 					   LPWSTR str,     // ������������ ������
															 int    maxlen); // ���������� ����� ������


#ifdef _UNICODE
#define ReadStringT  ReadStringW
#else
#define ReadStringT  ReadString
#endif // !UNICODE


// ���������� ����� - 16
//-----------------------------------------------------------------------------
// ��������� ���� �������� ������ ����� � ��������� ��������� �������� �
// �������� ��������.
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadLong( char *mess,          // ������ �����������
                            long  defValue,      // �������� �� ���������
														long  min, long max, // ��������, � ������� ������ ���������� ��������
														long *value );       // ������������ ��������


// ���������� ����� - 848
//-----------------------------------------------------------------------------
// ��������� ���� �������� ������ ����� � ��������� ��������� �������� �
// �������� ��������. (Unicode)
//-----------------------------------------------------------------------------
int     LIB_FUNC  ReadLongW( LPWSTR mess,          // ������ �����������
                             long   defValue,      // �������� �� ���������
														 long   min, long max, // ��������, � ������� ������ ���������� ��������
														 long  *value );       // ������������ ��������

#ifdef _UNICODE
#define ReadLongT  ReadLongW
#else
#define ReadLongT  ReadLong
#endif // !UNICODE


// ���������� ����� - 231
//------------------------------------------------------------------------------
// ������� �� ������� ���������. ��������� ���������� �� ���������� �����
// ���������� graphic.dsn.
// ������� ���������� ��������� � �/��3 ��� 0 � ������ �������
// ---
double LIB_FUNC ksViewGetDensity( void *HWindow ); // HWND ���� �������� ��� NULL

// ���������� ����� - 272
//------------------------------------------------------------------------------
// ����� ������� ��� ������� ������� �����.
// docPar - ��������� �������.
// ---
int LIB_FUNC ksSheetSetupDlg( DocumentParam* docPar, void *HWindow );

// ���������� ����� - 849
//------------------------------------------------------------------------------
// ����� ������� ��� ������� ������� �����.
// docPar - ��������� �������. (Unicode)
// ---
int LIB_FUNC ksSheetSetupDlgW( DocumentParamW* docPar, void *HWindow );

#ifdef _UNICODE
#define ksSheetSetupDlgT  ksSheetSetupDlgW
#else
#define ksSheetSetupDlgT  ksSheetSetupDlg
#endif // !UNICODE


// ���������� ����� - 273
//------------------------------------------------------------------------------
// �������� �� ��������� � ��������� ��������� � ��� ��������� �� ����������� ����������
// -1 ���������� ���������� �� �����������
// 0  ����� �� ������� ����������� ���������� �� ������
// 1  ������� ����������
// ---
//      material - ������ ����� � ������� ����� ������� ����������� ���������� ���������
//      sizeStr  - ������ ������ material
//      plt      - ��������� ���������� ���������
//      kod_size - ������ ��������
//        kod_size[0] - ��� ���� �����������. ������ ����������: 1-�������, 2-�������, 0-��� �� ���������.
//        kod_size[1] - �������� ������� ���� �������, �������, ������� ��������� ����������, �������� � ������������ ���� ��� ��� �����
//        kod_size[2] - �������� � ������������ ���� ��� ��� �����
//        kod_size[3] - �������� � ������������ ���� �����
//      kod_tip - ������ ����� ����� ����������� ��� ����������� (����� �������),
//       '0' - ������������ ���.
//      ���� ����� �����������
//      ----------------+-----------------+------------+---------------+-------------------+-------------------------
//       ������ ������� | ������� ������� | ���������� | ������ � ���� | ������ � �������� | ��������� ������
//      ----------------+-----------------+------------+---------------+-------------------+-------------------------
//       1- ��������    | 8 - ������      | 17- ������ | 24- �����     | 27- �����         | 30- �������������
//       2- ��������    | 9 - �����       | 18- �����  | 25- ������    | 28- ������        | 31- ������
//       3- �����       | 10 - ���������  | 19- �����  | 26- ������    | 29- ������        | 32- ��������������
//       4- ���������   | 11 - �����      | 20- �����  |               |                   | 33- ��������
//       5- ��������.   | 12 - �����      | 21- �����  |               |                   |
//       6- �����       | 13 - �����      | 22- ������ |               |                   |
//       7- �����       | 14 - ������     | 23- ������ |               |                   |
//                      | 15 - �������    |            |               |                   |
//                      | 16 - �����      |            |               |                   |
//      ----------------+-----------------+------------+---------------+-------------------+-------------------------
int LIB_FUNC ksMaterialDlg( void *HWindow, char * material, int sizeStr, double* plt, double* kod_size, char *kod_tip );


// ���������� ����� - 274
//------------------------------------------------------------------------------
// ��������� ����������������� ������ �� ����� *.pdt
// ��� ������ ������������ � ���� ������ str � ������� ������ "\n"
// ---
int LIB_FUNC ksExecDialPredefinedText( void *HWindow, char * str, int sizeStr );


// ���������� ����� - 851
//------------------------------------------------------------------------------
// ��������� ����������������� ������ �� ����� *.pdt
// ��� ������ ������������ � ���� ������ str � ������� ������ "\n" (Unicode)
// ---
int LIB_FUNC ksExecDialPredefinedTextW( void *HWindow, LPWSTR str, int sizeStr );

#ifdef _UNICODE
#define ksExecDialPredefinedTextT  ksExecDialPredefinedTextW
#else
#define ksExecDialPredefinedTextT  ksExecDialPredefinedText
#endif // !UNICODE


// ���������� ����� - 720
//------------------------------------------------------------------------------
// ��������� ����������������� ������ �� ����� *.pdt
// ���������� ������������ ������ ����� ������ TEXT_LINE_ARR ��� 0 � ������ �������
// ---
reference LIB_FUNC ksExecDialPredefinedTextEx( void *HWindow );

// ���������� ����� - 284
//--------------------------------------------------------------------------
// ������� �� ������� ��������� � ������������ ���������. ��������� ���������� �� ���������� �����
// ���������� graphic.dsn.
// ������� ���������� ��������� � �/��3 � ������������ ��������� ��� 0 � ������ �������
// material - ������������ ���������
// sizeStr  - ������ ������ material
// HWindow  - HWND ����
//--------------------------------------------------------------------------
double LIB_FUNC ksViewGetDensityAndMaterial( char * material, int sizeStr, void *HWindow );

// ���������� ����� - 852
//--------------------------------------------------------------------------
// ������� �� ������� ��������� � ������������ ���������. ��������� ���������� �� ���������� �����
// ���������� graphic.dsn.
// ������� ���������� ��������� � �/��3 � ������������ ��������� ��� 0 � ������ �������
// material - ������������ ���������
// sizeStr  - ������ ������ material
// HWindow  - HWND ���� (Unicode)
//--------------------------------------------------------------------------
double LIB_FUNC ksViewGetDensityAndMaterialW( LPWSTR material, int sizeStr, void *HWindow );

#ifdef _UNICODE
#define ksViewGetDensityAndMaterialT  ksViewGetDensityAndMaterialW
#else
#define ksViewGetDensityAndMaterialT  ksViewGetDensityAndMaterial
#endif // !UNICODE

// ���������� ����� - 286
//------------------------------------------------------------------------------
// ������� ������ �� �������������� ������
// ---
int LIB_FUNC ksEditTextLine( void *HWindow, char *str, int sizeStr );

// ���������� ����� - 853
//------------------------------------------------------------------------------
// ������� ������ �� �������������� ������ (Unicode)
// ---
int LIB_FUNC ksEditTextLineW( void *HWindow, LPWSTR str, int sizeStr );

#ifdef _UNICODE
#define ksEditTextLineT  ksEditTextLineW
#else
#define ksEditTextLineT  ksEditTextLine
#endif // !UNICODE

// ���������� ����� - 781
// [01/11/2006] 
//------------------------------------------------------------------------------
//  ��������� ��������� ��������
//  minVal - ����������� �������� �����
//  maxVal - ������������ �������� �����
//  newText- ����� � ������ ���������
//  resetText = 1 - �������� ����� � ������ ���������/ 0 - �� ���������
// ---
void LIB_FUNC ksStartProgressBar( long minVal, long maxVal, char * newText, int resetText );


// ���������� ����� - 854
// [04/07/2007] 
//------------------------------------------------------------------------------
//  ��������� ��������� ��������
//  minVal - ����������� �������� �����
//  maxVal - ������������ �������� �����
//  newText- ����� � ������ ���������
//  resetText = 1 - �������� ����� � ������ ���������/ 0 - �� ���������
//  (Unicode)
// ---
void LIB_FUNC ksStartProgressBarW( long minVal, long maxVal, LPWSTR newText, int resetText );

#ifdef _UNICODE
#define ksStartProgressBarT  ksStartProgressBarW
#else
#define ksStartProgressBarT  ksStartProgressBar
#endif // !UNICODE


// ���������� ����� - 782
// [01/11/2006] 
//------------------------------------------------------------------------------
// ���������� ������� �������� ����������
//  currentVal - ������� �������� �������� ����������
//  newText- ����� � ������ ���������
//  resetText = 1 - �������� ����� � ������ ���������/ 0 - �� ���������
// ---
void LIB_FUNC ksSetProgressBar( long currentVal, char * newText, int resetText );


// ���������� ����� - 855
// [04/07/2007] 
//------------------------------------------------------------------------------
// ���������� ������� �������� ����������
//  currentVal - ������� �������� �������� ����������
//  newText- ����� � ������ ���������
//  resetText = 1 - �������� ����� � ������ ���������/ 0 - �� ���������
// ---
void LIB_FUNC ksSetProgressBarW( long currentVal, LPWSTR newText, int resetText );

#ifdef _UNICODE
#define ksSetProgressBarT  ksSetProgressBarW
#else
#define ksSetProgressBarT  ksSetProgressBar
#endif // !UNICODE


// ���������� ����� - 783
// [01/11/2006] 
//------------------------------------------------------------------------------
//  ���������� ����� � ������ ��������� ����������
//  newText- ����� � ������ ���������
// ---
void LIB_FUNC ksSetProgressText( char * newText );


// ���������� ����� - 856
// [04/07/2007] 
//------------------------------------------------------------------------------
//  ���������� ����� � ������ ��������� ����������
//  newText- ����� � ������ ��������� (Unicode)
// ---
void LIB_FUNC ksSetProgressTextW( LPWSTR newText );

#ifdef _UNICODE
#define ksSetProgressTextT  ksSetProgressTextW
#else
#define ksSetProgressTextT  ksSetProgressText
#endif // !UNICODE


// ���������� ����� - 784
// [01/11/2006] 
//------------------------------------------------------------------------------
//  ���������� ��������� ��������
//  newText- ����� � ������ ���������
//  resetText = 1 - �������� ����� � ������ ���������/ 0 - �� ���������
// ---
void LIB_FUNC ksStopProgressBar( char * newText, int resetTxt );


// ���������� ����� - 857
// [04/07/2007] 
//------------------------------------------------------------------------------
//  ���������� ��������� ��������
//  newText- ����� � ������ ���������
//  resetText = 1 - �������� ����� � ������ ���������/ 0 - �� ���������
//  (Unicode)
// ---
void LIB_FUNC ksStopProgressBarW( LPWSTR newText, int resetTxt );

#ifdef _UNICODE
#define ksStopProgressBarT  ksStopProgressBarW
#else
#define ksStopProgressBarT  ksStopProgressBar
#endif // !UNICODE

// ���������� ����� - 996
// [22/05/2009] 
//------------------------------------------------------------------------------
// ����� ������� "������� ���������"
// ---
int LIB_FUNC ksExecDialSpecialSymbol( void * HWindow );

// ���������� ����� - 996
// [25/05/2009] 
//------------------------------------------------------------------------------
//  ����� ������� "������� �������"
// ---
int LIB_FUNC ksExecDialSymbol( void *HWindow, int * symb, LPSTR font, unsigned int len );


// ���������� ����� - 998
// [25/05/2009] 
//------------------------------------------------------------------------------
//  ����� ������� "������� �������"
//  (Unicode)
// ---
int LIB_FUNC ksExecDialSymbolW( void *HWindow, int * symb, LPWSTR font, unsigned int len );

#ifdef _UNICODE
#define ksExecDialSymbolT  ksExecDialSymbolW
#else
#define ksExecDialSymbolT  ksExecDialSymbol
#endif // !UNICODE


// ���������� ����� - 1000
// [07.08.2009]
//------------------------------------------------------------------------------
//  ����� ������� "�������� ����� �����"
// ---
int LIB_FUNC ksExecDialLineStyleSelect( void *HWindow, LPCTSTR caption, int style );

} // extern "C"

#endif // __LT_GRDLG_H
