////////////////////////////////////////////////////////////////////////////////
//
//  ldefin2d.h - ���� ����������� ��� 2d ��������
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LDEFIN2D_H
#define __LDEFIN2D_H

typedef long reference;

//   result >-1  �������� ���������� ��� �� ��������� ������
//   result <0   ��������� ������ - ������ ������������
#define MAXERROR  205

// ���� ����������
enum DocType {
  lt_DocSheetStandart = 1,       // ��� ��������� 1- ������ �����������
  lt_DocSheetUser,               //               2- ������ �������������
  lt_DocFragment,                //               3- ��������
  lt_DocSpc,                     //               4- ������������
  lt_DocPart3D,                  //               5- 3d-�������� ������
  lt_DocAssemble3D,              //               6- 3d-�������� ������
  lt_DocTxtStandart,             //               7- ��������� �������� �����������
  lt_DocTxtUser,                 //               8- ��������� �������� �������������
  lt_DocSpcUser,                 //               9- ������������ ������������� ������
};

// ������� ���������
enum LtQualSystem {
	lt_qsShaft = 1,    // 1 - ����
  lt_qsHole,         // 2 - ���������
};

// ���������
enum LtQualDir {
	lt_qdPreferable = 1, // 1 - ����������������
  lt_qdBasic,          // 2 - ��������
  lt_qdAdditional,     // 3 - ��������������
};

// ���� ������ ��� LtVariant
enum LtVariantType {
  ltv_Char = 1, // 1 - ������
  ltv_UChar,    // 2 - ����
  ltv_Int,      // 3 - �����
  ltv_UInt,     // 4 - ����������� �����
  ltv_Long,     // 5 - ������� �����
  ltv_Float,    // 6 - ������������
  ltv_Double,   // 7 - ������� ������������
	ltv_Str,      // 8 - ������ 255 �������� char[255]
  ltv_NoUsed,   // 9 - ���� �� ������������
  ltv_Short,    // 10 - �������� �����
  ltv_WStr,     // 11 - ������ 255 �������� whar_t[255] 
};

// ���� ����� �������� ������
enum TextAlign {
	txta_Left = 0, // ����� �������� �����
	txta_Center,   // ����� �������� �������
	txta_Right     // ����� �������� ������
};

// ���� �������� ����������� ������� GetParamStruct ������� KompasObject
// enum StructType2D ��������� � ksConstants.tlb 
// enum LtViewType ��������� � ksConstants.tlb 


// ������������ ��������� ����� ���� ������ ���������� ����������
enum LtNodeType {
  tn_root,  // ������ ������
  tn_dir,   // ����� (����������)
  tn_file   // �������� (����)
};



#define TEXT_LENGTH     128
#define MAX_TEXT_LENGTH 255

#define ODBC_DB 0
#define TXT_DB 1

#define TXT_CHAR   1
#define TXT_USHORT 2
#define TXT_SSHORT 3
#define TXT_SLONG  4
#define TXT_ULONG  5
#define TXT_LONG   6
#define TXT_FLOAT  7
#define TXT_DOUBLE 8
#define TXT_INT    9
#define TXT_ALL    0
#define TXT_INDEX  _T("Index1000")

#define stACTIVE    0  //��������� ��� ����, ����, ���������
#define stREADONLY  1  //��������� ��� ����, ����
#define stINVISIBLE 2  //��������� ��� ����, ����
#define stCURRENT   3  //��������� ��� ����, ����
#define stPASSIVE   1  //��������� ��� ���������


// ����������� ��� ������� ksSystemPath
#define sptSYSTEM_FILES 	        0  // ������ ���� �� ������� ��������� ������
#define sptLIBS_FILES 		        1  // ������ ���� �� ������� ������ ���������
#define sptTEMP_FILES 	          2  // ������ ���� �� ������� ���������� ��������� ������
#define sptCONFIG_FILES 	        3  // ������ ���� �� ������� ���������� ������������ �������
#define sptINI_FILE 	            4  // ������ ������ ��� INI-����� �������
#define sptBIN_FILE 	            5  // ������ ���� �� ������� ����������� ������ �������
#define sptPROJECT_FILES 	        6  // ������ ���� �� ������� ���������� kompas.prj
#define sptDESKTOP_FILES 	        7  // ������ ���� �� ������� ���������� kompas.dsk
#define sptTEMPLATES_FILES        8  // ������ ���� �� ������� �������� ������-����������
#define sptPROFILES_FILES         9  // ������ ���� �� ������� ���������� �������� ������������
#define sptWORK_FILES             10 // ������ ���� �� ������� "��� ���������"
#define sptSHEETMETAL_FILES       11 // ������ ���� �� ������� ������ ������
#define sptPARTLIB_FILES          12 // ������ ���� �� ������� PartLib
#define sptMULTILINE_FILES        13 // ������ ���� � �������� �������� �����������
#define sptPRINTDEVICE_FILES      14 // ������ ���� � �������� ������������ ���������/���������
#define sptCURR_WORK_FILES        15 // ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
#define sptCURR_LIBS_FILES        16 // ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
#define sptCURR_SYSTEM_FILES      17 // ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
#define sptCURR_PROFILES_FILES    18 // ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
#define sptCURR_SHEETMETAL_FILES  19 // ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
//#define sptSTD_FILES        10 // ������ ���� �� ������� ���������� ������ ��� ���������� ���������

