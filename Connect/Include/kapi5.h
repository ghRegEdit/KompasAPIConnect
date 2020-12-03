#ifndef _KAPI5_H
#define _KAPI5_H

// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// KompasObject wrapper class

class KompasObject : public COleDispatchDriver
{
public:
	KompasObject() {}		// Calls COleDispatchDriver default constructor
	KompasObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	KompasObject(const KompasObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetVisible();
	void SetVisible(BOOL);
	long GetLookStyle();
	void SetLookStyle(long);

// Operations
public:
	LPDISPATCH Document3D();
	LPDISPATCH ActiveDocument3D();
	LPDISPATCH Document2D();
	LPDISPATCH ActiveDocument2D();
	LPDISPATCH DataBaseObject();
	LPDISPATCH GetIterator();
	LPDISPATCH GetMathematic2D();
	LPDISPATCH GetParamStruct(short structType);
	LPDISPATCH SpcDocument();
	LPDISPATCH SpcActiveDocument();
	BOOL ksMessage(LPCTSTR s);
	BOOL ksError(LPCTSTR s);
	BOOL ksEnableTaskAccess(long enabl);
	long ksReturnResult();
	long ksResultNULL();
	long ksIsEnableTaskAccess();
	BOOL ksMessageBoxResult();
	long ksDrawSlide(long HWindow, long sldID);
	CString ksStrResult();
	long ksGetHWindow();
	long ksGetWorkWindowColor();
	BOOL ksPumpWaitingMessages();
	long ksSetCriticalProcess();
	CString ksChoiceFile(LPCTSTR ext, LPCTSTR filter, BOOL preview);
	long ksDrawBitmap(long HWindow, long sldID);
	long ksYesNo(LPCTSTR s);
	long ksDrawSlideFromFile(long HWindow, LPCTSTR fileName);
	long ksWriteSlide(LPCTSTR fileName, long iD, double x, double y);
	BOOL ksSlideBackground(long color);
	long ksReadDouble(LPCTSTR mess, double defValue, double min, double max, double* value);
	long ksReadInt(LPCTSTR mess, long defValue, long min, long max, long* value);
	CString ksReadString(LPCTSTR mess, LPCTSTR value);
	CString ksFullFileName(LPCTSTR oldName);
	CString ksUniqueFileName();
	BOOL ksRemoveUniqueFile(LPCTSTR fileName);
	BOOL ksSystemControlStop();
	long ksSystemControlStart(LPCTSTR menuCommand);
	LPDISPATCH GetDynamicArray(long type);
	CString ksChoiceFileAppointedDir(LPCTSTR ext, LPCTSTR filter, BOOL preview, long typeDir);
	long ksChoiceFiles(LPCTSTR ext, LPCTSTR filter, LPDISPATCH p, BOOL preview);
	CString ksSaveFile(LPCTSTR ext, LPCTSTR oldName, LPCTSTR filter, BOOL preview);
	LPDISPATCH GetAttributeObject();
	long ksRefreshActiveWindow();
	CString ksSystemPath(long pathType);
	CString ksGetRelativePathFromSystemPath(LPCTSTR sourcePath, long pathType);
	CString ksGetFullPathFromSystemPath(LPCTSTR relativePath, long pathType);
	CString ksGetRelativePathFromFullPath(LPCTSTR mainFilePath, LPCTSTR sourcePath);
	CString ksGetFullPathFromRelativePath(LPCTSTR mainFilePath, LPCTSTR relativePath);
	long ksGetSystemVersion(long* iMajor, long* iMinor, long* iRelease, long* iBuild);
	CString ksGetSystemProfileString(LPCTSTR lpSection, LPCTSTR lpKey);
	BOOL ksOpenHelpFile(LPCTSTR file, long command, long iD);
	long ksSetSysOptions(long optionsType, LPDISPATCH param);
	long ksGetSysOptions(long optionsType, LPDISPATCH param);
	long ksPrintPreviewWindow(LPDISPATCH docsArr, long inquiry);
	LPDISPATCH ksGetLibraryStylesArray(LPCTSTR libraryName, short libraryType);
	double ksViewGetDensity(long HWindow);
	long ksCalculate(LPCTSTR s, double* rez);
	long ksCalculateReset();
	long ksExecuteLibraryCommand(LPCTSTR fileName, long command);
	long ksGetQualityNames(LPDISPATCH names, double dimValue, double high, double low, short system, short withLimitation);
	long ksGetQualityDefects(LPCTSTR name, double dimValue, double* high, double* low, short inMM);
	long ksGetQualityContensParam(LPCTSTR name, LPDISPATCH param, short inMM);
	LPDISPATCH ksGet3dDocumentFromRef(long doc);
	LPDISPATCH GetModelLibrary();
	LPDISPATCH GetFragmentLibrary();
	long ksIsLibraryEnabled(LPCTSTR libName);
	long ksIsModuleSpecificationActive();
	long ksModuleSpecification(BOOL attach);
	CString ksMaterialDlg(long HWindow, long* res, double* plt, double* kod_size_1, double* kod_size_2, double* kod_size_3, double* kod_size_4, LPCTSTR kod_tip);
	CString ksExecDialPredefinedText(long HWindow, long* res);
	long ksDrawSlideEx(long HWindow, long sldID, long hInst);
	CString ksViewGetDensityAndMaterial(double* density, long HWindow);
	CString ksConvertLangStr(LPCTSTR src);
	BOOL ksConvertLangWindow(long hWnd);
	long ksConvertLangMenu(long hMenu);
	CString ksEditTextLine(long HWindow, long* res, LPCTSTR str);
	long ksGetDocOptions(long optionsType, LPDISPATCH param);
	long ksAttachKompasLibrary(LPCTSTR libName);
	long ksDetachKompasLibrary(long libId);
	long ksExecuteKompasLibraryCommand(long libId, long command);
	void Quit();
	long ksPrintKompasDocument(LPCTSTR fileName, LPCTSTR toFile, double scale);
	long ksDrawKompasDocument(long HWindow, LPCTSTR docFileName);
	BOOL ksSetFlagDisableLockApp(BOOL setDisableLockApp);
	BOOL ActivateControllerAPI();
	LPDISPATCH DocumentTxt();
	LPDISPATCH ActiveDocumentTxt();
	BOOL ksGetLibraryTreeStruct(LPCTSTR libName, LPDISPATCH p);
	long ksSetDocOptions(long optionsType, LPDISPATCH param);
	long ksGetDocumentType(long doc);
	long ksDrawKompasDocumentByReference(long HWindow, long pDoc);
	LPDISPATCH ksExecDialPredefinedTextEx(long HWindow);
	long ksGetDocumentTypeByName(LPCTSTR fileName);
	LPDISPATCH ksGetDocumentByReference(long docRef);
	CString ksConvertLangStrEx(long hInstance, long strID);
	BOOL ksConvertLangWindowEx(long hWnd, long hInstance, LPCTSTR dlgID);
	BOOL LoadDSK();
	LPDISPATCH GetObjectsFilter3D();
	long ksExecuteKompasLibraryCommandEx(long libId, long command, LPDISPATCH external);
	LPDISPATCH ksGetExternaldispinterface();
	LPDISPATCH ksGetApplication7();
	long ksDrawBitmapEx(long HWindow, long bmpID, long hInst);
	long ksGetSystemControlStartResult();
	long ksIsModule3DActive();
	long ksModule3D(BOOL attach);
	LPUNKNOWN TransferInterface(LPUNKNOWN obj, long apiNewType, long objNewType);
	BOOL ksExecuteKompasCommand(long commandID, BOOL post);
	BOOL ksIsKompasCommandEnable(long commandID);
	long ksIsKompasCommandCheck(long commandID);
	LPUNKNOWN TransferReference(long obj, long docRef);
	long ksDrawKompasText(long HWindow, LPCTSTR text);
	long ksPrintKompasDocumentEx(LPCTSTR fileName, LPCTSTR toFile, double scale, BOOL FKompasPrinter);
	long ksExecDialSpecialSymbol(long HWindow);
	CString ksExecDialSymbol(long HWindow, long* symb, LPCTSTR font);
	BOOL ksSetDebugMessagesMode(BOOL debugMode);
	BOOL ksClearFileCache();
	BOOL ksLockFileCache(BOOL lock);
	BOOL ksIsHomeVersion();
	BOOL ksIsModule2DActive();

};
/////////////////////////////////////////////////////////////////////////////
// ksDocument2D wrapper class

class ksDocument2D : public COleDispatchDriver
{
public:
	ksDocument2D() {}		// Calls COleDispatchDriver default constructor
	ksDocument2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocument2D(const ksDocument2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetReference();
	void SetReference(long);
	BOOL GetOrthoMode();
	void SetOrthoMode(BOOL);

// Operations
public:
	long ksLineSeg(double x1, double y1, double x2, double y2, long style);
	long ksRectangle(LPDISPATCH par, short centre);
	long ksCircle(double xc, double yc, double rad, long style);
	long ksArcByAngle(double xc, double yc, double rad, double f1, double f2, short direction, long style);
	long ksArcByPoint(double xc, double yc, double rad, double x1, double y1, double x2, double y2, short direction, long style);
	long ksArcBy3Points(double x1, double y1, double x2, double y2, double x3, double y3, long style);
	long ksGetObjParam(long ref, LPDISPATCH param, long parType);
	long ksSetObjParam(long referObj, LPDISPATCH param, long parType);
	long ksContour(long style);
	long ksMacro(short type);
	long ksParagraph(LPDISPATCH par);
	long ksTextLine(LPDISPATCH textItem);
	long ksUpdateMacro(long macro, long gr);
	long ksLine(double x, double y, double angle);
	long ksPoint(double x, double y, long style);
	long ksText(double x, double y, double ang, double hStr, double ksuStr, long bitVector, LPCTSTR s);
	long ksHatchByParam(LPDISPATCH param);
	long ksEndObj();
	long ksLayer(long n);
	long ksGetLayerNumber(long p);
	long ksGetLayerReference(long number);
	long ksChangeObjectLayer(long obj, long number);
	long ksNewGroup(short type);
	long ksEndGroup();
	long ksMakeEncloseContours(long gr, double x, double y);
	long ksIsCursorOrPlacementDocument();
	long ksIsActiveProcessRunnig();
	long ksPhantomShowHide(LPCTSTR show);
	long ksGetCursorPosition(double* x, double* y, long type);
	long ksKeepReference(long r);
	long ksGetMacroParamSize(long ref);
	long ksEditMacroMode();
	long ksDeleteObj(long ref);
	long ksMoveObj(long ref, double x, double y);
	long ksRotateObj(long ref, double x, double y, double angle);
	long ksTransformObj(long ref);
	long ksLightObj(long ref, short light);
	long ksFindObj(double x, double y, double limit);
	long ksSymmetryObj(long ref, double x1, double y1, double x2, double y2, LPCTSTR copy);
	long ksCopyObj(long ref, double xOld, double yOld, double xNew, double yNew, double scale, double angle);
	long ksCreateViewObject(long type);
	long ksEditViewObject(long ref);
	long ksAnnLineSeg(double x1, double y1, double x2, double y2, short term1, short term2, long style);
	long ksPointArraw(double x, double y, double ang, short term);
	long ksAnnArcByPoint(double xc, double yc, double rad, double x1, double y1, double x2, double y2, short direction, short term1, short term2, long style);
	long ksEllipse(LPDISPATCH par);
	long ksEllipseArc(LPDISPATCH par);
	long ksParEllipseArc(LPDISPATCH par);
	long ksEquidistant(LPDISPATCH par);
	long ksIsPointInsideContour(long p, double x, double y, double precision);
	long ksConvertTextToCurve(long text);
	long ksStoreTmpGroup(long g);
	long ksOpenMacro(long macro);
	long ksAddObjectToMacro(long macro, long obj);
	long ksHatch(long style, double angle, double step, double width, double x0, double y0);
	long ksColouring(long color);
	long ksDuplicateBoundaries(long p);
	long ksNurbsPoint(LPDISPATCH par);
	long ksNurbsKnot(double knot);
	long ksNurbs(short degree, BOOL close, long style);
	long ksRegularPolygon(LPDISPATCH par, short centre);
	long ksClearGroup(long g, BOOL deleteTmp);
	long ksExcludeObjGroup(long g, long p);
	long ksAddObjGroup(long g, long p);
	long ksSaveGroup(long g, LPCTSTR name);
	long ksSelectGroup(long g, short selectMode, double xmin, double ymin, double xmax, double ymax);
	long ksExistGroupObj(long g);
	long ksWriteGroupToClip(long g, BOOL copy);
	long ksGetGroup(LPCTSTR name);
	long ksReadGroupFromClip();
	long ksConicArc(LPDISPATCH par);
	long ksCentreMarker(LPDISPATCH par);
	long ksBezier(short closed, long style);
	long ksBezierPoint(LPDISPATCH par);
	long ksGetStyleParam(short type, short styleId, LPDISPATCH param);
	long ksInsertRaster(LPDISPATCH par);
	long ksLinDimension(LPDISPATCH linPar);
	long ksAngDimension(LPDISPATCH angPar);
	long ksDiamDimension(LPDISPATCH par);
	long ksRadDimension(LPDISPATCH par);
	long ksRadBreakDimension(LPDISPATCH par);
	long ksOrdinatedDimension(LPDISPATCH ordPar);
	long ksAddStyle(short type, LPDISPATCH param, short copy);
	long ksIsStyleInDocument(short type, LPDISPATCH param, short copy);
	long ksDeleteStyleFromDocument(short type, LPDISPATCH param, short copy);
	long ksExistObj(long ref);
	long ksGetObjGabaritRect(long p, LPDISPATCH par);
	long ksSheetToView(double x, double y, double* outX, double* outY);
	long ksViewToSheet(double x, double y, double* outX, double* outY);
	long ksPolyline(long style);
	long ksPolylineByParam(LPDISPATCH par);
	long ksGetReferenceDocumentPart(short t);
	long ksGetViewReference(long number);
	long ksGetViewNumber(long p);
	long ksOpenView(long number);
	long ksNewViewNumber();
	long ksCreateSheetView(LPDISPATCH par, long* number);
	long ksDecomposeObj(long p, short level, double arrow, short type);
	long ksGetViewObjCount(long p);
	long ksLinBreakDimension(LPDISPATCH linPar);
	long ksAngBreakDimension(LPDISPATCH angPar);
	long ksIsCurveClosed(long p);
	long ksBase(LPDISPATCH par);
	long ksRough(LPDISPATCH roughPar);
	CString ksGetGroupName(long gr, long* group, long size);
	long ksMtr(double x, double y, double angle, double scaleX, double scaleY);
	long ksDeleteMtr();
	long ksPointIntoMtr(double x, double y, double* xn, double* yn);
	long ksPointFromMtr(double x, double y, double* xn, double* yn);
	long ksLengthIntoMtr(double* len);
	long ksLengthFromMtr(double* len);
	long ksLeader(LPDISPATCH leaderPar);
	long ksPositionLeader(LPDISPATCH posLeaderParam);
	long ksBrandLeader(LPDISPATCH brandLeaderParam);
	long ksMarkerLeader(LPDISPATCH markerLeaderParam);
	long ksCursor(LPDISPATCH info, double* x, double* y, LPDISPATCH phantom);
	long ksPlacement(LPDISPATCH info, double* x, double* y, double* angle, LPDISPATCH phantom);
	long ksCommandWindow(LPDISPATCH info);
	long ksChangeObjectInLibRequest(LPDISPATCH info, LPDISPATCH phantom);
	long ksReleaseReference(long p);
	LPDISPATCH GetFragment();
	long ksInitFilePreviewFunc(LPCTSTR funcName, long hInst, LPDISPATCH dispatchOCX);
	long ksTable();
	long ksRebuildTableVirtualGrid();
	long ksGetTableItemsCount(long type);
	long ksGetTableColumnText(long* numb, LPDISPATCH par);
	long ksSetTableColumnText(long numb, LPDISPATCH par);
	long ksClearTableColumnText(long numb);
	long ksCombineTwoTableItems(long index1, long index2);
	long ksDivideTableItem(long index, BOOL vertical, long style);
	long ksSetTableBorderStyle(long index, short typeBorder, long style);
	long ksGetTableBorderStyle(long index, short typeBorder);
	long ksOpenTable(long table);
	long ksColumnNumber(long numb);
	long ksSetMacroParam(long ref, LPDISPATCH userPars, BOOL dblClickOff, BOOL hotpoints, BOOL externEdit);
	long ksGetMacroParam(long ref, LPDISPATCH userPars);
	long ksOpenTechnicalDemand(LPDISPATCH pGab, long style);
	long ksCloseTechnicalDemand();
	long ksSpecRough(LPDISPATCH par);
	long ksViewPointer(LPDISPATCH par);
	long ksCutLine(LPDISPATCH par);
	long ksApproximationCurve(long p, double eps, BOOL curentLayer, double maxRad, BOOL smooth);
	long ksTolerance(LPDISPATCH par);
	long ksOpenTolerance(long tolerance);
	long ksGetToleranceColumnText(long* numb, LPDISPATCH par);
	long ksSetToleranceColumnText(long numb, LPDISPATCH par);
	long ksGetPointOnToleranceTable(long tolerance, short entry, LPDISPATCH point);
	BOOL ksOpenDocument(LPCTSTR nameDoc, BOOL regim);
	BOOL ksSaveDocument(LPCTSTR fileName);
	BOOL ksCloseDocument();
	BOOL ksCreateDocument(LPDISPATCH par);
	BOOL ksMovePoint(double* x, double* y, double ang, double len);
	long ksReadTableFromFile(LPCTSTR tblFileName);
	long ksDrawKompasDocument(long HWindow, LPCTSTR docFileName);
	long ksViewGetObjectArea();
	long ksGetMacroPlacement(long macro, double* x, double* y, double* angl);
	long ksSetMacroPlacement(long macro, double x, double y, double angl, long relativ);
	long ksDrawKompasGroup(long HWindow, long gr);
	LPDISPATCH ksGetDocVariableArray(long p);
	long ksSetDocVariableArray(long obj, LPDISPATCH arr, BOOL setNote);
	long ksGetDocOptions(long optionsType, LPDISPATCH param);
	long ksSetObjConstraint(long obj, LPDISPATCH par);
	LPDISPATCH ksGetObjConstraints(long obj);
	long ksDestroyObjConstraint(long obj, LPDISPATCH par);
	CString ksGetZona(double x, double y, long* result_);
	long ksClearRegion(long grClear, long grRegion, BOOL inside);
	long ksNurbsForConicCurve(LPDISPATCH xArr, LPDISPATCH yArr, short style);
	LPDISPATCH GetStamp();
	double ksGetTextLength(LPCTSTR text, long style);
	double ksGetTextLengthFromReference(long pText);
	long ksZoom(double x1, double y1, double x2, double y2);
	long ksZoomScale(double x, double y, double scale);
	long ksZoomPrevNextOrAll(short type);
	long ksGetZoomScale(double* x, double* y, double* scale);
	long ksSpecificationOnSheet(short onSheet);
	LPDISPATCH GetSpecification();
	long ksReDrawDocPart(LPDISPATCH rect, long view);
	double ksGetCursorLimit();
	long ksGetTextAlign(long pText);
	long ksSetTextAlign(long pText, long align);
	long ksSetTextLineAlign(short align);
	long ksDestroyObjects(long gr);
	BOOL ksEnableUndo(BOOL enabl);
	long ksAddPowerForm(double x, double y);
	long ksCreatePowerArc();
	long ksTrimNurbs(long pObj, double tMin, double tMax);
	CString ksGetDimensionVariableName(long dimObj);
	long ksTrimmCurve(long curve, double x1, double y1, double x2, double y2, double x3, double y3, short deleteOldCurve);
	BOOL SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar);
	LPDISPATCH RasterFormatParam();
	double ksGetLeaderShelfLength(long leader, double* x, double* y);
	long ksSetDocOptions(long optionsType, LPDISPATCH param);
	long ksAxisLine(LPDISPATCH param);
	BOOL SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar);
	long ksCreateSheetArbitraryView(LPDISPATCH par, long* number);
	BOOL ksCreateSheetStandartViews(LPDISPATCH par, long bitVector, double dx, double dy);
	long ksCreateSheetProjectionView(LPDISPATCH par, long* number, long view);
	long ksCreateSheetArrowView(LPDISPATCH par, long* number, long obj);
	long ksCreateSheetSectionView(LPDISPATCH par, long* number, long obj);
	long ksCreateSheetRemoteView(LPDISPATCH par, long* number, long obj);
	BOOL ksRebuildDocument();
	long ksRemoteElement(LPDISPATCH par);
	long ksCopyObjEx(LPDISPATCH param);
	LPUNKNOWN GetObject2DNotify(long objType);
	LPUNKNOWN GetSelectionMngNotify();
	LPDISPATCH GetObject2DNotifyResult();
	LPUNKNOWN GetDocument2DNotify();
	long ksSetMaterialParam(LPDISPATCH material, double density);
	long ksChangeObjectsOrder(long group, long obj, long type);
	long ksIsSlaveSpcOpened();
	long ksGetMacroWaitDblClickEdit(long ref);
	long ksSetMacroWaitDblClickEdit(long ref, long waitDblClick);
	long ksParametrizeObjects(long obj, LPDISPATCH par);
	long ksCursorEx(LPDISPATCH info, double* x, double* y, LPDISPATCH phantom, LPDISPATCH processParam);
	long ksPlacementEx(LPDISPATCH info, double* x, double* y, double* angle, LPDISPATCH phantom, LPDISPATCH processParam);
	double ksCalcRasterScale(LPCTSTR fileName, double w, double h);
	long ksTextEx(LPDISPATCH txtParam, long align);
	long ksColouringEx(long color, long group);
	BOOL ksSaveDocumentEx(LPCTSTR fileName, long SaveMode);
	VARIANT ksAssociationViewMatrix3D(long ViewRef);
	BOOL ksPoint3DToAssociationView(long view, double x3D, double y3D, double z3D, double* x2D, double* y2D);
	long ksGetReferenceDocumentPartEx(short t, long SheetNumb);
	LPDISPATCH GetStampEx(long SheetNumb);
	long ksGetDocumentPagesCount();
	BOOL ksSaveToDXF(LPCTSTR DXFFileName);
	long ksInitFilePreviewFuncW(LPCTSTR funcName, long hInst, LPDISPATCH dispatchOCX);
	long ksChangeLeader(LPDISPATCH leaderParam);
	BOOL ksGetShelfPoint(long p, long index, double* x, double* y, long paramType);
	long ksMakeEncloseContoursEx(long gr, double x, double y, BOOL forHatch);
	long ksAnnPolylineEx(LPDISPATCH par, short term1, short term2);
	long ksAnnEllipseArc(LPDISPATCH par, short term1, short term2);
	long ksAnnParEllipseArc(LPDISPATCH par, short term1, short term2);
	long ksAnnCircle(double xc, double yc, double rad, long style);
	long ksAnnEllipse(LPDISPATCH par);
	long ksAnnPolyline(long style, short term1, short term2);
	long ksAnnTextEx(LPDISPATCH txtParam, long align);
	long ksAnnPoint(double x, double y, long style);
	BOOL ksGetAnnObjTerminators(long annObj, short* term1, short* term2);
	long ksGetObjectStyle(long obj);
	BOOL ksSetObjectStyle(long obj, long style);
	long ksGetMacroPlacementEx(long macro, double* x, double* y, double* angl, long sheetParam, long* mirrorSymmetry);
	long ksSetMacroPlacementEx(long macro, double x, double y, double angl, long relativ, long mirrorSymmetry);
	BOOL ksUndoContainer(BOOL Add);
	BOOL ksGetEditMacroVisibleRegime(long p);
	long ksCopyGroupToDocument(long gr, long from);
};
/////////////////////////////////////////////////////////////////////////////
// ksObject2DNotify wrapper class

