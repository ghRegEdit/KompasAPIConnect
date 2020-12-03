

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Mar 25 03:25:38 2011
 */
/* Compiler settings for .\libConstants3D.odl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __ksConstants3D_h__
#define __ksConstants3D_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __Kompas6Constants3D_LIBRARY_DEFINED__
#define __Kompas6Constants3D_LIBRARY_DEFINED__

/* library Kompas6Constants3D */
/* [version][uuid] */ 

//-------------------------------------------------------------------------------
// _1_ Константы
// ---
  // _2_ ksObj3dTypeEnum                - Типы 3D объектов
  // _3_ ErrorType3d                    - Ошибки 3D
  // _4_ ksDirectionTypeEnum            - Типы направлений
  // _5_ ksEndTypeEnum                  - Типы операций
  // _1e_ Part_Type                     - Тип компонента
  // _1f_ MateConstraintType            - Типы сопряжений
  // _1g_ ViewMode                      - Режим визуализации модели 
  // _1h_ ProjectionType                - Типы предопределенных проекций отображения
  // _1i_ D3FormatConvType              - Определения для конвертации в дополнительные форматы jgs, sat, xt, step, stl, VRML
  // _1j_ ksUseColorEnum                - Типы используемого цвета
  // _1k_ Positioner_Type               - Тип перемещения
  // _1l_ Intersection_Type             - Типы пересечений
  // _1m_ ksMateType                    - Типы математических объектов учавствующих в сопряжении.
  // _1n_ ksChooseBodiesType            - Типы действий для оперций над телами
  // _1o_ ksBooleanType                 - Типы булевых операций над твердыми телами
  // _1p_ ksLineBuildingType            - Способ построения сегмента ломоной.
  // _1q_ ksPart7CollectionTypeEnum     - Способ построения сегмента ломоной.
  // _1r_ ksUnfoldTypeEnum              - Способ определения длины развертки
  // _1s_ ksBendDisposalEnum            - Тип размещения сгиба на ребре
  // _1t_ ksBendLengthTypeEnum          - Тип определения длины
  // _1u_ ksBendOffsetTypeEnum          - Тип смещения
  // _1v_ ksBendSideTypeEnum            - Тип построения боковой стороны сгиба
  // _1w_ ksBendReleaseTypeEnum         - Тип освобождения cгиба
  // _1x_ ksBendAngleReleaseTypeEnum    - Способ освобождения угла сгиба
  // _1y_ ksBendTypeEnum                - Способ сгиба
  // _1z_ ksHoleCutTypeEnum             - Тип построения отверстия и выреза
  // _2a_ ksChoosePartsType             - Типы действий над компонентами сборки
  // _2b_ ksChooseType                  - Область применения
  // _2c_ ksPoint3DTypeEnum	           - Способы построения пространственной точки.
  // _2d_ ksPoint3DCurveParamTypeEnum   - Типы смещений при способе построения точки вдоль кривой.
  // _2e_ ksPoint3DSurfaceParamTypeEnum - Типы смещений при способе построения точки на поверхности.
  // _2f_ ksOrientationTypeEnum         - Тип ориентирования ЛСК.
  // _2g_ ksMeasureResultEnum           - Результат измерения расстояния и угла между поверхностями.
  // _2h_ ksModelObjectParamTypeEnum    - Тип параметров объекта.
  // _2i_ ks3DLineStyle                 - Стили 3D линий для отрисовки с помощью OpenGL.
  // _2j_ ksModelObjectError            - Результат выполнения операции.
  // _21_ ksLoadTypeEnum                - Тип загрузки компонента.
  // _22_ ksFacetCullingMode            - Режим фильтрации отображаемых граней внешнего объекта.
  // _23_ ksEquidistant3DCutModeEnum    - Обход углов эквидистанты 3D.
  // _24_ ksPatternBasePointTypeEnum    - Способ задания базовой точки.
  // _25_ ksExtensionTypeEnum           - Тип продления поверхности.
  // _26_ ksExtensionLimitTypeEnum      - Способ ограничения.
  // _27_ ksVector3DParametersTypeEnum  - Типы параметров вектора.
  // _28_ ksBasisVectorTypeEnum         - Типы базисного вектора.
  // _29_ ksConnectTypeEnum             - Тип соединения кривых.
  // _30_ ksArc3DBuildingTypeEnum       - Способ создания 3D дуги.
  // _31_ ksArc3DParameterEnum          - Индекс параметра 3D дуги.
  // _32_ ksRotatedTypeEnum             - Способ построения угла вращения.
  // _33_ ksLinearPatternBuildingTypeEnum     - Способ построения массива по сетке.
  // _34_ ksPartAccessTypeEnum          -  Тип доступа к компоненту.
  // _35_ ksMeshPointsSurfaceBuildingTypeEnum - Тип поверхности по сети точек.
  // _36_ ksCloudSurfaceBuildingTypeEnum      - Тип поверхности по облаку точек.
  // _37_ ksCloudTypeEnum               - Способ распознования сети точек.