// ����������� ��� ���������� ������� SystemControlStart
// 27.01.2005 ������ ����������� �������� 
// ��. ������������ ksSystemControlStartEnum � ksConstants.h ��� ksConstants.tlb
#define scsSTOPPED_FOR_MENU_COMMAND      ( 1) // ��������� ������� ���� "���������� ������ ����������"
#define scsSTOPPED_FOR_SYSTEM_STOP       ( 0) // ���� �������� ������
#define scsSTOPPED_FOR_ITSELF            (-1) // ����� ������� SystemControlStop ��-��� ����������
#define scsSTOPPED_FOR_START_THIS_LIB    (-2) // �������������� ������� ��� ������� ��� �� ����������		
#define scsSTOPPED_FOR_START_ANOTHER_LIB (-3) // �������������� ������� ��� ������� ������ ����������		

//  ����������� ��� ������� GetObjParam � SetObjParam
//  '+'   �������� �������, ��� ������� �����������  GetObjParam � SetObjParam
//  '+-'  �������� �������, ��� ������� ���������� ������ GetObjParam
#define ALLPARAM                     -1   // ��� ��������� ������� � �� ������� ���������
#define SHEET_ALLPARAM               -2   // ���� ��� �  ALLPARAM  �� ��������� ������� � �� �����
#define NURBS_CLAMPED_ALLPARAM       -5   // ��������� ������, ������������� ������� ������ � �������  
#define NURBS_CLAMPED_SHEET_ALLPARAM -6   // ��������� ������ � �� �����, ������������� ������� ������ � �������
#define VIEW_ALLPARAM                -7   // ���� ��� �  ALLPARAM  �� ��������� ������� � �� ����

#define ALLPARAM_W                     -20  // ��� ��������� ������� � �� ������� ��������� ��� �������� �� �������� wchar_t
#define SHEET_ALLPARAM_W               -21  // ���� ��� �  ALLPARAM  �� ��������� ������� � �� ����� ��� �������� �� �������� wchar_t
#define VIEW_ALLPARAM_W                -22  // ���� ��� �  ALLPARAM  �� ��������� ������� � �� ���� ��� �������� �� �������� wchar_t
#define ASSOCIATION_VIEW_PARAM_W       -23  // ��������� �������������� ���� ��� ��������� �� �������� wchar_t

#ifdef _UNICODE
#define ALLPARAM_T  ALLPARAM_W
#else
#define ALLPARAM_T  ALLPARAM
#endif // !UNICODE

#ifdef _UNICODE
#define SHEET_ALLPARAM_T  SHEET_ALLPARAM_W
#else
#define SHEET_ALLPARAM_T  SHEET_ALLPARAM
#endif // !UNICODE

#ifdef _UNICODE
#define VIEW_ALLPARAM_T  VIEW_ALLPARAM_W
#else
#define VIEW_ALLPARAM_T  VIEW_ALLPARAM
#endif // !UNICODE

#ifdef _UNICODE
#define ASSOCIATION_VIEW_PARAM_T  ASSOCIATION_VIEW_PARAM_W
#else
#define ASSOCIATION_VIEW_PARAM_T  ASSOCIATION_VIEW_PARAM
#endif // !UNICODE

#define ANGLE_ARC_PARAM          0   // ��������� ���� �� ����� ( ��� ���� � ������������� ���� ) � �� ������� ���������
#define POINT_ARC_PARAM          1   // ��������� ���� �� ������ ( ��� ���� � ������������� ���� ) � �� ������� ���������
#define ANGLE_ARC_SHEET_PARAM    2   // ��������� ���� �� ����� ( ��� ���� � ������������� ���� ) � �� �����
#define POINT_ARC_SHEET_PARAM    3   // ��������� ���� �� ������ ( ��� ���� � ������������� ���� ) � �� �����
#define ANGLE_ARC_VIEW_PARAM     4   // ��������� ���� �� ����� ( ��� ���� � ������������� ���� ) � �� ����
#define POINT_ARC_VIEW_PARAM     5   // ��������� ���� �� ������ ( ��� ���� � ������������� ���� ) � �� ����

#define VIEW_LAYER_STATE         1   // ��������� ���� ,����
#define DOCUMENT_STATE           1   // ��������� ���������
#define DOCUMENT_SIZE            0   // ������ �����
#define DIM_TEXT_PARAM           0   // ��������� ������ ��� ��������
#define DIM_TEXT_PARAM_W         6   // ��������� ������ ��� �������� ��� ��������� �� �������� wchar_t
#ifdef _UNICODE
#define DIM_TEXT_PARAM_T  DIM_TEXT_PARAM_W
#else
#define DIM_TEXT_PARAM_T  DIM_TEXT_PARAM
#endif // !UNICODE

#define DIM_SOURSE_PARAM         1   // ��������� �������� �������
#define DIM_DRAW_PARAM           2   // ��������� ��������� �������
#define DIM_VALUE                3   // �������� ������� - double
#define DIM_PARTS                4   // ������������ ����� ��� �������� struct DimensionPartsParam
#define SHEET_DIM_PARTS          5   // ������������ ����� ��� �������� struct DimensionPartsParam � �� �����
#define TECHNICAL_DEMAND_PAR     -1  // ��������� ����������� ���������� -
#define TT_FIRST_STR             1000// ������ ������� ��� ��������� ��� ������ ������ �� �� �������
#define CONIC_PARAM              2   // ��������� ��� ���������� ����������� ������� ( ��� ������� � ������������� ���� )
#define SPC_TUNING_PARAM         0   // ��������� �������� ��� ����� ��
#define HATCH_PARAM_EX           0   // ��������� ��������� �����������
#define ASSOCIATION_VIEW_PARAM   0   // ��������� �������������� ����
#define DIM_SOURSE_VIEWPARAM     7   // ��������� �������� ������� � ������ ��������� ����
#define DIM_DRAW_VIEWPARAM       8   // ��������� ��������� ������� � ������ ��������� ����
#define DIM_SOURSE_SHEETPARAM    9   // ��������� �������� ������� � ������ ��������� �����
#define DIM_DRAW_SHEETPARAM      10  // ��������� ��������� ������� � ������ ��������� �����

