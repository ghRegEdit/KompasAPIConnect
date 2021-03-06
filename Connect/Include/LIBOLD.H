////////////////////////////////////////////////////////////////////////////////
//
// LIBOLD.H  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LIBOLD_H
#define __LIBOLD_H

#ifndef __LTDEFINE_H
#include "ltdefine.h"
#endif

#define	 line 	                    LineOld
#define	 macro() 	                  Macro(0)
#define	 hatch( t, fstr, shag )	    Hatch( t, fstr, shag, 0, 0, 0 )
#define	 mtr                        Mtr
#define	 delete_mtr                 DeleteMtr
#define	 layer                      Layer
#define	 angle                      Angle
#define	 cosd                       CosD
#define	 sind                       SinD
#define	 tand                       TanD
#define	 atand                      AtanD
#define	 cutlinlin                  IntersectLinSLinS
#define	 cutcircir                  IntersectCirCir
#define	 cutlincir                  IntersectLinSCir
#define	 concircir                  ksCouplingCircleCircle
#define	 readfloat                  ReadDouble
#define	 readint                    ReadInt
#define	 readlong                   ReadLong
#define	 readstring                 ReadString
#define  message                    Message
#define  yes_no                     YesNo
#define  error                      Error
#define  group                      NewGroup
#define  end_group                  EndGroup
#define  circle                     Circle
#define  tanpntcir                  TanLinePointCircle
#define	 point	                    PointOld
#define	 cursor( s, x, y, phantom )	Cursor( s, x, y ,phantom,NULL )
#define  tanangcir                  TanLineAngCircle
#define  rotate                     Rotate
#define  symmetry                   Symmetry
#define  arc                        ArcByPoint
#define  contour()                  Contour(1)
#define  dispntpnt                  DistancePntPnt
#define  rough                      RoughOld
#define  base                       BaseOld
#define  text                       TextOld
#define  perpend                    Perpendicular
#define  open_view                  OpenView
#define  newview_number             NewViewNumber
#define  open_tdem                  OpenTechnicalDemand(  0 )
#define  create_stamp               open_stamp
#define  table                      TableOld
#define  dispntcir                  ksDistancePntCircle
#define  dispntlin                  ksDistancePntLineSeg
#define  dispntpnt                  DistancePntPnt

// �� �6 #if defined ( _BUILDLIBOLD )
// �� �6 #  define LIBOLD_FUNC far __export __pascal
// �� �6 #else
// �� �6 #  define LIBOLD_FUNC far __pascal
// �� �6 #endif
#define LIBOLD_FUNC WINAPI