//
//
// _1_ Константы
  //------------------------------------------------------------------------------
  // _1a_ типы 3D объектов
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("B6D1C804-A4D7-4e09-BC89-17A14F478A5E") 
enum _Obj3dType
    {	o3d_unknown	= 0,
	o3d_planeXOY	= 1,
	o3d_planeXOZ	= 2,
	o3d_planeYOZ	= 3,
	o3d_pointCS	= 4,
	o3d_sketch	= 5,
	o3d_face	= 6,
	o3d_edge	= 7,
	o3d_vertex	= 8,
	o3d_axis2Planes	= 9,
	o3d_axis2Points	= 10,
	o3d_axisConeFace	= 11,
	o3d_axisEdge	= 12,
	o3d_axisOperation	= 13,
	o3d_planeOffset	= 14,
	o3d_planeAngle	= 15,
	o3d_plane3Points	= 16,
	o3d_planeNormal	= 17,
	o3d_planeTangent	= 18,
	o3d_planeEdgePoint	= 19,
	o3d_planeParallel	= 20,
	o3d_planePerpendicular	= 21,
	o3d_planeLineToEdge	= 22,
	o3d_planeLineToPlane	= 23,
	o3d_baseExtrusion	= 24,
	o3d_bossExtrusion	= 25,
	o3d_cutExtrusion	= 26,
	o3d_baseRotated	= 27,
	o3d_bossRotated	= 28,
	o3d_cutRotated	= 29,
	o3d_baseLoft	= 30,
	o3d_bossLoft	= 31,
	o3d_cutLoft	= 32,
	o3d_chamfer	= 33,
	o3d_fillet	= 34,
	o3d_meshCopy	= 35,
	o3d_circularCopy	= 36,
	o3d_curveCopy	= 37,
	o3d_circPartArray	= 38,
	o3d_meshPartArray	= 39,
	o3d_curvePartArray	= 40,
	o3d_derivPartArray	= 41,
	o3d_incline	= 42,
	o3d_shellOperation	= 43,
	o3d_ribOperation	= 44,
	o3d_baseEvolution	= 45,
	o3d_bossEvolution	= 46,
	o3d_cutEvolution	= 47,
	o3d_mirrorOperation	= 48,
	o3d_mirrorAllOperation	= 49,
	o3d_cutByPlane	= 50,
	o3d_cutBySketch	= 51,
	o3d_holeOperation	= 52,
	o3d_polyline	= 53,
	o3d_conicSpiral	= 54,
	o3d_spline	= 55,
	o3d_cylindricSpiral	= 56,
	o3d_importedSurface	= 57,
	o3d_thread	= 58,
	o3d_EvolutionSurface	= 59,
	o3d_ExtrusionSurface	= 60,
	o3d_RotatedSurface	= 61,
	o3d_LoftSurface	= 62,
	o3d_MacroObject	= 63,
	o3d_UnionComponents	= 64,
	o3d_MoldCavity	= 65,
	o3d_planeMiddle	= 66,
	o3d_controlPoint	= 67,
	o3d_conjunctivePoint	= 68,
	o3d_aggregate	= 69,
	o3d_point3D	= 70,
	o3d_axisOX	= 71,
	o3d_axisOY	= 72,
	o3d_axisOZ	= 73,
	o3d_sheetMetalBody	= 74,
	o3d_sheetMetalBend	= 75,
	o3d_sheetMetalLineBend	= 76,
	o3d_sheetMetalHole	= 77,
	o3d_sheetMetalCut	= 78,
	o3d_UnHistoried	= 79,
	o3d_baselineDimension3D	= 80,
	o3d_lineDimension3D	= 81,
	o3d_radialDimension3D	= 82,
	o3d_diametralDimension3D	= 83,
	o3d_angleDimension3D	= 84,
	o3d_localCoordinateSystem	= 85,
	o3d_leader3D	= 86,
	o3d_markLeader3D	= 87,
	o3d_rough3D	= 88,
	o3d_positionLeader3D	= 89,
	o3d_brandLeader3D	= 90,
	o3d_base3D	= 91,
	o3d_tolerance3D	= 92,
	o3d_SplitLine	= 93,
	o3d_SurfacePatch	= 94,
	o3d_FaceRemover	= 95,
	o3d_SurfaceSewer	= 96,
	o3d_NurbsSurface	= 97,
	o3d_SurfacesIntersectionCurve	= 98,
	o3d_lastEntityElement	= 99,
	o3d_variable	= 100,
	o3d_placement	= 101,
	o3d_entityCollection	= 102,
	o3d_document	= 103,
	o3d_part	= 104,
	o3d_entity	= 105,
	o3d_mateConstraint	= 106,
	o3d_mateConstraintCollection	= 107,
	o3d_partCollection	= 108,
	o3d_constrElement	= 109,
	o3d_operationElement	= 110,
	o3d_curveElement	= 111,
	o3d_rasterFormat	= 112,
	o3d_additionFormat	= 113,
	o3d_bodyCollection	= 114,
	o3d_body	= 115,
	o3d_faceCollection	= 116,
	o3d_tessellation	= 117,
	o3d_facet	= 118,
	o3d_featureCollection	= 119,
	o3d_feature	= 120,
	o3d_edgeCollection	= 121,
	o3d_orientedEdge	= 122,
	o3d_orientedEdgeCollection	= 123,
	o3d_loop	= 124,
	o3d_loopCollection	= 125,
	o3d_curve3D	= 126,
	o3d_surface	= 127,
	o3d_massInertiaParam	= 128,
	o3d_lineseg3dParam	= 129,
	o3d_circle3dParam	= 130,
	o3d_ellipse3dParam	= 131,
	o3d_nurbsPoint3dParam	= 132,
	o3d_nurbsPoint3dCollection	= 133,
	o3d_nurbsPoint3dCollCollection	= 134,
	o3d_nurbsKnotCollection	= 135,
	o3d_nurbs3dParam	= 136,
	o3d_planeParam	= 137,
	o3d_coneParam	= 138,
	o3d_cylinderParam	= 139,
	o3d_sphereParam	= 140,
	o3d_torusParam	= 141,
	o3d_nurbsSurfaceParam	= 142,
	o3d_mateConstraintGroup	= 143,
	o3d_measurer	= 144,
	o3d_selectionMng	= 145,
	o3d_chooseMng	= 146,
	o3d_arc3dParam	= 147,
	o3d_deletedCopyCollection	= 148,
	o3d_viewProjection	= 149,
	o3d_viewProjectionCollection	= 150,
	o3d_attribute	= 151,
	o3d_attributeCollection	= 152,
	o3d_componentPositioner	= 153,
	o3d_modelLibrary	= 154,
	o3d_ObjectsFilter3D	= 155,
	o3d_coordinate3dCollection	= 156,
	o3d_intersectionResult	= 157,
	o3d_PolygonalLineVertexParam	= 158,
	o3d_variableCollection	= 159,
	o3d_sTrackingPointsMeasurer	= 160,
	o3d_surfaceElement	= 161,
	o3d_designationElement	= 162,
	o3d_copyleftObject	= 163,
	o3d_firstEntityElement2	= 500,
	o3d_Equidistant3D	= 501,
	o3d_TrimmedCurve	= 502,
	o3d_TrimmedCurveObject	= 503,
	o3d_AuxMeshCopy	= 504,
	o3d_AuxCircularCopy	= 505,
	o3d_AuxCurveCopy	= 506,
	o3d_PointDrivenPattern	= 507,
	o3d_PartsPointDrivenPattern	= 508,
	o3d_AuxMirrorOperation	= 509,
	o3d_ConnectCurve	= 510,
	o3d_ConnectCurveObject	= 511,
	o3d_FilletCurve	= 512,
	o3d_FilletCurveObject	= 513,
	o3d_EquidistantSurface	= 514,
	o3d_RuledSurface	= 515,
	o3d_TrimmedSurface	= 516,
	o3d_ExtensionSurface	= 517,
	o3d_SurfaceThickening	= 518,
	o3d_Arc3D	= 519,
	o3d_AuxPointDrivenPattern	= 520,
	o3d_BodiesPointDrivenPattern	= 521,
	o3d_TablePattern	= 522,
	o3d_PartsTablePattern	= 523,
	o3d_AuxTablePattern	= 524,
	o3d_BodiesTablePattern	= 525,
	o3d_MeshPointsSurface	= 526,
	o3d_CloudPointsSurface	= 527,
	o3d_BodiesMeshCopy	= 528,
	o3d_BodiesCircularCopy	= 529,
	o3d_BodiesCurveCopy	= 530,
	o3d_Scaling3D	= 531,
	o3d_lastEntityElement2	= 1500
    } 	Obj3dType;

  //------------------------------------------------------------------------------
  // _1a_ типы 3D объектов
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("979068C4-B232-4a85-B59D-77F71FAE0835") Obj3dType ksObj3dTypeEnum;

  //------------------------------------------------------------------------------
  // _1b_ ошибки 3D
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("AAC936A6-363A-4366-A00B-11E69DC9E011") 
enum _ErrorType3d
    {	et3dNo3dDocument	= -7,
	et3dAbort	= -1,
	et3dError1	= 1,
	et3dError2	= 2,
	et3dError3	= 3,
	et3dError4	= 4,
	et3dError5	= 5,
	et3dError6	= 6,
	et3dError7	= 7,
	et3dError8	= 8,
	et3dError9	= 9,
	et3dError10	= 10,
	et3dError11	= 11,
	et3dError12	= 12,
	et3dError13	= 13,
	et3dError14	= 14,
	et3dError15	= 15,
	et3dError16	= 16,
	et3dError17	= 17,
	et3dError18	= 18,
	et3dError19	= 19,
	et3dError20	= 20,
	et3dError21	= 21,
	et3dError22	= 22,
	et3dError23	= 23,
	et3dError24	= 24,
	et3dError25	= 25,
	et3dError26	= 26,
	et3dError27	= 27,
	et3dError28	= 28,
	et3dError29	= 29,
	et3dError30	= 30,
	et3dError31	= 31,
	et3dError32	= 32,
	et3dError33	= 33,
	et3dError34	= 34,
	et3dError35	= 35,
	et3dError36	= 36,
	et3dError37	= 37,
	et3dError38	= 38,
	et3dError39	= 39,
	et3dError40	= 40,
	et3dError41	= 41,
	et3dError42	= 42,
	et3dError43	= 43,
	et3dError44	= 44,
	et3dError45	= 45,
	et3dError46	= 46,
	et3dError47	= 47,
	et3dError48	= 48,
	et3dError49	= 49,
	et3dError50	= 50,
	et3dError51	= 51,
	et3dError52	= 52,
	et3dError53	= 53,
	et3dError54	= 54,
	et3dError55	= 55,
	et3dError56	= 56,
	et3dError57	= 57,
	et3dError58	= 58,
	et3dError59	= 59,
	et3dError60	= 60,
	et3dError61	= 61,
	et3dError62	= 62,
	et3dError63	= 63,
	et3dError64	= 64,
	et3dError65	= 65,
	et3dError66	= 66,
	et3dError67	= 67,
	et3dError68	= 68,
	et3dError69	= 69,
	et3dError70	= 70,
	et3dError71	= 71,
	et3dError72	= 72,
	et3dError73	= 73,
	et3dError74	= 74,
	et3dError75	= 75,
	et3dError76	= 76,
	et3dError77	= 77,
	et3dError78	= 78,
	et3dError79	= 79,
	et3dError80	= 80,
	et3dError81	= 81,
	et3dError82	= 82,
	et3dError83	= 83,
	et3dError84	= 84,
	et3dError85	= 85,
	et3dError86	= 86,
	et3dError87	= 87,
	et3dError88	= 88,
	et3dError89	= 89,
	et3dError90	= 90,
	et3dError91	= 91,
	et3dError92	= 92,
	et3dError93	= 93,
	et3dError94	= 94,
	et3dError95	= 95,
	et3dError96	= 96,
	et3dError97	= 97,
	et3dError98	= 98,
	et3dError99	= 99,
	et3dError100	= 100,
	et3dError101	= 101,
	et3dError102	= 102,
	et3dError103	= 103,
	et3dError104	= 104,
	et3dError105	= 105,
	et3dError106	= 106,
	et3dError107	= 107,
	et3dError108	= 108,
	et3dError109	= 109,
	et3dError110	= 110,
	et3dError111	= 111,
	et3dError112	= 112,
	et3dError113	= 113,
	et3dError114	= 114,
	et3dError115	= 115,
	et3dError116	= 116,
	et3dError117	= 117,
	et3dError118	= 118,
	et3dError119	= 119,
	et3dError120	= 120,
	et3dError121	= 121,
	et3dError122	= 122,
	et3dError123	= 123,
	et3dError124	= 124,
	et3dError125	= 125,
	et3dError126	= 126,
	et3dError127	= 127,
	et3dError128	= 128,
	et3dError129	= 129,
	et3dError130	= 130,
	et3dError131	= 131,
	et3dError132	= 132,
	et3dError133	= 133,
	et3dError134	= 134,
	et3dError135	= 135,
	et3dError136	= 136,
	et3dError137	= 137,
	et3dError138	= 138,
	et3dError139	= 139,
	et3dError140	= 140,
	et3dError141	= 141,
	et3dError142	= 142,
	et3dError143	= 143,
	et3dError144	= 144,
	et3dError145	= 145,
	et3dError146	= 146,
	et3dError147	= 147,
	et3dError148	= 148,
	et3dError149	= 149,
	et3dError150	= 150,
	et3dError151	= 151,
	et3dError152	= 152,
	et3dError153	= 153,
	et3dError154	= 154,
	et3dError155	= 155,
	et3dError156	= 156,
	et3dError157	= 157,
	et3dError158	= 158,
	et3dError159	= 159,
	et3dError160	= 160,
	et3dError161	= 161,
	et3dError162	= 162,
	et3dError163	= 163,
	et3dError164	= 164,
	et3dError165	= 165,
	et3dError166	= 166,
	et3dError167	= 167,
	et3dError168	= 168,
	et3dError169	= 169,
	et3dError170	= 170,
	et3dError171	= 171,
	et3dError172	= 172,
	et3dError173	= 173,
	et3dError174	= 174,
	et3dError175	= 175,
	et3dError176	= 176,
	et3dError177	= 177,
	et3dError179	= 179,
	et3dError180	= 180,
	et3dError181	= 181,
	et3dError182	= 182
    } 	ErrorType3d;