#define ALL_OBJ                0         // ��� �������,����� ���������������, ������� ����� ������� � ���                    -
#define LINESEG_OBJ            1         // �������                        +
#define CIRCLE_OBJ             2         // ����������                     +
#define ARC_OBJ                3         // ����                           +
#define TEXT_OBJ               4         // �����                          +
#define POINT_OBJ              5         // �����                          +
#define HATCH_OBJ              7         // ���������                      +
#define BEZIER_OBJ             8         // bezier ������                  +
#define LDIMENSION_OBJ         9         // �������� ������                +
#define ADIMENSION_OBJ         10        // ������� ������                 +
#define DDIMENSION_OBJ         13        // ������������� ������           +
#define RDIMENSION_OBJ         14        // ���������� ������              +
#define RBREAKDIMENSION_OBJ    15        // ���������� ������ � �������    +
#define ROUGH_OBJ              16        // �������������                  +
#define BASE_OBJ               17        // ����                           +
#define WPOINTER_OBJ           18        // ������� ����                   +
#define CUT_OBJ                19        // ����� �������                  +
#define LEADER_OBJ             20        // ������� ����� �������                      +
#define POSLEADER_OBJ          21        // ����� ������� ��� ����������� �������      +
#define BRANDLEADER_OBJ        22        // ����� ������� ��� ����������� ���������    +
#define MARKERLEADER_OBJ       23        // ����� ������� ��� ����������� ������������ +
#define TOLERANCE_OBJ          24        // ������ �����                   +
#define TABLE_OBJ              25        // �������                        -     //������
#define CONTOUR_OBJ            26        // ������                         +     //�����
#define MACRO_OBJ              27        // ���������������� ������������  -
#define LINE_OBJ               28        // �����                          +
#define LAYER_OBJ              29        // ����                           +
#define FRAGMENT_OBJ           30        // �������� ��������              +
#define POLYLINE_OBJ           31        // ���������                      +
#define ELLIPSE_OBJ            32        // ������                         +
#define NURBS_OBJ              33        // nurbs ������                   +
#define ELLIPSE_ARC_OBJ        34        // ���� �������                   +
#define RECTANGLE_OBJ          35        // �������������                  +
#define REGULARPOLYGON_OBJ     36        // �������������                  +
#define EQUID_OBJ              37        // ������������                   +
#define LBREAKDIMENSION_OBJ    38        // �������� ������ � �������      +
#define ABREAKDIMENSION_OBJ    39        // ������� ������ � �������       +
#define ORDINATEDIMENSION_OBJ  40        // ������ ������                  +
#define COLORFILL_OBJ          41        // ������� ������� ������         +
#define CENTREMARKER_OBJ       42        // ����������� ������             +
#define ARCDIMENSION_OBJ       43        // ������ ����� ����              -
#define SPC_OBJ                44        // ������ ������������            +
#define RASTER_OBJ             45        // ��������� ������               +
#define CHANGE_LEADER_OBJ      46        // ����������� ���������          +
#define REMOTE_ELEMENT_OBJ     47        // �������� �������               +
#define AXISLINE_OBJ           48        // ������ �����                   +
#define OLEOBJECT_OBJ          49        // ������� ole �������            -
#define KNOTNUMBER_OBJ         50        // ������ ����� ����              -
#define BRACE_OBJ              51        // ������ �������� ������         -
#define POSNUM_OBJ             52        // �����/����������� ����������� � ������-�������� - 
#define MARKONLDR_OBJ          53        // �����/����������� ����������� �� �����          -
#define MARKWOLDR_OBJ          54        // �����/����������� ����������� ��� �����-������� -
#define WAVELINE_OBJ           55        // ��������� �����                -
#define DIRAXIS_OBJ            56        // ������ ���                     -
#define BROKENLINE_OBJ         57        // ����� ������ � ��������        -
#define CIRCLEAXIS_OBJ         58        // �������� ���                   -
#define ARCAXIS_OBJ            59        // ������� ���                    -
#define CUTUNITMARKING         60        // ����������� ���� � �������     -
#define UNITMARKING            61        // ����������� ����               -
#define MULTITEXTLEADER        62        // �������� ������� � ������������ ������������.      -
#define EXTERNALVIEW_OBJ       63        // ������� �������� ����                              -
#define ANNLINESEG_OBJ         64        // ������������� �������                 +- ��� GetObjParam ������������ ��������� LineSegParam
#define ANNCIRCLE_OBJ          65        // ������������� ����������              +- ��� GetObjParam ������������ ��������� CircleParam
#define ANNELLIPSE_OBJ         66        // ������������� ������                  +- ��� GetObjParam ������������ ��������� EllipseParam
#define ANNARC_OBJ             67        // ������������� ����                    +- ��� GetObjParam ������������ ��������� ArcParam
#define ANNELLIPSE_ARC_OBJ     68        // ������������� ���� �������            +- ��� GetObjParam ������������ ��������� EllipseArcParam
#define ANNPOLYLINE_OBJ        69        // ������������� ���������               +- ��� GetObjParam ������������ ��������� PolylineParam
#define ANNPOINT_OBJ           70        // ������������� �����                   +- ��� GetObjParam ������������ ��������� PointParam
#define ANNTEXT_OBJ            71        // ����� � ������������� ������ �������� +- ��� GetObjParam ������������ ��������� TextParam
#define MULTILINE_OBJ          72        // �����������                    - 
#define BUILDINGCUTLINE_OBJ    73        // ����� �������/������� ��� ���� + ������������ ��������� CutLineParam
#define ATTACHED_LEADER_OBJ    74        // �������������� ����� ������� ( �� ����� ������� )  +