class ksObject2DNotify : public COleDispatchDriver
{
public:
	ksObject2DNotify() {}		// Calls COleDispatchDriver default constructor
	ksObject2DNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksObject2DNotify(const ksObject2DNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL ChangeActive(long objRef);
	BOOL BeginDelete(long objRef);
	BOOL Delete(long objRef);
	BOOL BeginMove(long objRef);
	BOOL Move(long objRef);
	BOOL BeginRotate(long objRef);
	BOOL Rotate(long objRef);
	BOOL BeginScale(long objRef);
	BOOL scale(long objRef);
	BOOL BeginTransform(long objRef);
	BOOL Transform(long objRef);
	BOOL BeginCopy(long objRef);
	BOOL copy(long objRef);
	BOOL BeginSymmetry(long objRef);
	BOOL Symmetry(long objRef);
	BOOL BeginProcess(long pType, long objRef);
	BOOL EndProcess(long pType);
	BOOL CreateObject(long objRef);
	BOOL UpdateObject(long objRef);
	BOOL BeginDestroyObject(long objRef);
	BOOL DestroyObject(long objRef);
};
/////////////////////////////////////////////////////////////////////////////
// ksSelectionMngNotify wrapper class

class ksSelectionMngNotify : public COleDispatchDriver
{
public:
	ksSelectionMngNotify() {}		// Calls COleDispatchDriver default constructor
	ksSelectionMngNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSelectionMngNotify(const ksSelectionMngNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Select(const VARIANT& obj);
	BOOL Unselect(const VARIANT& obj);
	BOOL UnselectAll();
};
/////////////////////////////////////////////////////////////////////////////
// ksObject2DNotifyResult wrapper class

class ksObject2DNotifyResult : public COleDispatchDriver
{
public:
	ksObject2DNotifyResult() {}		// Calls COleDispatchDriver default constructor
	ksObject2DNotifyResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksObject2DNotifyResult(const ksObject2DNotifyResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNotifyType();
	BOOL IsCopy();
	BOOL GetSheetPoint(BOOL from, double* x, double* y);
	long GetCopyObject();
	double GetAngle();
	BOOL GetScale(double* sx, double* sy);
	long GetProcessType();
	BOOL IsUndoMode();
	BOOL IsRedoMode();
};
/////////////////////////////////////////////////////////////////////////////
// ksDocument2DNotify wrapper class

class ksDocument2DNotify : public COleDispatchDriver
{
public:
	ksDocument2DNotify() {}		// Calls COleDispatchDriver default constructor
	ksDocument2DNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocument2DNotify(const ksDocument2DNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginRebuild();
	BOOL Rebuild();
	BOOL BeginChoiceMaterial();
	BOOL ChoiceMaterial(LPCTSTR material, double density);
	BOOL BeginInsertFragment();
	BOOL LocalFragmentEdit(LPDISPATCH newDoc, BOOL newFrw);
	BOOL BeginChoiceProperty(long objRef, double propID);
	BOOL ChoiceProperty(long objRef, double propID);
};
/////////////////////////////////////////////////////////////////////////////
// ksDocument3D wrapper class

class ksDocument3D : public COleDispatchDriver
{
public:
	ksDocument3D() {}		// Calls COleDispatchDriver default constructor
	ksDocument3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocument3D(const ksDocument3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetComment();
	void SetComment(LPCTSTR);
	CString GetAuthor();
	void SetAuthor(LPCTSTR);
	long GetReference();
	void SetReference(long);
	BOOL GetPerspective();
	void SetPerspective(BOOL);
	long GetDrawMode();
	void SetDrawMode(long);
	BOOL GetHideAllPlanes();
	void SetHideAllPlanes(BOOL);
	BOOL GetHideAllAxis();
	void SetHideAllAxis(BOOL);
	BOOL GetHideAllSketches();
	void SetHideAllSketches(BOOL);
	BOOL GetHideAllPlaces();
	void SetHideAllPlaces(BOOL);
	BOOL GetHideAllSurfaces();
	void SetHideAllSurfaces(BOOL);
	BOOL GetHideAllThreads();
	void SetHideAllThreads(BOOL);
	BOOL GetShadedWireframe();
	void SetShadedWireframe(BOOL);
	BOOL GetDismantleMode();
	void SetDismantleMode(BOOL);
	BOOL GetTreeNeedRebuild();
	void SetTreeNeedRebuild(BOOL);
	BOOL GetEnableRollBackFeaturesInCollections();
	void SetEnableRollBackFeaturesInCollections(BOOL);
	BOOL GetHideAllCurves();
	void SetHideAllCurves(BOOL);
	BOOL GetHideAllControlPoints();
	void SetHideAllControlPoints(BOOL);
	BOOL GetHideAllDimensions();
	void SetHideAllDimensions(BOOL);
	BOOL GetHideAllDesignations();
	void SetHideAllDesignations(BOOL);
	BOOL GetHideAllAuxiliaryGeom();
	void SetHideAllAuxiliaryGeom(BOOL);
	BOOL GetHideInComponentsMode();
	void SetHideInComponentsMode(BOOL);
	BOOL GetWindowNeedRebuild();
	void SetWindowNeedRebuild(BOOL);

// Operations
public:
	BOOL GetInvisibleMode();
	BOOL Create(BOOL invisible, BOOL typeDoc);
	BOOL IsDetail();
	LPDISPATCH GetPart(long type);
	LPDISPATCH MateConstraintCollection();
	BOOL UpdateDocumentParam();
	BOOL IsEditMode();
	BOOL ChangeObjectInLibRequest();
	BOOL StopLibRequest();
	LPDISPATCH GetSpecification();
	LPDISPATCH GetRequestInfo(LPDISPATCH part);
	BOOL UserGetPlacementAndEntity(long entityCount);
	BOOL SetActive();
	BOOL IsActive();
	BOOL Open(LPCTSTR fileName, BOOL invisible);
	BOOL Save();
	BOOL SaveAs(LPCTSTR fileName);
	BOOL close();
	BOOL UserGetCursor(LPCTSTR prompt, double* x, double* y, double* z);
	BOOL SetPartFromFile(LPCTSTR fileName, LPDISPATCH part, BOOL externalFile);
	LPDISPATCH EntityCollection(short objType, BOOL checkEntity);
	LPDISPATCH UserSelectEntity(LPDISPATCH filterObject, LPCTSTR methodName, LPCTSTR prompt, long hInst, LPDISPATCH val);
	BOOL RemoveMateConstraint(long constraintType, LPDISPATCH obj1, LPDISPATCH obj2);
	BOOL AddMateConstraint(long constraintType, LPDISPATCH obj1, LPDISPATCH obj2, short direction, short fixed, double val);
	long ksDeleteObj(long ref);
	LPDISPATCH PartCollection(BOOL refresh);
	BOOL CreatePartFromFile(LPCTSTR fileName, LPDISPATCH part, LPDISPATCH plane);
	LPDISPATCH CreatePartInAssembly(LPCTSTR fileName, LPDISPATCH plane);
	BOOL RebuildDocument();
	BOOL ZoomPrevNextOrAll(short type);
	LPDISPATCH GetMateConstraint();
	BOOL SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar);
	LPDISPATCH RasterFormatParam();
	BOOL SaveAsToAdditionFormat(LPCTSTR fileName, LPDISPATCH additionPar);
	LPDISPATCH AdditionFormatParam();
	LPDISPATCH GetViewProjectionCollection();
	BOOL DeleteObject(LPDISPATCH obj);
	LPDISPATCH GetSelectionMng();
	LPDISPATCH GetChooseMng();
	long GetObjectType(LPDISPATCH obj);
	long ksGetObjParam(long ref, LPDISPATCH param, long parType);
	long ksSetObjParam(long referObj, LPDISPATCH param, long parType);
	BOOL SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar);
	LPDISPATCH AddImportedSurfaces(LPCTSTR fileName, BOOL together);
	LPUNKNOWN GetDocument3DNotify();
	LPDISPATCH AttributeCollection(long key1, long key2, long key3, long key4, double numb, LPDISPATCH pObj);
	LPDISPATCH FeatureCollection(long key1, long key2, long key3, long key4, double numb, long objType);
	BOOL SetPartFromFileEx(LPCTSTR fileName, LPDISPATCH part, BOOL externalFile, BOOL redraw);
	LPDISPATCH ComponentPositioner();
	LPDISPATCH DefaultPlacement();
	long ksIsSlaveSpcOpened();
	LPDISPATCH GetEditMacroObject();
	BOOL SaveAsEx(LPCTSTR fileName, long SaveMode);
	LPDISPATCH GetInterface(long o3dType);
	LPDISPATCH CopyPart(LPDISPATCH sourcePart, LPDISPATCH newPlacement);
	LPDISPATCH UserSelectEntityEx(LPDISPATCH filterObject, LPCTSTR methodName, LPCTSTR prompt, long hInst, LPDISPATCH val, LPUNKNOWN processParam);
	BOOL PlaceFeatureAfter(LPDISPATCH obj, LPDISPATCH afterObj);
	BOOL SetRollBackFeature(LPDISPATCH obj);
	LPDISPATCH GetRollBackFeature();
	BOOL ExcludeFeaturesAfter(LPDISPATCH obj, BOOL exclude);
	LPDISPATCH GetDocument3DNotifyResult();
};
/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotify wrapper class

class ksDocument3DNotify : public COleDispatchDriver
{
public:
	ksDocument3DNotify() {}		// Calls COleDispatchDriver default constructor
	ksDocument3DNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocument3DNotify(const ksDocument3DNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginRebuild();
	BOOL Rebuild();
	BOOL BeginChoiceMaterial();
	BOOL ChoiceMaterial(LPCTSTR material, double density);
	BOOL BeginChoiceMarking();
	BOOL ChoiceMarking(LPCTSTR marking);
	BOOL BeginSetPartFromFile();
	BOOL BeginCreatePartFromFile(BOOL typeDoc, LPDISPATCH plane);
};
/////////////////////////////////////////////////////////////////////////////
// ksEntity wrapper class

class ksEntity : public COleDispatchDriver
{
public:
	ksEntity() {}		// Calls COleDispatchDriver default constructor
	ksEntity(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEntity(const ksEntity& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetHidden();
	void SetHidden(BOOL);
	CString GetName();
	void SetName(LPCTSTR);
	BOOL GetExcluded();
	void SetExcluded(BOOL);

// Operations
public:
	short GetType();
	LPDISPATCH GetDefinition();
	LPDISPATCH GetParent();
	BOOL IsCreated();
	BOOL IsIt(long objType);
	BOOL Create();
	BOOL Update();
	LPDISPATCH ColorParam();
	BOOL GetAdvancedColor(long* color, double* ambient, double* diffuse, double* specularity, double* shininess, double* transparency, double* emission);
	BOOL SetAdvancedColor(long color, double ambient, double diffuse, double specularity, double shininess, double transparency, double emission);
	LPDISPATCH GetFeature();
	LPDISPATCH BodyCollection();
	BOOL GetMultiBodyParts();
	LPDISPATCH GetBodyParts();
};
/////////////////////////////////////////////////////////////////////////////
// ksAttribute3DCollection wrapper class

class ksAttribute3DCollection : public COleDispatchDriver
{
public:
	ksAttribute3DCollection() {}		// Calls COleDispatchDriver default constructor
	ksAttribute3DCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAttribute3DCollection(const ksAttribute3DCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	long FindIt(LPDISPATCH obj);
	BOOL Select(long key1, long key2, long key3, long key4, double numb, long objType);
};
/////////////////////////////////////////////////////////////////////////////
// ksAttribute3D wrapper class

class ksAttribute3D : public COleDispatchDriver
{
public:
	ksAttribute3D() {}		// Calls COleDispatchDriver default constructor
	ksAttribute3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAttribute3D(const ksAttribute3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetReference();
	LPDISPATCH FeatureCollection(long objType);
	CString GetNameType();
};
/////////////////////////////////////////////////////////////////////////////
// ksFeatureCollection wrapper class

class ksFeatureCollection : public COleDispatchDriver
{
public:
	ksFeatureCollection() {}		// Calls COleDispatchDriver default constructor
	ksFeatureCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFeatureCollection(const ksFeatureCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	LPDISPATCH GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase);
	long FindIt(LPDISPATCH entity);
	BOOL Add(LPDISPATCH obj);
	BOOL AddAt(LPDISPATCH obj, long index);
	BOOL AddBefore(LPDISPATCH obj, LPDISPATCH base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH obj);
	BOOL Clear();
	BOOL SetByIndex(LPDISPATCH obj, long index);
	LPDISPATCH AttributeCollection(long key1, long key2, long key3, long key4, double numb);
};
/////////////////////////////////////////////////////////////////////////////
// ksFeature wrapper class

class ksFeature : public COleDispatchDriver
{
public:
	ksFeature() {}		// Calls COleDispatchDriver default constructor
	ksFeature(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFeature(const ksFeature& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetExcluded();
	void SetExcluded(BOOL);

// Operations
public:
	CString GetName();
	unsigned long GetUpdateStamp();
	BOOL IsModified(BOOL recursive);
	LPDISPATCH SubFeatureCollection(BOOL through, BOOL libObject);
	LPDISPATCH GetOwnerFeature();
	BOOL IsValid();
	short GetType();
	LPDISPATCH GetObject();
	LPDISPATCH AttributeCollection(long key1, long key2, long key3, long key4, double numb);
	LPDISPATCH EntityCollection(short objType);
	LPDISPATCH GetVariableCollection();
	LPDISPATCH BodyCollection();
	LPDISPATCH GetAttributeCollectionInSource(long key1, long key2, long key3, long key4, double numb, LPDISPATCH sourcePart);
	BOOL IsRollBacked();
	LPDISPATCH VariableCollectionEx(BOOL sourse);
	long GetObjectError();
};
/////////////////////////////////////////////////////////////////////////////
// ksEntityCollection wrapper class

class ksEntityCollection : public COleDispatchDriver
{
public:
	ksEntityCollection() {}		// Calls COleDispatchDriver default constructor
	ksEntityCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEntityCollection(const ksEntityCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	BOOL SelectByPoint(double x, double y, double z);
	LPDISPATCH GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase);
	BOOL Add(LPDISPATCH entity);
	BOOL AddAt(LPDISPATCH entity, long index);
	BOOL AddBefore(LPDISPATCH entity, LPDISPATCH base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH entity);
	BOOL Clear();
	BOOL SetByIndex(LPDISPATCH entity, long index);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksPart wrapper class

class ksPart : public COleDispatchDriver
{
public:
	ksPart() {}		// Calls COleDispatchDriver default constructor
	ksPart(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPart(const ksPart& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetName();
	void SetName(LPCTSTR);
	CString GetMarking();
	void SetMarking(LPCTSTR);
	BOOL GetFixedComponent();
	void SetFixedComponent(BOOL);
	BOOL GetStandardComponent();
	void SetStandardComponent(BOOL);
	CString GetFileName();
	void SetFileName(LPCTSTR);
	BOOL GetExcluded();
	void SetExcluded(BOOL);
	long GetUseColor();
	void SetUseColor(long);
	BOOL GetNeedRebuild();
	void SetNeedRebuild(BOOL);
	BOOL GetHidden();
	void SetHidden(BOOL);
	BOOL GetDoubleClickEditOff();
	void SetDoubleClickEditOff(BOOL);

// Operations
public:
	CString GetMaterial();
	BOOL SetPlacement(LPDISPATCH placement);
	LPDISPATCH GetPlacement();
	LPDISPATCH ColorParam();
	LPDISPATCH VariableCollection();
	BOOL Update();
	long GetUserParamSize();
	BOOL UpdatePlacement();
	BOOL RebuildModel();
	LPDISPATCH GetDefaultEntity(short objType);
	LPDISPATCH NewEntity(short objType);
	LPDISPATCH EntityCollection(short objType);
	BOOL GetAdvancedColor(long* color, double* ambient, double* diffuse, double* specularity, double* shininess, double* transparency, double* emission);
	BOOL SetAdvancedColor(long color, double ambient, double diffuse, double specularity, double shininess, double transparency, double emission);
	BOOL SetUserParam(LPDISPATCH userPars);
	BOOL IsDetail();
	LPDISPATCH BeginEdit();
	BOOL EndEdit(BOOL Rebuild);
	LPDISPATCH GetPart(short type);
	double GetMass();
	BOOL PutStorage(LPCTSTR fileName, long type, BOOL mirror);
	BOOL SetMateConstraintObjects(LPDISPATCH collection);
	LPDISPATCH GetMateConstraintObjects();
	BOOL GetUserParam(LPDISPATCH userPars);
	double GetDensity();
	BOOL SetMaterial(LPCTSTR material, double density);
	LPDISPATCH BodyCollection();
	LPDISPATCH GetFeature();
	LPDISPATCH CalcMassInertiaProperties(unsigned long bitVector);
	LPDISPATCH GetMeasurer();
	LPDISPATCH GetMainBody();
	LPUNKNOWN GetObject3DNotify(long objType, LPDISPATCH obj);
	LPDISPATCH GetObject3DNotifyResult();
	BOOL UpdatePlacementEx(BOOL redraw);
	BOOL RebuildModelEx(BOOL redraw);
	BOOL CurveIntersection(LPDISPATCH curve, LPDISPATCH parts, LPDISPATCH fases, LPDISPATCH points);
	BOOL TransformPoint(double* x, double* y, double* z, LPDISPATCH part1);
	BOOL SetObject(long index, LPDISPATCH obj);
	LPDISPATCH GetObject(long index);
	long GetCountObj();
	BOOL ClearAllObj();
	LPDISPATCH CreateOrEditObject(short objType, LPDISPATCH editObj);
	BOOL TransformPoints(VARIANT* points, LPDISPATCH part1);
	VARIANT GetSummMatrix(LPDISPATCH part1);
	BOOL GetMultiBodyParts();
	BOOL SetSourceVariables(BOOL Rebuild);
	LPDISPATCH GetObjectByName(LPCTSTR name, short objType, BOOL testFullName, BOOL testIgnoreCase);
	BOOL GetGabarit(BOOL full, BOOL customizable, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2);
};
/////////////////////////////////////////////////////////////////////////////
// ksObject3DNotify wrapper class

class ksObject3DNotify : public COleDispatchDriver
{
public:
	ksObject3DNotify() {}		// Calls COleDispatchDriver default constructor
	ksObject3DNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksObject3DNotify(const ksObject3DNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginDelete(LPDISPATCH obj);
	BOOL Delete(LPDISPATCH obj);
	BOOL excluded(LPDISPATCH obj, BOOL excluded);
	BOOL hidden(LPDISPATCH obj, BOOL _hidden);
	BOOL BeginPropertyChanged(LPDISPATCH obj);
	BOOL PropertyChanged(LPDISPATCH obj);
	BOOL BeginPlacementChanged(LPDISPATCH obj);
	BOOL PlacementChanged(LPDISPATCH obj);
	BOOL BeginProcess(long pType, LPDISPATCH obj);
	BOOL EndProcess(long pType);
	BOOL CreateObject(LPDISPATCH obj);
	BOOL UpdateObject(LPDISPATCH obj);
};
/////////////////////////////////////////////////////////////////////////////
// ksObject3DNotifyResult wrapper class

class ksObject3DNotifyResult : public COleDispatchDriver
{
public:
	ksObject3DNotifyResult() {}		// Calls COleDispatchDriver default constructor
	ksObject3DNotifyResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksObject3DNotifyResult(const ksObject3DNotifyResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNotifyType();
	LPDISPATCH GetFeatureCollection();
	LPDISPATCH GetPlacement();
	long GetProcessType();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlacement wrapper class

class ksPlacement : public COleDispatchDriver
{
public:
	ksPlacement() {}		// Calls COleDispatchDriver default constructor
	ksPlacement(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlacement(const ksPlacement& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetOrigin(double* x, double* y, double* z);
	BOOL SetOrigin(double x, double y, double z);
	BOOL GetAxis(double* x, double* y, double* z, long type);
	BOOL SetAxis(double x, double y, double z, long type);
	BOOL SetPlacement(LPDISPATCH placement);
	BOOL SetAxes(double Xx, double Xy, double Xz, double Yx, double Yy, double Yz);
	BOOL PointProjection(double XIn, double YIn, double ZIn, double* XOut, double* YOut);
	BOOL PointOn(double XIn, double YIn, double* XOut, double* YOut, double* ZOut);
};
/////////////////////////////////////////////////////////////////////////////
// ksComponentPositioner wrapper class

class ksComponentPositioner : public COleDispatchDriver
{
public:
	ksComponentPositioner() {}		// Calls COleDispatchDriver default constructor
	ksComponentPositioner(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksComponentPositioner(const ksComponentPositioner& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetPlaneByPlacement(LPDISPATCH plane);
	BOOL SetPlane(LPDISPATCH plane);
	BOOL SetPlaneByPoints(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3);
	BOOL SetDragPoint(double x, double y, double z);
	BOOL SetAxis(LPDISPATCH axis);
	BOOL SetAxisByPoints(double x1, double y1, double z1, double x2, double y2, double z2);
	long Prepare(LPDISPATCH part, long positionerType);
	BOOL MoveComponent(double x, double y, double z);
	BOOL RotateComponent(double angl);
	BOOL Finish();
};
/////////////////////////////////////////////////////////////////////////////
// ksKompasObjectNotify wrapper class

class ksKompasObjectNotify : public COleDispatchDriver
{
public:
	ksKompasObjectNotify() {}		// Calls COleDispatchDriver default constructor
	ksKompasObjectNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksKompasObjectNotify(const ksKompasObjectNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL CreateDocument(LPDISPATCH newDoc, long docType);
	BOOL BeginOpenDocument(LPCTSTR fileName);
	BOOL OpenDocument(LPDISPATCH newDoc, long docType);
	BOOL ChangeActiveDocument(LPDISPATCH newDoc, long docType);
	BOOL ApplicationDestroy();
	BOOL BeginCreate(long docType);
	BOOL BeginOpenFile();
	BOOL BeginCloseAllDocument();
	BOOL KeyDown(long* key, long flags, BOOL systemKey);
	BOOL KeyUp(long* key, long flags, BOOL systemKey);
	BOOL KeyPress(long* key, BOOL systemKey);
	BOOL BeginReguestFiles(long requestID, VARIANT* files);
};
/////////////////////////////////////////////////////////////////////////////
// ksDocumentFileNotify wrapper class

class ksDocumentFileNotify : public COleDispatchDriver
{
public:
	ksDocumentFileNotify() {}		// Calls COleDispatchDriver default constructor
	ksDocumentFileNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocumentFileNotify(const ksDocumentFileNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginCloseDocument();
	BOOL CloseDocument();
	BOOL BeginSaveDocument(LPCTSTR fileName);
	BOOL SaveDocument();
	BOOL Activate();
	BOOL Deactivate();
	BOOL BeginSaveAsDocument();
	BOOL DocumentFrameOpen(LPDISPATCH v);
	BOOL ProcessActivate(long iD);
	BOOL ProcessDeactivate(long iD);
	BOOL BeginProcess(long iD);
	BOOL EndProcess(long iD, BOOL Success);
};
/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotifyResult wrapper class

class ksDocument3DNotifyResult : public COleDispatchDriver
{
public:
	ksDocument3DNotifyResult() {}		// Calls COleDispatchDriver default constructor
	ksDocument3DNotifyResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocument3DNotifyResult(const ksDocument3DNotifyResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNotifyType();
	long GetNotifyObjectType();
	LPDISPATCH GetNotifyObject();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpecRoughParam wrapper class

class ksSpecRoughParam : public COleDispatchDriver
{
public:
	ksSpecRoughParam() {}		// Calls COleDispatchDriver default constructor
	ksSpecRoughParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpecRoughParam(const ksSpecRoughParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	short GetSign();
	void SetSign(short);
	BOOL GetT();
	void SetT(BOOL);
	CString GetS();
	void SetS(LPCTSTR);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksEllipseParam wrapper class

class ksEllipseParam : public COleDispatchDriver
{
public:
	ksEllipseParam() {}		// Calls COleDispatchDriver default constructor
	ksEllipseParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEllipseParam(const ksEllipseParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetA();
	void SetA(double);
	double GetB();
	void SetB(double);
	double GetAngle();
	void SetAngle(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksEllipseArcParam wrapper class

class ksEllipseArcParam : public COleDispatchDriver
{
public:
	ksEllipseArcParam() {}		// Calls COleDispatchDriver default constructor
	ksEllipseArcParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEllipseArcParam(const ksEllipseArcParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetA();
	void SetA(double);
	double GetB();
	void SetB(double);
	double GetAngle();
	void SetAngle(double);
	double GetAngleFirst();
	void SetAngleFirst(double);
	double GetAngleSecond();
	void SetAngleSecond(double);
	double GetDirection();
	void SetDirection(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksEllipseArcParam1 wrapper class

class ksEllipseArcParam1 : public COleDispatchDriver
{
public:
	ksEllipseArcParam1() {}		// Calls COleDispatchDriver default constructor
	ksEllipseArcParam1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEllipseArcParam1(const ksEllipseArcParam1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetA();
	void SetA(double);
	double GetB();
	void SetB(double);
	double GetAngle();
	void SetAngle(double);
	double GetParFirst();
	void SetParFirst(double);
	double GetParSecond();
	void SetParSecond(double);
	double GetDirection();
	void SetDirection(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksEquidistantParam wrapper class

class ksEquidistantParam : public COleDispatchDriver
{
public:
	ksEquidistantParam() {}		// Calls COleDispatchDriver default constructor
	ksEquidistantParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEquidistantParam(const ksEquidistantParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetGeoObj();
	void SetGeoObj(long);
	short GetSide();
	void SetSide(short);
	BOOL GetCutMode();
	void SetCutMode(BOOL);
	BOOL GetDegState();
	void SetDegState(BOOL);
	double GetRadRight();
	void SetRadRight(double);
	double GetRadLeft();
	void SetRadLeft(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksParagraphParam wrapper class

class ksParagraphParam : public COleDispatchDriver
{
public:
	ksParagraphParam() {}		// Calls COleDispatchDriver default constructor
	ksParagraphParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksParagraphParam(const ksParagraphParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAng();
	void SetAng(double);
	double GetWidth();
	void SetWidth(double);
	double GetHeight();
	void SetHeight(double);
	long GetVFormat();
	void SetVFormat(long);
	long GetHFormat();
	void SetHFormat(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksTextItemParam wrapper class

class ksTextItemParam : public COleDispatchDriver
{
public:
	ksTextItemParam() {}		// Calls COleDispatchDriver default constructor
	ksTextItemParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTextItemParam(const ksTextItemParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetType();
	void SetType(long);
	CString GetS();
	void SetS(LPCTSTR);
	long GetISNumb();
	void SetISNumb(long);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetItemFont();
	BOOL SetItemFont(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksTextLineParam wrapper class

class ksTextLineParam : public COleDispatchDriver
{
public:
	ksTextLineParam() {}		// Calls COleDispatchDriver default constructor
	ksTextLineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTextLineParam(const ksTextLineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	LPDISPATCH GetTextItemArr();
	BOOL SetTextItemArr(LPDISPATCH val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksTextItemFont wrapper class

class ksTextItemFont : public COleDispatchDriver
{
public:
	ksTextItemFont() {}		// Calls COleDispatchDriver default constructor
	ksTextItemFont(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTextItemFont(const ksTextItemFont& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFontName();
	void SetFontName(LPCTSTR);
	double GetHeight();
	void SetHeight(double);
	double GetKsu();
	void SetKsu(double);
	long GetColor();
	void SetColor(long);
	long GetBitVector();
	void SetBitVector(long);

// Operations
public:
	BOOL Init();
	BOOL GetBitVectorValue(long val);
	BOOL SetBitVectorValue(long val, BOOL state);
};
/////////////////////////////////////////////////////////////////////////////
// ksCornerParam wrapper class

class ksCornerParam : public COleDispatchDriver
{
public:
	ksCornerParam() {}		// Calls COleDispatchDriver default constructor
	ksCornerParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCornerParam(const ksCornerParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetIndex();
	void SetIndex(long);
	BOOL GetFillet();
	void SetFillet(BOOL);
	double GetL1();
	void SetL1(double);
	double GetL2();
	void SetL2(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksContourParam wrapper class

class ksContourParam : public COleDispatchDriver
{
public:
	ksContourParam() {}		// Calls COleDispatchDriver default constructor
	ksContourParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksContourParam(const ksContourParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLayerParam wrapper class

class ksLayerParam : public COleDispatchDriver
{
public:
	ksLayerParam() {}		// Calls COleDispatchDriver default constructor
	ksLayerParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLayerParam(const ksLayerParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetState();
	void SetState(short);
	long GetColor();
	void SetColor(long);
	CString GetName();
	void SetName(LPCTSTR);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLineParam wrapper class

class ksLineParam : public COleDispatchDriver
{
public:
	ksLineParam() {}		// Calls COleDispatchDriver default constructor
	ksLineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLineParam(const ksLineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRegularPolygonParam wrapper class

class ksRegularPolygonParam : public COleDispatchDriver
{
public:
	ksRegularPolygonParam() {}		// Calls COleDispatchDriver default constructor
	ksRegularPolygonParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRegularPolygonParam(const ksRegularPolygonParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCount();
	void SetCount(long);
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetAng();
	void SetAng(double);
	double GetRadius();
	void SetRadius(double);
	BOOL GetDescribe();
	void SetDescribe(BOOL);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	LPDISPATCH GetPCorner();
	BOOL SetPCorner(LPDISPATCH val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRectangleParam wrapper class

class ksRectangleParam : public COleDispatchDriver
{
public:
	ksRectangleParam() {}		// Calls COleDispatchDriver default constructor
	ksRectangleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRectangleParam(const ksRectangleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAng();
	void SetAng(double);
	double GetHeight();
	void SetHeight(double);
	double GetWidth();
	void SetWidth(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	LPDISPATCH GetPCorner();
	BOOL SetPCorner(LPDISPATCH val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksBaseParam wrapper class

class ksBaseParam : public COleDispatchDriver
{
public:
	ksBaseParam() {}		// Calls COleDispatchDriver default constructor
	ksBaseParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBaseParam(const ksBaseParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	BOOL GetType();
	void SetType(BOOL);
	CString GetStr();
	void SetStr(LPCTSTR);

// Operations
public:
	LPDISPATCH GetPTextItem();
	BOOL SetPTextItem(LPDISPATCH val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLtVariant wrapper class

class ksLtVariant : public COleDispatchDriver
{
public:
	ksLtVariant() {}		// Calls COleDispatchDriver default constructor
	ksLtVariant(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLtVariant(const ksLtVariant& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetStrVal();
	void SetStrVal(LPCTSTR);
	short GetShortVal();
	void SetShortVal(short);
	long GetIntVal();
	void SetIntVal(long);
	long GetLongVal();
	void SetLongVal(long);
	float GetFloatVal();
	void SetFloatVal(float);
	double GetDoubleVal();
	void SetDoubleVal(double);
	short GetCharVal();
	void SetCharVal(short);
	short GetUCharVal();
	void SetUCharVal(short);
	long GetUIntVal();
	void SetUIntVal(long);
	CString GetWstrVal();
	void SetWstrVal(LPCTSTR);

// Operations
public:
	short GetValType();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksUserParam wrapper class

class ksUserParam : public COleDispatchDriver
{
public:
	ksUserParam() {}		// Calls COleDispatchDriver default constructor
	ksUserParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksUserParam(const ksUserParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetLibName();
	void SetLibName(LPCTSTR);
	long GetNumber();
	void SetNumber(long);
	VARIANT GetUserParams();
	void SetUserParams(const VARIANT&);

// Operations
public:
	LPDISPATCH GetUserArray();
	BOOL SetUserArray(LPDISPATCH val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksMathPointParam wrapper class

class ksMathPointParam : public COleDispatchDriver
{
public:
	ksMathPointParam() {}		// Calls COleDispatchDriver default constructor
	ksMathPointParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMathPointParam(const ksMathPointParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksCurvePicture wrapper class

class ksCurvePicture : public COleDispatchDriver
{
public:
	ksCurvePicture() {}		// Calls COleDispatchDriver default constructor
	ksCurvePicture(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurvePicture(const ksCurvePicture& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetPolygon();
	BOOL SetPolygon(LPDISPATCH polygon);
	LPDISPATCH GetFill();
	BOOL SetFill(LPDISPATCH fill);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksCurvePattern wrapper class

class ksCurvePattern : public COleDispatchDriver
{
public:
	ksCurvePattern() {}		// Calls COleDispatchDriver default constructor
	ksCurvePattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurvePattern(const ksCurvePattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetVisibleSeg();
	void SetVisibleSeg(double);
	double GetInvisibleSeg();
	void SetInvisibleSeg(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksTAN wrapper class

class ksTAN : public COleDispatchDriver
{
public:
	ksTAN() {}		// Calls COleDispatchDriver default constructor
	ksTAN(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTAN(const ksTAN& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetX1(long index);
	double GetY1(long index);
	double GetX2(long index);
	double GetY2(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksCON wrapper class

class ksCON : public COleDispatchDriver
{
public:
	ksCON() {}		// Calls COleDispatchDriver default constructor
	ksCON(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCON(const ksCON& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	double GetXc(long index);
	double GetYc(long index);
	double GetX1(long index);
	double GetY1(long index);
	double GetX2(long index);
	double GetY2(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksInertiaParam wrapper class

class ksInertiaParam : public COleDispatchDriver
{
public:
	ksInertiaParam() {}		// Calls COleDispatchDriver default constructor
	ksInertiaParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksInertiaParam(const ksInertiaParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetXc();
	double GetYc();
	double GetF();
	double GetLy();
	double GetLx();
	double GetLxy();
	double GetMx();
	double GetMy();
	double GetMxy();
	double GetJx();
	double GetJy();
	double GetA();
};
/////////////////////////////////////////////////////////////////////////////
// ksMassInertiaParam wrapper class

class ksMassInertiaParam : public COleDispatchDriver
{
public:
	ksMassInertiaParam() {}		// Calls COleDispatchDriver default constructor
	ksMassInertiaParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMassInertiaParam(const ksMassInertiaParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetXc();
	double GetYc();
	double GetZc();
	double GetLx();
	double GetLy();
	double GetLz();
	double GetJx();
	double GetJy();
	double GetJz();
	double GetJxy();
	double GetJxz();
	double GetJyz();
	double GetJx0z();
	double GetJy0z();
	double GetJx0y();
	double GetLxy();
	double GetLxz();
	double GetLyz();
	double GetR();
	double GetM();
	double GetV();
	BOOL SetBitVectorValue(long val, BOOL setState);
	double GetF();
	double GetJx0();
	double GetJy0();
	double GetJz0();
	BOOL GetAxisX(double* x, double* y, double* z);
	BOOL GetAxisY(double* x, double* y, double* z);
	BOOL GetAxisZ(double* x, double* y, double* z);
};
/////////////////////////////////////////////////////////////////////////////
// ksMathematic2D wrapper class

class ksMathematic2D : public COleDispatchDriver
{
public:
	ksMathematic2D() {}		// Calls COleDispatchDriver default constructor
	ksMathematic2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMathematic2D(const ksMathematic2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double ksCosD(double x);
	double ksSinD(double x);
	double ksTanD(double x);
	double ksAtanD(double x);
	double ksAngle(double x1, double y1, double x2, double y2);
	long ksEqualPoints(double x1, double y1, double x2, double y2);
	BOOL ksIntersectLinSLinS(double x11, double y11, double x12, double y12, double x21, double y21, double x22, double y22, LPDISPATCH param);
	BOOL ksIntersectLinSLine(double x1, double y1, double x2, double y2, double x, double y, double ang, LPDISPATCH param);
	BOOL ksIntersectArcLin(double xc, double yc, double rad, double f1, double f2, long n, double x, double y, double ang, LPDISPATCH param);
	BOOL ksIntersectLinLin(double x1, double y1, double angle1, double x2, double y2, double angle2, LPDISPATCH param);
	BOOL ksIntersectCirCir(double xc1, double yc1, double radius1, double xc2, double yc2, double radius2, LPDISPATCH param);
	BOOL ksIntersectArcArc(double xac, double yac, double rada, double fa1, double fa2, short directa, double xbc, double ybc, double radb, double fb1, double fb2, long directb, LPDISPATCH param);
	BOOL ksIntersectLinSArc(double x1, double y1, double x2, double y2, double xc, double yc, double rad, double f1, double f2, short direct, LPDISPATCH param);
	BOOL ksIntersectLinSCir(double x1, double y1, double x2, double y2, double xc, double yc, double rad, LPDISPATCH param);
	BOOL ksIntersectCirLin(double xc, double yc, double rad, double xl, double yl, double angle, LPDISPATCH param);
	BOOL ksIntersectCirArc(double xcc, double ycc, double radc, double xac, double yac, double rada, double fa1, double fa2, short directa, LPDISPATCH param);
	long ksIntersectCurvCurv(long p1, long p2, LPDISPATCH param);
	BOOL ksTanLinePointCircle(double x, double y, double xc, double yc, double rad, LPDISPATCH param);
	BOOL ksTanLineAngCircle(double xc, double yc, double rad, double ang, LPDISPATCH param);
	BOOL ksTanCircleCircle(double xc1, double yc1, double radius1, double xc2, double yc2, double radius2, LPDISPATCH param);
	long ksTanLinePointCurve(double x, double y, long pCur, LPDISPATCH array);
	BOOL ksCouplingLineLine(double x1, double y1, double angle1, double x2, double y2, double angle2, double rad, LPDISPATCH param);
	BOOL ksCouplingLineCircle(double xc, double yc, double radc, double x1, double y1, double angle1, double rad, LPDISPATCH param);
	BOOL ksCouplingCircleCircle(double xc1, double yc1, double radc1, double xc2, double yc2, double radc2, double rad, LPDISPATCH param);
	BOOL ksSymmetry(double x, double y, double x1, double y1, double x2, double y2, double* xc, double* yc);
	BOOL ksRotate(double x, double y, double xc, double yc, double ang, double* xr, double* yr);
	double ksDistancePntPnt(double x1, double y1, double x2, double y2);
	double ksDistancePntLineSeg(double x, double y, double x1, double y1, double x2, double y2);
	double ksDistancePntArc(double x, double y, double xac, double yac, double rada, double fa1, double fa2, short directa);
	double ksDistancePntCircle(double x, double y, double xc, double yc, double rad);
	double ksDistancePntLine(double x, double y, double x1, double y1, double angle);
	double ksDistancePntLineForPoint(double x, double y, double x1, double y1, double x2, double y2);
	BOOL ksPerpendicular(double x, double y, double x1, double y1, double x2, double y2, double* xp, double* yp);
	LPDISPATCH ksPointsOnCurve(long curve, long count);
	double ksGetCurvePerpendicular(long curve, double x, double y);
	long ksGetCurvePointProjection(long curve, double x, double y, double* kx, double* ky);
	long ksMovePointOnCurve(long curve, double* x, double* y, double len, long dir);
	long ksCalcInertiaProperties(long p, LPDISPATCH prop, short dimension);
	long ksCalcMassInertiaProperties(long p, LPDISPATCH prop, double density, double param);
	double ksGetCurvePerimeter(long curve, short dimension);
	LPDISPATCH ksPointsOnCurveByStep(long curve, double step);
	double ksDistancePntPntOnCurve(long curve, double x1, double y1, double x2, double y2);
	long ksGetCurvePointProjectionEx(long curve, double x, double y, double* kx, double* ky, double* t);
	long ksGetCurvePoint(long curve, double t, double* x, double* y);
	long ksGetCurveMinMaxParametr(long curve, double* tMin, double* tMax);
	double ksDistanceT1T2OnCurve(long curve, double t1, double t2);
	long ksTanCurvCurv(long p1, long p2, LPDISPATCH pointArr1, LPDISPATCH pointArr2);
};
/////////////////////////////////////////////////////////////////////////////
// ksDynamicArray wrapper class

class ksDynamicArray : public COleDispatchDriver
{
public:
	ksDynamicArray() {}		// Calls COleDispatchDriver default constructor
	ksDynamicArray(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDynamicArray(const ksDynamicArray& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetReference();
	void SetReference(long);

// Operations
public:
	long ksDeleteArray();
	long ksClearArray();
	long ksGetArrayCount();
	long ksGetArrayType();
	long ksExcludeArrayItem(long index);
	long ksAddArrayItem(long index, LPDISPATCH item);
	long ksGetArrayItem(long index, LPDISPATCH item);
	long ksSetArrayItem(long index, LPDISPATCH item);
};
/////////////////////////////////////////////////////////////////////////////
// ksRDimDrawingParam wrapper class

class ksRDimDrawingParam : public COleDispatchDriver
{
public:
	ksRDimDrawingParam() {}		// Calls COleDispatchDriver default constructor
	ksRDimDrawingParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRDimDrawingParam(const ksRDimDrawingParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetPt1();
	void SetPt1(short);
	short GetPt2();
	void SetPt2(short);
	long GetTextPos();
	void SetTextPos(long);
	double GetAng();
	void SetAng(double);
	long GetShelfDir();
	void SetShelfDir(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRDimSourceParam wrapper class

class ksRDimSourceParam : public COleDispatchDriver
{
public:
	ksRDimSourceParam() {}		// Calls COleDispatchDriver default constructor
	ksRDimSourceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRDimSourceParam(const ksRDimSourceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetRad();
	void SetRad(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRDimParam wrapper class

class ksRDimParam : public COleDispatchDriver
{
public:
	ksRDimParam() {}		// Calls COleDispatchDriver default constructor
	ksRDimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRDimParam(const ksRDimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksLineSegParam wrapper class

class ksLineSegParam : public COleDispatchDriver
{
public:
	ksLineSegParam() {}		// Calls COleDispatchDriver default constructor
	ksLineSegParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLineSegParam(const ksLineSegParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksCircleParam wrapper class

class ksCircleParam : public COleDispatchDriver
{
public:
	ksCircleParam() {}		// Calls COleDispatchDriver default constructor
	ksCircleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCircleParam(const ksCircleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetRad();
	void SetRad(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksArcByAngleParam wrapper class

class ksArcByAngleParam : public COleDispatchDriver
{
public:
	ksArcByAngleParam() {}		// Calls COleDispatchDriver default constructor
	ksArcByAngleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksArcByAngleParam(const ksArcByAngleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetRad();
	void SetRad(double);
	double GetAng1();
	void SetAng1(double);
	double GetAng2();
	void SetAng2(double);
	short GetDir();
	void SetDir(short);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksArcByPointParam wrapper class

class ksArcByPointParam : public COleDispatchDriver
{
public:
	ksArcByPointParam() {}		// Calls COleDispatchDriver default constructor
	ksArcByPointParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksArcByPointParam(const ksArcByPointParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetRad();
	void SetRad(double);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	short GetDir();
	void SetDir(short);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksPointParam wrapper class

class ksPointParam : public COleDispatchDriver
{
public:
	ksPointParam() {}		// Calls COleDispatchDriver default constructor
	ksPointParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPointParam(const ksPointParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksHatchParam wrapper class

class ksHatchParam : public COleDispatchDriver
{
public:
	ksHatchParam() {}		// Calls COleDispatchDriver default constructor
	ksHatchParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksHatchParam(const ksHatchParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetStep();
	void SetStep(double);
	double GetAng();
	void SetAng(double);
	double GetWidth();
	void SetWidth(double);
	long GetBoundaries();
	void SetBoundaries(long);
	long GetColor();
	void SetColor(long);
	short GetSheeting();
	void SetSheeting(short);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksTextParam wrapper class

class ksTextParam : public COleDispatchDriver
{
public:
	ksTextParam() {}		// Calls COleDispatchDriver default constructor
	ksTextParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTextParam(const ksTextParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Init();
	LPDISPATCH GetParagraphParam();
	BOOL SetParagraphParam(LPDISPATCH val);
	LPDISPATCH GetTextLineArr();
	BOOL SetTextLineArr(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsPointParam wrapper class

class ksNurbsPointParam : public COleDispatchDriver
{
public:
	ksNurbsPointParam() {}		// Calls COleDispatchDriver default constructor
	ksNurbsPointParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsPointParam(const ksNurbsPointParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetWeight();
	void SetWeight(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksDoubleValue wrapper class

class ksDoubleValue : public COleDispatchDriver
{
public:
	ksDoubleValue() {}		// Calls COleDispatchDriver default constructor
	ksDoubleValue(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDoubleValue(const ksDoubleValue& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetValue();
	void SetValue(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsParam wrapper class

class ksNurbsParam : public COleDispatchDriver
{
public:
	ksNurbsParam() {}		// Calls COleDispatchDriver default constructor
	ksNurbsParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsParam(const ksNurbsParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDegree();
	void SetDegree(short);
	BOOL GetClose();
	void SetClose(BOOL);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL GetPeriodic();
	BOOL Init();
	LPDISPATCH GetPPoint();
	BOOL SetPPoint(LPDISPATCH val);
	LPDISPATCH GetPKnot();
	BOOL SetPKnot(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksConicArcParam wrapper class

class ksConicArcParam : public COleDispatchDriver
{
public:
	ksConicArcParam() {}		// Calls COleDispatchDriver default constructor
	ksConicArcParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksConicArcParam(const ksConicArcParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetA();
	void SetA(double);
	double GetB();
	void SetB(double);
	double GetC();
	void SetC(double);
	double GetD();
	void SetD(double);
	double GetE();
	void SetE(double);
	double GetF();
	void SetF(double);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksCentreParam wrapper class

class ksCentreParam : public COleDispatchDriver
{
public:
	ksCentreParam() {}		// Calls COleDispatchDriver default constructor
	ksCentreParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCentreParam(const ksCentreParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetBaseCurve();
	void SetBaseCurve(long);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAngle();
	void SetAngle(double);
	short GetType();
	void SetType(short);
	BOOL GetStandXpTail();
	void SetStandXpTail(BOOL);
	BOOL GetStandXmTail();
	void SetStandXmTail(BOOL);
	BOOL GetStandYpTail();
	void SetStandYpTail(BOOL);
	BOOL GetStandYmTail();
	void SetStandYmTail(BOOL);
	double GetLenXpTail();
	void SetLenXpTail(double);
	double GetLenXmTail();
	void SetLenXmTail(double);
	double GetLenYpTail();
	void SetLenYpTail(double);
	double GetLenYmTail();
	void SetLenYmTail(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlacementParam wrapper class

class ksPlacementParam : public COleDispatchDriver
{
public:
	ksPlacementParam() {}		// Calls COleDispatchDriver default constructor
	ksPlacementParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlacementParam(const ksPlacementParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXBase();
	void SetXBase(double);
	double GetYBase();
	void SetYBase(double);
	double GetScale_();
	void SetScale_(double);
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRasterParam wrapper class

class ksRasterParam : public COleDispatchDriver
{
public:
	ksRasterParam() {}		// Calls COleDispatchDriver default constructor
	ksRasterParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRasterParam(const ksRasterParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	BOOL GetEmbeded();
	void SetEmbeded(BOOL);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetPlace();
	BOOL SetPlace(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksPolylineParam wrapper class

class ksPolylineParam : public COleDispatchDriver
{
public:
	ksPolylineParam() {}		// Calls COleDispatchDriver default constructor
	ksPolylineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPolylineParam(const ksPolylineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	BOOL GetClosed();
	void SetClosed(BOOL);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetpMathPoint();
	BOOL SetpMathPoint(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksInsertFragmentParam wrapper class

class ksInsertFragmentParam : public COleDispatchDriver
{
public:
	ksInsertFragmentParam() {}		// Calls COleDispatchDriver default constructor
	ksInsertFragmentParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksInsertFragmentParam(const ksInsertFragmentParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetComment();
	void SetComment(LPCTSTR);
	short GetInsertType();
	void SetInsertType(short);
	BOOL GetMultiLayer();
	void SetMultiLayer(BOOL);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetPlace();
	BOOL SetPlace(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksViewParam wrapper class

class ksViewParam : public COleDispatchDriver
{
public:
	ksViewParam() {}		// Calls COleDispatchDriver default constructor
	ksViewParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksViewParam(const ksViewParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAngle();
	void SetAngle(double);
	double GetScale_();
	void SetScale_(double);
	long GetColor();
	void SetColor(long);
	short GetState();
	void SetState(short);
	CString GetName();
	void SetName(LPCTSTR);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLBreakDimSource wrapper class

class ksLBreakDimSource : public COleDispatchDriver
{
public:
	ksLBreakDimSource() {}		// Calls COleDispatchDriver default constructor
	ksLBreakDimSource(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLBreakDimSource(const ksLBreakDimSource& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	double GetX3();
	void SetX3(double);
	double GetY3();
	void SetY3(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksBreakDimDrawing wrapper class

class ksBreakDimDrawing : public COleDispatchDriver
{
public:
	ksBreakDimDrawing() {}		// Calls COleDispatchDriver default constructor
	ksBreakDimDrawing(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBreakDimDrawing(const ksBreakDimDrawing& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetPl();
	void SetPl(BOOL);
	short GetPt();
	void SetPt(short);
	long GetTextPos();
	void SetTextPos(long);
	long GetShelfDir();
	void SetShelfDir(long);
	double GetAngle();
	void SetAngle(double);
	long GetLength();
	void SetLength(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLBreakDimParam wrapper class

class ksLBreakDimParam : public COleDispatchDriver
{
public:
	ksLBreakDimParam() {}		// Calls COleDispatchDriver default constructor
	ksLBreakDimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLBreakDimParam(const ksLBreakDimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksABreakDimParam wrapper class

class ksABreakDimParam : public COleDispatchDriver
{
public:
	ksABreakDimParam() {}		// Calls COleDispatchDriver default constructor
	ksABreakDimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksABreakDimParam(const ksABreakDimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksInsertFragmentParamEx wrapper class

class ksInsertFragmentParamEx : public COleDispatchDriver
{
public:
	ksInsertFragmentParamEx() {}		// Calls COleDispatchDriver default constructor
	ksInsertFragmentParamEx(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksInsertFragmentParamEx(const ksInsertFragmentParamEx& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetComment();
	void SetComment(LPCTSTR);
	short GetInsertType();
	void SetInsertType(short);
	BOOL GetMultiLayer();
	void SetMultiLayer(BOOL);
	short GetScaleProjLinesSize();
	void SetScaleProjLinesSize(short);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetPlace();
	BOOL SetPlace(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksBezierParam wrapper class

class ksBezierParam : public COleDispatchDriver
{
public:
	ksBezierParam() {}		// Calls COleDispatchDriver default constructor
	ksBezierParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBezierParam(const ksBezierParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	short GetClosed();
	void SetClosed(short);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetMathPointArr();
	BOOL SetMathPointArr(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksBezierPointParam wrapper class

class ksBezierPointParam : public COleDispatchDriver
{
public:
	ksBezierPointParam() {}		// Calls COleDispatchDriver default constructor
	ksBezierPointParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBezierPointParam(const ksBezierPointParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAng();
	void SetAng(double);
	double GetLeft();
	void SetLeft(double);
	double GetRight();
	void SetRight(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksDimTextParam wrapper class

class ksDimTextParam : public COleDispatchDriver
{
public:
	ksDimTextParam() {}		// Calls COleDispatchDriver default constructor
	ksDimTextParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDimTextParam(const ksDimTextParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	long GetSign();
	void SetSign(long);
	BOOL GetStringFlag();
	void SetStringFlag(BOOL);
	long GetBitFlag();
	void SetBitFlag(long);

// Operations
public:
	BOOL Init(BOOL stringFlag);
	BOOL GetBitFlagValue(long bitFlag);
	BOOL SetBitFlagValue(long val, BOOL state);
	LPDISPATCH GetTextArr();
	BOOL SetTextArr(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksLDimSourceParam wrapper class

class ksLDimSourceParam : public COleDispatchDriver
{
public:
	ksLDimSourceParam() {}		// Calls COleDispatchDriver default constructor
	ksLDimSourceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLDimSourceParam(const ksLDimSourceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	double GetDx();
	void SetDx(double);
	double GetDy();
	void SetDy(double);
	short GetPs();
	void SetPs(short);
	short GetBasePoint();
	void SetBasePoint(short);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksDimDrawingParam wrapper class

class ksDimDrawingParam : public COleDispatchDriver
{
public:
	ksDimDrawingParam() {}		// Calls COleDispatchDriver default constructor
	ksDimDrawingParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDimDrawingParam(const ksDimDrawingParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetPl1();
	void SetPl1(BOOL);
	BOOL GetPl2();
	void SetPl2(BOOL);
	short GetPt1();
	void SetPt1(short);
	short GetPt2();
	void SetPt2(short);
	long GetTextPos();
	void SetTextPos(long);
	short GetTextBase();
	void SetTextBase(short);
	long GetShelfDir();
	void SetShelfDir(long);
	double GetAng();
	void SetAng(double);
	long GetLenght();
	void SetLenght(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLDimParam wrapper class

class ksLDimParam : public COleDispatchDriver
{
public:
	ksLDimParam() {}		// Calls COleDispatchDriver default constructor
	ksLDimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLDimParam(const ksLDimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksADimSourceParam wrapper class

class ksADimSourceParam : public COleDispatchDriver
{
public:
	ksADimSourceParam() {}		// Calls COleDispatchDriver default constructor
	ksADimSourceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksADimSourceParam(const ksADimSourceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXc();
	void SetXc(double);
	double GetYc();
	void SetYc(double);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	double GetAng1();
	void SetAng1(double);
	double GetAng2();
	void SetAng2(double);
	long GetDir();
	void SetDir(long);
	double GetRad();
	void SetRad(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksDimensionPartsParam wrapper class

class ksDimensionPartsParam : public COleDispatchDriver
{
public:
	ksDimensionPartsParam() {}		// Calls COleDispatchDriver default constructor
	ksDimensionPartsParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDimensionPartsParam(const ksDimensionPartsParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetLine1();
	void SetLine1(long);
	long GetLine2();
	void SetLine2(long);
	long GetDimLine();
	void SetDimLine(long);
	long GetDimLine1();
	void SetDimLine1(long);
	long GetLeg();
	void SetLeg(long);
	long GetShelf();
	void SetShelf(long);
	long GetGr();
	void SetGr(long);
	long GetCurveExt();
	void SetCurveExt(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksADimParam wrapper class

class ksADimParam : public COleDispatchDriver
{
public:
	ksADimParam() {}		// Calls COleDispatchDriver default constructor
	ksADimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksADimParam(const ksADimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksRBreakDrawingParam wrapper class

class ksRBreakDrawingParam : public COleDispatchDriver
{
public:
	ksRBreakDrawingParam() {}		// Calls COleDispatchDriver default constructor
	ksRBreakDrawingParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRBreakDrawingParam(const ksRBreakDrawingParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetPt();
	void SetPt(short);
	double GetAng();
	void SetAng(double);
	long GetPb();
	void SetPb(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRBreakDimParam wrapper class

class ksRBreakDimParam : public COleDispatchDriver
{
public:
	ksRBreakDimParam() {}		// Calls COleDispatchDriver default constructor
	ksRBreakDimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRBreakDimParam(const ksRBreakDimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksQualityItemParam wrapper class

class ksQualityItemParam : public COleDispatchDriver
{
public:
	ksQualityItemParam() {}		// Calls COleDispatchDriver default constructor
	ksQualityItemParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksQualityItemParam(const ksQualityItemParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetMinLimit();
	void SetMinLimit(short);
	short GetMaxLimit();
	void SetMaxLimit(short);
	double GetHigh();
	void SetHigh(double);
	double GetLow();
	void SetLow(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksQualityContensParam wrapper class

class ksQualityContensParam : public COleDispatchDriver
{
public:
	ksQualityContensParam() {}		// Calls COleDispatchDriver default constructor
	ksQualityContensParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksQualityContensParam(const ksQualityContensParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetSystemQuality();
	void SetSystemQuality(short);
	short GetKindQuality();
	void SetKindQuality(short);
	CString GetName();
	void SetName(LPCTSTR);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetpQualityItems();
	BOOL SetpQualityItems(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksIterator wrapper class

class ksIterator : public COleDispatchDriver
{
public:
	ksIterator() {}		// Calls COleDispatchDriver default constructor
	ksIterator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksIterator(const ksIterator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetReference();
	void SetReference(long);

// Operations
public:
	BOOL ksCreateIterator(long tipSeartch, long parent);
	long ksMoveIterator(LPCTSTR ksMoveIterator);
	BOOL ksCreateAttrIterator(long obj, long key1, long key2, long key3, long key4, double numb);
	long ksMoveAttrIterator(LPCTSTR ch, long* pObj);
	BOOL ksCreateSpcIterator(LPCTSTR nameLib, long styleNumb, long spcObjType);
	BOOL ksCreateQualityIterator(short system, short withLimitation);
	BOOL ksMoveQualityIterator(LPDISPATCH param, short inMM, LPCTSTR ch);
	long ksDeleteIterator();
};
/////////////////////////////////////////////////////////////////////////////
// ksFragment wrapper class

class ksFragment : public COleDispatchDriver
{
public:
	ksFragment() {}		// Calls COleDispatchDriver default constructor
	ksFragment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFragment(const ksFragment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long ksFragmentDefinition(LPCTSTR fileName, LPCTSTR comment, short insertType);
	long ksInsertFragment(long p, BOOL curentLayer, LPDISPATCH par);
	long ksReadFragment(LPCTSTR fileName, BOOL curentLayer, LPDISPATCH par);
	long ksReadFragmentToGroup(LPCTSTR fileName, BOOL curentLayer, LPDISPATCH par);
	long ksReadFragmentToGroupEx(LPCTSTR fileName, BOOL curentLayer, LPDISPATCH par, BOOL scaleProjLinesSize);
	long ksWriteFragment(long gr, LPCTSTR fileName, LPCTSTR comment, double xb, double yb);
	long ksLocalFragmentDefinition(LPCTSTR comment);
	long ksCloseLocalFragmentDefinition();
	long ksInsertFragmentEx(long p, BOOL curentLayer, LPDISPATCH par, BOOL scaleProjLinesSize);
};
/////////////////////////////////////////////////////////////////////////////
// ksFragmentLibrary wrapper class

class ksFragmentLibrary : public COleDispatchDriver
{
public:
	ksFragmentLibrary() {}		// Calls COleDispatchDriver default constructor
	ksFragmentLibrary(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFragmentLibrary(const ksFragmentLibrary& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString ksChoiceFragmentFromLib(LPCTSTR frwLibFile, long* type);
	long ksFragmentLibraryOperation(LPCTSTR libName, long type);
	long ksAddFragmentToLibrary(LPCTSTR libName, LPCTSTR frwName);
	long ksCheckFragmentLibrary(LPCTSTR libName, BOOL possibleMessage);
	long ksExistFragmentInLibrary(LPCTSTR frwName);
};
/////////////////////////////////////////////////////////////////////////////
// ksTechnicalDemandParam wrapper class

class ksTechnicalDemandParam : public COleDispatchDriver
{
public:
	ksTechnicalDemandParam() {}		// Calls COleDispatchDriver default constructor
	ksTechnicalDemandParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTechnicalDemandParam(const ksTechnicalDemandParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	short GetStrCount();
	void SetStrCount(short);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetPGab();
	BOOL SetPGab(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedSourceParam wrapper class

class ksOrdinatedSourceParam : public COleDispatchDriver
{
public:
	ksOrdinatedSourceParam() {}		// Calls COleDispatchDriver default constructor
	ksOrdinatedSourceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksOrdinatedSourceParam(const ksOrdinatedSourceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX0();
	void SetX0(double);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetY0();
	void SetY0(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedDimParam wrapper class

class ksOrdinatedDimParam : public COleDispatchDriver
{
public:
	ksOrdinatedDimParam() {}		// Calls COleDispatchDriver default constructor
	ksOrdinatedDimParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksOrdinatedDimParam(const ksOrdinatedDimParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Init();
	LPDISPATCH GetTPar();
	BOOL SetTPar(LPDISPATCH val);
	LPDISPATCH GetDPar();
	BOOL SetDPar(LPDISPATCH val);
	LPDISPATCH GetSPar();
	BOOL SetSPar(LPDISPATCH val);
};
/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedDrawingParam wrapper class

class ksOrdinatedDrawingParam : public COleDispatchDriver
{
public:
	ksOrdinatedDrawingParam() {}		// Calls COleDispatchDriver default constructor
	ksOrdinatedDrawingParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksOrdinatedDrawingParam(const ksOrdinatedDrawingParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetType();
	void SetType(long);

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ksSheetSize wrapper class

class ksSheetSize : public COleDispatchDriver
{
public:
	ksSheetSize() {}		// Calls COleDispatchDriver default constructor
	ksSheetSize(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSheetSize(const ksSheetSize& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetWidth();
	void SetWidth(double);
	double GetHeight();
	void SetHeight(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksStandartSheet wrapper class

class ksStandartSheet : public COleDispatchDriver
{
public:
	ksStandartSheet() {}		// Calls COleDispatchDriver default constructor
	ksStandartSheet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksStandartSheet(const ksStandartSheet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetFormat();
	void SetFormat(short);
	short GetMultiply();
	void SetMultiply(short);
	BOOL GetDirect();
	void SetDirect(BOOL);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSheetPar wrapper class

class ksSheetPar : public COleDispatchDriver
{
public:
	ksSheetPar() {}		// Calls COleDispatchDriver default constructor
	ksSheetPar(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSheetPar(const ksSheetPar& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetLayoutName();
	void SetLayoutName(LPCTSTR);
	short GetShtType();
	void SetShtType(short);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetSheetParam();
};
/////////////////////////////////////////////////////////////////////////////
// ksDocumentParam wrapper class

class ksDocumentParam : public COleDispatchDriver
{
public:
	ksDocumentParam() {}		// Calls COleDispatchDriver default constructor
	ksDocumentParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocumentParam(const ksDocumentParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetComment();
	void SetComment(LPCTSTR);
	CString GetAuthor();
	void SetAuthor(LPCTSTR);
	short GetType();
	void SetType(short);
	short GetRegime();
	void SetRegime(short);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetLayoutParam();
};
/////////////////////////////////////////////////////////////////////////////
// ksDimensionsOptions wrapper class

class ksDimensionsOptions : public COleDispatchDriver
{
public:
	ksDimensionsOptions() {}		// Calls COleDispatchDriver default constructor
	ksDimensionsOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDimensionsOptions(const ksDimensionsOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetProLineExtension();
	void SetProLineExtension(double);
	double GetTextDistanceFromDimLine();
	void SetTextDistanceFromDimLine(double);
	double GetTextDistanceFromProLine();
	void SetTextDistanceFromProLine(double);
	double GetDimLineExtension();
	void SetDimLineExtension(double);
	double GetArrowLength();
	void SetArrowLength(double);
	long GetStyle();
	void SetStyle(long);
	short GetDecimalsCount();
	void SetDecimalsCount(short);
	long GetAnglePrecisionLevel();
	void SetAnglePrecisionLevel(long);
	long GetHiddenToleranceNumber();
	void SetHiddenToleranceNumber(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSnapOptions wrapper class

class ksSnapOptions : public COleDispatchDriver
{
public:
	ksSnapOptions() {}		// Calls COleDispatchDriver default constructor
	ksSnapOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSnapOptions(const ksSnapOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetNearestPoint();
	void SetNearestPoint(BOOL);
	BOOL GetNearestMiddle();
	void SetNearestMiddle(BOOL);
	BOOL GetIntersect();
	void SetIntersect(BOOL);
	BOOL GetTangentToCurve();
	void SetTangentToCurve(BOOL);
	BOOL GetNormalToCurve();
	void SetNormalToCurve(BOOL);
	BOOL GetGrid();
	void SetGrid(BOOL);
	BOOL GetXyAlign();
	void SetXyAlign(BOOL);
	BOOL GetAngSnap();
	void SetAngSnap(BOOL);
	BOOL GetPointOnCurve();
	void SetPointOnCurve(BOOL);
	long GetCommonOpt();
	void SetCommonOpt(long);
	double GetAngleStep();
	void SetAngleStep(double);
	short GetLocalSnap();
	void SetLocalSnap(short);

// Operations
public:
	BOOL Init();
	BOOL GetCommonOptValue(long val);
	BOOL SetCommonOptValue(long val, BOOL state);
};
/////////////////////////////////////////////////////////////////////////////
// ksLibraryStyleParam wrapper class

class ksLibraryStyleParam : public COleDispatchDriver
{
public:
	ksLibraryStyleParam() {}		// Calls COleDispatchDriver default constructor
	ksLibraryStyleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLibraryStyleParam(const ksLibraryStyleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetStyleName();
	void SetStyleName(LPCTSTR);
	long GetStyleId();
	void SetStyleId(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksStampNotify wrapper class

class ksStampNotify : public COleDispatchDriver
{
public:
	ksStampNotify() {}		// Calls COleDispatchDriver default constructor
	ksStampNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksStampNotify(const ksStampNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginEditStamp();
	BOOL EndEditStamp(BOOL editResult);
	BOOL StampCellDblClick(long number);
	BOOL StampCellBeginEdit(long number);
	BOOL StampBeginClearCells(const VARIANT& cells);
};
/////////////////////////////////////////////////////////////////////////////
// ksStamp wrapper class

class ksStamp : public COleDispatchDriver
{
public:
	ksStamp() {}		// Calls COleDispatchDriver default constructor
	ksStamp(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksStamp(const ksStamp& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetReference();
	void SetReference(long);

// Operations
public:
	long ksOpenStamp();
	long ksCloseStamp();
	long ksClearStamp(long numb);
	LPDISPATCH ksGetStampColumnText(long* numb);
	long ksSetStampColumnText(long numb, LPDISPATCH textArr);
	long ksColumnNumber(long numb);
	long ksTextLine(LPDISPATCH textItem);
	long ksSetTextLineAlign(short align);
	long GetSheetNumb();
};
/////////////////////////////////////////////////////////////////////////////
// ksSheetOptions wrapper class

class ksSheetOptions : public COleDispatchDriver
{
public:
	ksSheetOptions() {}		// Calls COleDispatchDriver default constructor
	ksSheetOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSheetOptions(const ksSheetOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetShtType();
	void SetShtType(short);
	CString GetLayoutName();
	void SetLayoutName(LPCTSTR);
	BOOL GetSheetType();
	void SetSheetType(BOOL);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetSheetParam(BOOL type);
};
/////////////////////////////////////////////////////////////////////////////
// ksCurvePatternEx wrapper class

class ksCurvePatternEx : public COleDispatchDriver
{
public:
	ksCurvePatternEx() {}		// Calls COleDispatchDriver default constructor
	ksCurvePatternEx(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurvePatternEx(const ksCurvePatternEx& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetVisibleSeg();
	void SetVisibleSeg(double);
	double GetInvisibleSeg();
	void SetInvisibleSeg(double);
	double GetDx();
	void SetDx(double);
	double GetDy();
	void SetDy(double);
	short GetPictureType();
	void SetPictureType(short);
	CString GetFrwName();
	void SetFrwName(LPCTSTR);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetCurvePicture();
	BOOL SetCurvePicture(LPDISPATCH picture);
};
/////////////////////////////////////////////////////////////////////////////
// ksCurveStyleParam wrapper class

class ksCurveStyleParam : public COleDispatchDriver
{
public:
	ksCurveStyleParam() {}		// Calls COleDispatchDriver default constructor
	ksCurveStyleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurveStyleParam(const ksCurveStyleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetName();
	void SetName(LPCTSTR);
	long GetColor();
	void SetColor(long);
	double GetPaperWidth();
	void SetPaperWidth(double);
	short GetScreenWidth();
	void SetScreenWidth(short);
	short GetCurveType();
	void SetCurveType(short);
	short GetEven();
	void SetEven(short);
	short GetWidthPen();
	void SetWidthPen(short);

// Operations
public:
	LPDISPATCH GetPPattern(long type);
	BOOL SetPPattern(LPDISPATCH pattern);
	BOOL SetPropertyCurve(long val, BOOL state);
	BOOL GetPropertyCurve(long val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksTextStyleParam wrapper class

class ksTextStyleParam : public COleDispatchDriver
{
public:
	ksTextStyleParam() {}		// Calls COleDispatchDriver default constructor
	ksTextStyleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTextStyleParam(const ksTextStyleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetName();
	void SetName(LPCTSTR);
	double GetHeight();
	void SetHeight(double);
	double GetKsu();
	void SetKsu(double);
	double GetStep();
	void SetStep(double);
	CString GetFontName();
	void SetFontName(LPCTSTR);
	long GetColor();
	void SetColor(long);
	short GetAlign();
	void SetAlign(short);
	short GetBold();
	void SetBold(short);
	short GetItalic();
	void SetItalic(short);
	short GetUnderline();
	void SetUnderline(short);
	double GetPosKS();
	void SetPosKS(double);
	double GetStepParPre();
	void SetStepParPre(double);
	double GetStepParPst();
	void SetStepParPst(double);
	double GetLeftEdge();
	void SetLeftEdge(double);
	double GetRightEdge();
	void SetRightEdge(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksHatchLineParam wrapper class

class ksHatchLineParam : public COleDispatchDriver
{
public:
	ksHatchLineParam() {}		// Calls COleDispatchDriver default constructor
	ksHatchLineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksHatchLineParam(const ksHatchLineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetDx();
	void SetDx(double);
	double GetDy();
	void SetDy(double);
	double GetAng();
	void SetAng(double);
	short GetTypeCurvStyle();
	void SetTypeCurvStyle(short);
	short GetStyle();
	void SetStyle(short);

// Operations
public:
	LPDISPATCH GetCurPar();
	BOOL SetCurPar(LPDISPATCH curPar);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksHatchStyleParam wrapper class

class ksHatchStyleParam : public COleDispatchDriver
{
public:
	ksHatchStyleParam() {}		// Calls COleDispatchDriver default constructor
	ksHatchStyleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksHatchStyleParam(const ksHatchStyleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetName();
	void SetName(LPCTSTR);
	double GetStep();
	void SetStep(double);
	double GetAng();
	void SetAng(double);
	double GetWidth();
	void SetWidth(double);
	long GetColor();
	void SetColor(long);
	short GetMayChangeAngle();
	void SetMayChangeAngle(short);
	short GetMayChangeWidth();
	void SetMayChangeWidth(short);
	short GetMayChangeSpace();
	void SetMayChangeSpace(short);
	short GetIsScalable();
	void SetIsScalable(short);

// Operations
public:
	LPDISPATCH GetRefPoint();
	BOOL SetRefPoint(LPDISPATCH refPoint);
	LPDISPATCH GetArrLineParam();
	BOOL SetArrLineParam(LPDISPATCH arrLineParam);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRectParam wrapper class

class ksRectParam : public COleDispatchDriver
{
public:
	ksRectParam() {}		// Calls COleDispatchDriver default constructor
	ksRectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRectParam(const ksRectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetpBot();
	BOOL SetpBot(LPDISPATCH pBot);
	LPDISPATCH GetpTop();
	BOOL SetpTop(LPDISPATCH pTop);
};
/////////////////////////////////////////////////////////////////////////////
// ksShelfPar wrapper class

class ksShelfPar : public COleDispatchDriver
{
public:
	ksShelfPar() {}		// Calls COleDispatchDriver default constructor
	ksShelfPar(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksShelfPar(const ksShelfPar& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetPsh();
	void SetPsh(long);
	double GetAng();
	void SetAng(double);
	long GetLength();
	void SetLength(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRoughPar wrapper class

class ksRoughPar : public COleDispatchDriver
{
public:
	ksRoughPar() {}		// Calls COleDispatchDriver default constructor
	ksRoughPar(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRoughPar(const ksRoughPar& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	short GetType();
	void SetType(short);
	short GetAround();
	void SetAround(short);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetAng();
	void SetAng(double);
	short GetCText0();
	void SetCText0(short);
	short GetCText1();
	void SetCText1(short);
	short GetCText2();
	void SetCText2(short);
	short GetCText3();
	void SetCText3(short);

// Operations
public:
	LPDISPATCH GetpText();
	BOOL SetpText(LPDISPATCH pText);
	BOOL Init();
	BOOL InitEx(long style);
};
/////////////////////////////////////////////////////////////////////////////
// ksRoughParam wrapper class

class ksRoughParam : public COleDispatchDriver
{
public:
	ksRoughParam() {}		// Calls COleDispatchDriver default constructor
	ksRoughParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRoughParam(const ksRoughParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetrPar();
	BOOL SetrPar(LPDISPATCH par);
	LPDISPATCH GetshPar();
	BOOL SetshPar(LPDISPATCH shPar);
};
/////////////////////////////////////////////////////////////////////////////
// ksChar255 wrapper class

class ksChar255 : public COleDispatchDriver
{
public:
	ksChar255() {}		// Calls COleDispatchDriver default constructor
	ksChar255(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksChar255(const ksChar255& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetStr();
	void SetStr(LPCTSTR);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLeaderParam wrapper class

class ksLeaderParam : public COleDispatchDriver
{
public:
	ksLeaderParam() {}		// Calls COleDispatchDriver default constructor
	ksLeaderParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLeaderParam(const ksLeaderParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	short GetArrowType();
	void SetArrowType(short);
	long GetDirX();
	void SetDirX(long);
	short GetSignType();
	void SetSignType(short);
	short GetAround();
	void SetAround(short);
	short GetCText0();
	void SetCText0(short);
	short GetCText1();
	void SetCText1(short);
	short GetCText2();
	void SetCText2(short);
	short GetCText3();
	void SetCText3(short);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH pTextLine);
	LPDISPATCH GetpPolyline();
	BOOL SetpPolyline(LPDISPATCH pPolyline);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksPosLeaderParam wrapper class

class ksPosLeaderParam : public COleDispatchDriver
{
public:
	ksPosLeaderParam() {}		// Calls COleDispatchDriver default constructor
	ksPosLeaderParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPosLeaderParam(const ksPosLeaderParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	short GetArrowType();
	void SetArrowType(short);
	long GetDirX();
	void SetDirX(long);
	long GetDirY();
	void SetDirY(long);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH textline);
	LPDISPATCH GetpPolyline();
	BOOL SetpPolyline(LPDISPATCH polyline);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksBrandLeaderParam wrapper class

class ksBrandLeaderParam : public COleDispatchDriver
{
public:
	ksBrandLeaderParam() {}		// Calls COleDispatchDriver default constructor
	ksBrandLeaderParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBrandLeaderParam(const ksBrandLeaderParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetDirX();
	void SetDirX(long);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	short GetArrowType();
	void SetArrowType(short);
	long GetStyle1();
	void SetStyle1(long);
	long GetStyle2();
	void SetStyle2(long);
	short GetCText0();
	void SetCText0(short);
	short GetCText1();
	void SetCText1(short);
	long GetCText2();
	void SetCText2(long);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH pTextLine);
	LPDISPATCH GetpPolyline();
	BOOL SetpPolyline(LPDISPATCH pPolyline);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksMarkerLeaderParam wrapper class

class ksMarkerLeaderParam : public COleDispatchDriver
{
public:
	ksMarkerLeaderParam() {}		// Calls COleDispatchDriver default constructor
	ksMarkerLeaderParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMarkerLeaderParam(const ksMarkerLeaderParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	short GetArrowType();
	void SetArrowType(short);
	long GetStyle1();
	void SetStyle1(long);
	long GetStyle2();
	void SetStyle2(long);
	short GetCText0();
	void SetCText0(short);
	short GetCText1();
	void SetCText1(short);
	short GetCText2();
	void SetCText2(short);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH pTextLine);
	LPDISPATCH GetpPolyline();
	BOOL SetpPolyline(LPDISPATCH pPolyline);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksType1 wrapper class

class ksType1 : public COleDispatchDriver
{
public:
	ksType1() {}		// Calls COleDispatchDriver default constructor
	ksType1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksType1(const ksType1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXBase();
	void SetXBase(double);
	double GetYBase();
	void SetYBase(double);
	double GetScale_();
	void SetScale_(double);
	double GetAngle();
	void SetAngle(double);
	long GetGr();
	void SetGr(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksType2 wrapper class

class ksType2 : public COleDispatchDriver
{
public:
	ksType2() {}		// Calls COleDispatchDriver default constructor
	ksType2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksType2(const ksType2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXBase();
	void SetXBase(double);
	double GetYBase();
	void SetYBase(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksType3 wrapper class

class ksType3 : public COleDispatchDriver
{
public:
	ksType3() {}		// Calls COleDispatchDriver default constructor
	ksType3(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksType3(const ksType3& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXBase();
	void SetXBase(double);
	double GetYBase();
	void SetYBase(double);
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksType5 wrapper class

class ksType5 : public COleDispatchDriver
{
public:
	ksType5() {}		// Calls COleDispatchDriver default constructor
	ksType5(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksType5(const ksType5& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetXBase();
	void SetXBase(double);
	double GetYBase();
	void SetYBase(double);
	double GetAngle();
	void SetAngle(double);
	BOOL GetHorizon();
	void SetHorizon(BOOL);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksType6 wrapper class

class ksType6 : public COleDispatchDriver
{
public:
	ksType6() {}		// Calls COleDispatchDriver default constructor
	ksType6(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksType6(const ksType6& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetGr();
	void SetGr(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksPhantom wrapper class

class ksPhantom : public COleDispatchDriver
{
public:
	ksPhantom() {}		// Calls COleDispatchDriver default constructor
	ksPhantom(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPhantom(const ksPhantom& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetPhantom();
	void SetPhantom(short);

// Operations
public:
	LPDISPATCH GetPhantomParam();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRequestInfo wrapper class

class ksRequestInfo : public COleDispatchDriver
{
public:
	ksRequestInfo() {}		// Calls COleDispatchDriver default constructor
	ksRequestInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRequestInfo(const ksRequestInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetPrompt();
	void SetPrompt(LPCTSTR);
	CString GetTitle();
	void SetTitle(LPCTSTR);
	CString GetCommandsString();
	void SetCommandsString(LPCTSTR);
	CString GetCursor();
	void SetCursor(LPCTSTR);
	long GetDynamic();
	void SetDynamic(long);
	long GetCommInstance();
	void SetCommInstance(long);
	long GetMenuId();
	void SetMenuId(long);
	long GetTitleId();
	void SetTitleId(long);
	long GetPromptId();
	void SetPromptId(long);
	long GetCursorId();
	void SetCursorId(long);

// Operations
public:
	CString GetCallBackC();
	BOOL SetCallBackC(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX);
	CString GetCallBackP();
	BOOL SetCallBackP(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX);
	CString GetCallBackCm();
	BOOL SetCallBackCm(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX);
	BOOL Init();
	BOOL SetCursorText(LPCTSTR text);
};
/////////////////////////////////////////////////////////////////////////////
// ksViewPointerParam wrapper class

class ksViewPointerParam : public COleDispatchDriver
{
public:
	ksViewPointerParam() {}		// Calls COleDispatchDriver default constructor
	ksViewPointerParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksViewPointerParam(const ksViewPointerParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	double GetXt();
	void SetXt(double);
	double GetYt();
	void SetYt(double);
	short GetType();
	void SetType(short);
	CString GetStr();
	void SetStr(LPCTSTR);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH pTextLine);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksCutLineParam wrapper class

class ksCutLineParam : public COleDispatchDriver
{
public:
	ksCutLineParam() {}		// Calls COleDispatchDriver default constructor
	ksCutLineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutLineParam(const ksCutLineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	short GetRight();
	void SetRight(short);
	double GetX1();
	void SetX1(double);
	double GetY1();
	void SetY1(double);
	double GetX2();
	void SetX2(double);
	double GetY2();
	void SetY2(double);
	short GetType();
	void SetType(short);
	CString GetStr();
	void SetStr(LPCTSTR);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH pTextLine);
	LPDISPATCH GetpMathPoint();
	BOOL SetpMathPoint(LPDISPATCH pMathPoint);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksToleranceBranch wrapper class

class ksToleranceBranch : public COleDispatchDriver
{
public:
	ksToleranceBranch() {}		// Calls COleDispatchDriver default constructor
	ksToleranceBranch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksToleranceBranch(const ksToleranceBranch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetArrowType();
	void SetArrowType(short);
	short GetTCorner();
	void SetTCorner(short);

// Operations
public:
	LPDISPATCH GetpMathPoint();
	BOOL SetpMathPoint(LPDISPATCH pMathPoint);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksToleranceParam wrapper class

class ksToleranceParam : public COleDispatchDriver
{
public:
	ksToleranceParam() {}		// Calls COleDispatchDriver default constructor
	ksToleranceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksToleranceParam(const ksToleranceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetTBase();
	void SetTBase(short);
	long GetStyle();
	void SetStyle(long);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	short GetType();
	void SetType(short);

// Operations
public:
	LPDISPATCH GetBranchArr();
	BOOL SetBranchArr(LPDISPATCH branchArr);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcColumnParam wrapper class

class ksSpcColumnParam : public COleDispatchDriver
{
public:
	ksSpcColumnParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcColumnParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcColumnParam(const ksSpcColumnParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetColumnType();
	void SetColumnType(long);
	long GetIspoln();
	void SetIspoln(long);
	long GetBlock();
	void SetBlock(long);
	long GetTypeVal();
	void SetTypeVal(long);
	CString GetName();
	void SetName(LPCTSTR);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksRecordTypeAttrParam wrapper class

class ksRecordTypeAttrParam : public COleDispatchDriver
{
public:
	ksRecordTypeAttrParam() {}		// Calls COleDispatchDriver default constructor
	ksRecordTypeAttrParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRecordTypeAttrParam(const ksRecordTypeAttrParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetAttrLibName();
	long GetKey1();
	long GetKey2();
	long GetKey3();
	long GetKey4();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksNumberTypeAttrParam wrapper class

class ksNumberTypeAttrParam : public COleDispatchDriver
{
public:
	ksNumberTypeAttrParam() {}		// Calls COleDispatchDriver default constructor
	ksNumberTypeAttrParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNumberTypeAttrParam(const ksNumberTypeAttrParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetMinValue();
	double GetMaxValue();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleColumnParam wrapper class

class ksSpcStyleColumnParam : public COleDispatchDriver
{
public:
	ksSpcStyleColumnParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcStyleColumnParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcStyleColumnParam(const ksSpcStyleColumnParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetNameColumn();
	long GetColumnType();
	long GetIspoln();
	short GetEdit();
	short GetCreateSum();
	short GetMultiplyToCount();
	short GetUseForSectionTitle();
	short GetTextDn();
	long GetLinkId();
	long GetTypeVal();
	LPDISPATCH GetAdditionalParam();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleSectionParam wrapper class

class ksSpcStyleSectionParam : public COleDispatchDriver
{
public:
	ksSpcStyleSectionParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcStyleSectionParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcStyleSectionParam(const ksSpcStyleSectionParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetSectionName();
	long GetNumber();
	long GetSortColumnType();
	long GetSortIspoln();
	short GetDataType();
	long GetSortType();
	LPDISPATCH GetArrColumn();
	LPDISPATCH GetArrAdditionalColumn();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcSubSectionParam wrapper class

class ksSpcSubSectionParam : public COleDispatchDriver
{
public:
	ksSpcSubSectionParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcSubSectionParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcSubSectionParam(const ksSpcSubSectionParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	long GetNumber();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcTuningSectionParam wrapper class

class ksSpcTuningSectionParam : public COleDispatchDriver
{
public:
	ksSpcTuningSectionParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcTuningSectionParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcTuningSectionParam(const ksSpcTuningSectionParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	short GetSubsectionOn();
	short GetGeometryOn();
	short GetPositionOn();
	short GetSortOn();
	short GetFirstOnSheet();
	long GetRezervCount();
	long GetNumber();
	LPDISPATCH GetArrSubSection();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcTuningStyleParam wrapper class

class ksSpcTuningStyleParam : public COleDispatchDriver
{
public:
	ksSpcTuningStyleParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcTuningStyleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcTuningStyleParam(const ksSpcTuningStyleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetGrToSP();
	void SetGrToSP(short);
	short GetZoneCalc();
	void SetZoneCalc(short);
	short GetShowSectionName();
	void SetShowSectionName(short);
	short GetPositionCalc();
	void SetPositionCalc(short);
	short GetGeometryDel();
	void SetGeometryDel(short);
	short GetPositionDel();
	void SetPositionDel(short);
	short GetMassCalc();
	void SetMassCalc(short);
	short GetDisableEmptyStr();
	void SetDisableEmptyStr(short);
	short GetInsertNull();
	void SetInsertNull(short);
	short GetInsertDash();
	void SetInsertDash(short);
	short GetDisableEmptyBlockStr();
	void SetDisableEmptyBlockStr(short);
	short GetShowInfoByDetBlock();
	void SetShowInfoByDetBlock(short);
	short GetIspolnOn();
	void SetIspolnOn(short);
	short GetIspolnMarkFull();
	void SetIspolnMarkFull(short);
	short GetBlocOnNewPage();
	void SetBlocOnNewPage(short);
	short GetUserTextStyle();
	void SetUserTextStyle(short);
	short GetCountIspoln();
	void SetCountIspoln(short);
	short GetCountBlock();
	void SetCountBlock(short);
	CString GetPredefinedTextFileName();
	void SetPredefinedTextFileName(LPCTSTR);
	short GetDelSpcObjOnDelGeometry();
	void SetDelSpcObjOnDelGeometry(short);
	short GetCopySpcObjOnCopyGeometry();
	void SetCopySpcObjOnCopyGeometry(short);

// Operations
public:
	LPDISPATCH GetSectionTextStyleFirst();
	LPDISPATCH GetSectionTextStyleNext();
	LPDISPATCH GetObjectTextStyle();
	LPDISPATCH GetArrSection();
	BOOL Init();
	BOOL SetSectionTextStyleFirst(LPDISPATCH style);
	BOOL SetSectionTextStyleNext(LPDISPATCH style);
	BOOL SetObjectTextStyle(LPDISPATCH style);
	BOOL SetArrSection(LPDISPATCH arr);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleParam wrapper class

class ksSpcStyleParam : public COleDispatchDriver
{
public:
	ksSpcStyleParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcStyleParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcStyleParam(const ksSpcStyleParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetLayoutName1();
	CString GetLayoutName2();
	long GetShtType1();
	long GetShtType2();
	short GetVariant();
	short GetSectionOn();
	short GetType();
	LPDISPATCH GetTuning();
	LPDISPATCH GetArrColumn();
	LPDISPATCH GetArrAdditionalColumn();
	LPDISPATCH GetArrSection();
	LPDISPATCH GetSheetParam();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcDescrParam wrapper class

class ksSpcDescrParam : public COleDispatchDriver
{
public:
	ksSpcDescrParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcDescrParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcDescrParam(const ksSpcDescrParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetLayoutName();
	void SetLayoutName(LPCTSTR);
	long GetStyleId();
	void SetStyleId(long);
	CString GetSpcName();
	void SetSpcName(LPCTSTR);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksDocAttachedSpcParam wrapper class

class ksDocAttachedSpcParam : public COleDispatchDriver
{
public:
	ksDocAttachedSpcParam() {}		// Calls COleDispatchDriver default constructor
	ksDocAttachedSpcParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocAttachedSpcParam(const ksDocAttachedSpcParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetComment();
	void SetComment(LPCTSTR);
	short GetTransmit();
	void SetTransmit(short);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcObjParam wrapper class

class ksSpcObjParam : public COleDispatchDriver
{
public:
	ksSpcObjParam() {}		// Calls COleDispatchDriver default constructor
	ksSpcObjParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcObjParam(const ksSpcObjParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetBlockNumber();
	void SetBlockNumber(long);
	long GetNumbSubSection();
	void SetNumbSubSection(long);
	short GetFirstOnSheet();
	void SetFirstOnSheet(short);
	short GetPosInc();
	void SetPosInc(short);
	short GetDraw();
	void SetDraw(short);
	short GetPosNotDraw();
	void SetPosNotDraw(short);
	short GetIspoln();
	void SetIspoln(short);

// Operations
public:
	LPDISPATCH GetDocArr();
	BOOL SetDocArr(LPDISPATCH docArr);
	long GetTypeObj();
	long GetNumbSection();
	CString GetSubSectionName();
	short GetInsFrgType();
	short GetFirst();
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksLibStyle wrapper class

class ksLibStyle : public COleDispatchDriver
{
public:
	ksLibStyle() {}		// Calls COleDispatchDriver default constructor
	ksLibStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLibStyle(const ksLibStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	long GetStyleNumber();
	void SetStyleNumber(long);
	short GetTypeAllocation();
	void SetTypeAllocation(short);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksDataBaseObject wrapper class

class ksDataBaseObject : public COleDispatchDriver
{
public:
	ksDataBaseObject() {}		// Calls COleDispatchDriver default constructor
	ksDataBaseObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDataBaseObject(const ksDataBaseObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long ksRelation(long db);
	BOOL ksEndRelation();
	long ksCreateDB(LPCTSTR typeBD);
	long ksDeleteDB(long db);
	long ksConnectDB(long db, LPCTSTR DBName);
	long ksDisconnectDB(long db);
	long ksFreeStatement(long db, long r, long fOption);
	long ksDoStatement(long db, long r, LPCTSTR stSQL);
	long ksReadRecord(long db, long r, LPDISPATCH userPars);
	long ksCondition(long db, long r, LPCTSTR stSQL);
	long ksRDouble(LPCTSTR name);
	long ksRFloat(LPCTSTR name);
	long ksRInt(LPCTSTR name);
	long ksRLong(LPCTSTR name);
	long ksRChar(LPCTSTR name, long size, long type);
	long ksOpenTextFile(LPCTSTR fileName);
	BOOL ksCloseTextFile(long F);
	CString ksReadStrFrFile(long F, long* res, long numb);
	CString ksGetTableName(long db, long* res, LPCTSTR firstOrNext);
	CString ksGetColumnName(long db, LPCTSTR tableName, long* res, LPCTSTR firstOrNext);
	long ksIsODBCOkey();
	long ksRCharW(LPCTSTR name, long size, long type);
	long ksOpenTextFileEx(LPCTSTR fileName, long textFileType);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcDocumentNotify wrapper class

class ksSpcDocumentNotify : public COleDispatchDriver
{
public:
	ksSpcDocumentNotify() {}		// Calls COleDispatchDriver default constructor
	ksSpcDocumentNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcDocumentNotify(const ksSpcDocumentNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL DocumentBeginAdd();
	BOOL DocumentAdd(LPCTSTR docName);
	BOOL DocumentBeginRemove(LPCTSTR docName);
	BOOL DocumentRemove(LPCTSTR docName);
	BOOL SpcStyleBeginChange(LPCTSTR libName, long numb);
	BOOL SpcStyleChange(LPCTSTR libName, long numb);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcDocument wrapper class

class ksSpcDocument : public COleDispatchDriver
{
public:
	ksSpcDocument() {}		// Calls COleDispatchDriver default constructor
	ksSpcDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcDocument(const ksSpcDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetReference();
	void SetReference(long);

// Operations
public:
	LPDISPATCH GetStamp();
	LPDISPATCH GetSpecification();
	BOOL ksCloseDocument();
	LPDISPATCH ksGetSpcSheetSB();
	long ksGetSpcDocumentPagesCount();
	BOOL ksSaveDocument(LPCTSTR fileName);
	BOOL ksCreateDocument(LPDISPATCH par);
	long ksDeleteObj(long ref);
	long ksSetSpcSheetSB(LPDISPATCH arr);
	long ksExistObj(long ref);
	BOOL ksOpenDocument(LPCTSTR nameDoc, short regim);
	long ksGetObjParam(long ref, LPDISPATCH param, long parType);
	long ksSetObjParam(long ref, LPDISPATCH param, long parType);
	BOOL SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH par);
	LPDISPATCH RasterFormatParam();
	BOOL SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar);
	LPUNKNOWN GetSpcDocumentNotify();
	BOOL ksSaveDocumentEx(LPCTSTR fileName, long SaveMode);
	LPDISPATCH GetStampEx(long SheetNumb);
	BOOL ksSaveToDXF(LPCTSTR DXFFileName);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpcObjectNotify wrapper class

class ksSpcObjectNotify : public COleDispatchDriver
{
public:
	ksSpcObjectNotify() {}		// Calls COleDispatchDriver default constructor
	ksSpcObjectNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpcObjectNotify(const ksSpcObjectNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginDelete(long objRef);
	BOOL Delete(long objRef);
	BOOL CellDblClick(long objRef, long number);
	BOOL CellBeginEdit(long objRef, long number);
	BOOL ChangeCurrent(long objRef);
	BOOL DocumentBeginAdd(long objRef);
	BOOL DocumentAdd(long objRef, LPCTSTR docName);
	BOOL DocumentRemove(long objRef, LPCTSTR docName);
	BOOL BeginGeomChange(long objRef);
	BOOL GeomChange(long objRef);
	BOOL BeginProcess(long pType, long objRef);
	BOOL EndProcess(long pType);
	BOOL CreateObject(long objRef);
	BOOL UpdateObject(long objRef);
	BOOL BeginCopy(long objRef);
	BOOL copy(long objRef);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpecificationNotify wrapper class

class ksSpecificationNotify : public COleDispatchDriver
{
public:
	ksSpecificationNotify() {}		// Calls COleDispatchDriver default constructor
	ksSpecificationNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpecificationNotify(const ksSpecificationNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL TuningSpcStyleBeginChange(LPCTSTR libName, long numb);
	BOOL TuningSpcStyleChange(LPCTSTR libName, long numb, BOOL isOk);
	BOOL ChangeCurrentSpcDescription(LPCTSTR libName, long numb);
	BOOL SpcDescriptionAdd(LPCTSTR libName, long numb);
	BOOL SpcDescriptionRemove(LPCTSTR libName, long numb);
	BOOL SpcDescriptionBeginEdit(LPCTSTR libName, long numb);
	BOOL SpcDescriptionEdit(LPCTSTR libName, long numb, BOOL isOk);
	BOOL SynchronizationBegin();
	BOOL Synchronization();
	BOOL BeginCalcPositions();
	BOOL CalcPositions();
	BOOL BeginCreateObject(long typeObj);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpecification wrapper class

class ksSpecification : public COleDispatchDriver
{
public:
	ksSpecification() {}		// Calls COleDispatchDriver default constructor
	ksSpecification(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpecification(const ksSpecification& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long ksSpcObjectEnd();
	long ksSpcObjectEdit(long spcObj);
	long ksSpcObjectCreate(LPCTSTR nameLib, long styleNumb, long secNumb, long subSecNumb, double numb, short typeObj);
	long ksSpcChangeValue(long colNumb, long itemNumb, LPDISPATCH userPars, short typeVal);
	long ksSpcVisible(long colNumb, long itemNumb, short flagOn);
	long ksSpcMassa(LPCTSTR sMassa);
	long ksSpcCount(short ispoln, LPCTSTR sCount);
	long ksSpcPosition(long pos);
	long ksSpcIncludeReference(long obj, short Clear);
	long ksGetSpcObjForGeom(LPCTSTR nameLib, long numb, long obj, short equal, short First);
	long ksGetSpcObjForGeomWithLimit(LPCTSTR nameLib, long numb, long obj, short equal, short First, long section, double attrTypeNumb);
	CString ksGetSpcSectionName(long spcObj);
	long ksEditWindowSpcObject(long obj);
	double ksGetSpcObjectNumber(long spcObj);
	long ksGetSpcObject(double objNumb);
	CString ksGetSpcObjectColumnText(long spcObj, long columnType, long ispoln, long block);
	long ksSetSpcObjectColumnText(long columnType, long ispoln, long block, LPCTSTR str);
	long ksGetSpcTableColumn(LPCTSTR nameLib, long numb, short additioanalCol);
	long ksGetSpcColumnType(long spcObj, long colNumb, LPDISPATCH par);
	long ksGetSpcColumnNumb(long spcObj, long columnType, long ispoln, long block);
	long ksGetSpcStyleParam(LPCTSTR nameLib, long numb, LPDISPATCH par, long tPar);
	long ksGetSpcDescription(long index, LPDISPATCH param, BOOL* state);
	long ksSetSpcDescription(long index, LPDISPATCH param, short state);
	long ksAddSpcDescription(LPDISPATCH param);
	long ksDeleteSpcDescription(long index);
	BOOL D3SpcIncludePart(LPDISPATCH part, BOOL fillTexts);
	long D3GetSpcObjForGeomWithLimit(LPCTSTR nameLib, long numb, LPDISPATCH part, short First, short section, double attrTypeNumb);
	double ksGetWidthColumnSpc(long numColumn, BOOL cellOrText);
	long ksGetCurrentSpcObject();
	long ksSetCurrentSpcObject(long spcObj, long index);
	long ksSetTuningSpcStyleParam(long index, LPDISPATCH par);
	long ksGetTuningSpcStyleParam(long index, LPDISPATCH par);
	long ksGetSpcObjGeometry(long spcObj);
	LPDISPATCH D3GetSpcObjGeometry(long spcObj);
	LPDISPATCH ksGetSpcObjectColumnTextEx(long spcObj, long columnType, long ispoln, long block);
	long ksSetSpcObjectColumnTextEx(long columnType, long ispoln, long block, LPDISPATCH arr);
	LPUNKNOWN GetSpcObjectNotify(long objType);
	long ksGetSpcObjGeometryEx(long spcObj, long geomMode);
	BOOL ksSetSpcObjectColumnTextAlign(long spcObj, long columnNumber, long lineIndex, long align);
	long ksGetSpcObjectColumnTextAlign(long spcObj, long columnNumber, long lineIndex);
	double ksGetSpcObjectAttributeNumber(long spcObj);
	BOOL ksSetSpcObjectAttributeNumber(long spcObj, double attrNumber);
	double ksGetSpcObjectSummaryCount(long spcObj, long ispoln, long blockNumber);
	BOOL ksSetSpcObjectMaterial(long spcObj, LPCTSTR material, double density);
	CString ksGetSpcPerformanceName(long index, long ispoln, long block);
	BOOL ksSetSpcPerformanceName(long index, long ispoln, long block, LPCTSTR name);
	BOOL ksSpcDocLinksClear(long doc);
};
/////////////////////////////////////////////////////////////////////////////
// ksDocumentTxt wrapper class

class ksDocumentTxt : public COleDispatchDriver
{
public:
	ksDocumentTxt() {}		// Calls COleDispatchDriver default constructor
	ksDocumentTxt(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocumentTxt(const ksDocumentTxt& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetReference();
	void SetReference(long);

// Operations
public:
	LPDISPATCH GetStamp();
	BOOL ksCloseDocument();
	long ksGetTxtDocumentPagesCount();
	BOOL ksSaveDocument(LPCTSTR fileName);
	BOOL ksCreateDocument(LPDISPATCH par);
	BOOL ksOpenDocument(LPCTSTR nameDoc, short regim);
	BOOL SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH par);
	LPDISPATCH RasterFormatParam();
	BOOL SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar);
	long ksGetObjParam(long ref, LPDISPATCH param, long parType);
	long ksSetObjParam(long ref, LPDISPATCH param, long parType);
	BOOL ksSaveDocumentEx(LPCTSTR fileName, long SaveMode);
	LPDISPATCH GetStampEx(long SheetNumb);
	long ksGetDocumentPagesCount();
};
/////////////////////////////////////////////////////////////////////////////
// ksAttributeTypeParam wrapper class

class ksAttributeTypeParam : public COleDispatchDriver
{
public:
	ksAttributeTypeParam() {}		// Calls COleDispatchDriver default constructor
	ksAttributeTypeParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAttributeTypeParam(const ksAttributeTypeParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetKey1();
	void SetKey1(long);
	long GetKey2();
	void SetKey2(long);
	long GetKey3();
	void SetKey3(long);
	long GetKey4();
	void SetKey4(long);
	long GetRowsCount();
	void SetRowsCount(long);
	CString GetHeader();
	void SetHeader(LPCTSTR);
	BOOL GetFlagVisible();
	void SetFlagVisible(BOOL);
	CString GetPassword();
	void SetPassword(LPCTSTR);

// Operations
public:
	LPDISPATCH GetColumns();
	BOOL SetColumns(LPDISPATCH val);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksColumnInfoParam wrapper class

class ksColumnInfoParam : public COleDispatchDriver
{
public:
	ksColumnInfoParam() {}		// Calls COleDispatchDriver default constructor
	ksColumnInfoParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksColumnInfoParam(const ksColumnInfoParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetType();
	void SetType(short);
	CString GetHeader();
	void SetHeader(LPCTSTR);
	short GetKey();
	void SetKey(short);
	CString GetDef();
	void SetDef(LPCTSTR);
	BOOL GetFlagEnum();
	void SetFlagEnum(BOOL);

// Operations
public:
	LPDISPATCH GetFieldEnum();
	BOOL SetFieldEnum(LPDISPATCH fieldEnum);
	LPDISPATCH GetColumns();
	BOOL SetColumns(LPDISPATCH fieldEnum);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksAttributeParam wrapper class

class ksAttributeParam : public COleDispatchDriver
{
public:
	ksAttributeParam() {}		// Calls COleDispatchDriver default constructor
	ksAttributeParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAttributeParam(const ksAttributeParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetKey1();
	void SetKey1(long);
	long GetKey2();
	void SetKey2(long);
	long GetKey3();
	void SetKey3(long);
	long GetKey4();
	void SetKey4(long);
	CString GetPassword();
	void SetPassword(LPCTSTR);

// Operations
public:
	LPDISPATCH GetValues();
	BOOL SetValues(LPDISPATCH values);
	LPDISPATCH GetFlagVisible();
	BOOL SetFlagVisible(LPDISPATCH flagVisible);
	LPDISPATCH GetColumnKeys();
	BOOL SetColumnKeys(LPDISPATCH columnKeys);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksVariable wrapper class

class ksVariable : public COleDispatchDriver
{
public:
	ksVariable() {}		// Calls COleDispatchDriver default constructor
	ksVariable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksVariable(const ksVariable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetValue();
	void SetValue(double);
	CString GetNote();
	void SetNote(LPCTSTR);
	CString GetPseudonym();
	void SetPseudonym(LPCTSTR);
	CString GetExpression();
	void SetExpression(LPCTSTR);
	BOOL GetExternal();
	void SetExternal(BOOL);
	BOOL GetInformation();
	void SetInformation(BOOL);

// Operations
public:
	CString GetName();
	CString GetParameterNote();
	CString GetLinkVarName();
	CString GetLinkDocName();
	BOOL SetLink(LPCTSTR doc, LPCTSTR name);
	CString GetDisplayName();
};
/////////////////////////////////////////////////////////////////////////////
// ksLibraryAttrTypeParam wrapper class

class ksLibraryAttrTypeParam : public COleDispatchDriver
{
public:
	ksLibraryAttrTypeParam() {}		// Calls COleDispatchDriver default constructor
	ksLibraryAttrTypeParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLibraryAttrTypeParam(const ksLibraryAttrTypeParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetName();
	void SetName(LPCTSTR);
	double GetTypeId();
	void SetTypeId(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksAttributeObject wrapper class

class ksAttributeObject : public COleDispatchDriver
{
public:
	ksAttributeObject() {}		// Calls COleDispatchDriver default constructor
	ksAttributeObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAttributeObject(const ksAttributeObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double ksCreateAttrType(LPDISPATCH attrType, LPCTSTR libName);
	long ksDeleteAttrType(double attrID, LPCTSTR libName, LPCTSTR password);
	long ksGetAttrType(double attrID, LPCTSTR libName, LPDISPATCH attrType);
	double ksSetAttrType(double attrID, LPCTSTR libName, LPDISPATCH attrType, LPCTSTR password);
	double ksChoiceAttrTypes(LPCTSTR libName);
	long ksCreateAttr(long pObj, LPDISPATCH attr, double attrID, LPCTSTR libName);
	long ksDeleteAttr(long pObj, long pAttr, LPCTSTR password);
	long ksGetAttrValue(long pAttr, long rowNumb, long columnNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value);
	long ksSetAttrValue(long pAttr, long rowNumb, long columnNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value, LPCTSTR password);
	long ksGetAttrRow(long pAttr, long rowNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value);
	long ksSetAttrRow(long pAttr, long rowNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value, LPCTSTR password);
	long ksAddAttrRow(long pAttr, long rowNumb, LPDISPATCH flagVisible, LPDISPATCH value, LPCTSTR password);
	long ksDeleteAttrRow(long pAttr, long rowNumb, LPCTSTR password);
	long ksGetSizeAttrValue(long pAttr, long columnNumb, long* count);
	long ksGetSizeAttrRow(long pAttr, long* count);
	long ksGetAttrKeysInfo(long pAttr, long* key1, long* key2, long* key3, long* key4, double* numb);
	long ksGetAttrColumnInfo(long pAttr, long columnNumb, LPDISPATCH columnInfo);
	long ksGetAttrTabInfo(long pAttr, long* rowsCount, long* columnsCount);
	long ksViewEditAttr(long pAttr, long type, LPCTSTR password);
	long ksViewEditAttrType(LPCTSTR libName, long type, double attrID, LPCTSTR password);
	long ksChoiceAttr(long pObj);
	LPDISPATCH ksGetLibraryAttrTypesArray(LPCTSTR libName);
	LPDISPATCH ksCreateAttr3D(LPDISPATCH pObj, LPDISPATCH attr, double attrID, LPCTSTR libName);
	long ksDeleteAttr3D(LPDISPATCH pObj, LPDISPATCH pAttr, LPCTSTR password);
	LPDISPATCH ksChoiceAttr3D(LPDISPATCH pObj);
	LPDISPATCH ksCreateAttr3DEx(LPDISPATCH pObj, LPDISPATCH pSourcePart, LPDISPATCH attr, double attrID, LPCTSTR libName);
	long ksGetSizeAttrValueW(long pAttr, long columnNumb, long* count);
	long ksGetSizeAttrRowW(long pAttr, long* count);
};
/////////////////////////////////////////////////////////////////////////////
// ksRequestInfo3D wrapper class

class ksRequestInfo3D : public COleDispatchDriver
{
public:
	ksRequestInfo3D() {}		// Calls COleDispatchDriver default constructor
	ksRequestInfo3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRequestInfo3D(const ksRequestInfo3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetPrompt();
	void SetPrompt(LPCTSTR);
	CString GetTitle();
	void SetTitle(LPCTSTR);
	CString GetCursorName();
	void SetCursorName(LPCTSTR);
	CString GetCommandsString();
	void SetCommandsString(LPCTSTR);
	long GetCursorId();
	void SetCursorId(long);
	long GetMenuId();
	void SetMenuId(long);
	BOOL GetDynamicFiltering();
	void SetDynamicFiltering(BOOL);

// Operations
public:
	CString GetFilterCallBack();
	CString GetCallBack();
	BOOL SetFilterCallBack(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX);
	BOOL SetCallBack(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX);
	LPDISPATCH GetPlacement();
	LPDISPATCH GetEntityCollection();
	long GetCurrentCommand();
	LPDISPATCH GetMateConstraintCollection();
	LPDISPATCH GetIPhantom();
	BOOL CreatePhantom();
	LPUNKNOWN GetProcessParam();
	BOOL SetProcessParam(LPUNKNOWN param);
	LPDISPATCH GetCallBackFeature();
	BOOL SetCursorText(LPCTSTR text);
};
/////////////////////////////////////////////////////////////////////////////
// ksMateConstraint wrapper class

class ksMateConstraint : public COleDispatchDriver
{
public:
	ksMateConstraint() {}		// Calls COleDispatchDriver default constructor
	ksMateConstraint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMateConstraint(const ksMateConstraint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetConstraintType();
	void SetConstraintType(short);
	short GetDirection();
	void SetDirection(short);
	short GetFixed();
	void SetFixed(short);
	double GetDistance();
	void SetDistance(double);

// Operations
public:
	BOOL Create();
	LPDISPATCH GetBaseObj(short number);
	BOOL SetBaseObj(short number, LPDISPATCH obj);
	LPDISPATCH GetFeature();
	long GetEntityParams(short number, VARIANT* params);
};
/////////////////////////////////////////////////////////////////////////////
// ksDefaultObject wrapper class

class ksDefaultObject : public COleDispatchDriver
{
public:
	ksDefaultObject() {}		// Calls COleDispatchDriver default constructor
	ksDefaultObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDefaultObject(const ksDefaultObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSurface();
	LPDISPATCH GetCurve3D();
};
/////////////////////////////////////////////////////////////////////////////
// ksModelLibrary wrapper class

class ksModelLibrary : public COleDispatchDriver
{
public:
	ksModelLibrary() {}		// Calls COleDispatchDriver default constructor
	ksModelLibrary(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksModelLibrary(const ksModelLibrary& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long ModelLibraryOperation(LPCTSTR libName, long type);
	CString ChoiceModelFromLib(LPCTSTR libFile, long* type);
	long ExistModelInLibrary(LPCTSTR name);
	long AddD3DocumentToLibrary(LPCTSTR libName, LPCTSTR fileName);
	long CheckModelLibrary(LPCTSTR libName, BOOL possibleMessage);
};
/////////////////////////////////////////////////////////////////////////////
// ksVariableCollection wrapper class

class ksVariableCollection : public COleDispatchDriver
{
public:
	ksVariableCollection() {}		// Calls COleDispatchDriver default constructor
	ksVariableCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksVariableCollection(const ksVariableCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	LPDISPATCH GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase);
	LPDISPATCH AddNewVariable(LPCTSTR name, double value, LPCTSTR note);
	BOOL RemoveVariable(LPCTSTR name);
};
/////////////////////////////////////////////////////////////////////////////
// ksMateConstraintCollection wrapper class

class ksMateConstraintCollection : public COleDispatchDriver
{
public:
	ksMateConstraintCollection() {}		// Calls COleDispatchDriver default constructor
	ksMateConstraintCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMateConstraintCollection(const ksMateConstraintCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	BOOL AddMateConstraint(LPDISPATCH mate);
	BOOL RemoveMateConstraint(LPDISPATCH mate);
	BOOL Clear();
	BOOL refresh();
	long FindIt(LPDISPATCH entity);
	BOOL GetSafeArrayByObj(LPDISPATCH obj, VARIANT* pArray);
};
/////////////////////////////////////////////////////////////////////////////
// ksPartCollection wrapper class

class ksPartCollection : public COleDispatchDriver
{
public:
	ksPartCollection() {}		// Calls COleDispatchDriver default constructor
	ksPartCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPartCollection(const ksPartCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase);
	LPDISPATCH GetByIndex(long index);
	BOOL Add(LPDISPATCH part);
	BOOL AddAt(LPDISPATCH part, long index);
	BOOL AddBefore(LPDISPATCH part, LPDISPATCH base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH part);
	BOOL Clear();
	BOOL SetByIndex(LPDISPATCH part, long index);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksMeshPartArrayDefinition wrapper class

class ksMeshPartArrayDefinition : public COleDispatchDriver
{
public:
	ksMeshPartArrayDefinition() {}		// Calls COleDispatchDriver default constructor
	ksMeshPartArrayDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMeshPartArrayDefinition(const ksMeshPartArrayDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngle1();
	void SetAngle1(double);
	long GetCount1();
	void SetCount1(long);
	double GetStep1();
	void SetStep1(double);
	BOOL GetFactor1();
	void SetFactor1(BOOL);
	double GetAngle2();
	void SetAngle2(double);
	long GetCount2();
	void SetCount2(long);
	double GetStep2();
	void SetStep2(double);
	BOOL GetFactor2();
	void SetFactor2(BOOL);
	BOOL GetInsideFlag();
	void SetInsideFlag(BOOL);

// Operations
public:
	LPDISPATCH GetAxis1();
	BOOL SetAxis1(LPDISPATCH axis);
	LPDISPATCH GetAxis2();
	BOOL SetAxis2(LPDISPATCH axis);
	LPDISPATCH PartArray();
	BOOL GetCopyParamAlongAxis(BOOL firstAxis, double* angle, long* count, double* step, BOOL* factor);
	BOOL SetCopyParamAlongAxis(BOOL firstAxis, double angle, long count, double step, BOOL factor);
	LPDISPATCH DeletedCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksCircularPartArrayDefinition wrapper class

class ksCircularPartArrayDefinition : public COleDispatchDriver
{
public:
	ksCircularPartArrayDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCircularPartArrayDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCircularPartArrayDefinition(const ksCircularPartArrayDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCount1();
	void SetCount1(long);
	double GetStep1();
	void SetStep1(double);
	BOOL GetFactor1();
	void SetFactor1(BOOL);
	long GetCount2();
	void SetCount2(long);
	double GetStep2();
	void SetStep2(double);
	BOOL GetFactor2();
	void SetFactor2(BOOL);
	BOOL GetInverce();
	void SetInverce(BOOL);
	BOOL GetKeepAngle();
	void SetKeepAngle(BOOL);

// Operations
public:
	LPDISPATCH PartArray();
	LPDISPATCH GetAxis();
	BOOL SetAxis(LPDISPATCH axis);
	BOOL GetCopyParamAlongDir(long* count, double* step, BOOL* factor, BOOL dir);
	BOOL SetCopyParamAlongDir(long count, double step, BOOL factor, BOOL dir);
	LPDISPATCH DeletedCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksCurvePartArrayDefinition wrapper class

class ksCurvePartArrayDefinition : public COleDispatchDriver
{
public:
	ksCurvePartArrayDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCurvePartArrayDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurvePartArrayDefinition(const ksCurvePartArrayDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCount();
	void SetCount(long);
	double GetStep();
	void SetStep(double);
	BOOL GetFactor();
	void SetFactor(BOOL);
	BOOL GetKeepAngle();
	void SetKeepAngle(BOOL);
	BOOL GetFullCurve();
	void SetFullCurve(BOOL);
	BOOL GetSence();
	void SetSence(BOOL);

// Operations
public:
	LPDISPATCH PartArray();
	LPDISPATCH CurveArray();
	LPDISPATCH DeletedCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksDerivativePartArrayDefinition wrapper class

class ksDerivativePartArrayDefinition : public COleDispatchDriver
{
public:
	ksDerivativePartArrayDefinition() {}		// Calls COleDispatchDriver default constructor
	ksDerivativePartArrayDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDerivativePartArrayDefinition(const ksDerivativePartArrayDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH PartArray();
	LPDISPATCH GetDeriv();
	BOOL SetDeriv(LPDISPATCH deriv);
	LPDISPATCH DeletedCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksAxis2PlanesDefinition wrapper class

class ksAxis2PlanesDefinition : public COleDispatchDriver
{
public:
	ksAxis2PlanesDefinition() {}		// Calls COleDispatchDriver default constructor
	ksAxis2PlanesDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAxis2PlanesDefinition(const ksAxis2PlanesDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetPlane(long number, LPDISPATCH plane);
	LPDISPATCH GetPlane(long number);
	LPDISPATCH GetCurve3D();
};
/////////////////////////////////////////////////////////////////////////////
// ksAxisOperationsDefinition wrapper class

class ksAxisOperationsDefinition : public COleDispatchDriver
{
public:
	ksAxisOperationsDefinition() {}		// Calls COleDispatchDriver default constructor
	ksAxisOperationsDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAxisOperationsDefinition(const ksAxisOperationsDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetOperation(LPDISPATCH plane);
	LPDISPATCH GetOperation();
	LPDISPATCH GetCurve3D();
};
/////////////////////////////////////////////////////////////////////////////
// ksAxis2PointsDefinition wrapper class

class ksAxis2PointsDefinition : public COleDispatchDriver
{
public:
	ksAxis2PointsDefinition() {}		// Calls COleDispatchDriver default constructor
	ksAxis2PointsDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAxis2PointsDefinition(const ksAxis2PointsDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetPoint(long number, LPDISPATCH point);
	LPDISPATCH GetPoint(long number);
	LPDISPATCH GetCurve3D();
};
/////////////////////////////////////////////////////////////////////////////
// ksAxisEdgeDefinition wrapper class

class ksAxisEdgeDefinition : public COleDispatchDriver
{
public:
	ksAxisEdgeDefinition() {}		// Calls COleDispatchDriver default constructor
	ksAxisEdgeDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAxisEdgeDefinition(const ksAxisEdgeDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetEdge(LPDISPATCH edge);
	LPDISPATCH GetEdge();
	LPDISPATCH GetCurve3D();
};
/////////////////////////////////////////////////////////////////////////////
// ksMeshCopyDefinition wrapper class

class ksMeshCopyDefinition : public COleDispatchDriver
{
public:
	ksMeshCopyDefinition() {}		// Calls COleDispatchDriver default constructor
	ksMeshCopyDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMeshCopyDefinition(const ksMeshCopyDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngle1();
	void SetAngle1(double);
	long GetCount1();
	void SetCount1(long);
	double GetStep1();
	void SetStep1(double);
	BOOL GetFactor1();
	void SetFactor1(BOOL);
	double GetAngle2();
	void SetAngle2(double);
	long GetCount2();
	void SetCount2(long);
	double GetStep2();
	void SetStep2(double);
	BOOL GetFactor2();
	void SetFactor2(BOOL);
	BOOL GetInsideFlag();
	void SetInsideFlag(BOOL);
	BOOL GetGeomArray();
	void SetGeomArray(BOOL);

// Operations
public:
	LPDISPATCH OperationArray();
	BOOL GetCopyParamAlongAxis(BOOL firstAxis, double* angle, long* count, double* step, BOOL* factor);
	BOOL SetCopyParamAlongAxis(BOOL firstAxis, double angle, long count, double step, BOOL factor);
	LPDISPATCH DeletedCollection();
	LPDISPATCH GetAxis1();
	BOOL SetAxis1(LPDISPATCH axis);
	LPDISPATCH GetAxis2();
	BOOL SetAxis2(LPDISPATCH axis);
};
/////////////////////////////////////////////////////////////////////////////
// ksCircularCopyDefinition wrapper class

class ksCircularCopyDefinition : public COleDispatchDriver
{
public:
	ksCircularCopyDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCircularCopyDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCircularCopyDefinition(const ksCircularCopyDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCount1();
	void SetCount1(long);
	double GetStep1();
	void SetStep1(double);
	BOOL GetFactor1();
	void SetFactor1(BOOL);
	long GetCount2();
	void SetCount2(long);
	double GetStep2();
	void SetStep2(double);
	BOOL GetFactor2();
	void SetFactor2(BOOL);
	BOOL GetInverce();
	void SetInverce(BOOL);
	BOOL GetGeomArray();
	void SetGeomArray(BOOL);

// Operations
public:
	LPDISPATCH GetOperationArray();
	LPDISPATCH GetAxis();
	BOOL SetAxis(LPDISPATCH axis);
	BOOL GetCopyParamAlongDir(long* count, double* step, BOOL* factor, BOOL dir);
	BOOL SetCopyParamAlongDir(long count, double step, BOOL factor, BOOL dir);
	LPDISPATCH DeletedCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksCurveCopyDefinition wrapper class

class ksCurveCopyDefinition : public COleDispatchDriver
{
public:
	ksCurveCopyDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCurveCopyDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurveCopyDefinition(const ksCurveCopyDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCount();
	void SetCount(long);
	double GetStep();
	void SetStep(double);
	BOOL GetFactor();
	void SetFactor(BOOL);
	BOOL GetKeepAngle();
	void SetKeepAngle(BOOL);
	BOOL GetFullCurve();
	void SetFullCurve(BOOL);
	BOOL GetSence();
	void SetSence(BOOL);
	BOOL GetGeomArray();
	void SetGeomArray(BOOL);

// Operations
public:
	LPDISPATCH OperationArray();
	LPDISPATCH CurveArray();
	LPDISPATCH DeletedCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksMirrorCopyDefinition wrapper class

class ksMirrorCopyDefinition : public COleDispatchDriver
{
public:
	ksMirrorCopyDefinition() {}		// Calls COleDispatchDriver default constructor
	ksMirrorCopyDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMirrorCopyDefinition(const ksMirrorCopyDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetOperationArray();
	LPDISPATCH GetPlane();
	BOOL SetPlane(LPDISPATCH plane);
};
/////////////////////////////////////////////////////////////////////////////
// ksMirrorCopyAllDefinition wrapper class

class ksMirrorCopyAllDefinition : public COleDispatchDriver
{
public:
	ksMirrorCopyAllDefinition() {}		// Calls COleDispatchDriver default constructor
	ksMirrorCopyAllDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMirrorCopyAllDefinition(const ksMirrorCopyAllDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetPlane();
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH ChooseBodies();
};
/////////////////////////////////////////////////////////////////////////////
// ksConicSpiralDefinition wrapper class

class ksConicSpiralDefinition : public COleDispatchDriver
{
public:
	ksConicSpiralDefinition() {}		// Calls COleDispatchDriver default constructor
	ksConicSpiralDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksConicSpiralDefinition(const ksConicSpiralDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetTurn();
	void SetTurn(double);
	double GetStep();
	void SetStep(double);
	BOOL GetTurnDir();
	void SetTurnDir(BOOL);
	short GetBuildMode();
	void SetBuildMode(short);
	BOOL GetBuildDir();
	void SetBuildDir(BOOL);
	double GetHeight();
	void SetHeight(double);
	short GetHeightType();
	void SetHeightType(short);
	double GetHeightAdd();
	void SetHeightAdd(double);
	BOOL GetHeightAddHow();
	void SetHeightAddHow(BOOL);
	double GetInitialDiam();
	void SetInitialDiam(double);
	short GetInitialDiamType();
	void SetInitialDiamType(short);
	double GetTerminalDiam();
	void SetTerminalDiam(double);
	short GetTerminalDiamType();
	void SetTerminalDiamType(short);
	BOOL GetTiltAngleHow();
	void SetTiltAngleHow(BOOL);
	double GetFirstAngle();
	void SetFirstAngle(double);
	double GetTiltAngle();
	void SetTiltAngle(double);

// Operations
public:
	LPDISPATCH GetPlane();
	BOOL SetPlane(LPDISPATCH plane);
	BOOL GetLocation(double* x, double* y);
	BOOL SetLocation(double x, double y);
	LPDISPATCH GetHeightObject();
	BOOL SetHeightObject(LPDISPATCH heightObject);
	LPDISPATCH GetInitialDiamObject();
	BOOL SetInitialDiamObject(LPDISPATCH initialDiamObject);
	LPDISPATCH GetTerminalDiamObject();
	BOOL SetTerminalDiamObject(LPDISPATCH terminalDiamObject);
	LPDISPATCH GetSketch();
};
/////////////////////////////////////////////////////////////////////////////
// ksCylindricSpiralDefinition wrapper class

class ksCylindricSpiralDefinition : public COleDispatchDriver
{
public:
	ksCylindricSpiralDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCylindricSpiralDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCylindricSpiralDefinition(const ksCylindricSpiralDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetTurn();
	void SetTurn(double);
	double GetStep();
	void SetStep(double);
	BOOL GetTurnDir();
	void SetTurnDir(BOOL);
	short GetBuildMode();
	void SetBuildMode(short);
	BOOL GetBuildDir();
	void SetBuildDir(BOOL);
	double GetHeight();
	void SetHeight(double);
	short GetHeightType();
	void SetHeightType(short);
	double GetHeightAdd();
	void SetHeightAdd(double);
	BOOL GetHeightAddHow();
	void SetHeightAddHow(BOOL);
	double GetDiam();
	void SetDiam(double);
	short GetDiamType();
	void SetDiamType(short);
	double GetFirstAngle();
	void SetFirstAngle(double);

// Operations
public:
	LPDISPATCH GetPlane();
	BOOL SetPlane(LPDISPATCH plane);
	BOOL GetLocation(double* x, double* y);
	BOOL SetLocation(double x, double y);
	LPDISPATCH GetHeightObject();
	BOOL SetHeightObject(LPDISPATCH heightObject);
	LPDISPATCH GetDiamObject();
	BOOL SetDiamObject(LPDISPATCH diamObject);
	LPDISPATCH GetSketch();
};
/////////////////////////////////////////////////////////////////////////////
// ksPolyLineDefinition wrapper class

class ksPolyLineDefinition : public COleDispatchDriver
{
public:
	ksPolyLineDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPolyLineDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPolyLineDefinition(const ksPolyLineDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetClosed();
	void SetClosed(BOOL);
	BOOL GetVertexVisible();
	void SetVertexVisible(BOOL);

// Operations
public:
	long GetCountVertex();
	BOOL AddVertex(double x, double y, double z, double radius);
	BOOL InsertVertex(long index, double x, double y, double z, double radius);
	BOOL DeleteVertex(long index);
	BOOL GetParamVertex(long index, double* x, double* y, double* z, double* radius);
	BOOL Flush();
	BOOL ReadFromFile(LPCTSTR fileName);
	BOOL WriteToFile(LPCTSTR fileName);
	LPDISPATCH EdgeCollection();
	LPDISPATCH AddPointWithParams(long index);
	LPDISPATCH GetPointParams(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksPolyLineVertexParam wrapper class

class ksPolyLineVertexParam : public COleDispatchDriver
{
public:
	ksPolyLineVertexParam() {}		// Calls COleDispatchDriver default constructor
	ksPolyLineVertexParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPolyLineVertexParam(const ksPolyLineVertexParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetBuildingType();
	void SetBuildingType(long);

// Operations
public:
	BOOL GetParamVertex(double* x, double* y, double* z, double* radius);
	BOOL SetParamVertex(double x, double y, double z, double radius);
	BOOL SetParamByVertex(LPDISPATCH vertex, double radius);
	BOOL GetParamByDistance(double* distance, double* radius);
	BOOL SetParamByDistance(double distance, double radius);
	LPDISPATCH GetBuildingObject();
	BOOL SetBuildingObject(LPDISPATCH object);
	LPDISPATCH GetAssociation();
	BOOL SetAssociation(LPDISPATCH vertex);
	LPDISPATCH GetVertex();
	long GetIndex();
};
/////////////////////////////////////////////////////////////////////////////
// ksSplineDefinition wrapper class

class ksSplineDefinition : public COleDispatchDriver
{
public:
	ksSplineDefinition() {}		// Calls COleDispatchDriver default constructor
	ksSplineDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSplineDefinition(const ksSplineDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetClosed();
	void SetClosed(BOOL);
	BOOL GetSplineOnPoles();
	void SetSplineOnPoles(BOOL);
	long GetDegree();
	void SetDegree(long);

// Operations
public:
	long GetCountVertex();
	BOOL AddVertex(double x, double y, double z, double radius);
	BOOL InsertVertex(long index, double x, double y, double z, double weight);
	BOOL DeleteVertex(long index);
	BOOL GetParamVertex(long index, double* x, double* y, double* z, double* weight);
	BOOL Flush();
	BOOL ReadFromFile(LPCTSTR fileName);
	BOOL WriteToFile(LPCTSTR fileName);
	BOOL AddVertexAndAssociation(long index, LPDISPATCH obj, double weight);
	BOOL SetAssociation(long index, LPDISPATCH obj);
	LPDISPATCH GetAssociation(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksBaseExtrusionDefinition wrapper class

class ksBaseExtrusionDefinition : public COleDispatchDriver
{
public:
	ksBaseExtrusionDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBaseExtrusionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBaseExtrusionDefinition(const ksBaseExtrusionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward);
	BOOL SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH ExtrusionParam();
	LPDISPATCH GetDepthObject(BOOL normal);
	BOOL SetDepthObject(BOOL normal, LPDISPATCH obj);
	BOOL ResetDepthObject(BOOL normal);
};
/////////////////////////////////////////////////////////////////////////////
// ksBossExtrusionDefinition wrapper class

class ksBossExtrusionDefinition : public COleDispatchDriver
{
public:
	ksBossExtrusionDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBossExtrusionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBossExtrusionDefinition(const ksBossExtrusionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward);
	BOOL SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH ExtrusionParam();
	LPDISPATCH GetDepthObject(BOOL normal);
	BOOL SetDepthObject(BOOL normal, LPDISPATCH obj);
	BOOL ResetDepthObject(BOOL normal);
	LPDISPATCH ChooseBodies();
};
/////////////////////////////////////////////////////////////////////////////
// ksCutExtrusionDefinition wrapper class

class ksCutExtrusionDefinition : public COleDispatchDriver
{
public:
	ksCutExtrusionDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCutExtrusionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutExtrusionDefinition(const ksCutExtrusionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);
	BOOL GetCut();
	void SetCut(BOOL);
	long GetChooseType();
	void SetChooseType(long);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward);
	BOOL SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH ExtrusionParam();
	LPDISPATCH GetDepthObject(BOOL normal);
	BOOL SetDepthObject(BOOL normal, LPDISPATCH obj);
	BOOL ResetDepthObject(BOOL normal);
	LPDISPATCH ChooseBodies();
	LPDISPATCH ChooseParts();
};
/////////////////////////////////////////////////////////////////////////////
// ksExtrusionSurfaceDefinition wrapper class

class ksExtrusionSurfaceDefinition : public COleDispatchDriver
{
public:
	ksExtrusionSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksExtrusionSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksExtrusionSurfaceDefinition(const ksExtrusionSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);
	short GetClosedShell();
	void SetClosedShell(short);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward);
	BOOL SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward);
	LPDISPATCH ExtrusionParam();
	LPDISPATCH GetDepthObject(BOOL normal);
	BOOL SetDepthObject(BOOL normal, LPDISPATCH obj);
	BOOL ResetDepthObject(BOOL normal);
};
/////////////////////////////////////////////////////////////////////////////
// ksFaceDefinition wrapper class

class ksFaceDefinition : public COleDispatchDriver
{
public:
	ksFaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksFaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFaceDefinition(const ksFaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IsPlanar();
	BOOL IsCone();
	BOOL IsCylinder();
	BOOL GetCylinderParam(double* h, double* r);
	LPDISPATCH GetOwnerEntity();
	LPDISPATCH GetSurface();
	LPDISPATCH LoopCollection();
	BOOL GetNormalOrientation();
	BOOL IsConnectedWith(LPDISPATCH faceDefinition);
	LPDISPATCH ConnectedFaceCollection();
	LPDISPATCH EdgeCollection();
	LPDISPATCH GetNextFace();
	BOOL IsTorus();
	BOOL IsSphere();
	BOOL IsNurbsSurface();
	BOOL IsRevolved();
	BOOL IsSwept();
	LPDISPATCH GetTessellation();
	double GetArea(unsigned long bitVector);
	LPDISPATCH GetEntity();
	BOOL IsValid();
};
/////////////////////////////////////////////////////////////////////////////
// ksEdgeDefinition wrapper class

class ksEdgeDefinition : public COleDispatchDriver
{
public:
	ksEdgeDefinition() {}		// Calls COleDispatchDriver default constructor
	ksEdgeDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEdgeDefinition(const ksEdgeDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IsStraight();
	LPDISPATCH GetOwnerEntity();
	LPDISPATCH GetCurve3D();
	LPDISPATCH GetAdjacentFace(BOOL facePlus);
	LPDISPATCH GetVertex(BOOL start);
	LPDISPATCH EdgeCollection(BOOL begin);
	LPDISPATCH OrientedEdgeCollection();
	BOOL IsArc();
	BOOL IsCircle();
	BOOL IsEllipse();
	BOOL IsNurbs();
	BOOL IsPeriodic();
	double GetLength(unsigned long bitVector);
	LPDISPATCH GetEntity();
	BOOL IsValid();
};
/////////////////////////////////////////////////////////////////////////////
// ksChamferDefinition wrapper class

class ksChamferDefinition : public COleDispatchDriver
{
public:
	ksChamferDefinition() {}		// Calls COleDispatchDriver default constructor
	ksChamferDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksChamferDefinition(const ksChamferDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetTangent();
	void SetTangent(BOOL);

// Operations
public:
	BOOL GetChamferParam(BOOL* transfer, double* distance1, double* distance2);
	BOOL SetChamferParam(BOOL transfer, double distance1, double distance2);
	LPDISPATCH array();
};
/////////////////////////////////////////////////////////////////////////////
// ksFilletDefinition wrapper class

class ksFilletDefinition : public COleDispatchDriver
{
public:
	ksFilletDefinition() {}		// Calls COleDispatchDriver default constructor
	ksFilletDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFilletDefinition(const ksFilletDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetRadius();
	void SetRadius(double);
	BOOL GetTangent();
	void SetTangent(BOOL);

// Operations
public:
	LPDISPATCH array();
};
/////////////////////////////////////////////////////////////////////////////
// ksBaseLoftDefinition wrapper class

class ksBaseLoftDefinition : public COleDispatchDriver
{
public:
	ksBaseLoftDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBaseLoftDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBaseLoftDefinition(const ksBaseLoftDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath);
	BOOL SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH Sketchs();
};
/////////////////////////////////////////////////////////////////////////////
// ksBossLoftDefinition wrapper class

class ksBossLoftDefinition : public COleDispatchDriver
{
public:
	ksBossLoftDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBossLoftDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBossLoftDefinition(const ksBossLoftDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath);
	BOOL SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH Sketchs();
	LPDISPATCH ChooseBodies();
	LPDISPATCH GetDirectionalLine();
	BOOL SetDirectionalLine(LPDISPATCH sketch);
};
/////////////////////////////////////////////////////////////////////////////
// ksCutLoftDefinition wrapper class

class ksCutLoftDefinition : public COleDispatchDriver
{
public:
	ksCutLoftDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCutLoftDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutLoftDefinition(const ksCutLoftDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetCut();
	void SetCut(BOOL);
	long GetChooseType();
	void SetChooseType(long);

// Operations
public:
	BOOL GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath);
	BOOL SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH Sketchs();
	LPDISPATCH ChooseBodies();
	LPDISPATCH GetDirectionalLine();
	BOOL SetDirectionalLine(LPDISPATCH sketch);
	LPDISPATCH ChooseParts();
};
/////////////////////////////////////////////////////////////////////////////
// ksLoftSurfaceDefinition wrapper class

class ksLoftSurfaceDefinition : public COleDispatchDriver
{
public:
	ksLoftSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksLoftSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLoftSurfaceDefinition(const ksLoftSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetClosedShell();
	void SetClosedShell(short);

// Operations
public:
	BOOL GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath);
	BOOL SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath);
	LPDISPATCH Sketchs();
};
/////////////////////////////////////////////////////////////////////////////
// ksInclineDefinition wrapper class

class ksInclineDefinition : public COleDispatchDriver
{
public:
	ksInclineDefinition() {}		// Calls COleDispatchDriver default constructor
	ksInclineDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksInclineDefinition(const ksInclineDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngle();
	void SetAngle(double);
	BOOL GetDirection();
	void SetDirection(BOOL);

// Operations
public:
	LPDISPATCH FaceArray();
	LPDISPATCH GetPlane();
	BOOL SetPlane(LPDISPATCH plane);
};
/////////////////////////////////////////////////////////////////////////////
// ksShellDefinition wrapper class

class ksShellDefinition : public COleDispatchDriver
{
public:
	ksShellDefinition() {}		// Calls COleDispatchDriver default constructor
	ksShellDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksShellDefinition(const ksShellDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetThickness();
	void SetThickness(double);
	BOOL GetThinType();
	void SetThinType(BOOL);

// Operations
public:
	LPDISPATCH FaceArray();
};
/////////////////////////////////////////////////////////////////////////////
// ksBaseEvolutionDefinition wrapper class

class ksBaseEvolutionDefinition : public COleDispatchDriver
{
public:
	ksBaseEvolutionDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBaseEvolutionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBaseEvolutionDefinition(const ksBaseEvolutionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetSketchShiftType();
	void SetSketchShiftType(short);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	LPDISPATCH PathPartArray();
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	double GetPathLength(unsigned long bitVector);
};
/////////////////////////////////////////////////////////////////////////////
// ksBossEvolutionDefinition wrapper class

class ksBossEvolutionDefinition : public COleDispatchDriver
{
public:
	ksBossEvolutionDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBossEvolutionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBossEvolutionDefinition(const ksBossEvolutionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetSketchShiftType();
	void SetSketchShiftType(short);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	LPDISPATCH PathPartArray();
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH ChooseBodies();
	double GetPathLength(unsigned long bitVector);
};
/////////////////////////////////////////////////////////////////////////////
// ksCutEvolutionDefinition wrapper class

class ksCutEvolutionDefinition : public COleDispatchDriver
{
public:
	ksCutEvolutionDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCutEvolutionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutEvolutionDefinition(const ksCutEvolutionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetSketchShiftType();
	void SetSketchShiftType(short);
	BOOL GetCut();
	void SetCut(BOOL);
	long GetChooseType();
	void SetChooseType(long);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	LPDISPATCH PathPartArray();
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH ChooseBodies();
	LPDISPATCH ChooseParts();
	double GetPathLength(unsigned long bitVector);
};
/////////////////////////////////////////////////////////////////////////////
// ksEvolutionSurfaceDefinition wrapper class

class ksEvolutionSurfaceDefinition : public COleDispatchDriver
{
public:
	ksEvolutionSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksEvolutionSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEvolutionSurfaceDefinition(const ksEvolutionSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetSketchShiftType();
	void SetSketchShiftType(short);
	BOOL GetClosedShell();
	void SetClosedShell(BOOL);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	LPDISPATCH PathPartArray();
	double GetPathLength(unsigned long bitVector);
};
/////////////////////////////////////////////////////////////////////////////
// ksRibDefinition wrapper class

class ksRibDefinition : public COleDispatchDriver
{
public:
	ksRibDefinition() {}		// Calls COleDispatchDriver default constructor
	ksRibDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRibDefinition(const ksRibDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetIndex();
	void SetIndex(long);
	double GetAngle();
	void SetAngle(double);
	long GetSide();
	void SetSide(long);

// Operations
public:
	LPDISPATCH GetSketch();
	BOOL SetSketch(LPDISPATCH sketch);
	BOOL GetThinParam(short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
};
/////////////////////////////////////////////////////////////////////////////
// ksCutByPlaneDefinition wrapper class

class ksCutByPlaneDefinition : public COleDispatchDriver
{
public:
	ksCutByPlaneDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCutByPlaneDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutByPlaneDefinition(const ksCutByPlaneDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetDirection();
	void SetDirection(BOOL);
	long GetChooseType();
	void SetChooseType(long);

// Operations
public:
	LPDISPATCH GetPlane();
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH ChooseBodies();
	LPDISPATCH ChooseParts();
};
/////////////////////////////////////////////////////////////////////////////
// ksCutBySketchDefinition wrapper class

class ksCutBySketchDefinition : public COleDispatchDriver
{
public:
	ksCutBySketchDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCutBySketchDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutBySketchDefinition(const ksCutBySketchDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetDirection();
	void SetDirection(BOOL);
	long GetChooseType();
	void SetChooseType(long);

// Operations
public:
	LPDISPATCH GetSketch();
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH ChooseBodies();
	LPDISPATCH ChooseParts();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneOffsetDefinition wrapper class

class ksPlaneOffsetDefinition : public COleDispatchDriver
{
public:
	ksPlaneOffsetDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneOffsetDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneOffsetDefinition(const ksPlaneOffsetDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetOffset();
	void SetOffset(double);
	BOOL GetDirection();
	void SetDirection(BOOL);

// Operations
public:
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneAngleDefinition wrapper class

class ksPlaneAngleDefinition : public COleDispatchDriver
{
public:
	ksPlaneAngleDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneAngleDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneAngleDefinition(const ksPlaneAngleDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	BOOL SetAxis(LPDISPATCH axis);
	LPDISPATCH GetAxis();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlane3PointsDefinition wrapper class

class ksPlane3PointsDefinition : public COleDispatchDriver
{
public:
	ksPlane3PointsDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlane3PointsDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlane3PointsDefinition(const ksPlane3PointsDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetPoint(long number, LPDISPATCH point);
	LPDISPATCH GetPoint(long number);
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneNormalToSurfaceDefinition wrapper class

class ksPlaneNormalToSurfaceDefinition : public COleDispatchDriver
{
public:
	ksPlaneNormalToSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneNormalToSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneNormalToSurfaceDefinition(const ksPlaneNormalToSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL SetFace(LPDISPATCH face);
	LPDISPATCH GetFace();
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneTangentToSurfaceDefinition wrapper class

class ksPlaneTangentToSurfaceDefinition : public COleDispatchDriver
{
public:
	ksPlaneTangentToSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneTangentToSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneTangentToSurfaceDefinition(const ksPlaneTangentToSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetChoosePlane();
	void SetChoosePlane(short);
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL SetFace(LPDISPATCH face);
	LPDISPATCH GetFace();
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneEdgePointDefinition wrapper class

class ksPlaneEdgePointDefinition : public COleDispatchDriver
{
public:
	ksPlaneEdgePointDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneEdgePointDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneEdgePointDefinition(const ksPlaneEdgePointDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetEdge(LPDISPATCH edge);
	LPDISPATCH GetEdge();
	BOOL SetPoint(LPDISPATCH point);
	LPDISPATCH GetPoint();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneParallelDefinition wrapper class

class ksPlaneParallelDefinition : public COleDispatchDriver
{
public:
	ksPlaneParallelDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneParallelDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneParallelDefinition(const ksPlaneParallelDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	BOOL SetPoint(LPDISPATCH point);
	LPDISPATCH GetPoint();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlanePerpendicularDefinition wrapper class

class ksPlanePerpendicularDefinition : public COleDispatchDriver
{
public:
	ksPlanePerpendicularDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlanePerpendicularDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlanePerpendicularDefinition(const ksPlanePerpendicularDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetEdge(LPDISPATCH edge);
	LPDISPATCH GetEdge();
	BOOL SetPoint(LPDISPATCH point);
	LPDISPATCH GetPoint();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneLineToEdgeDefinition wrapper class

class ksPlaneLineToEdgeDefinition : public COleDispatchDriver
{
public:
	ksPlaneLineToEdgeDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneLineToEdgeDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneLineToEdgeDefinition(const ksPlaneLineToEdgeDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetParallel();
	void SetParallel(BOOL);

// Operations
public:
	BOOL SetEdgeFirst(LPDISPATCH edge1);
	LPDISPATCH GetEdgeFirst();
	BOOL SetEdgeSecond(LPDISPATCH edge2);
	LPDISPATCH GetEdgeSecond();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneLineToPlaneDefinition wrapper class

class ksPlaneLineToPlaneDefinition : public COleDispatchDriver
{
public:
	ksPlaneLineToPlaneDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneLineToPlaneDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneLineToPlaneDefinition(const ksPlaneLineToPlaneDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetParallel();
	void SetParallel(BOOL);

// Operations
public:
	BOOL SetEdge(LPDISPATCH edge);
	LPDISPATCH GetEdge();
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksThinParam wrapper class

class ksThinParam : public COleDispatchDriver
{
public:
	ksThinParam() {}		// Calls COleDispatchDriver default constructor
	ksThinParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksThinParam(const ksThinParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetThin();
	void SetThin(BOOL);
	short GetThinType();
	void SetThinType(short);
	double GetNormalThickness();
	void SetNormalThickness(double);
	double GetReverseThickness();
	void SetReverseThickness(double);

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ksExtrusionParam wrapper class

class ksExtrusionParam : public COleDispatchDriver
{
public:
	ksExtrusionParam() {}		// Calls COleDispatchDriver default constructor
	ksExtrusionParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksExtrusionParam(const ksExtrusionParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetTypeNormal();
	void SetTypeNormal(short);
	double GetDepthNormal();
	void SetDepthNormal(double);
	double GetDraftValueNormal();
	void SetDraftValueNormal(double);
	BOOL GetDraftOutwardNormal();
	void SetDraftOutwardNormal(BOOL);
	short GetTypeReverse();
	void SetTypeReverse(short);
	double GetDepthReverse();
	void SetDepthReverse(double);
	double GetDraftValueReverse();
	void SetDraftValueReverse(double);
	BOOL GetDraftOutwardReverse();
	void SetDraftOutwardReverse(BOOL);
	long GetDirection();
	void SetDirection(long);

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ksRotatedParam wrapper class

class ksRotatedParam : public COleDispatchDriver
{
public:
	ksRotatedParam() {}		// Calls COleDispatchDriver default constructor
	ksRotatedParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRotatedParam(const ksRotatedParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngleNormal();
	void SetAngleNormal(double);
	double GetAngleReverse();
	void SetAngleReverse(double);
	BOOL GetToroidShape();
	void SetToroidShape(BOOL);
	long GetDirection();
	void SetDirection(long);

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ksColorParam wrapper class

class ksColorParam : public COleDispatchDriver
{
public:
	ksColorParam() {}		// Calls COleDispatchDriver default constructor
	ksColorParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksColorParam(const ksColorParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetColor();
	void SetColor(long);
	double GetAmbient();
	void SetAmbient(double);
	double GetDiffuse();
	void SetDiffuse(double);
	double GetSpecularity();
	void SetSpecularity(double);
	double GetShininess();
	void SetShininess(double);
	double GetTransparency();
	void SetTransparency(double);
	double GetEmission();
	void SetEmission(double);

// Operations
public:
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// ksBaseRotatedDefinition wrapper class

class ksBaseRotatedDefinition : public COleDispatchDriver
{
public:
	ksBaseRotatedDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBaseRotatedDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBaseRotatedDefinition(const ksBaseRotatedDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);
	BOOL GetToroidShapeType();
	void SetToroidShapeType(BOOL);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, double* angle);
	BOOL SetSideParam(BOOL side1, double angle);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH RotatedParam();
};
/////////////////////////////////////////////////////////////////////////////
// ksBossRotatedDefinition wrapper class

class ksBossRotatedDefinition : public COleDispatchDriver
{
public:
	ksBossRotatedDefinition() {}		// Calls COleDispatchDriver default constructor
	ksBossRotatedDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBossRotatedDefinition(const ksBossRotatedDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);
	BOOL GetToroidShapeType();
	void SetToroidShapeType(BOOL);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, double* angle);
	BOOL SetSideParam(BOOL side1, double angle);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH RotatedParam();
	LPDISPATCH ChooseBodies();
};
/////////////////////////////////////////////////////////////////////////////
// ksCutRotatedDefinition wrapper class

class ksCutRotatedDefinition : public COleDispatchDriver
{
public:
	ksCutRotatedDefinition() {}		// Calls COleDispatchDriver default constructor
	ksCutRotatedDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCutRotatedDefinition(const ksCutRotatedDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);
	BOOL GetToroidShapeType();
	void SetToroidShapeType(BOOL);
	BOOL GetCut();
	void SetCut(BOOL);
	long GetChooseType();
	void SetChooseType(long);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, double* angle);
	BOOL SetSideParam(BOOL side1, double angle);
	BOOL GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness);
	BOOL SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness);
	LPDISPATCH ThinParam();
	LPDISPATCH RotatedParam();
	LPDISPATCH ChooseBodies();
	LPDISPATCH ChooseParts();
};
/////////////////////////////////////////////////////////////////////////////
// ksRotatedSurfaceDefinition wrapper class

class ksRotatedSurfaceDefinition : public COleDispatchDriver
{
public:
	ksRotatedSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksRotatedSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRotatedSurfaceDefinition(const ksRotatedSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDirectionType();
	void SetDirectionType(short);
	BOOL GetToroidShapeType();
	void SetToroidShapeType(BOOL);
	short GetClosedShell();
	void SetClosedShell(short);

// Operations
public:
	BOOL SetSketch(LPDISPATCH sketch);
	LPDISPATCH GetSketch();
	BOOL GetSideParam(BOOL side1, double* angle);
	BOOL SetSideParam(BOOL side1, double angle);
	LPDISPATCH RotatedParam();
};
/////////////////////////////////////////////////////////////////////////////
// ksSketchDefinition wrapper class

class ksSketchDefinition : public COleDispatchDriver
{
public:
	ksSketchDefinition() {}		// Calls COleDispatchDriver default constructor
	ksSketchDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSketchDefinition(const ksSketchDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetAngle();
	void SetAngle(double);

// Operations
public:
	BOOL EndEdit();
	BOOL SetPlane(LPDISPATCH plane);
	LPDISPATCH GetPlane();
	BOOL GetLocation(double* x, double* y);
	BOOL SetLocation(double x, double y);
	BOOL GetLoftPoint(double* x, double* y);
	BOOL UserSetPlacement(LPCTSTR prompt);
	LPDISPATCH BeginEdit();
	long AddProjectionOf(LPDISPATCH entity);
	BOOL SetLoftPoint(double x, double y);
	LPDISPATCH GetSurface();
	LPDISPATCH BeginEditEx(long readOnly);
};
/////////////////////////////////////////////////////////////////////////////
// ksRasterFormatParam wrapper class

class ksRasterFormatParam : public COleDispatchDriver
{
public:
	ksRasterFormatParam() {}		// Calls COleDispatchDriver default constructor
	ksRasterFormatParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRasterFormatParam(const ksRasterFormatParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetFormat();
	void SetFormat(short);
	short GetColorBPP();
	void SetColorBPP(short);
	BOOL GetGreyScale();
	void SetGreyScale(BOOL);
	long GetExtResolution();
	void SetExtResolution(long);
	double GetExtScale();
	void SetExtScale(double);
	short GetColorType();
	void SetColorType(short);
	BOOL GetOnlyThinLine();
	void SetOnlyThinLine(BOOL);
	CString GetPages();
	void SetPages(LPCTSTR);
	short GetRangeIndex();
	void SetRangeIndex(short);
	BOOL GetMultiPageOutput();
	void SetMultiPageOutput(BOOL);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksAdditionFormatParam wrapper class

class ksAdditionFormatParam : public COleDispatchDriver
{
public:
	ksAdditionFormatParam() {}		// Calls COleDispatchDriver default constructor
	ksAdditionFormatParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAdditionFormatParam(const ksAdditionFormatParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetFormat();
	void SetFormat(short);
	BOOL GetFormatBinary();
	void SetFormatBinary(BOOL);
	BOOL GetTopolgyIncluded();
	void SetTopolgyIncluded(BOOL);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksConstraintParam wrapper class

class ksConstraintParam : public COleDispatchDriver
{
public:
	ksConstraintParam() {}		// Calls COleDispatchDriver default constructor
	ksConstraintParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksConstraintParam(const ksConstraintParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetConstrType();
	void SetConstrType(short);
	long GetIndex();
	void SetIndex(long);
	long GetPartner();
	void SetPartner(long);
	long GetPartnerIndex();
	void SetPartnerIndex(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksImportedSurfaceDefinition wrapper class

class ksImportedSurfaceDefinition : public COleDispatchDriver
{
public:
	ksImportedSurfaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksImportedSurfaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksImportedSurfaceDefinition(const ksImportedSurfaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Clear();
	BOOL BeginCurve();
	BOOL AddPoint(double x, double y, double z);
	BOOL EndCurve();
	BOOL AddCurve(const VARIANT& arr);
};
/////////////////////////////////////////////////////////////////////////////
// ksFaceCollection wrapper class

class ksFaceCollection : public COleDispatchDriver
{
public:
	ksFaceCollection() {}		// Calls COleDispatchDriver default constructor
	ksFaceCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFaceCollection(const ksFaceCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	LPDISPATCH GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksVertexDefinition wrapper class

class ksVertexDefinition : public COleDispatchDriver
{
public:
	ksVertexDefinition() {}		// Calls COleDispatchDriver default constructor
	ksVertexDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksVertexDefinition(const ksVertexDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPoint(double* x, double* y, double* z);
	LPDISPATCH GetOwnerEntity();
	BOOL GetTopologyVertex();
	BOOL GetFreeVertex();
};
/////////////////////////////////////////////////////////////////////////////
// ksTessellation wrapper class

class ksTessellation : public COleDispatchDriver
{
public:
	ksTessellation() {}		// Calls COleDispatchDriver default constructor
	ksTessellation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTessellation(const ksTessellation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetFacetsCount();
	BOOL GetFacetData(long index, LPDISPATCH facet);
	long GetPointsCount();
	BOOL GetPoint(long index, float* x, float* y, float* z);
	BOOL GetNormal(long index, float* x, float* y, float* z);
	BOOL SetFacetSize(double sag);
	double GetFacetSize();
	LPDISPATCH GetFacet();
	BOOL refresh();
	BOOL GetFacetPoints(VARIANT* points, VARIANT* indexes);
	BOOL GetFacetNormals(VARIANT* normals);
};
/////////////////////////////////////////////////////////////////////////////
// ksFacet wrapper class

class ksFacet : public COleDispatchDriver
{
public:
	ksFacet() {}		// Calls COleDispatchDriver default constructor
	ksFacet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksFacet(const ksFacet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetPointsCount();
	BOOL GetPoint(long index, float* x, float* y, float* z);
	BOOL GetNormal(long index, float* x, float* y, float* z);
	long GetTessellationIndex(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksMeasurer wrapper class

class ksMeasurer : public COleDispatchDriver
{
public:
	ksMeasurer() {}		// Calls COleDispatchDriver default constructor
	ksMeasurer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMeasurer(const ksMeasurer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	unsigned long GetUnit();
	void SetUnit(unsigned long);
	BOOL GetExtendObject1();
	void SetExtendObject1(BOOL);
	BOOL GetExtendObject2();
	void SetExtendObject2(BOOL);

// Operations
public:
	BOOL SetObject1(LPDISPATCH obj);
	BOOL SetObject2(LPDISPATCH obj);
	LPDISPATCH GetObject1();
	LPDISPATCH GetObject2();
	BOOL Calc();
	BOOL IsAngleValid();
	double GetAngle();
	double GetDistance();
	BOOL GetPoint1(double* x, double* y, double* z);
	BOOL GetPoint2(double* x, double* y, double* z);
	double GetMaxDistance();
	double GetNormalDistance();
	BOOL GetMaxPoint1(double* x, double* y, double* z);
	BOOL GetMaxPoint2(double* x, double* y, double* z);
	BOOL GetNormalPoint1(double* x, double* y, double* z);
	BOOL GetNormalPoint2(double* x, double* y, double* z);
	long GetMeasureResult();
};
/////////////////////////////////////////////////////////////////////////////
// ksBodyCollection wrapper class

class ksBodyCollection : public COleDispatchDriver
{
public:
	ksBodyCollection() {}		// Calls COleDispatchDriver default constructor
	ksBodyCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBodyCollection(const ksBodyCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	long FindIt(LPDISPATCH entity);
	BOOL Clear();
	BOOL Add(LPDISPATCH body);
	BOOL AddAt(LPDISPATCH body, long index);
	BOOL AddBefore(LPDISPATCH body, LPDISPATCH base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH body);
	BOOL SetByIndex(LPDISPATCH body, long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksBody wrapper class

class ksBody : public COleDispatchDriver
{
public:
	ksBody() {}		// Calls COleDispatchDriver default constructor
	ksBody(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBody(const ksBody& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetGabarit(double* x1, double* y1, double* z1, double* x2, double* y2, double* z2);
	LPDISPATCH FaceCollection();
	BOOL IsSolid();
	LPDISPATCH CalcMassInertiaProperties(unsigned long bitVector);
	BOOL CurveIntersection(LPDISPATCH curve, LPDISPATCH fases, LPDISPATCH points);
	LPDISPATCH CheckIntersectionWithBody(LPDISPATCH otherBody, BOOL checkTangent);
	BOOL GetMultiBodyParts();
	LPDISPATCH GetFeature();
	long GetIntersectionFacesWithBody(LPDISPATCH otherBody, VARIANT* intersectionFaces1, VARIANT* intersectionFaces2, VARIANT* connectedFaces1, VARIANT* connectedFaces2);
};
/////////////////////////////////////////////////////////////////////////////
// ksSurface wrapper class

class ksSurface : public COleDispatchDriver
{
public:
	ksSurface() {}		// Calls COleDispatchDriver default constructor
	ksSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSurface(const ksSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetGabarit(double* x1, double* y1, double* z1, double* x2, double* y2, double* z2);
	BOOL GetPoint(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetNormal(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetTangentVectorU(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetTangentVectorV(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeU(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeV(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeUU(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeVV(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeUV(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeUUU(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeVVV(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeUVV(double paramU, double paramV, double* x, double* y, double* z);
	BOOL GetDerivativeUUV(double paramU, double paramV, double* x, double* y, double* z);
	double GetParamUMin();
	double GetParamUMax();
	double GetParamVMin();
	double GetParamVMax();
	BOOL IsClosedU();
	BOOL IsClosedV();
	BOOL IsPlane();
	BOOL IsCone();
	BOOL IsCylinder();
	BOOL IsTorus();
	BOOL IsSphere();
	BOOL IsNurbsSurface();
	BOOL IsRevolved();
	BOOL IsSwept();
	LPDISPATCH GetSurfaceParam();
	double GetArea(unsigned long bitVector);
	BOOL NearPointProjection(double x, double y, double z, double* u, double* v, BOOL ext);
	BOOL CurveIntersection(LPDISPATCH curve, LPDISPATCH points, BOOL extSurf, BOOL extCurve);
	LPDISPATCH GetNurbsSurfaceParam();
	BOOL GetBoundaryUVNurbs(BOOL uv, BOOL closed, long loopIndex, long edgeIndex, long* degree, VARIANT* points, VARIANT* weights, VARIANT* knots, double* tMin, double* tMax);
	long GetBoundaryCount();
	long GetEdgesCount(long loopIndex);
};
/////////////////////////////////////////////////////////////////////////////
// ksEdgeCollection wrapper class

class ksEdgeCollection : public COleDispatchDriver
{
public:
	ksEdgeCollection() {}		// Calls COleDispatchDriver default constructor
	ksEdgeCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEdgeCollection(const ksEdgeCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksOrientedEdge wrapper class

class ksOrientedEdge : public COleDispatchDriver
{
public:
	ksOrientedEdge() {}		// Calls COleDispatchDriver default constructor
	ksOrientedEdge(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksOrientedEdge(const ksOrientedEdge& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetEdge();
	BOOL GetOrientation();
	LPDISPATCH GetOwnerEntity();
	LPDISPATCH GetNext();
	BOOL GetSameSense();
	LPDISPATCH GetAdjacentFace(long facePlus);
};
/////////////////////////////////////////////////////////////////////////////
// ksOrientedEdgeCollection wrapper class

class ksOrientedEdgeCollection : public COleDispatchDriver
{
public:
	ksOrientedEdgeCollection() {}		// Calls COleDispatchDriver default constructor
	ksOrientedEdgeCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksOrientedEdgeCollection(const ksOrientedEdgeCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksLoop wrapper class

class ksLoop : public COleDispatchDriver
{
public:
	ksLoop() {}		// Calls COleDispatchDriver default constructor
	ksLoop(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLoop(const ksLoop& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH OrientedEdgeCollection(LPDISPATCH edge);
	LPDISPATCH EdgeCollection();
	BOOL IsOuter();
	double GetLength(unsigned long bitVector);
};
/////////////////////////////////////////////////////////////////////////////
// ksLoopCollection wrapper class

class ksLoopCollection : public COleDispatchDriver
{
public:
	ksLoopCollection() {}		// Calls COleDispatchDriver default constructor
	ksLoopCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLoopCollection(const ksLoopCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksCurve3D wrapper class

class ksCurve3D : public COleDispatchDriver
{
public:
	ksCurve3D() {}		// Calls COleDispatchDriver default constructor
	ksCurve3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCurve3D(const ksCurve3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPoint(double paramT, double* x, double* y, double* z);
	BOOL GetTangentVector(double paramT, double* x, double* y, double* z);
	BOOL GetNormal(double paramT, double* x, double* y, double* z);
	BOOL GetDerivativeT(double paramT, double* x, double* y, double* z);
	BOOL GetDerivativeTT(double paramT, double* x, double* y, double* z);
	BOOL GetDerivativeTTT(double paramT, double* x, double* y, double* z);
	double GetParamMin();
	double GetParamMax();
	BOOL IsClosed();
	BOOL IsPeriodic();
	double GetMetricLength(double startParam, double endParam);
	BOOL GetGabarit(double* x1, double* y1, double* z1, double* x2, double* y2, double* z2);
	BOOL IsDegenerate();
	BOOL IsPlanar();
	BOOL IsLineSeg();
	BOOL IsArc();
	BOOL IsCircle();
	BOOL IsEllipse();
	BOOL IsNurbs();
	LPDISPATCH GetCurveParam();
	double GetLength(unsigned long bitVector);
	BOOL NearPointProjection(double x, double y, double z, double* t, BOOL ext);
	LPDISPATCH GetNurbs3dParam();
	VARIANT CalculatePolygon(double step);
};
/////////////////////////////////////////////////////////////////////////////
// ksLineSeg3dParam wrapper class

class ksLineSeg3dParam : public COleDispatchDriver
{
public:
	ksLineSeg3dParam() {}		// Calls COleDispatchDriver default constructor
	ksLineSeg3dParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLineSeg3dParam(const ksLineSeg3dParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPointFirst(double* x, double* y, double* z);
	BOOL GetPointLast(double* x, double* y, double* z);
};
/////////////////////////////////////////////////////////////////////////////
// ksCircle3dParam wrapper class

class ksCircle3dParam : public COleDispatchDriver
{
public:
	ksCircle3dParam() {}		// Calls COleDispatchDriver default constructor
	ksCircle3dParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCircle3dParam(const ksCircle3dParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRadius();
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksEllipse3dParam wrapper class

class ksEllipse3dParam : public COleDispatchDriver
{
public:
	ksEllipse3dParam() {}		// Calls COleDispatchDriver default constructor
	ksEllipse3dParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksEllipse3dParam(const ksEllipse3dParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetMajorRadius();
	double GetMinorRadius();
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneParam wrapper class

class ksPlaneParam : public COleDispatchDriver
{
public:
	ksPlaneParam() {}		// Calls COleDispatchDriver default constructor
	ksPlaneParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneParam(const ksPlaneParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksConeParam wrapper class

class ksConeParam : public COleDispatchDriver
{
public:
	ksConeParam() {}		// Calls COleDispatchDriver default constructor
	ksConeParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksConeParam(const ksConeParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRadius();
	double GetHeight();
	double GetAngle();
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksCylinderParam wrapper class

class ksCylinderParam : public COleDispatchDriver
{
public:
	ksCylinderParam() {}		// Calls COleDispatchDriver default constructor
	ksCylinderParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCylinderParam(const ksCylinderParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRadius();
	double GetHeight();
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksSphereParam wrapper class

class ksSphereParam : public COleDispatchDriver
{
public:
	ksSphereParam() {}		// Calls COleDispatchDriver default constructor
	ksSphereParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSphereParam(const ksSphereParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRadius();
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksTorusParam wrapper class

class ksTorusParam : public COleDispatchDriver
{
public:
	ksTorusParam() {}		// Calls COleDispatchDriver default constructor
	ksTorusParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTorusParam(const ksTorusParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRadius();
	double GetGeneratrixRadius();
	LPDISPATCH GetPlacement();
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dParam wrapper class

class ksNurbsPoint3dParam : public COleDispatchDriver
{
public:
	ksNurbsPoint3dParam() {}		// Calls COleDispatchDriver default constructor
	ksNurbsPoint3dParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsPoint3dParam(const ksNurbsPoint3dParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPoint(double* x, double* y, double* z);
	double GetWeight();
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsSurfaceParam wrapper class

class ksNurbsSurfaceParam : public COleDispatchDriver
{
public:
	ksNurbsSurfaceParam() {}		// Calls COleDispatchDriver default constructor
	ksNurbsSurfaceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsSurfaceParam(const ksNurbsSurfaceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	short GetDegree(BOOL paramU);
	BOOL GetClose(BOOL paramU);
	LPDISPATCH GetPointCollection();
	LPDISPATCH GetKnotCollection(BOOL paramU);
	BOOL GetPeriodic(BOOL paramU);
	BOOL GetNurbsParams(BOOL closedV, BOOL closedU, long* degreeV, long* degreeU, long* nPV, long* nPU, VARIANT* points, VARIANT* weights, VARIANT* knotsV, VARIANT* knotsU);
	BOOL GetBoundaryUVNurbs(BOOL uv, BOOL closed, long loopIndex, long edgeIndex, long* degree, VARIANT* points, VARIANT* weights, VARIANT* knots, double* tMin, double* tMax);
	long GetBoundaryCount();
	long GetEdgesCount(long loopIndex);
	BOOL GetMinMaxParameters(BOOL closedV, BOOL closedU, double* uMin, double* uMax, double* vMin, double* vMax);
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbs3dParam wrapper class

class ksNurbs3dParam : public COleDispatchDriver
{
public:
	ksNurbs3dParam() {}		// Calls COleDispatchDriver default constructor
	ksNurbs3dParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbs3dParam(const ksNurbs3dParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	short GetDegree();
	BOOL GetClose();
	LPDISPATCH GetPointCollection();
	LPDISPATCH GetKnotCollection();
	BOOL GetPeriodic();
	BOOL GetNurbsPoints3DParams(BOOL closed, VARIANT* points, VARIANT* weights, VARIANT* knots);
	BOOL GetMinMaxParameters(BOOL closed, double* tMin, double* tMax);
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsKnotCollection wrapper class

class ksNurbsKnotCollection : public COleDispatchDriver
{
public:
	ksNurbsKnotCollection() {}		// Calls COleDispatchDriver default constructor
	ksNurbsKnotCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsKnotCollection(const ksNurbsKnotCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	double First();
	double Last();
	double Next();
	double Prev();
	double GetByIndex(long index);
	BOOL Clear();
	BOOL Add(double entity);
	BOOL AddAt(double entity, long index);
	BOOL AddBefore(double entity, double base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(double entity);
	BOOL SetByIndex(double entity, long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dCollCollection wrapper class

class ksNurbsPoint3dCollCollection : public COleDispatchDriver
{
public:
	ksNurbsPoint3dCollCollection() {}		// Calls COleDispatchDriver default constructor
	ksNurbsPoint3dCollCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsPoint3dCollCollection(const ksNurbsPoint3dCollCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	BOOL Clear();
	BOOL Add(LPDISPATCH entity);
	BOOL AddAt(LPDISPATCH entity, long index);
	BOOL AddBefore(LPDISPATCH entity, LPDISPATCH base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH entity);
	BOOL SetByIndex(LPDISPATCH entity, long index);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dCollection wrapper class

class ksNurbsPoint3dCollection : public COleDispatchDriver
{
public:
	ksNurbsPoint3dCollection() {}		// Calls COleDispatchDriver default constructor
	ksNurbsPoint3dCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksNurbsPoint3dCollection(const ksNurbsPoint3dCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	BOOL Clear();
	BOOL Add(LPDISPATCH entity);
	BOOL AddAt(LPDISPATCH entity, long index);
	BOOL AddBefore(LPDISPATCH entity, LPDISPATCH base);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH entity);
	BOOL SetByIndex(LPDISPATCH entity, long index);
	long FindIt(LPDISPATCH entity);
};
/////////////////////////////////////////////////////////////////////////////
// ksViewProjection wrapper class

class ksViewProjection : public COleDispatchDriver
{
public:
	ksViewProjection() {}		// Calls COleDispatchDriver default constructor
	ksViewProjection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksViewProjection(const ksViewProjection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetName();
	void SetName(LPCTSTR);
	double GetScale();
	void SetScale(double);

// Operations
public:
	BOOL IsCurrent();
	BOOL SetCurrent();
	LPDISPATCH GetPlacement();
	BOOL SetPlacement(LPDISPATCH place);
	long GetIndex();
	BOOL SetMatrix3D(const VARIANT& Matrix3D);
};
/////////////////////////////////////////////////////////////////////////////
// ksViewProjectionCollection wrapper class

class ksViewProjectionCollection : public COleDispatchDriver
{
public:
	ksViewProjectionCollection() {}		// Calls COleDispatchDriver default constructor
	ksViewProjectionCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksViewProjectionCollection(const ksViewProjectionCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetByIndex(long index);
	LPDISPATCH GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase);
	long FindIt(LPDISPATCH entity);
	BOOL Add(LPDISPATCH entity);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(LPDISPATCH entity);
	BOOL DetachByName(LPCTSTR name);
	LPDISPATCH NewViewProjection();
};
/////////////////////////////////////////////////////////////////////////////
// ksSelectionMng wrapper class

class ksSelectionMng : public COleDispatchDriver
{
public:
	ksSelectionMng() {}		// Calls COleDispatchDriver default constructor
	ksSelectionMng(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSelectionMng(const ksSelectionMng& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Select(LPDISPATCH obj);
	BOOL Unselect(LPDISPATCH obj);
	BOOL UnselectAll();
	BOOL IsSelected(LPDISPATCH obj);
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetObjectByIndex(long index);
	long GetObjectType(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksChooseMng wrapper class

class ksChooseMng : public COleDispatchDriver
{
public:
	ksChooseMng() {}		// Calls COleDispatchDriver default constructor
	ksChooseMng(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksChooseMng(const ksChooseMng& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetCurrentManagerType();
	void SetCurrentManagerType(long);

// Operations
public:
	BOOL Choose(LPDISPATCH obj);
	BOOL UnChoose(LPDISPATCH obj);
	BOOL UnChooseAll();
	BOOL IsChoosen(LPDISPATCH obj);
	long GetCount();
	LPDISPATCH First();
	LPDISPATCH Last();
	LPDISPATCH Next();
	LPDISPATCH Prev();
	LPDISPATCH GetObjectByIndex(long index);
	long GetObjectType(long index);
	long GetManagerIndex(LPDISPATCH obj);
};
/////////////////////////////////////////////////////////////////////////////
// ksArc3dParam wrapper class

class ksArc3dParam : public COleDispatchDriver
{
public:
	ksArc3dParam() {}		// Calls COleDispatchDriver default constructor
	ksArc3dParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksArc3dParam(const ksArc3dParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetPlacement();
	double GetRadius();
	double GetAngle();
};
/////////////////////////////////////////////////////////////////////////////
// ksTreeNodeParam wrapper class

class ksTreeNodeParam : public COleDispatchDriver
{
public:
	ksTreeNodeParam() {}		// Calls COleDispatchDriver default constructor
	ksTreeNodeParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTreeNodeParam(const ksTreeNodeParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Init();
	long GetType();
	CString GetName();
	LPDISPATCH GetComment();
	LPDISPATCH GetNodes();
};
/////////////////////////////////////////////////////////////////////////////
// ksAssociationViewParam wrapper class

class ksAssociationViewParam : public COleDispatchDriver
{
public:
	ksAssociationViewParam() {}		// Calls COleDispatchDriver default constructor
	ksAssociationViewParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAssociationViewParam(const ksAssociationViewParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetProjectionName();
	void SetProjectionName(LPCTSTR);
	BOOL GetProjectionLink();
	void SetProjectionLink(BOOL);
	BOOL GetDisassembly();
	void SetDisassembly(BOOL);
	long GetVisibleLinesStyle();
	void SetVisibleLinesStyle(long);
	long GetHiddenLinesStyle();
	void SetHiddenLinesStyle(long);
	long GetTangentEdgesStyle();
	void SetTangentEdgesStyle(long);
	BOOL GetHiddenLinesShow();
	void SetHiddenLinesShow(BOOL);
	BOOL GetTangentEdgesShow();
	void SetTangentEdgesShow(BOOL);
	BOOL GetProjBodies();
	void SetProjBodies(BOOL);
	BOOL GetProjSurfaces();
	void SetProjSurfaces(BOOL);
	BOOL GetProjThreads();
	void SetProjThreads(BOOL);
	BOOL GetSection();
	void SetSection(BOOL);
	BOOL GetSameHatch();
	void SetSameHatch(BOOL);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetViewParam();
	short GetViewType();
	LPDISPATCH GetHatchParam();
	BOOL SetDimensionLayoutScaling(BOOL scaling);
};
/////////////////////////////////////////////////////////////////////////////
// ksViewColorParam wrapper class

class ksViewColorParam : public COleDispatchDriver
{
public:
	ksViewColorParam() {}		// Calls COleDispatchDriver default constructor
	ksViewColorParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksViewColorParam(const ksViewColorParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetColor();
	void SetColor(long);
	BOOL GetUseGradient();
	void SetUseGradient(BOOL);
	long GetTopColor();
	void SetTopColor(long);
	long GetBottomColor();
	void SetBottomColor(long);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksAxisLineParam wrapper class

class ksAxisLineParam : public COleDispatchDriver
{
public:
	ksAxisLineParam() {}		// Calls COleDispatchDriver default constructor
	ksAxisLineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAxisLineParam(const ksAxisLineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Init();
	LPDISPATCH GetBegPoint();
	LPDISPATCH GetEndPoint();
};
/////////////////////////////////////////////////////////////////////////////
// ksTextDocumentParam wrapper class

class ksTextDocumentParam : public COleDispatchDriver
{
public:
	ksTextDocumentParam() {}		// Calls COleDispatchDriver default constructor
	ksTextDocumentParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksTextDocumentParam(const ksTextDocumentParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CString GetFileName();
	void SetFileName(LPCTSTR);
	CString GetComment();
	void SetComment(LPCTSTR);
	CString GetAuthor();
	void SetAuthor(LPCTSTR);
	short GetType();
	void SetType(short);
	short GetRegime();
	void SetRegime(short);

// Operations
public:
	BOOL Init();
	LPDISPATCH GetFirstSheet();
	LPDISPATCH GetEvenSheet();
	LPDISPATCH GetOddSheet();
	LPDISPATCH GetArrTitleSheet();
	LPDISPATCH GetArrTailSheet();
	LPDISPATCH GetSheetParam();
};
/////////////////////////////////////////////////////////////////////////////
// ksRemoteElementParam wrapper class

class ksRemoteElementParam : public COleDispatchDriver
{
public:
	ksRemoteElementParam() {}		// Calls COleDispatchDriver default constructor
	ksRemoteElementParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksRemoteElementParam(const ksRemoteElementParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetStyle();
	void SetStyle(long);
	long GetSignType();
	void SetSignType(long);
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	double GetWidth();
	void SetWidth(double);
	double GetHeight();
	void SetHeight(double);
	double GetRadius();
	void SetRadius(double);
	double GetSmooth();
	void SetSmooth(double);
	double GetShelfX();
	void SetShelfX(double);
	double GetShelfY();
	void SetShelfY(double);
	short GetShelfDir();
	void SetShelfDir(short);

// Operations
public:
	BOOL Init(long style);
	LPDISPATCH GetpText();
	BOOL SetpText(LPDISPATCH pText);
};
/////////////////////////////////////////////////////////////////////////////
// ksDeletedCopyCollection wrapper class

class ksDeletedCopyCollection : public COleDispatchDriver
{
public:
	ksDeletedCopyCollection() {}		// Calls COleDispatchDriver default constructor
	ksDeletedCopyCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDeletedCopyCollection(const ksDeletedCopyCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL refresh();
	long GetCount();
	BOOL First(long* index1, long* index2);
	BOOL Last(long* index1, long* index2);
	BOOL Next(long* index1, long* index2);
	BOOL Prev(long* index1, long* index2);
	BOOL GetByIndex(long index, long* index1, long* index2);
	BOOL Clear();
	BOOL Add(long index1, long index2);
	BOOL AddAt(long index1, long index2, long index);
	BOOL DetachByIndex(long index);
	BOOL DetachByBody(long index1, long index2);
	BOOL SetByIndex(long index1, long index2, long index);
	long FindIt(long index1, long index2);
};
/////////////////////////////////////////////////////////////////////////////
// ksCopyObjectParam wrapper class

class ksCopyObjectParam : public COleDispatchDriver
{
public:
	ksCopyObjectParam() {}		// Calls COleDispatchDriver default constructor
	ksCopyObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCopyObjectParam(const ksCopyObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetObjRef();
	void SetObjRef(long);
	double GetXOld();
	void SetXOld(double);
	double GetYOld();
	void SetYOld(double);
	double GetXNew();
	void SetXNew(double);
	double GetYNew();
	void SetYNew(double);
	double GetScale();
	void SetScale(double);
	double GetAngle();
	void SetAngle(double);
	BOOL GetAttrCopy();
	void SetAttrCopy(BOOL);
	BOOL GetDimLineScale();
	void SetDimLineScale(BOOL);
	BOOL GetSpcObjCopy();
	void SetSpcObjCopy(BOOL);
	BOOL GetStoragesCopy();
	void SetStoragesCopy(BOOL);
	BOOL GetHyperLinksCopy();
	void SetHyperLinksCopy(BOOL);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksThreadDefinition wrapper class

class ksThreadDefinition : public COleDispatchDriver
{
public:
	ksThreadDefinition() {}		// Calls COleDispatchDriver default constructor
	ksThreadDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksThreadDefinition(const ksThreadDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetDr();
	void SetDr(double);
	double GetLength();
	void SetLength(double);
	double GetP();
	void SetP(double);
	BOOL GetAutoDefinDr();
	void SetAutoDefinDr(BOOL);
	BOOL GetAllLength();
	void SetAllLength(BOOL);
	BOOL GetFaceValue();
	void SetFaceValue(BOOL);

// Operations
public:
	BOOL GetOutside();
	LPDISPATCH GetBaseObject();
	BOOL SetBaseObject(LPDISPATCH obj);
	LPDISPATCH GetFaceBegin();
	BOOL SetFaceBegin(LPDISPATCH face);
	LPDISPATCH GetFaceEnd();
	BOOL SetFaceEnd(LPDISPATCH face);
};
/////////////////////////////////////////////////////////////////////////////
// ksOverlapObjectOptions wrapper class

class ksOverlapObjectOptions : public COleDispatchDriver
{
public:
	ksOverlapObjectOptions() {}		// Calls COleDispatchDriver default constructor
	ksOverlapObjectOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksOverlapObjectOptions(const ksOverlapObjectOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetOverlap();
	void SetOverlap(BOOL);
	double GetGap();
	void SetGap(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksObjectsFilter3D wrapper class

class ksObjectsFilter3D : public COleDispatchDriver
{
public:
	ksObjectsFilter3D() {}		// Calls COleDispatchDriver default constructor
	ksObjectsFilter3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksObjectsFilter3D(const ksObjectsFilter3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetFilterAll();
	void SetFilterAll(BOOL);
	BOOL GetFilterFaces();
	void SetFilterFaces(BOOL);
	BOOL GetFilterEdges();
	void SetFilterEdges(BOOL);
	BOOL GetFilterVertexs();
	void SetFilterVertexs(BOOL);
	BOOL GetFilterCPlanes();
	void SetFilterCPlanes(BOOL);
	BOOL GetFilterCAxis();
	void SetFilterCAxis(BOOL);

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ksParametrizationParam wrapper class

class ksParametrizationParam : public COleDispatchDriver
{
public:
	ksParametrizationParam() {}		// Calls COleDispatchDriver default constructor
	ksParametrizationParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksParametrizationParam(const ksParametrizationParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetNearestPoints();
	void SetNearestPoints(BOOL);
	double GetPointsLimit();
	void SetPointsLimit(double);
	BOOL GetHorizontal();
	void SetHorizontal(BOOL);
	BOOL GetVertical();
	void SetVertical(BOOL);
	BOOL GetParallel();
	void SetParallel(BOOL);
	BOOL GetPerpendicular();
	void SetPerpendicular(BOOL);
	double GetAngleLimit();
	void SetAngleLimit(double);

// Operations
public:
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksMacro3DDefinition wrapper class

class ksMacro3DDefinition : public COleDispatchDriver
{
public:
	ksMacro3DDefinition() {}		// Calls COleDispatchDriver default constructor
	ksMacro3DDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMacro3DDefinition(const ksMacro3DDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetStaffVisible();
	void SetStaffVisible(BOOL);
	BOOL GetDoubleClickEditOff();
	void SetDoubleClickEditOff(BOOL);

// Operations
public:
	LPDISPATCH FeatureCollection();
	BOOL Destroy();
	BOOL Add(LPDISPATCH obj);
	BOOL SetUserParam(LPDISPATCH userPars);
	long GetUserParamSize();
	BOOL GetUserParam(LPDISPATCH userPars);
	BOOL SetObject(long index, LPDISPATCH obj);
	LPDISPATCH GetObject(long index);
	long GetCountObj();
	BOOL ClearAllObj();
};
/////////////////////////////////////////////////////////////////////////////
// ksAxisConefaceDefinition wrapper class

class ksAxisConefaceDefinition : public COleDispatchDriver
{
public:
	ksAxisConefaceDefinition() {}		// Calls COleDispatchDriver default constructor
	ksAxisConefaceDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAxisConefaceDefinition(const ksAxisConefaceDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetFace(LPDISPATCH face);
	LPDISPATCH GetFace();
	LPDISPATCH GetCurve3D();
};
/////////////////////////////////////////////////////////////////////////////
// ksUnionComponentsDefinition wrapper class

class ksUnionComponentsDefinition : public COleDispatchDriver
{
public:
	ksUnionComponentsDefinition() {}		// Calls COleDispatchDriver default constructor
	ksUnionComponentsDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksUnionComponentsDefinition(const ksUnionComponentsDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH PartArray();
};
/////////////////////////////////////////////////////////////////////////////
// ksMoldCavityDefinition wrapper class

class ksMoldCavityDefinition : public COleDispatchDriver
{
public:
	ksMoldCavityDefinition() {}		// Calls COleDispatchDriver default constructor
	ksMoldCavityDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksMoldCavityDefinition(const ksMoldCavityDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetScale();
	void SetScale(double);

// Operations
public:
	LPDISPATCH PartArray();
	LPDISPATCH GetScaleCentre();
	BOOL SetScaleCentre(LPDISPATCH vert);
};
/////////////////////////////////////////////////////////////////////////////
// ksCoordinate3dCollection wrapper class

class ksCoordinate3dCollection : public COleDispatchDriver
{
public:
	ksCoordinate3dCollection() {}		// Calls COleDispatchDriver default constructor
	ksCoordinate3dCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksCoordinate3dCollection(const ksCoordinate3dCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	BOOL GetByIndex(long index, double* x, double* y, double* z);
	BOOL GetSafeArray(VARIANT* array);
};
/////////////////////////////////////////////////////////////////////////////
// ksIntersectionResult wrapper class

class ksIntersectionResult : public COleDispatchDriver
{
public:
	ksIntersectionResult() {}		// Calls COleDispatchDriver default constructor
	ksIntersectionResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksIntersectionResult(const ksIntersectionResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	long GetIntersectionType(long index);
};
/////////////////////////////////////////////////////////////////////////////
// ksPlaneMiddleDefinition wrapper class

class ksPlaneMiddleDefinition : public COleDispatchDriver
{
public:
	ksPlaneMiddleDefinition() {}		// Calls COleDispatchDriver default constructor
	ksPlaneMiddleDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPlaneMiddleDefinition(const ksPlaneMiddleDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetPosition();
	void SetPosition(BOOL);

// Operations
public:
	BOOL SetObject(long number, LPDISPATCH val);
	LPDISPATCH GetObject(long number);
	LPDISPATCH GetSurface();
};
/////////////////////////////////////////////////////////////////////////////
// ksControlPointDefinition wrapper class

class ksControlPointDefinition : public COleDispatchDriver
{
public:
	ksControlPointDefinition() {}		// Calls COleDispatchDriver default constructor
	ksControlPointDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksControlPointDefinition(const ksControlPointDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetVertex(LPDISPATCH val);
	LPDISPATCH GetVertex();
	BOOL GetPoint(double* x, double* y, double* z);
};
/////////////////////////////////////////////////////////////////////////////
// ksConjunctivePointDefinition wrapper class

class ksConjunctivePointDefinition : public COleDispatchDriver
{
public:
	ksConjunctivePointDefinition() {}		// Calls COleDispatchDriver default constructor
	ksConjunctivePointDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksConjunctivePointDefinition(const ksConjunctivePointDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetDirection();
	void SetDirection(BOOL);

// Operations
public:
	BOOL SetVertex(LPDISPATCH val);
	LPDISPATCH GetVertex();
	BOOL SetEdge(LPDISPATCH val);
	LPDISPATCH GetEdge();
	BOOL GetPoint(double* x, double* y, double* z);
};
/////////////////////////////////////////////////////////////////////////////
// ksChooseBodies wrapper class

class ksChooseBodies : public COleDispatchDriver
{
public:
	ksChooseBodies() {}		// Calls COleDispatchDriver default constructor
	ksChooseBodies(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksChooseBodies(const ksChooseBodies& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetChooseBodiesType();
	void SetChooseBodiesType(long);

// Operations
public:
	LPDISPATCH BodyCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksAggregateDefinition wrapper class

class ksAggregateDefinition : public COleDispatchDriver
{
public:
	ksAggregateDefinition() {}		// Calls COleDispatchDriver default constructor
	ksAggregateDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksAggregateDefinition(const ksAggregateDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetBooleanType();
	void SetBooleanType(long);

// Operations
public:
	LPDISPATCH BodyCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksChangeLeaderParam wrapper class

class ksChangeLeaderParam : public COleDispatchDriver
{
public:
	ksChangeLeaderParam() {}		// Calls COleDispatchDriver default constructor
	ksChangeLeaderParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksChangeLeaderParam(const ksChangeLeaderParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	double GetX();
	void SetX(double);
	double GetY();
	void SetY(double);
	short GetSignType();
	void SetSignType(short);
	double GetSignHeight();
	void SetSignHeight(double);
	double GetLeaderLength();
	void SetLeaderLength(double);
	long GetStyle();
	void SetStyle(long);

// Operations
public:
	LPDISPATCH GetpTextline();
	BOOL SetpTextline(LPDISPATCH pTextLine);
	LPDISPATCH GetpPolyline();
	BOOL SetpPolyline(LPDISPATCH pPolyline);
	BOOL Init();
};
/////////////////////////////////////////////////////////////////////////////
// ksChooseParts wrapper class

class ksChooseParts : public COleDispatchDriver
{
public:
	ksChooseParts() {}		// Calls COleDispatchDriver default constructor
	ksChooseParts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksChooseParts(const ksChooseParts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetChoosePartsType();
	void SetChoosePartsType(long);

// Operations
public:
	LPDISPATCH PartCollection();
};
/////////////////////////////////////////////////////////////////////////////
// ksBodyParts wrapper class

class ksBodyParts : public COleDispatchDriver
{
public:
	ksBodyParts() {}		// Calls COleDispatchDriver default constructor
	ksBodyParts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksBodyParts(const ksBodyParts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetAllSelected();
	void SetAllSelected(BOOL);

// Operations
public:
	BOOL UserBodyPartsChoice();
	long GetCount();
	BOOL SetPartSelected(long index, BOOL Select);
	BOOL GetPartSelected(long index);
	BOOL SetGreatPartsSelected();
};

#endif