#define	MAXERROR3d	( 182 )

  //------------------------------------------------------------------------------
  // _1c_ типы направлений
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("A4E48013-AED8-4866-B202-F7C114FBCBC4") 
enum _Direction_Type
    {	dtNormal	= 0,
	dtReverse	= 1,
	dtBoth	= 2,
	dtMiddlePlane	= 3
    } 	Direction_Type;

  //------------------------------------------------------------------------------
  // _1c_ типы направлений
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("4964F564-28E7-4d3e-829B-E91CB7A39137") Direction_Type ksDirectionTypeEnum;

  //------------------------------------------------------------------------------
  // _1d_ типы операций
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("2D7B00CE-B16E-421b-AB0F-194E154480EB") 
enum _End_Type
    {	etBlind	= 0,
	etThroughAll	= 1,
	etUpToVertexTo	= 2,
	etUpToVertexFrom	= 3,
	etUpToSurfaceTo	= 4,
	etUpToSurfaceFrom	= 5,
	etUpToNearSurface	= 6
    } 	End_Type;

  //------------------------------------------------------------------------------
  // _1d_ типы операций
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("7AE7F181-806D-4e5f-8009-4243F805985F") End_Type ksEndTypeEnum;

  //------------------------------------------------------------------------------
  // _1e_ Тип компонента
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("CAF37955-8DD4-4c8b-9353-086F3DBDD25F") 
enum _Part_Type
    {	pInPlace_Part	= -4,
	pNew_Part	= -3,
	pEdit_Part	= -2,
	pTop_Part	= -1
    } 	Part_Type;

  //------------------------------------------------------------------------------
  // _1f_ типы сопряжений
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D35C0B15-B4AD-4162-AA05-6BD05C805E7C") 
enum _MateConstraintType
    {	mc_Coincidence	= 0,
	mc_Parallel	= 1,
	mc_Perpendicular	= 2,
	mc_Tangency	= 3,
	mc_Concentric	= 4,
	mc_Distance	= 5,
	mc_Angle	= 6,
	mc_InPlace	= 7
    } 	MateConstraintType;

  //------------------------------------------------------------------------------
  // _1g_ режим визуализации модели 
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("E6DF6A50-5E51-4036-A2E4-C391CACAC0BB") 
enum _ViewMode
    {	vm_Wireframe	= 0,
	vm_HiddenRemoved	= 1,
	vm_HiddenThin	= 2,
	vm_Shaded	= 3
    } 	ViewMode;

  ///////////////////////////////////////////////////////
  // _1h_ типы предопределенных проекций отображения
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("5B4C6E01-A2A8-48c9-B2AE-781B1D1C1BB9") 
enum _ProjectionType
    {	vp_None	= -1,
	vp_NormalTo	= 0,
	vp_Front	= 1,
	vp_Rear	= 2,
	vp_Up	= 3,
	vp_Down	= 4,
	vp_Left	= 5,
	vp_Right	= 6,
	vp_IsoXYZ	= 7,
	vp_IsoYZX	= 8,
	vp_IsoZXY	= 9,
	vp_Dio	= 10
    } 	ProjectionType;

  //------------------------------------------------------------------------------
  // _1i_ определения для конвертации в дополнительные форматы jgs, sat, xt, step, stl, VRML
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("812D86F5-E9FC-48f1-82AF-966785EE7426") 
enum _D3FormatConvType
    {	format_SAT	= 1,
	format_XT	= 2,
	format_STEP	= 3,
	format_IGES	= 4,
	format_VRML	= 5,
	format_STL	= 6
    } 	D3FormatConvType;

  //------------------------------------------------------------------------------
  // _1j_ Типы используемого цвета
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("8967DE31-3B79-4d39-A37E-A5339DDB46B3") 
enum _UseColor
    {	useColorUnknown	= -1,
	useColorOur	= 0,
	useColorOwner	= 1,
	useColorSource	= 2
    } 	UseColor;

  //------------------------------------------------------------------------------
  // _1j_ Типы используемого цвета
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("88C91E24-6CB2-408f-9418-FDDEC91BC73D") UseColor ksUseColorEnum;

  //------------------------------------------------------------------------------
  // _1k_ Тип перемещения
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("0BA91E24-1695-40ea-BD4C-FC1CAAFBADF3") 
enum _Positioner_Type
    {	pnMove	= 0,
	pnRotate	= 1
    } 	Positioner_Type;

  //------------------------------------------------------------------------------
  // _1l_ Типы пересечений.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("B5A71CD2-1FF5-4ba2-B733-F7D563FA2104") 