#define MAX_VIEWTIP_SEARCH     75        // ������� ������� ����� ������ ��� �������� ����  -

#define SPECIFICATION_OBJ      121       // ������������ �� �����
#define SPECROUGH_OBJ          122       // ����������� �������������      +
#define VIEW_OBJ               123       // ���                            +
#define DOCUMENT_OBJ           124       // ��������  �����������          +   (���� ��� ��������)
#define TECHNICALDEMAND_OBJ    125       // ����������� ����������         +
#define STAMP_OBJ              126       // �����                          -  //������
#define SELECT_GROUP_OBJ       127       // ������ ��������������          -
#define NAME_GROUP_OBJ         128       // ������� ������                 -
#define WORK_GROUP_OBJ         129       // ������� ������                 -
#define SPC_DOCUMENT_OBJ       130       // ��������  ������������         +
#define D3_DOCUMENT_OBJ        131       // 3d ��������  ������ ��� ������ +
#define CHANGE_LIST_OBJ        132       // ������� ���������              -
#define TXT_DOCUMENT_OBJ       133       // ��������� ��������
#define ALL_DOCUMENTS          134       // ��������� ���� �����

#define MAX_TIP_SEARCH         134       // ������� ������� ����� ������   -
#define ALL_OBJ_SHOW_ORDER   -1000       // ��� ������� ������� ����� ������� � ��� � ������� ���������

// ���� ��� ����� ����� ��������( ��������� ����� ) :
//	1  - ��������,
//  2  - ������,
//  3  - ������,
//  4  - ���������,
//  5  - ��������� �����
//	6  - ���������������,
//  7  - ����������,
//  8  - �����-������� � 2 �������,
//  9  - ��������� �������
//  10 - ������ �������
//  11 - ������, ���������� � ���������
//  12 - ISO ��������� �����
//  13 - ISO ��������� ����� (��. ������)
//  14 - ISO ��������������� ����� (��. �����)
//  15 - ISO ��������������� ����� (��. ����� 2 ��������)
//  16 - ISO ��������������� ����� (��. ����� 3 ��������)
//  17 - ISO ���������� �����
//  18 - ISO ��������������� ����� (��. � ���. ������)
//  19 - ISO ��������������� ����� (��. � 2 ���. ������) 
//  20 - ISO ��������������� �����
//  21 - ISO ��������������� ����� (2 ������)
//  22 - ISO ��������������� ����� (2 ��������)
//  23 - ISO ��������������� ����� (3��������)
//  24 - ISO ��������������� ����� (2 ������ 2 ��������)
//  25 - ISO ��������������� ����� (2 ������ 3 ��������)


// ���� ��� ����� ��� �����( ��������� ����� ) :
//0 - �����
//1 - �������
//2 - �-�����
//3	-	�������
//4	-	�����������
//5	-	����������
//6	-	������
//7	-	������������� �������
//8	-	���������� ����



// ���� ��� ��������� ��� ���������( ��������� ����� ) :
// 0  - ������
// 1  - �������� 
// 2  - ������
// 3  - ������ ������������
// 4  - ��������
// 5  - �����
// 6  - ������
// 7  - ��������
// 8  - ������������ �����
// 9  - �������� �����
// 10 - ������ �������������
// 11 - �����������
// 12 - ����������� �����������
// 13 - ������ � ���������� �������
// 14 - �����

// ����������� ������ ��� ������
#define INVARIABLE           0    //�� ������ ����� ������

#define NUMERATOR          0x1    //���������
#define DENOMINATOR        0x2    //�����������
#define END_FRACTION       0x3    //����� �����
#define UPPER_DEVIAT       0x4    //������� ����������
#define LOWER_DEVIAT       0x5    //������ ����������
#define END_DEVIAT         0x6    //�����  ����������
#define S_BASE             0x7    //��������� ��������� ���� �����
#define S_UPPER_INDEX      0x8    //������� ������ ��������� ���� �����
#define S_LOWER_INDEX      0x9    //������ ������ ��������� ���� �����
#define S_END              0x10   //����� ��������� ���� �����
#define SPECIAL_SYMBOL     0x11   //��������
#define SPECIAL_SYMBOL_END 0x12   //��� ���������� � �������
#define RETURN_BEGIN       0x13   //������ ��� ����� ��������� ����� � ��������� � �������, ������, �����������
#define RETURN_DOWN        0x14   //��� ����� ��������� ����� � ��������� � �������, ������, �����������
#define RETURN_RIGHT       0x15   //��� ����� ����� ������ � ��������� � �������, ������, �����������
#define TAB                0x16   //��������� �� �������� �����
#define FONT_SYMBOL        0x17   //������ �����
#define FONT_SYMBOL_W      0x2017 //������ ����� Unicode
#define HYPER_TEXT         0x2000 //������ �� ����� ��� ��������� �������


#define ITALIC_ON      0x40   //�������� ������
#define ITALIC_OFF     0x80   //�������� ������
#define BOLD_ON        0x100  //�������� �������
#define BOLD_OFF       0x200  //�������� �������
#define UNDERLINE_ON   0x400  //�������� �������������
#define UNDERLINE_OFF  0x800  //�������� �������������
#define NEW_LINE       0x1000 //����� ������ � ���������

#define FONT_NAME       1       //��� �����
#define NARROWING       2       //����������� ������� �����
#define HEIGHT          3       //������ �����
#define COLOR           4       //���� ������
#define SPECIAL         5       //��������
#define FRACTION_TYPE   6       //������ ����� �� ��������� � ������ 1-������ ������ 2-� 1.5 ���� ������ 3-� 2 ���� ������
#define SUM_TYPE        7       //������ ��������� ���� ����� �� ��������� � ������ 1-������ ������ 2-� 1.5 ���� ������


//����������� ��� ������������ ��������
#define CHAR_STR_ARR          1  // ������������ ������ ���������� �� ������ ��������
#define POINT_ARR             2  // ������������ ������ ���������� �� �������������� ����� -��������� MathPointParam
#define CURVE_PATTERN_ARR     2  // ������������ ������ ���������� �� ������� ��������� ����� -��������� CurvePattern
#define TEXT_LINE_ARR         3  // ������������ ������ ����� ������ - ��������� TextLineParam
#define TEXT_ITEM_ARR         4  // ������������ ������ ��������� ����� ������ ��������� TextItemParam
#define ATTR_COLUMN_ARR       5  // ������������ ������ ������� ���������- ���������  ColumnInfo
#define USER_ARR              6  // ������������ ���������������� ������
#define POLYLINE_ARR          7  // ������������ ������ ���������-(���������� �������� POINT_ARR)
#define RECT_ARR              8  // ������������ ������ ���������� ���������������-(��������� RectParam)
#define LIBRARY_STYLE_ARR     9  // ������������ ������ �������� ���������� ��� ����� � ���������� ������( LibraryStyleParam )
#define VARIABLE_ARR          10 // ������������ ������ �������� ���������� ��������������� ����������( VariableParam )
#define CURVE_PATTERN_ARR_EX  11 // ������������ ������ ���������� �� ������� ��������� ����� -��������� CurvePatternEx
#define LIBRARY_ATTR_TYPE_ARR 12 // ������������ ������ �������� ���������� ��� ���� �������� � ���������� ����� ���������( LibraryAttrTypeParam )
#define NURBS_POINT_ARR       13 // ������������ ������ �������� NurbsPointParam
#define DOUBLE_ARR            14 // ������������ ������ duuble
#define CONSTRAINT_ARR        15 // ������������ ������ ��������������� ����������� - ��������� ConstraintParam
#define CORNER_ARR            16 // ������������ ������ �������� ���������� ����� CornerParam ��� ��������������� � ���������������
#define DOC_SPCOBJ_ARR        17 // ������������ ������ �������� ���������� ������������� ���������� � ������� ������������ DocAttachedSpcParam
#define SPCSUBSECTION_ARR     18 // ������������ ������ �������� ���������� ���������� ������������ SpcSubSectionParam
#define SPCTUNINGSEC_ARR      19 // ������������ ������ �������� ���������� ��������� ������� ������������ SpcTuningSectionParam
#define SPCSTYLECOLUMN_ARR    20 // ������������ ������ �������� ���������� ����� ������� ������� ������������ SpcStyleColumnParam
#define SPCSTYLESEC_ARR       21 // ������������ ������ �������� ���������� ����� ������a ������������ SpcStyleSectionParam
#define QUALITYITEM_ARR       22 // ������������ ������ �������� QualityItemParam - ������ �� ����� ��������� ��� ������-�� ���������
#define LTVARIANT_ARR         23 // ������������ ������ �������� LtVariant
#define TOLERANCEBRANCH_ARR   24 // ������������ ������ �������� ToleranceBranch
#define HATCHLINE_ARR         25 // ������������ ������ �������� HatchLineParam
#define TREENODEPARAM_ARR     26 // ������������ ������ �������� ���� ������ TreeNodeParam
#define CHAR_STR_ARR_W        27 // ������������ ������ ���������� �� ������ �������� ���� wchar

#ifdef _UNICODE
#define CHAR_STR_ARR_T  CHAR_STR_ARR_W
#else
#define CHAR_STR_ARR_T  CHAR_STR_ARR
#endif // !UNICODE


// ���� style ��� ������( ��������� ����� ) :
// 0 -������������� ����� ��� ������� ���� �������
// 1  ����� �� �������
// 2  ����� ��� ����������� ����������
// 3  ����� ��������� ��������
// 4  ����� �������������
// 5  ����� ��� ����� �������  ( ����������� )
// 6  ����� ��� ����� �������  ( ���\��� ������ )
// 7  ����� ��� ����� �������  ( ����� )
// 8  ����� ��� ������� �����
// 9  ����� ��� ������� ( ��������� )
// 10 ����� ��� ������� ( ������ )
// 11 ����� ��� ����� �������
// 12 ����� ��� ������� ����
// 13 ����� ��� ��� ����������� �������������
// 14 ����� ��� ����������� ���������
// 15 ����� ��� �������� ������
// 16 ����� ��� ������ ����
// 17 ����� ��� �������� �������
// 18 ����� ��� ����������� ����
// 19 ����� ��� ����� ��������������� ���
// 20 ����� ��� ���(�����/����������� ����������� � ������-��������)
// 21 ����� ��� ���(�����/����������� �����������) �� �����
// 22 ����� ��� ���(�����/����������� �����������) ��� ����� �������
// 23 ����� ��� ���������� ������������
// 24 ����� ��� ����� ������� ��� ����


// ��������� ��� ������ � ���������� ����������  
#define CHAR_ATTR_TYPE     1
#define UCHAR_ATTR_TYPE    2
#define INT_ATTR_TYPE      3
#define UINT_ATTR_TYPE     4
#define LINT_ATTR_TYPE     5
#define FLOAT_ATTR_TYPE    6
#define DOUBLE_ATTR_TYPE   7
#define STRING_ATTR_TYPE   8   //������ ������������� ����� MAX_TEXT_LENGTH
#define RECORD_ATTR_TYPE   9

// �������� ������������ ��������� �������
#define _AUTONOMINAL       0x1   // >0 �������������� ����������� ������������ �������� �������
#define _RECTTEXT          0x2   // >0 ����� � �������
#define _PREFIX            0x4   // >0 ���� ����� �� ��������
#define _NOMINALOFF        0x8   // >0 ���  ��������
#define _TOLERANCE         0x10  // >0 �������� �����������
#define _DEVIATION         0x20  // >0 ���������� �����������
#define _UNIT              0x40  // >0 ������� ���������
#define _SUFFIX            0x80  // >0 ���� ����� ����� ��������
#define _DEVIATION_INFORM  0x100 // >0 ��� ���������� _DEVIATION, ���������� ���� � ������� �������( ���� ���� �� ������ ������������ ����������).
                                 //    ���������� �����  ������� GetObjParam, ����� ������������ ��� �������� ����������.
#define _UNDER_LINE        0x200 // >0 ������ � ��������������
#define _BRACKETS          0x400 // >0 ������ � �������
#define _SQUARE_BRACKETS   0x800 // >0 ������ � ���������� �������, ������������ ������ � _BRACKETS
																 //    _BRACKETS                    - ������ � ������� �������
                                 //    _BRACKETS | _SQUARE_BRACKETS - ������ � ���������� �������

#define   INDICATIN_TEXT_LINE_ARR        0xFFFF  //��� �������������, ����������� ����� �������, ���������� � ���������
                                                 //�������, ��� ��� ������ ������������ ������������ ������ TEXT_LINE_ARR

// ���� ������
#define CURVE_STYLE      1  // ����� �������
#define HATCH_STYLE      2  // ����� ���������
#define TEXT_STYLE       3  // ����� ������
#define STAMP_STYLE      4  // ����� ������
#define CURVE_STYLE_EX   5  // ����� ������� �����������

// curveType | LIKE_BASIC_LINE - ��������� ���� ��� �  �������� �����
#define  LIKE_BASIC_LINE 0x10 // ��������� ���� ��� �  �������� �����
#define  LIKE_THIN_LINE  0x20 // ��������� ���� ��� �  ������ �����
#define  LIKE_HEAVY_LINE 0x30 // ��������� ���� ��� �  ���������� �����

// ����������� ��� ������� Get/SetDocOptions � ksGet/SetSysOptions
#define DIMENTION_OPTIONS            1 // ��������� �������
#define SNAP_OPTIONS                 1 // ��������� ��������
#define ARROWFILLING_OPTIONS         2 // ��������� ������� ?
#define SHEET_OPTIONS                3 // ��������� ����� ��� ����� ����������
#define SHEET_OPTIONS_EX             4 // ��������� ����� ���������
#define LENGTHUNITS_OPTIONS          5 // ��������� ������ ���������
#define SNAP_OPTIONS_EX              6 // ��������� �������� ���������
#define VIEWCOLOR_OPTIONS            7 // ��������� ����� ���� �������� ���� 2d - ����������
#define TEXTEDIT_VIEWCOLOR_OPTIONS   8 // ��������� ����� ���� �������������� ������
#define MODEL_VIEWCOLOR_OPTIONS      9 // ��������� ����� ���� ��� �������
#define OVERLAP_OBJECT_OPTIONS      10 // ��������� ��������������� ��������
#define DIMENTION_OPTIONS_EX        11 // ��������� �������

//���� ������� ��� ������������
#define   SPC_CLM_FORMAT   1   // ������
#define   SPC_CLM_ZONE     2   // ����
#define   SPC_CLM_POS      3   // �������
#define   SPC_CLM_MARK     4   // �����������
#define   SPC_CLM_NAME     5   // ������������
#define   SPC_CLM_COUNT    6   // ����������
#define   SPC_CLM_NOTE     7   // ����������
#define   SPC_CLM_MASSA    8   // �����
#define   SPC_CLM_MATERIAL 9   // ��������
#define   SPC_CLM_USER     10  // ����������������
#define   SPC_CLM_KOD      11  // ���
#define   SPC_CLM_FACTORY  12  // ����� ������������

//���� �������� ��� ������� ������������
// �������� �� ������������ ����� ������������ LtVariantType
//#define   SPC_INT      1   // �����
//#define   SPC_DOUBLE   2   // ������������
//#define   SPC_STRING   3   // ������
//#define   SPC_RECORD   4   // ������

//���� ������� ������
#define CURVE_STYLE_LIBRARY               1 // ���������� ������ ������ (*.lcs)
#define HATCH_STYLE_LIBRARY               2 // ���������� ������ ��������� (*.lhs)
#define TEXT_STYLE_LIBRARY                3 // ���������� ������ �������   (*.lts)
#define STAMP_LAYOUT_STYLE_LIBRARY        4 // ���������� ������ �������� ������� (*.lyt)
#define GRAPHIC_LAYOUT_STYLE_LIBRARY      5 // ���������� ������ ���������� ����������� ���������� (*.lyt)
#define TEXT_LAYOUT_STYLE_LIBRARY         6 // ���������� ������ ���������� ��������� ���������� (*.lyt)
#define SPC_LAYOUT_STYLE_LIBRARY          7 // ���������� ������ ���������� ������������ (*.lyt)

