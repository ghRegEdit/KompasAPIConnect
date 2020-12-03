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

// ША К6 #if defined ( _BUILDLIBOLD )
// ША К6 #  define LIBOLD_FUNC far __export __pascal
// ША К6 #else
// ША К6 #  define LIBOLD_FUNC far __pascal
// ША К6 #endif
#define LIBOLD_FUNC WINAPI

extern "C" {
// Экспортный номер - 14
void          LIBOLD_FUNC   cutll( double x11, double y11,  //первая точка первой прямой
                                double x12, double y12,  //вторая точка первой прямой
                                double x21, double y21,  //первая точка второй прямой
                                double x22, double y22,  //вторая точка второй прямой
                                int * kp,                //количество точек пересечения
                                double *xp, double *yp );//точка пересечения

// Экспортный номер - 15
void          LIBOLD_FUNC   cutarcarc( double xac, double yac, double rada,  //координаты центра и радиус 1 дуги
                                    double xa1, double ya1,               //начальная и конечная точки
                                    double xa2, double ya2,               //первой дуги
                                    short napra,                            //направление
                                    double xbc, double ybc, double radb,  //координаты центра и радиус 2 дуги
                                    double xb1, double yb1,               //начальная и конечная точки
                                    double xb2, double yb2,               //второй дуги
                                    short naprb,                            //направление
                                    int * kp,                             //количество точек пересечения
                                    double  xp[], double yp[] );          //точки пересечения

// Экспортный номер - 16
void          LIBOLD_FUNC   cutlinarc( double x1, double y1,                 //начальная и конечная точки
                                    double x2, double y2,                 //прямой
                                    double xac, double yac, double rada,  //координаты центра и радиус  дуги
                                    double xa1, double ya1,               //начальная и конечная точки
                                    double xa2, double ya2,               //дуги
                                    short napr,                             //направление
                                    int * kp,                             //количество точек пересечения
                                    double  xp[], double yp[]);           //точки пересечения

// Экспортный номер - 17
void          LIBOLD_FUNC   cutcirl( double xc, double yc, double rad,       //координаты центра и радиус  окружности
                                  double x1, double y1,                   //начальная и конечная точки
                                  double x2, double y2,                   //прямой
                                  int * kp,                               //количество точек пересечения
                                  double  xp[], double yp[] );            //точки пересечения

// Экспортный номер - 18
void          LIBOLD_FUNC   cutcirarc( double xcc, double ycc,double radc,   //координаты центра и радиус  окружности
                                    double xac, double yac,double rada,   //координаты центра и радиус  дуги
                                    double xa1, double ya1,               //начальная и конечная точки
                                    double xa2, double ya2,               //дуги
                                    short napr,                             //направление
                                    int * kp,                             //количество точек пересечения
                                    double  xp[], double yp[] );          //точки пересечения


// Экспортный номер - 19
void          LIBOLD_FUNC   conlinlin( double x11, double y11,            //начальная и конечная точки
															      double x12, double y12,               //1 прямой
															      double x21, double y21,               //начальная и конечная точки
															      double x22, double y22,               //2 прямой
                                    double rad,                           //радиус
															      int * kp,                             //количество точек сопряжения
															      CON * con );                          //структура сопряжения
                                    
// Экспортный номер - 43
//-----------------------------------------------------------------------------
// расстояние между  точкой и дугой
//-----------------------------------------------------------------------------
double        LIBOLD_FUNC  dispntarc	(   double x, double y,      //координаты точки
                                       		double xac, double yac,  //центр дуги
																		  		double rada,             //радиус дуги
																			  	double xa1, double ya1,  //начальная точка дуги
																			  	double xa2, double ya2,  //конечная точка дуги
																			  	short napr );           //направление дуги
                                          
// Экспортный номер - 44
//-----------------------------------------------------------------------------
// расстояние между  точкой и прямой
//-----------------------------------------------------------------------------
double       LIBOLD_FUNC  dispntl	( double x,  double y,      //координаты точки
                                    double x1, double y1,    //точка на прямойн
                                    double x2, double y2 );  //точка на прямойн

inline int    LIBOLD_FUNC   close_view( ) { return 1;};

// Экспортный номер - 2
int           LIBOLD_FUNC   setattrlayer( int n,               // номер слоя
                                       int attr,            // состояние слоя
                                       char *comment );     // комментарий

// Экспортный номер - 3
int           LIBOLD_FUNC   create_leaf( char *name,      //имя файла чертежа
                                      int frm,         //формат чертежа
                                      int krat,        //кратность
                                      int tips,        //тип штампа
                                      int pros,        //расположение
                                      char *comment ); //комментарий

// Экспортный номер - 4
int           LIBOLD_FUNC   create_view( int n,              //номер вида
                                      float x, float y,   //точка привязки
                                      float alf,          //угол поворота
                                      float scale,        //масштаб отрисовки вида
                                      char *comment );    //комментарий

// Экспортный номер - 5
int           LIBOLD_FUNC   close_leaf( );

// Экспортный номер - 6
reference     LIBOLD_FUNC   spline(unsigned short tl, float f1 ,float f2 );

// Экспортный номер - 7
reference     LIBOLD_FUNC   TextOld  ( float x, float y,    //точка привязки текста
                                    float fstr,          //угол наклона строки
                                    float hs,            //высота шрифта
                                    float ksu,           //сужение
                                    float fb,            //угол наклона символов
                                    char *s  );          //строка символов

// Экспортный номер - 8
reference     LIBOLD_FUNC   diml( float val, char* qual,              //значение и квалитет
                               float dx, float dy,                 //вектор определяющий положение размерной линии
                               int Pt,                             //признак отрисовки текста
                               int Pn, float Fn, float Dlg,        //параметры выносной полки: признак, угол ножки, длина ножки
                               float x1, float y1, int T1, int Po1,//параметры первой выносной линии: точка привязки, тип стрелки,признак отмены
                               float x2, float y2, int T2, int Po2,//параметры второй выносной линии: точка привязки, тип стрелки,признак отмены
                               char *s  );                         //строка текста

// Экспортный номер - 9
reference     LIBOLD_FUNC   dima( float val,int Napr,                 // значение размера, направление размерной дуги
                               float Fbase, float Rr,              // угол первой выносной линии, радиус размерной дуги
                               int Pt,                             // признак отрисовки текста
                               int Pn, float Fn, float Dlg,        // параметры выносной полки: признак, угол ножки, длина ножки
                               float x1, float y1, int T1, int Po1,// параметры первой выносной линии: точка привязки, тип стрелки,признак отмены
                               float x2, float y2, int T2, int Po2,// параметры второй выносной линии: точка привязки, тип стрелки,признак отмены
                               char *s  );                         // строка текста

// Экспортный номер - 10
reference     LIBOLD_FUNC   dimd( float val, char* qual,  // значение и квалитет
                               float Fbase,            // угол наклона размерной линни к оси X
                               int Pt, int Pn,         // признак отрисовки текста, признак наличия выносной полки
                               float x, float y, int T,// координаты центра образмериваемой окружности, тип стрелки
                               char *s  );             // строка текста

// Экспортный номер - 11
reference     LIBOLD_FUNC   dimr( float val, char* qual,     //значение и квалитет
                               float Fbase,               //угол наклона размерной линни к оси X
                               float Dlg,                 //признак размера с изломом
                               int Pt, int Pn,            //признак отрисовки текста, признак наличия выносной полки
                               float xc, float yc, int T, //координаты центра образмериваемой окружности, тип стрелки
                               int Po,                    //признак отмены размерной линии
                               char *s  );                //строка текста

// Экспортный номер - 12
reference     LIBOLD_FUNC   LineOld( double x1, double y1,   // начальная точка
                                  double x2, double y2,   // конечная точка
                                  unsigned short attr );             // тип линии

// Экспортный номер - 20
void          LIBOLD_FUNC   shelf( int Tipz, float x, float y,                   //тип знака, координаты полки
                                int Napr, int Tips,                           //направление полки, тип стрелки
                                float Hs1, float Ksu1, float Fch1, char *s1,  //параметры строки над полкой: высота, сужение, угол наклона, надпись
                                float Hs2, float Ksu2, float Fch2, char *s2,  //параметры строки под полкой: высота, сужение, угол наклона, надпись
                                float Hs3, float Ksu3, float Fch3, char *s3,  //параметры строки над ответвлением: высота, сужение, угол наклона, надпись
                                float Hs4, float Ksu4, float Fch4, char *s4 );//параметры строки под ответвлением: высота, сужение, угол наклона, надпись

// Экспортный номер - 21
reference     LIBOLD_FUNC   PointOld( double x, double y );

// Экспортный номер - 22
reference     LIBOLD_FUNC   end_obj ();

// Экспортный номер - 13
reference     LIBOLD_FUNC   RoughOld( float x, float y,               //основание знака
                                   float f1, int Tz,               //угол в градусах, тип знака
                                   char *s1, char *s2, char *s3  );//надписи: над знаком, над полкой, под полкой

// Экспортный номер - 23
void          LIBOLD_FUNC   BaseOld( float x, float y, char *s);      // начальная точка опоры

// Экспортный номер - 24
int           LIBOLD_FUNC   link_form( float Dl, float U);            //длина угол наклона звена

// Экспортный номер - 25
void          LIBOLD_FUNC   form( float , float , int ,
                               char *, char *, char * );

// Экспортный номер - 26
int           LIBOLD_FUNC   support_form( float , float , int ,  int );

// Экспортный номер - 27
reference          LIBOLD_FUNC   TableOld( );

// Экспортный номер - 28
void          LIBOLD_FUNC   cut( float , float , float ,
                              char*s, float , float ,
                              int Napr1, float , float , int );

// Экспортный номер - 29
void          LIBOLD_FUNC   strdel( char*s, int pos, int len);

// Экспортный номер - 30
void          LIBOLD_FUNC   strins( char*s, int pos, char*sub);

// Экспортный номер - 31
int           LIBOLD_FUNC   strpos( char *s, char *sub );

// Экспортный номер - 32
reference     LIBOLD_FUNC   wpointer( float x1, float y1,             //координаты вершины( острия) стрелки
                                   float x2, float y2,             //координаты конечной точки стрелки
                                   float xt, float yt,             //координаты текста
                                   float Hs, float Ksu, float Fch, //высота шрифта, коэфф. сужения символов, угол наклона
                                   char*s );                       //надпись
// Экспортный номер - 33
int           LIBOLD_FUNC   create_tdem( int n1, int dx1 , int dy1,   //первая    страница: число строк, смещение по x и y
                                      int n2, int dx2 , int dy2,   //вторая    страница: число строк, смещение по x и y
                                      int n3, int dx3 , int dy3,   //третья    страница: число строк, смещение по x и y
                                      int n4, int dx4 , int dy4 ); //четвертая страница: число строк, смещение по x и y
// Экспортный номер - 34
int           LIBOLD_FUNC   string_obj( char * str );
// Экспортный номер - 35
int           LIBOLD_FUNC   close_tdem( void );
// Экспортный номер - 36
int           LIBOLD_FUNC open_stamp( void );
// Экспортный номер - 37
int          LIBOLD_FUNC column_stamp( unsigned int numb );
// Экспортный номер - 38
int          LIBOLD_FUNC close_stamp (  );
// Экспортный номер - 39
int          LIBOLD_FUNC srough( int Tz, int Tzs, char *s );
// Экспортный номер - 40
void         LIBOLD_FUNC tancircir( double xc1, double yc1, //центр  1-ой окружности
											  				 double radius1,         //радиус 1-ой  окружности
																 double xc2, double yc2, //центр  2-ой окружности
																 double radius2,         //радиус 2-ой  окружности
																 int * kp, TAN tang[] ); //число и массив касательных отрезков
// Экспортный номер - 41
void LIBOLD_FUNC  conlincir(  double xc, double yc,   //цетр окружности
                              double rc,              //радиус окружности
                              double x11, double y11, //начальная и конечная точки
                              double x12, double y12, //прямой
                              double rad,             //радиус окружности сопряжения
                              int *kp, CON *con );    //количество сопрягающих окружностей и структуры сопряжения
// Экспортный номер - 42
//для объектов содержащих тексты( размеры, шероховатости, технические требования, стрелка вида, база, линия разреза, неуказанной шероховатости)
//определить стиль текста
void  LIBOLD_FUNC SetTextStyle( unsigned char flagFirst,   //0 первый стиль для объкута 1 - последующие тексты
                                int textType,  //тип текста
                                float hs , float ksu, float fCh ); //высота шрифта, сужение, угол наклона символов


                                
} //extern "C"

#endif