enum _Intersection_Type
    {	itTangentPoint	= 1,
	itTangentCurve	= 2,
	itTangentSurface	= 3,
	itBody	= 4
    } 	Intersection_Type;

  //------------------------------------------------------------------------------
  // _1m_ Типы математических объектов учавствующих в сопряжении.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("FA6F3F1A-E10D-4022-A546-E4DD75895C90") 
enum _MateType
    {	ksMateUnknown	= 0,
	ksMatePoint	= 1,
	ksMateLine	= 2,
	ksMatePlane	= 3,
	ksMateCylinder	= 4,
	ksMateCone	= 5,
	ksMateSphere	= 6,
	ksMateTorus	= 7,
	ksMateCircle	= 8
    } 	ksMateType;

  //------------------------------------------------------------------------------
  // _1n_ Типы действий для оперций над телами
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("F5E8CD7E-785C-4a3f-BF94-42005021248A") 
enum _ChooseBodiesType
    {	ksNewBody	= 0,
	ksAutomaticDefinition	= 1,
	ksManualEditing	= 2,
	ksAllBodies	= 3
    } 	ksChooseBodiesType;

  //------------------------------------------------------------------------------
  // _1o_ Типы булевых операций над твердыми телами
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("58EB5E98-755F-477b-8EAE-40356D8235D3") 
enum _BooleanType
    {	ksBooleanUnknown	= 0,
	ksIntersect	= 1,
	ksDifference	= 2,
	ksUnion	= 3
    } 	ksBooleanType;

  //------------------------------------------------------------------------------
  // _1p_ Способ построения сегмента ломоной.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("4DEC076F-B6BD-45a5-9EAF-98B8903F9679") 