//����������� � ���� ������ ��� �������� �����-����������� �������������
#define  ST_MIX_MM      0x1  // ����������
#define  ST_MIX_SM      0    // ����������
#define  ST_MIX_DM      0x2  // ���������
#define  ST_MIX_M       0x3  // �����
#define  ST_MIX_GR      0    // ������
#define  ST_MIX_KG      0x10 // ����������
#define  ST_MIX_EXT     0    // ������������
#define  ST_MIX_RV      0x20 // ��������

// ��� ��������� ��������
#define  SN_NEAREST_POINT    1    // ��������� �����
#define  SN_NEAREST_MIDDLE   2    // ��������
#define  SN_CENTRE           3    // �����
#define  SN_INTERSECT        4    // �����������
#define  SN_GRID             5    // �� �����
#define  SN_XY_ALIGN         6    // ������������
#define  SN_ANGLE            7    // ������� ��������
#define  SN_POINT_CURVE      8    // ����� �� ������

// ���� ����� �������� ��� ��������
#define  SN_DYNAMICALLY               0x1  // �������� ����������� �����������
#define  SN_ASSISTANT                 0x2  // ������ �����
#define  SN_BACKGROUND_LAYER          0x4  // ��������� ������� ���� � ����
#define  SN_SUSPENDED                 0x8  // �������� ��������
#define  SN_VISIBLE_GRID_POINTS_ONLY  0x10 // �������� ������ � ������� ������ �����


// ���� ��������������� �����������
#define CONSTRAINT_FIXED_POINT           1  // ����������� �����
#define CONSTRAINT_POINT_ON_CURVE        2  // ����� �� ������
#define CONSTRAINT_HORIZONTAL            3  // �����������
#define CONSTRAINT_VERTICAL              4  // ���������
#define CONSTRAINT_PARALLEL              5  // �������������� ���� ������ ��� ��������
#define CONSTRAINT_PERPENDICULAR         6  // ������������������ ���� ������ ��� ��������
#define CONSTRAINT_EQUAL_LENGTH          7  // ��������� ���� ���� ��������
#define CONSTRAINT_EQUAL_RADIUS          8  // ��������� �������� ���� ���/�����������
#define CONSTRAINT_HOR_ALIGN_POINTS      9  // ����������� ��� ����� �� �����������
#define CONSTRAINT_VER_ALIGN_POINTS      10 // ����������� ��� ����� �� ���������
#define CONSTRAINT_MERGE_POINTS          11 // ���������� ���� �����
#define CONSTRAINT_TANGENT_TWO_CURVES    15 // ������� ���� ������
#define CONSTRAINT_SYMMETRY_TWO_POINTS   16 // �������� ���� �����
#define CONSTRAINT_COLLINEAR             17 // ������������� ��������
#define CONSTRAINT_FIXED_ANGLE           18 // ������������� ����
#define CONSTRAINT_FIXED_LENGHT          19 // ������������� �����
#define CONSTRAINT_POINT_ON_CURVE_MIDDLE 20 // ����� �� �������� ������
#define CONSTRAINT_BISECTOR              21 // �����������


// ���� �������� ������������
#define  SPC_BASE_OBJECT     1    // ������� ������ (������������� �������������)
#define  SPC_COMMENT         2    // �����������    (������������� �������������)
#define  SPC_SECTION_NAME    3    // ������������ ������� ( ��������� �� ����� �� ������������� )
#define  SPC_BLOCK_NAME      4    // ������������ ����� ���������� ( ��������� �� ����� �� ������������� )
#define  SPC_RESERVE_STR     5    // ��������� ������ ( ��������� �� ����� �� ������������� )
#define  SPC_EMPTY_STR       6    // ������ ������ ( ��������� �� ����� �� ������������� )

// ���� ����������
#define SPC_SORT_OFF        0   // ��� ����������
#define SPC_SORT_COMPOS     1   // ��������� ����������
#define SPC_SORT_ALPHABET   2   // ���������� �� �������� (1.06.01 - ������ �� ������������)
#define SPC_SORT_UP         3   // ���������� �� ����������� �������
#define SPC_SORT_DOCUMENT   4   // ���������� ������� ������������
#define SPC_SORT_DOWN       5   // ���������� �� �������� �������
#define SPC_SORT_COMPOSDOWN 6   // ��������� ���������� �� �������� 