extern "C" {
// ���������� ����� - 14
void          LIBOLD_FUNC   cutll( double x11, double y11,  //������ ����� ������ ������
                                double x12, double y12,  //������ ����� ������ ������
                                double x21, double y21,  //������ ����� ������ ������
                                double x22, double y22,  //������ ����� ������ ������
                                int * kp,                //���������� ����� �����������
                                double *xp, double *yp );//����� �����������

// ���������� ����� - 15
void          LIBOLD_FUNC   cutarcarc( double xac, double yac, double rada,  //���������� ������ � ������ 1 ����
                                    double xa1, double ya1,               //��������� � �������� �����
                                    double xa2, double ya2,               //������ ����
                                    short napra,                            //�����������
                                    double xbc, double ybc, double radb,  //���������� ������ � ������ 2 ����
                                    double xb1, double yb1,               //��������� � �������� �����
                                    double xb2, double yb2,               //������ ����
                                    short naprb,                            //�����������
                                    int * kp,                             //���������� ����� �����������
                                    double  xp[], double yp[] );          //����� �����������

// ���������� ����� - 16
void          LIBOLD_FUNC   cutlinarc( double x1, double y1,                 //��������� � �������� �����
                                    double x2, double y2,                 //������
                                    double xac, double yac, double rada,  //���������� ������ � ������  ����
                                    double xa1, double ya1,               //��������� � �������� �����
                                    double xa2, double ya2,               //����
                                    short napr,                             //�����������
                                    int * kp,                             //���������� ����� �����������
                                    double  xp[], double yp[]);           //����� �����������

// ���������� ����� - 17
void          LIBOLD_FUNC   cutcirl( double xc, double yc, double rad,       //���������� ������ � ������  ����������
                                  double x1, double y1,                   //��������� � �������� �����
                                  double x2, double y2,                   //������
                                  int * kp,                               //���������� ����� �����������
                                  double  xp[], double yp[] );            //����� �����������

// ���������� ����� - 18
void          LIBOLD_FUNC   cutcirarc( double xcc, double ycc,double radc,   //���������� ������ � ������  ����������
                                    double xac, double yac,double rada,   //���������� ������ � ������  ����
                                    double xa1, double ya1,               //��������� � �������� �����
                                    double xa2, double ya2,               //����
                                    short napr,                             //�����������
                                    int * kp,                             //���������� ����� �����������
                                    double  xp[], double yp[] );          //����� �����������


// ���������� ����� - 19
void          LIBOLD_FUNC   conlinlin( double x11, double y11,            //��������� � �������� �����
															      double x12, double y12,               //1 ������
															      double x21, double y21,               //��������� � �������� �����
															      double x22, double y22,               //2 ������
                                    double rad,                           //������
															      int * kp,                             //���������� ����� ����������
															      CON * con );                          //��������� ����������
                                    
// ���������� ����� - 43
//-----------------------------------------------------------------------------
// ���������� �����  ������ � �����
//-----------------------------------------------------------------------------
double        LIBOLD_FUNC  dispntarc	(   double x, double y,      //���������� �����
                                       		double xac, double yac,  //����� ����
																		  		double rada,             //������ ����
																			  	double xa1, double ya1,  //��������� ����� ����
																			  	double xa2, double ya2,  //�������� ����� ����
																			  	short napr );           //����������� ����
                                          
// ���������� ����� - 44
//-----------------------------------------------------------------------------
// ���������� �����  ������ � ������
//-----------------------------------------------------------------------------
double       LIBOLD_FUNC  dispntl	( double x,  double y,      //���������� �����
                                    double x1, double y1,    //����� �� �������
                                    double x2, double y2 );  //����� �� �������

inline int    LIBOLD_FUNC   close_view( ) { return 1;};

// ���������� ����� - 2
int           LIBOLD_FUNC   setattrlayer( int n,               // ����� ����
                                       int attr,            // ��������� ����
                                       char *comment );     // �����������

// ���������� ����� - 3
int           LIBOLD_FUNC   create_leaf( char *name,      //��� ����� �������
                                      int frm,         //������ �������
                                      int krat,        //���������
                                      int tips,        //��� ������
                                      int pros,        //������������
                                      char *comment ); //�����������

// ���������� ����� - 4
int           LIBOLD_FUNC   create_view( int n,              //����� ����
                                      float x, float y,   //����� ��������
                                      float alf,          //���� ��������
                                      float scale,        //������� ��������� ����
                                      char *comment );    //�����������

// ���������� ����� - 5
int           LIBOLD_FUNC   close_leaf( );

// ���������� ����� - 6
reference     LIBOLD_FUNC   spline(unsigned short tl, float f1 ,float f2 );

// ���������� ����� - 7
reference     LIBOLD_FUNC   TextOld  ( float x, float y,    //����� �������� ������
                                    float fstr,          //���� ������� ������
                                    float hs,            //������ ������
                                    float ksu,           //�������
                                    float fb,            //���� ������� ��������
                                    char *s  );          //������ ��������

// ���������� ����� - 8
reference     LIBOLD_FUNC   diml( float val, char* qual,              //�������� � ��������
                               float dx, float dy,                 //������ ������������ ��������� ��������� �����
                               int Pt,                             //������� ��������� ������
                               int Pn, float Fn, float Dlg,        //��������� �������� �����: �������, ���� �����, ����� �����
                               float x1, float y1, int T1, int Po1,//��������� ������ �������� �����: ����� ��������, ��� �������,������� ������
                               float x2, float y2, int T2, int Po2,//��������� ������ �������� �����: ����� ��������, ��� �������,������� ������
                               char *s  );                         //������ ������

// ���������� ����� - 9
reference     LIBOLD_FUNC   dima( float val,int Napr,                 // �������� �������, ����������� ��������� ����
                               float Fbase, float Rr,              // ���� ������ �������� �����, ������ ��������� ����
                               int Pt,                             // ������� ��������� ������
                               int Pn, float Fn, float Dlg,        // ��������� �������� �����: �������, ���� �����, ����� �����
                               float x1, float y1, int T1, int Po1,// ��������� ������ �������� �����: ����� ��������, ��� �������,������� ������
                               float x2, float y2, int T2, int Po2,// ��������� ������ �������� �����: ����� ��������, ��� �������,������� ������
                               char *s  );                         // ������ ������

// ���������� ����� - 10
reference     LIBOLD_FUNC   dimd( float val, char* qual,  // �������� � ��������
                               float Fbase,            // ���� ������� ��������� ����� � ��� X
                               int Pt, int Pn,         // ������� ��������� ������, ������� ������� �������� �����
                               float x, float y, int T,// ���������� ������ ��������������� ����������, ��� �������
                               char *s  );             // ������ ������

// ���������� ����� - 11
reference     LIBOLD_FUNC   dimr( float val, char* qual,     //�������� � ��������
                               float Fbase,               //���� ������� ��������� ����� � ��� X
                               float Dlg,                 //������� ������� � �������
                               int Pt, int Pn,            //������� ��������� ������, ������� ������� �������� �����
                               float xc, float yc, int T, //���������� ������ ��������������� ����������, ��� �������
                               int Po,                    //������� ������ ��������� �����
                               char *s  );                //������ ������

// ���������� ����� - 12
reference     LIBOLD_FUNC   LineOld( double x1, double y1,   // ��������� �����
                                  double x2, double y2,   // �������� �����
                                  unsigned short attr );             // ��� �����

// ���������� ����� - 20
void          LIBOLD_FUNC   shelf( int Tipz, float x, float y,                   //��� �����, ���������� �����
                                int Napr, int Tips,                           //����������� �����, ��� �������
                                float Hs1, float Ksu1, float Fch1, char *s1,  //��������� ������ ��� ������: ������, �������, ���� �������, �������
                                float Hs2, float Ksu2, float Fch2, char *s2,  //��������� ������ ��� ������: ������, �������, ���� �������, �������
                                float Hs3, float Ksu3, float Fch3, char *s3,  //��������� ������ ��� ������������: ������, �������, ���� �������, �������
                                float Hs4, float Ksu4, float Fch4, char *s4 );//��������� ������ ��� ������������: ������, �������, ���� �������, �������

// ���������� ����� - 21
reference     LIBOLD_FUNC   PointOld( double x, double y );

// ���������� ����� - 22
reference     LIBOLD_FUNC   end_obj ();

// ���������� ����� - 13
reference     LIBOLD_FUNC   RoughOld( float x, float y,               //��������� �����
                                   float f1, int Tz,               //���� � ��������, ��� �����
                                   char *s1, char *s2, char *s3  );//�������: ��� ������, ��� ������, ��� ������

// ���������� ����� - 23
void          LIBOLD_FUNC   BaseOld( float x, float y, char *s);      // ��������� ����� �����

// ���������� ����� - 24
int           LIBOLD_FUNC   link_form( float Dl, float U);            //����� ���� ������� �����

// ���������� ����� - 25
void          LIBOLD_FUNC   form( float , float , int ,
                               char *, char *, char * );

// ���������� ����� - 26
int           LIBOLD_FUNC   support_form( float , float , int ,  int );

// ���������� ����� - 27
reference          LIBOLD_FUNC   TableOld( );

// ���������� ����� - 28
void          LIBOLD_FUNC   cut( float , float , float ,
                              char*s, float , float ,
                              int Napr1, float , float , int );

// ���������� ����� - 29
void          LIBOLD_FUNC   strdel( char*s, int pos, int len);

// ���������� ����� - 30
void          LIBOLD_FUNC   strins( char*s, int pos, char*sub);

// ���������� ����� - 31
int           LIBOLD_FUNC   strpos( char *s, char *sub );

// ���������� ����� - 32
reference     LIBOLD_FUNC   wpointer( float x1, float y1,             //���������� �������( ������) �������
                                   float x2, float y2,             //���������� �������� ����� �������
                                   float xt, float yt,             //���������� ������
                                   float Hs, float Ksu, float Fch, //������ ������, �����. ������� ��������, ���� �������
                                   char*s );                       //�������
// ���������� ����� - 33
int           LIBOLD_FUNC   create_tdem( int n1, int dx1 , int dy1,   //������    ��������: ����� �����, �������� �� x � y
                                      int n2, int dx2 , int dy2,   //������    ��������: ����� �����, �������� �� x � y
                                      int n3, int dx3 , int dy3,   //������    ��������: ����� �����, �������� �� x � y
                                      int n4, int dx4 , int dy4 ); //��������� ��������: ����� �����, �������� �� x � y
// ���������� ����� - 34
int           LIBOLD_FUNC   string_obj( char * str );
// ���������� ����� - 35
int           LIBOLD_FUNC   close_tdem( void );
// ���������� ����� - 36
int           LIBOLD_FUNC open_stamp( void );
// ���������� ����� - 37
int          LIBOLD_FUNC column_stamp( unsigned int numb );
// ���������� ����� - 38
int          LIBOLD_FUNC close_stamp (  );
// ���������� ����� - 39
int          LIBOLD_FUNC srough( int Tz, int Tzs, char *s );
// ���������� ����� - 40
void         LIBOLD_FUNC tancircir( double xc1, double yc1, //�����  1-�� ����������
											  				 double radius1,         //������ 1-��  ����������
																 double xc2, double yc2, //�����  2-�� ����������
																 double radius2,         //������ 2-��  ����������
																 int * kp, TAN tang[] ); //����� � ������ ����������� ��������
// ���������� ����� - 41
void LIBOLD_FUNC  conlincir(  double xc, double yc,   //���� ����������
                              double rc,              //������ ����������
                              double x11, double y11, //��������� � �������� �����
                              double x12, double y12, //������
                              double rad,             //������ ���������� ����������
                              int *kp, CON *con );    //���������� ����������� ����������� � ��������� ����������
// ���������� ����� - 42
//��� �������� ���������� ������( �������, �������������, ����������� ����������, ������� ����, ����, ����� �������, ����������� �������������)
//���������� ����� ������
void  LIBOLD_FUNC SetTextStyle( unsigned char flagFirst,   //0 ������ ����� ��� ������� 1 - ����������� ������
                                int textType,  //��� ������
                                float hs , float ksu, float fCh ); //������ ������, �������, ���� ������� ��������


                                
} //extern "C"

#endif