enum _LineBuildingType
    {	ksLBTByPoint	= 0,
	ksLBTXDirection	= 1,
	ksLBTYDirection	= 2,
	ksLBTZDirection	= 3,
	ksLBTParallel	= 4,
	ksLBTPerpendicular	= 5,
	ksLBTByPoint3DParams	= 6
    } 	ksLineBuildingType;

  //------------------------------------------------------------------------------
  // _1q_ Способ построения сегмента ломоной.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("694C5399-C24F-4c55-AE20-1DB0B3FA20F5") 
enum _Part7CollectionTypeEnum
    {	ksAllParts	= 0,
	ksUniqueParts	= 1
    } 	ksPart7CollectionTypeEnum;

  //-------------------------------------------------------------------------------
  // _1r_ Способ определения длины развертки.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("C70EACA3-4800-499b-AECB-44455CFFB90A") 
enum _ksUnfoldTypeEnum
    {	ksCoefficient	= 0,
	ksValueBend	= 1,
	ksDecreaseBend	= 2,
	ksTableBends	= 3
    } 	ksUnfoldTypeEnum;

  //-------------------------------------------------------------------------------
  // _1s_ Тип размещения сгиба на ребре .
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("21039896-B184-4281-8E53-1250C6DEEDF9") 
enum _ksBendDisposalEnum
    {	ksBendDisposalAllLength	= 0,
	ksBendDisposalCentre	= 1,
	ksBendDisposalLeft	= 2,
	ksBendDisposalRight	= 3,
	ksBendDisposalTwo	= 4,
	ksBendDisposalLeftAndWidth	= 5,
	ksBendDisposalRightAndWidth	= 6
    } 	ksBendDisposalEnum;

  //-------------------------------------------------------------------------------
  // _1t_ Тип определения длины.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("CD78E854-7C68-428c-8F62-C06830B4FF1D") 