////////////////////////////////////////////////////////////////////////////////
//
//  ���� ����������� �������� ( ������������� ������ )
//
////////////////////////////////////////////////////////////////////////////////
#define  ARROW_INSIDE_SYMBOL       1  // ������� (��������� �����) �������
#define  ARROW_OUT_SIDE_SYMBOL     2  // ������� (��������� �����) �������
#define  TICK_TAIL_SYMBOL          3  // ������� � ������������ ������ (� ���������)
#define  UP_HALF_ARROW_SYMBOL      4  // ������� �������� ������� �������
#define  DOWN_HALF_ARROW_SYMBOL    5  // ������ �������� ������� �������
#define  BIG_ARROW_INSIDE_SYMBOL   6  // ������� ������� ������� (7��)
#define  ARROW_ORDINATE_DIM_SYMBOL 7  // ������� ��� ������� ������(������ ������ 4 �� ��� ����� 45 ��)
#define  TRIANGLE_SYMBOL           8  // ����������� �� ����-��� ������
#define  CIRCLE_RAD2_SYMBOL        9  // ���������� �������� 2 �� ������ ������ - ��� ���-��� � �����-�������
#define  CENTRE_MARKER_SYMBOL      10 // ����������� ���������� ������ � ���� �������� ������
#define  GLUE_SIGN_SYMBOL          11 // ���� ����������
#define  SOLDER_SIGN_SYMBOL        12 // ���� �����
#define  SEWING_SIGN_SYMBOL        13 // ���� ��������
#define  CRAMP_SIGN_SYMBOL         14 // ���� ���������� ���������� ������.�������
#define  CORNER_CRAMP_SIGN_SYMBOL  15 // ���� �������� ���������� ������.�������
#define  MONTAGE_JOINT_SYMBOL      16 // ���� ���������� ���
#define  TICK_SYMBOL               17 // ������� ��� ����������� ������ (��� ��������)
#define  TRIANGLE_CURR_CS          18 // ����������� �� ������� �� - ��� ����
#define  ARROW_CLOSED_INSIDE       19 // �������� ������� �������
#define  ARROW_CLOSED_OUTSIDE      20 // �������� ������� �������
#define  ARROW_OPEN_INSIDE         21 // �������� ������� �������
#define  ARROW_OPEN_OUTSIDE        22 // �������� ������� �������
#define  ARROW_RIGHTANGLE_INSIDE   23 // ������� 90 ���� �������
#define  ARROW_RIGHTANGLE_OUTSIDE  24 // ������� 90 ���� �������
#define  SYMBOL_DOT                25 // ����� (������� ����� ����� ������� �������)
#define  SYMBOL_SMALLDOT           26 // ����� ��������� (������� ����� 0.6 ����� ������� �������)
#define  AUXILIARY_POINT           27 // ��������������� �����
#define  LEFT_TICK_SYMBOL          28 // ������� � �������� �����

//------------------------------------------------------------------------------
// ������� ����� ��� ������� ksSetMacroParam;
// �������� ����� ��� �������������� ������������ �����
// ---
#define MP_DBL_CLICK_OFF  0x01 //>0 �������������� �� �������� ������� ���������
#define MP_HOTPOINTS      0x02 //>0 ��������� hot ����� �������
#define MP_EXTERN_EDIT    0x04 //>0 ��������� �������� ����������

//-----------------------------------------------------------------------------
//����������� ��� ����������� � ��������� ������
// ---
#define FORMAT_BMP   0
#define FORMAT_GIF   1
#define FORMAT_JPG   2
#define FORMAT_PNG   3
#define FORMAT_TIF   4
#define FORMAT_TGA   5
#define FORMAT_PCX   6
#define FORMAT_WMF   16
#define FORMAT_EMF   17

//-----------------------------------------------------------------------------
//����������� ��� ��������� ����� ���������� �������
// ---
#define BLACKWHITE   0   //���� ������
#define COLORVIEW    1   //���� ������������� ��� ����
#define COLORLAYER   2   //���� ������������� ��� ����
#define COLOROBJECT  3   //���� ������������� ��� �������

//-----------------------------------------------------------------------------
// ����������� ��� �� ������ ��� ����������� � ��������� ������
// ---
#define BPP_COLOR_01 1  //"������" 
#define BPP_COLOR_02 2  //"4 �����" 
#define BPP_COLOR_04 4  //"16 ������" 
#define BPP_COLOR_08 8  //"256 ������"
#define BPP_COLOR_16 16 //"16 ��������"
#define BPP_COLOR_24 24 //"24 �������"
#define BPP_COLOR_32 32 //"32 �������"

//------------------------------------------------------------------------------
// ���� ����������� �����
// ---
#define VIEW_FRONT       0x1 //  �������
#define VIEW_REAR        0x2 //  �����
#define VIEW_UP          0x4 //  ������
#define VIEW_DOWN        0x8 //  �����
#define VIEW_LEFT        0x10 //  �����
#define VIEW_RIGHT       0x20 //  ������
#define VIEW_ISO         0x40 //  ���������

//------------------------------------------------------------------------------
// ���� ������ ������� "�������� �������"
// ---
enum LtRemoteElmSignType {
  re_Circle,         // 0 - ����������
  re_Rectangle,      // 1 - �������������
  re_Ballon,         // 2 - ����������� �������������
};


//------------------------------------------------------------------------------
// ��� ��������� ������� ��������
// ---
enum ChangeOrderType {
  co_Top = 1,          // ���� ����  
  co_Bottom,           // ���� ���� 
  co_BeforeObject,     // ����� �������� 
  co_AfterObject,      // �� ��������
  co_UpLevel,          // �� ������� ������
  co_DownLevel,        // �� ������� �����
};

//------------------------------------------------------------------------------
// ���������� ������� ������
// ---
#define OCR_SELECT     0xFFFE //  ������ � ���� SELECT 
#define OCR_SNAP       0xFFFD //  ������ � ���� SNAP 
#define OCR_CATCH      0xFFFC //  ������ � ���� CATCH 
#define OCR_DEDAULT    0      //  ������ � ���� ������

//-----------------------------------------------------------------------------
// �������������� ���� ��� TextItemFont.color
// � ����� ����� ���� ��������� �� ��������� ���� �������� �� 0
// � ���� ������ ���� TextItemFont.color ����� �������� 0 �� ���������
// ����������� �� ���� � �� �� ����� ������������ ��� ���� �� ���������
// ��� ���� ����� ����������� ����� �� �������� �����
// ��� �������� ���� �� �������� ��� ��������� FREE_COLOR       
// ---
#define FREE_COLOR (0xff000000l)      //  �������������� ����


#endif