enum _ksBendLengthTypeEnum
    {	ksBendLengthByContinue	= 0,
	ksBendLengthByContour	= 1,
	ksBendLengthByTouch	= 2
    } 	ksBendLengthTypeEnum;

  //-------------------------------------------------------------------------------
  // _1u_ Тип смещения.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D1C2FC96-4E75-4db6-B8F7-0123E6D16A9A") 
enum _ksBendOffsetTypeEnum
    {	ksBendOffsetIn	= 0,
	ksBendOffsetOut	= 1,
	ksBendOffsetLineOutside	= 2,
	ksBendOffsetLineInside	= 3,
	ksBendOffsetByTouch	= 4
    } 	ksBendOffsetTypeEnum;

  //-------------------------------------------------------------------------------
  // _1v_ Тип построения боковой стороны сгиба.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D809F5D8-1D57-49b3-B202-C2BF2C113700") 
enum _ksBendSideTypeEnum
    {	ksBendSideByAngle	= 0,
	ksBendSideByWidening	= 1
    } 	ksBendSideTypeEnum;

  //-------------------------------------------------------------------------------
  // _1w_ Тип освобождения cгиба.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("54A9A1BA-D745-48fe-B902-578BF05FAB49") 
enum _ksBendReleaseTypeEnum
    {	ksBendReleaseByRect	= 0,
	ksBendReleaseByCircle	= 1
    } 	ksBendReleaseTypeEnum;

  //-------------------------------------------------------------------------------
  // _1x_ Способ освобождения угла сгиба.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("22C2B7D6-DBAE-49a1-9F73-14A03F44B0CD") 
enum _ksBendAngleReleaseTypeEnum
    {	ksBendAngleBendOnly	= 0,
	ksBendAngleIn	= 1,
	ksBendAngleAllBends	= 2
    } 	ksBendAngleReleaseTypeEnum;

  //-------------------------------------------------------------------------------
  // _1y_ Способ сгиба.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("188CFE49-BC6B-4e5f-86FA-2114FC706E30") 
enum _ksBendTypeEnum
    {	ksLineBend	= 0,
	ksBendLineOutside	= 1,
	ksBendLineInside	= 2,
	ksBendByTouch	= 3
    } 	ksBendTypeEnum;

  //-------------------------------------------------------------------------------
  // _1z_ Тип построения отверстия и выреза .
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("9967A367-CB76-4960-8689-3B2305277708") 
enum _ksHoleCutTypeEnum
    {	ksHoleCutByWidth	= 0,
	ksHoleCutByDepth	= 1,
	ksHoleCutUpToSurface	= 2
    } 	ksHoleCutTypeEnum;

  //------------------------------------------------------------------------------
  // _2a_ Способ определения области применения для компонентов в сборочной операции
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D203DCD8-F3CC-4c5d-AA32-09F74F66FF98") 
enum _ChoosePartsType
    {	ksChAutomaticDefinition	= 1,
	ksChManualEditing	= 2,
	ksChAllParts	= 3,
	ksChNoLibraryParts	= 4
    } 	ksChoosePartsType;

  //------------------------------------------------------------------------------
  // _2b_ Область применения
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("1CDF04A8-CE92-4d22-8F94-1B1375742861") 
enum _ChooseType
    {	ksChBodiesAndParts	= 1,
	ksChParts	= 2,
	ksChBodies	= 3
    } 	ksChooseType;

//-------------------------------------------------------------------------------
// _2c_ ksPoint3DTypeEnum - Способы построения пространственной точки.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("3F409E43-7A53-4ae8-A17B-5B815E450FC1") 
enum _ksPoint3DTypeEnum
    {	ksPUnknown	= 0,
	ksPParamCoord	= 1,
	ksPDisplace	= 2,
	ksPIntersect	= 3,
	ksPCenter	= 4,
	ksPCurve	= 5,
	ksPSurface	= 6,
	ksPProjection	= 7,
	ksPCylindrCoord	= 8,
	ksPSphericCoord	= 9
    } 	ksPoint3DTypeEnum;

//-------------------------------------------------------------------------------
// _2d_ ksPoint3DCurveParamTypeEnum - Типы смещений при способе построения точки вдоль кривой.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D619D348-858C-436b-992D-035DEDA5607C") 
enum _ksPoint3DCurveParamTypeEnum
    {	ksOffsetByU	= 1,
	ksOffsetByLen	= 2,
	ksOffsetByAngle	= 3
    } 	ksPoint3DCurveParamTypeEnum;

//-------------------------------------------------------------------------------
// _2e_ ksPoint3DSurfaceParamTypeEnum - Типы смещений при способе построения точки на поверхности.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("73AF2D44-A0DA-4062-AD6D-11728988A474") 
enum _ksPoint3DSurfaceParamTypeEnum
    {	ksOffsetByUV	= 1,
	ksOffsetByLenFromObj	= 2
    } 	ksPoint3DSurfaceParamTypeEnum;

//-------------------------------------------------------------------------------
// _2g_ ksMeasureResultEnum - Результат измерения расстояния и угла между поверхностями.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("0CDDA9A4-158F-4fd4-B2A8-FFE1389A7E1B") 
enum _ksMeasureResultEnum
    {	ksMResUnknown	= 0,
	ksMResAxisAxisCoaxial	= 1,
	ksMResAxisAxisParallel	= 2,
	ksMResAxisAxisIntersect	= 3,
	ksMResAxisAxisDistant	= 4,
	ksMResAxisSurfColinear	= 5,
	ksMResAxisSurfParallel	= 6,
	ksMResAxisSurfIntersect	= 7,
	ksMResAxisSurfDistant	= 8,
	ksMResSurfSurfColinear	= 9,
	ksMResSurfSurfParallel	= 10
    } 	ksMeasureResultEnum;

// -------------------------------------------------------------------------------
// _2f_ ksOrientationTypeEnum  - Тип ориентирования ЛСК.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("4EAE8137-CEA4-4f75-97E4-1A4374FFD96A") 
enum _ksOrientationTypeEnum
    {	ksAxisOrientation	= 0,
	ksEulerCorners	= 1,
	ksOrientByObject	= 2
    } 	ksOrientationTypeEnum;

//-------------------------------------------------------------------------------
// _2h_ ksModelObjectParamTypeEnum - Тип параметров объекта.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("E88E7E08-B3F8-49f7-872E-B80795EDED95") 
enum _ksModelObjectParamTypeEnum
    {	ksMOAllParam	= 1,
	ksMOPartAllParam	= 2,
	ksMOCurrentLSKAllParam	= 3
    } 	ksModelObjectParamTypeEnum;

//-------------------------------------------------------------------------------
// _2i_ ks3DLineStyle - Стили 3D линий для отрисовки с помощью OpenGL.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("4E11BABD-F5A9-4678-9387-F112C676CDE2") 
enum _ks3DLineStyle
    {	ksCS3DNoDrawing	= 0,
	ksCS3DSolid	= 1,
	ksCS3DDashed	= 2,
	ksCS3DDotted	= 3,
	ksCS3DDashDot	= 4,
	ksCS3DDashDotLDash2Dots	= 5
    } 	ks3DLineStyle;

//-------------------------------------------------------------------------------
// _21_  ksLoadTypeEnum - Тип загрузки компонента.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("7E3A2F5D-3339-45eb-BA57-6E99DA20BB24") 
enum _ksLoadStateEnum
    {	ksLUnknown	= -1,
	ksLCompletely	= 0,
	ksLUnload	= 1,
	ksLPartially	= 2
    } 	ksLoadStateEnum;

//-------------------------------------------------------------------------------
// _22_ ksFacetCullingMode - Режим фильтрации отображаемых граней внешнего объекта.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("FAD600A1-A24A-4b4d-9661-6EC6AD1757A4") 
enum _ksFacetCullingMode
    {	ksFSMNone	= 0,
	ksFSMFront	= 1,
	ksFSMBack	= 2,
	ksFSMAll	= 3
    } 	ksFacetCullingMode;

//-------------------------------------------------------------------------------
// _23_ ksEquidistant3DCutModeEnum - Обход углов эквидистанты 3D.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("5C0DF5CE-53F6-4b55-8D9F-77B28059C4BF") 
enum _ksEquidistant3DCutModeEnum
    {	ksECMUnknown	= 0,
	ksECMLineSeg	= 1,
	ksECMCircle	= 2
    } 	ksEquidistant3DCutModeEnum;

//-------------------------------------------------------------------------------
// _24_ ksPatternBasePointTypeEnum - Способ задания базовой точки.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("75A8AAF6-5082-4864-936B-45AD2D4F894C") 
enum _ksPatternBasePointTypeEnum
    {	ksCRAuto	= 0,
	ksCRManual	= 1,
	ksCRFirstObject	= 2
    } 	ksPatternBasePointTypeEnum;

//-------------------------------------------------------------------------------
// _25_ ksExtensionTypeEnum -  Тип продления поверхности.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("0AD22EDF-6ECC-4570-91C1-3C7C0D9DDE1B") 
enum _ksExtensionSurfaceTypeEnum
    {	ksESTUnknown	= -1,
	ksESTSelf	= 0,
	ksESTTangent	= 1,
	ksESTDirection	= 2
    } 	ksExtensionSurfaceTypeEnum;

//-------------------------------------------------------------------------------
// _26_ ksExtensionLimitTypeEnum -  Способ ограничения.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D778A897-F80F-4d38-9D20-0DF46A642837") 
enum _ksExtensionLimitTypeEnum
    {	ksETLUnknown	= -1,
	ksETLength	= 0,
	ksETLVertex	= 1
    } 	ksExtensionLimitTypeEnum;

// -------------------------------------------------------------------------------
// _27_ ksVector3DParametersTypeEnum - Типы параметров вектора.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("B22FD17B-476C-4685-94A2-6908988E41BC") 
enum _ksVector3DParametersTypeEnum
    {	ksVector3DUnknown	= 0,
	ksVector3D2Vertex	= 1,
	ksVector3DCSAngle	= 2,
	ksVector3DAxis	= 3,
	ksVector3DCoefficients	= 4,
	ksVector3D2Angles	= 5,
	ksVector3DEdge	= 6,
	ksVector3DPlane	= 7,
	ksVector3DSurface	= 8,
	ksVector3DCurve	= 9,
	ksVector3DScreen	= 10
    } 	ksVector3DParametersTypeEnum;

// -------------------------------------------------------------------------------
// _28_ ksBasisVectorTypeEnum  - Типы базисного вектора.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("95A1DF3D-214A-4be0-982C-0FA8E64DD07A") 
enum _ksBasisVectorTypeEnum
    {	ksTangentVector	= 0,
	ksNormalVector	= 1,
	ksBinormalVector	= 2
    } 	ksBasisVectorTypeEnum;

// -------------------------------------------------------------------------------
// _29_ ksConnectTypeEnum  - Тип соединения кривых.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("307AB9C0-CFD0-4e9c-865A-A6AFBEBA3116") 
enum _ksConnectTypeEnum
    {	ksCTUnknown	= -1,
	ksCTPosition	= 0,
	ksCTTangent	= 1,
	ksCTNormal	= 2,
	ksCTSmooth	= 3
    } 	ksConnectTypeEnum;

// -------------------------------------------------------------------------------
// _30_ ksArc3DBuildingTypeEnum - Способ создания 3D дуги.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("F618AFBD-5B6E-475f-BBDE-BBD9D0015D29") 
enum _ksArc3DBuildingTypeEnum
    {	ksArc3DByPoints	= 0,
	ksArc3DByCentre	= 1,
	ksArc3DByDirrection	= 2,
	ksArc3DByTanCurve	= 3
    } 	ksArc3DBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _31_ ksArc3DParameterEnum  - Индекс параметра 3D дуги.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("4CC57A26-00E7-4dd6-89E9-EE2C85E4EA0B") 
enum _ksArc3DParameterEnum
    {	ksArc3DCenter	= 0,
	ksArc3DPoint1	= 1,
	ksArc3DPoint2	= 2,
	ksArc3DPoint3	= 3,
	ksArc3DAngle1	= 1,
	ksArc3DAngle2	= 2,
	ksArc3DRadius	= 3
    } 	ksArc3DParameterEnum;

// -------------------------------------------------------------------------------
// _32_ ksRotatedTypeEnum - Способ построения угла вращения.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("3B0A8DD6-8B55-4166-A21B-53A83136AA64") 
enum _ksRotatedTypeEnum
    {	ksRTAngle	= 0,
	ksRTVertex	= 1,
	ksRTSurface	= 2
    } 	ksRotatedTypeEnum;

// -------------------------------------------------------------------------------
// _33_ ksLinearPatternBuildingTypeEnum - Способ построения массива по сетке.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("9E36236D-818C-4cc0-BA95-5788E30DA7E8") 
enum _ksLinearPatternBuildingTypeEnum
    {	ksLPSaveAll	= 0,
	ksLPSaveAlongPerimeter	= 1,
	ksLPSaveAlongAxially	= 2
    } 	ksLinearPatternBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _34_ ksPartAccessTypeEnum -  Тип доступа к компоненту.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("7E8BA3F0-C6BB-46fc-9014-8CE4E1D8E782") 
enum _ksPartAccessTypeEnum
    {	ksATUncertainty	= -1,
	ksATEditable	= 0,
	ksATReadOnly	= 1,
	ksATDisable	= 2
    } 	ksPartAccessTypeEnum;

// -------------------------------------------------------------------------------
// _35_ ksMeshPointsSurfaceBuildingTypeEnum - Тип поверхности по сети точек.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("40B6EE85-EB19-44b3-A490-8EB2A146F852") 
enum ksMeshPointsSurfaceBuildingTypeEnum
    {	ksMPByPoints	= 0,
	ksMPByPole	= 1
    } 	ksMeshPointsSurfaceBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _36_ ksCloudSurfaceBuildingTypeEnum - Тип поверхности по облаку точек.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D4781300-F0B0-455e-876D-AF3743D14CAD") 
enum _ksCloudPointsSurfaceBuildingTypeEnum
    {	ksCLByPoints	= 0,
	ksCLByPole	= 1,
	ksCLPolyhedral	= 2
    } 	ksCloudPointsSurfaceBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _37_ ksCloudTypeEnum - Способ распознования сети точек.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("97707155-CEFF-486d-8908-CDE033FC7334") 
enum _ksCloudTypeEnum
    {	ksCLAuto	= 0,
	ksCLLocalCS	= 1,
	ksCLScreen	= 2
    } 	ksCloudTypeEnum;

  //------------------------------------------------------------------------------
  // _38_ Способ фильтрации 3D объектов.
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("86D7EF72-1872-4159-876D-2B7949BF1DF6") 
enum _ksObjectsFilter3DEnum
    {	ksFilterAll	= 0,
	ksFilterFaces	= 1,
	ksFilterEdges	= 2,
	ksFilterVertexs	= 3,
	ksFilterCPlanes	= 4,
	ksFilterCAxis	= 5,
	ksFilterParts	= 6,
	ksFilterBodies	= 7,
	ksFilterSurfaces	= 8,
	ksFilterSketches	= 9,
	ksFilterCurves	= 10,
	ksFilterCS	= 11,
	ksFilterControlPoints	= 12,
	ksFilterPoints3D	= 13,
	ksFilterDesignations	= 14,
	ksFilterThread	= 15
    } 	ksObjectsFilter3DEnum;


DEFINE_GUID(LIBID_Kompas6Constants3D,0x2CAF168C,0x7961,0x4b90,0x9D,0xA2,0x70,0x14,0x19,0xBE,0xEF,0xE3);
#endif /* __Kompas6Constants3D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


