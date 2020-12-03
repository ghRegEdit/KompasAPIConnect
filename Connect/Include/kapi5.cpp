// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "kapi5.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// KompasObject properties

BOOL KompasObject::GetVisible()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void KompasObject::SetVisible(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

long KompasObject::GetLookStyle()
{
	long result;
	GetProperty(0x63, VT_I4, (void*)&result);
	return result;
}

void KompasObject::SetLookStyle(long propVal)
{
	SetProperty(0x63, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// KompasObject operations

LPDISPATCH KompasObject::Document3D()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::ActiveDocument3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::Document2D()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::ActiveDocument2D()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::DataBaseObject()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::GetIterator()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::GetMathematic2D()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::GetParamStruct(short structType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		structType);
	return result;
}

LPDISPATCH KompasObject::SpcDocument()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::SpcActiveDocument()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksMessage(LPCTSTR s)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		s);
	return result;
}

BOOL KompasObject::ksError(LPCTSTR s)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		s);
	return result;
}

BOOL KompasObject::ksEnableTaskAccess(long enabl)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		enabl);
	return result;
}

long KompasObject::ksReturnResult()
{
	long result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksResultNULL()
{
	long result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksIsEnableTaskAccess()
{
	long result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksMessageBoxResult()
{
	BOOL result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long KompasObject::ksDrawSlide(long HWindow, long sldID)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, sldID);
	return result;
}

CString KompasObject::ksStrResult()
{
	CString result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long KompasObject::ksGetHWindow()
{
	long result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksGetWorkWindowColor()
{
	long result;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksPumpWaitingMessages()
{
	BOOL result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long KompasObject::ksSetCriticalProcess()
{
	long result;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString KompasObject::ksChoiceFile(LPCTSTR ext, LPCTSTR filter, BOOL preview)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		ext, filter, preview);
	return result;
}

long KompasObject::ksDrawBitmap(long HWindow, long sldID)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, sldID);
	return result;
}

long KompasObject::ksYesNo(LPCTSTR s)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		s);
	return result;
}

long KompasObject::ksDrawSlideFromFile(long HWindow, LPCTSTR fileName)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, fileName);
	return result;
}

long KompasObject::ksWriteSlide(LPCTSTR fileName, long iD, double x, double y)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, iD, x, y);
	return result;
}

BOOL KompasObject::ksSlideBackground(long color)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		color);
	return result;
}

long KompasObject::ksReadDouble(LPCTSTR mess, double defValue, double min, double max, double* value)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8 VTS_R8 VTS_PR8;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		mess, defValue, min, max, value);
	return result;
}

long KompasObject::ksReadInt(LPCTSTR mess, long defValue, long min, long max, long* value)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_PI4;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		mess, defValue, min, max, value);
	return result;
}

CString KompasObject::ksReadString(LPCTSTR mess, LPCTSTR value)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		mess, value);
	return result;
}

CString KompasObject::ksFullFileName(LPCTSTR oldName)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		oldName);
	return result;
}

CString KompasObject::ksUniqueFileName()
{
	CString result;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksRemoveUniqueFile(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL KompasObject::ksSystemControlStop()
{
	BOOL result;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long KompasObject::ksSystemControlStart(LPCTSTR menuCommand)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		menuCommand);
	return result;
}

LPDISPATCH KompasObject::GetDynamicArray(long type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		type);
	return result;
}

CString KompasObject::ksChoiceFileAppointedDir(LPCTSTR ext, LPCTSTR filter, BOOL preview, long typeDir)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL VTS_I4;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		ext, filter, preview, typeDir);
	return result;
}

long KompasObject::ksChoiceFiles(LPCTSTR ext, LPCTSTR filter, LPDISPATCH p, BOOL preview)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ext, filter, p, preview);
	return result;
}

CString KompasObject::ksSaveFile(LPCTSTR ext, LPCTSTR oldName, LPCTSTR filter, BOOL preview)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		ext, oldName, filter, preview);
	return result;
}

LPDISPATCH KompasObject::GetAttributeObject()
{
	LPDISPATCH result;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long KompasObject::ksRefreshActiveWindow()
{
	long result;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString KompasObject::ksSystemPath(long pathType)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		pathType);
	return result;
}

CString KompasObject::ksGetRelativePathFromSystemPath(LPCTSTR sourcePath, long pathType)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		sourcePath, pathType);
	return result;
}

CString KompasObject::ksGetFullPathFromSystemPath(LPCTSTR relativePath, long pathType)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		relativePath, pathType);
	return result;
}

CString KompasObject::ksGetRelativePathFromFullPath(LPCTSTR mainFilePath, LPCTSTR sourcePath)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		mainFilePath, sourcePath);
	return result;
}

CString KompasObject::ksGetFullPathFromRelativePath(LPCTSTR mainFilePath, LPCTSTR relativePath)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		mainFilePath, relativePath);
	return result;
}

long KompasObject::ksGetSystemVersion(long* iMajor, long* iMinor, long* iRelease, long* iBuild)
{
	long result;
	static BYTE parms[] =
		VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		iMajor, iMinor, iRelease, iBuild);
	return result;
}

CString KompasObject::ksGetSystemProfileString(LPCTSTR lpSection, LPCTSTR lpKey)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		lpSection, lpKey);
	return result;
}

BOOL KompasObject::ksOpenHelpFile(LPCTSTR file, long command, long iD)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		file, command, iD);
	return result;
}

long KompasObject::ksSetSysOptions(long optionsType, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		optionsType, param);
	return result;
}

long KompasObject::ksGetSysOptions(long optionsType, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		optionsType, param);
	return result;
}

long KompasObject::ksPrintPreviewWindow(LPDISPATCH docsArr, long inquiry)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x37, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		docsArr, inquiry);
	return result;
}

LPDISPATCH KompasObject::ksGetLibraryStylesArray(LPCTSTR libraryName, short libraryType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I2;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		libraryName, libraryType);
	return result;
}

double KompasObject::ksViewGetDensity(long HWindow)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		HWindow);
	return result;
}

long KompasObject::ksCalculate(LPCTSTR s, double* rez)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_PR8;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		s, rez);
	return result;
}

long KompasObject::ksCalculateReset()
{
	long result;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksExecuteLibraryCommand(LPCTSTR fileName, long command)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, command);
	return result;
}

long KompasObject::ksGetQualityNames(LPDISPATCH names, double dimValue, double high, double low, short system, short withLimitation)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_I2;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		names, dimValue, high, low, system, withLimitation);
	return result;
}

long KompasObject::ksGetQualityDefects(LPCTSTR name, double dimValue, double* high, double* low, short inMM)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_PR8 VTS_PR8 VTS_I2;
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name, dimValue, high, low, inMM);
	return result;
}

long KompasObject::ksGetQualityContensParam(LPCTSTR name, LPDISPATCH param, short inMM)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH VTS_I2;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name, param, inMM);
	return result;
}

LPDISPATCH KompasObject::ksGet3dDocumentFromRef(long doc)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		doc);
	return result;
}

LPDISPATCH KompasObject::GetModelLibrary()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::GetFragmentLibrary()
{
	LPDISPATCH result;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long KompasObject::ksIsLibraryEnabled(LPCTSTR libName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName);
	return result;
}

long KompasObject::ksIsModuleSpecificationActive()
{
	long result;
	InvokeHelper(0x44, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksModuleSpecification(BOOL attach)
{
	long result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x45, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		attach);
	return result;
}

CString KompasObject::ksMaterialDlg(long HWindow, long* res, double* plt, double* kod_size_1, double* kod_size_2, double* kod_size_3, double* kod_size_4, LPCTSTR kod_tip)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_BSTR;
	InvokeHelper(0x46, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		HWindow, res, plt, kod_size_1, kod_size_2, kod_size_3, kod_size_4, kod_tip);
	return result;
}

CString KompasObject::ksExecDialPredefinedText(long HWindow, long* res)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4;
	InvokeHelper(0x47, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		HWindow, res);
	return result;
}

long KompasObject::ksDrawSlideEx(long HWindow, long sldID, long hInst)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, sldID, hInst);
	return result;
}

CString KompasObject::ksViewGetDensityAndMaterial(double* density, long HWindow)
{
	CString result;
	static BYTE parms[] =
		VTS_PR8 VTS_I4;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		density, HWindow);
	return result;
}

CString KompasObject::ksConvertLangStr(LPCTSTR src)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		src);
	return result;
}

BOOL KompasObject::ksConvertLangWindow(long hWnd)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		hWnd);
	return result;
}

long KompasObject::ksConvertLangMenu(long hMenu)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hMenu);
	return result;
}

CString KompasObject::ksEditTextLine(long HWindow, long* res, LPCTSTR str)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_BSTR;
	InvokeHelper(0x4d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		HWindow, res, str);
	return result;
}

long KompasObject::ksGetDocOptions(long optionsType, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x4e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		optionsType, param);
	return result;
}

long KompasObject::ksAttachKompasLibrary(LPCTSTR libName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName);
	return result;
}

long KompasObject::ksDetachKompasLibrary(long libId)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x50, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libId);
	return result;
}

long KompasObject::ksExecuteKompasLibraryCommand(long libId, long command)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x51, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libId, command);
	return result;
}

void KompasObject::Quit()
{
	InvokeHelper(0x52, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long KompasObject::ksPrintKompasDocument(LPCTSTR fileName, LPCTSTR toFile, double scale)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0x53, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, toFile, scale);
	return result;
}

long KompasObject::ksDrawKompasDocument(long HWindow, LPCTSTR docFileName)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x54, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, docFileName);
	return result;
}

BOOL KompasObject::ksSetFlagDisableLockApp(BOOL setDisableLockApp)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x55, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		setDisableLockApp);
	return result;
}

BOOL KompasObject::ActivateControllerAPI()
{
	BOOL result;
	InvokeHelper(0x56, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::DocumentTxt()
{
	LPDISPATCH result;
	InvokeHelper(0x57, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::ActiveDocumentTxt()
{
	LPDISPATCH result;
	InvokeHelper(0x58, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksGetLibraryTreeStruct(LPCTSTR libName, LPDISPATCH p)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x59, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, p);
	return result;
}

long KompasObject::ksSetDocOptions(long optionsType, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x5a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		optionsType, param);
	return result;
}

long KompasObject::ksGetDocumentType(long doc)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		doc);
	return result;
}

long KompasObject::ksDrawKompasDocumentByReference(long HWindow, long pDoc)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x5c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, pDoc);
	return result;
}

LPDISPATCH KompasObject::ksExecDialPredefinedTextEx(long HWindow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		HWindow);
	return result;
}

long KompasObject::ksGetDocumentTypeByName(LPCTSTR fileName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName);
	return result;
}

LPDISPATCH KompasObject::ksGetDocumentByReference(long docRef)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		docRef);
	return result;
}

CString KompasObject::ksConvertLangStrEx(long hInstance, long strID)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x60, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hInstance, strID);
	return result;
}

BOOL KompasObject::ksConvertLangWindowEx(long hWnd, long hInstance, LPCTSTR dlgID)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x61, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		hWnd, hInstance, dlgID);
	return result;
}

BOOL KompasObject::LoadDSK()
{
	BOOL result;
	InvokeHelper(0x62, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::GetObjectsFilter3D()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long KompasObject::ksExecuteKompasLibraryCommandEx(long libId, long command, LPDISPATCH external)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libId, command, external);
	return result;
}

LPDISPATCH KompasObject::ksGetExternaldispinterface()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH KompasObject::ksGetApplication7()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long KompasObject::ksDrawBitmapEx(long HWindow, long bmpID, long hInst)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, bmpID, hInst);
	return result;
}

long KompasObject::ksGetSystemControlStartResult()
{
	long result;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksIsModule3DActive()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long KompasObject::ksModule3D(BOOL attach)
{
	long result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		attach);
	return result;
}

LPUNKNOWN KompasObject::TransferInterface(LPUNKNOWN obj, long apiNewType, long objNewType)
{
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_UNKNOWN VTS_I4 VTS_I4;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		obj, apiNewType, objNewType);
	return result;
}

BOOL KompasObject::ksExecuteKompasCommand(long commandID, BOOL post)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		commandID, post);
	return result;
}

BOOL KompasObject::ksIsKompasCommandEnable(long commandID)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		commandID);
	return result;
}

long KompasObject::ksIsKompasCommandCheck(long commandID)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		commandID);
	return result;
}

LPUNKNOWN KompasObject::TransferReference(long obj, long docRef)
{
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		obj, docRef);
	return result;
}

long KompasObject::ksDrawKompasText(long HWindow, LPCTSTR text)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, text);
	return result;
}

long KompasObject::ksPrintKompasDocumentEx(LPCTSTR fileName, LPCTSTR toFile, double scale, BOOL FKompasPrinter)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_R8 VTS_BOOL;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, toFile, scale, FKompasPrinter);
	return result;
}

long KompasObject::ksExecDialSpecialSymbol(long HWindow)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow);
	return result;
}

CString KompasObject::ksExecDialSymbol(long HWindow, long* symb, LPCTSTR font)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_BSTR;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		HWindow, symb, font);
	return result;
}

BOOL KompasObject::ksSetDebugMessagesMode(BOOL debugMode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		debugMode);
	return result;
}

BOOL KompasObject::ksClearFileCache()
{
	BOOL result;
	InvokeHelper(0x76, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksLockFileCache(BOOL lock)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x77, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		lock);
	return result;
}

BOOL KompasObject::ksIsHomeVersion()
{
	BOOL result;
	InvokeHelper(0x78, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL KompasObject::ksIsModule2DActive()
{
	BOOL result;
	InvokeHelper(0x79, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocument2D properties

long ksDocument2D::GetReference()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksDocument2D::SetReference(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

BOOL ksDocument2D::GetOrthoMode()
{
	BOOL result;
	GetProperty(0xd4, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument2D::SetOrthoMode(BOOL propVal)
{
	SetProperty(0xd4, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDocument2D operations

long ksDocument2D::ksLineSeg(double x1, double y1, double x2, double y2, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, style);
	return result;
}

long ksDocument2D::ksRectangle(LPDISPATCH par, short centre)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I2;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, centre);
	return result;
}

long ksDocument2D::ksCircle(double xc, double yc, double rad, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		xc, yc, rad, style);
	return result;
}

long ksDocument2D::ksArcByAngle(double xc, double yc, double rad, double f1, double f2, short direction, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		xc, yc, rad, f1, f2, direction, style);
	return result;
}

long ksDocument2D::ksArcByPoint(double xc, double yc, double rad, double x1, double y1, double x2, double y2, short direction, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		xc, yc, rad, x1, y1, x2, y2, direction, style);
	return result;
}

long ksDocument2D::ksArcBy3Points(double x1, double y1, double x2, double y2, double x3, double y3, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, x3, y3, style);
	return result;
}

long ksDocument2D::ksGetObjParam(long ref, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, param, parType);
	return result;
}

long ksDocument2D::ksSetObjParam(long referObj, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		referObj, param, parType);
	return result;
}

long ksDocument2D::ksContour(long style)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		style);
	return result;
}

long ksDocument2D::ksMacro(short type)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type);
	return result;
}

long ksDocument2D::ksParagraph(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksTextLine(LPDISPATCH textItem)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		textItem);
	return result;
}

long ksDocument2D::ksUpdateMacro(long macro, long gr)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro, gr);
	return result;
}

long ksDocument2D::ksLine(double x, double y, double angle)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, angle);
	return result;
}

long ksDocument2D::ksPoint(double x, double y, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, style);
	return result;
}

long ksDocument2D::ksText(double x, double y, double ang, double hStr, double ksuStr, long bitVector, LPCTSTR s)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_BSTR;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, ang, hStr, ksuStr, bitVector, s);
	return result;
}

long ksDocument2D::ksHatchByParam(LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		param);
	return result;
}

long ksDocument2D::ksEndObj()
{
	long result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksLayer(long n)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		n);
	return result;
}

long ksDocument2D::ksGetLayerNumber(long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksGetLayerReference(long number)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		number);
	return result;
}

long ksDocument2D::ksChangeObjectLayer(long obj, long number)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj, number);
	return result;
}

long ksDocument2D::ksNewGroup(short type)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type);
	return result;
}

long ksDocument2D::ksEndGroup()
{
	long result;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksMakeEncloseContours(long gr, double x, double y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		gr, x, y);
	return result;
}

long ksDocument2D::ksIsCursorOrPlacementDocument()
{
	long result;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksIsActiveProcessRunnig()
{
	long result;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksPhantomShowHide(LPCTSTR show)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		show);
	return result;
}

long ksDocument2D::ksGetCursorPosition(double* x, double* y, long type)
{
	long result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_I4;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, type);
	return result;
}

long ksDocument2D::ksKeepReference(long r)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		r);
	return result;
}

long ksDocument2D::ksGetMacroParamSize(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksDocument2D::ksEditMacroMode()
{
	long result;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksDeleteObj(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksDocument2D::ksMoveObj(long ref, double x, double y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, x, y);
	return result;
}

long ksDocument2D::ksRotateObj(long ref, double x, double y, double angle)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, x, y, angle);
	return result;
}

long ksDocument2D::ksTransformObj(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksDocument2D::ksLightObj(long ref, short light)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, light);
	return result;
}

long ksDocument2D::ksFindObj(double x, double y, double limit)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, limit);
	return result;
}

long ksDocument2D::ksSymmetryObj(long ref, double x1, double y1, double x2, double y2, LPCTSTR copy)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_BSTR;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, x1, y1, x2, y2, copy);
	return result;
}

long ksDocument2D::ksCopyObj(long ref, double xOld, double yOld, double xNew, double yNew, double scale, double angle)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, xOld, yOld, xNew, yNew, scale, angle);
	return result;
}

long ksDocument2D::ksCreateViewObject(long type)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type);
	return result;
}

long ksDocument2D::ksEditViewObject(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksDocument2D::ksAnnLineSeg(double x1, double y1, double x2, double y2, short term1, short term2, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_I2 VTS_I4;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, term1, term2, style);
	return result;
}

long ksDocument2D::ksPointArraw(double x, double y, double ang, short term)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_I2;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, ang, term);
	return result;
}

long ksDocument2D::ksAnnArcByPoint(double xc, double yc, double rad, double x1, double y1, double x2, double y2, short direction, short term1, short term2, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_I2 VTS_I2 VTS_I4;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		xc, yc, rad, x1, y1, x2, y2, direction, term1, term2, style);
	return result;
}

long ksDocument2D::ksEllipse(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksEllipseArc(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksParEllipseArc(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksEquidistant(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksIsPointInsideContour(long p, double x, double y, double precision)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, x, y, precision);
	return result;
}

long ksDocument2D::ksConvertTextToCurve(long text)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		text);
	return result;
}

long ksDocument2D::ksStoreTmpGroup(long g)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g);
	return result;
}

long ksDocument2D::ksOpenMacro(long macro)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro);
	return result;
}

long ksDocument2D::ksAddObjectToMacro(long macro, long obj)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x37, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro, obj);
	return result;
}

long ksDocument2D::ksHatch(long style, double angle, double step, double width, double x0, double y0)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		style, angle, step, width, x0, y0);
	return result;
}

long ksDocument2D::ksColouring(long color)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		color);
	return result;
}

long ksDocument2D::ksDuplicateBoundaries(long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksNurbsPoint(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksNurbsKnot(double knot)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		knot);
	return result;
}

long ksDocument2D::ksNurbs(short degree, BOOL close, long style)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_BOOL VTS_I4;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		degree, close, style);
	return result;
}

long ksDocument2D::ksRegularPolygon(LPDISPATCH par, short centre)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I2;
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, centre);
	return result;
}

long ksDocument2D::ksClearGroup(long g, BOOL deleteTmp)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g, deleteTmp);
	return result;
}

long ksDocument2D::ksExcludeObjGroup(long g, long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g, p);
	return result;
}

long ksDocument2D::ksAddObjGroup(long g, long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g, p);
	return result;
}

long ksDocument2D::ksSaveGroup(long g, LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g, name);
	return result;
}

long ksDocument2D::ksSelectGroup(long g, short selectMode, double xmin, double ymin, double xmax, double ymax)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g, selectMode, xmin, ymin, xmax, ymax);
	return result;
}

long ksDocument2D::ksExistGroupObj(long g)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x44, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g);
	return result;
}

long ksDocument2D::ksWriteGroupToClip(long g, BOOL copy)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x45, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		g, copy);
	return result;
}

long ksDocument2D::ksGetGroup(LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x46, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name);
	return result;
}

long ksDocument2D::ksReadGroupFromClip()
{
	long result;
	InvokeHelper(0x47, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksConicArc(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksCentreMarker(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksBezier(short closed, long style)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_I4;
	InvokeHelper(0x4a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		closed, style);
	return result;
}

long ksDocument2D::ksBezierPoint(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksGetStyleParam(short type, short styleId, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type, styleId, param);
	return result;
}

long ksDocument2D::ksInsertRaster(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksLinDimension(LPDISPATCH linPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		linPar);
	return result;
}

long ksDocument2D::ksAngDimension(LPDISPATCH angPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		angPar);
	return result;
}

long ksDocument2D::ksDiamDimension(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x50, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksRadDimension(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x51, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksRadBreakDimension(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x52, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksOrdinatedDimension(LPDISPATCH ordPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x53, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ordPar);
	return result;
}

long ksDocument2D::ksAddStyle(short type, LPDISPATCH param, short copy)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH VTS_I2;
	InvokeHelper(0x54, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type, param, copy);
	return result;
}

long ksDocument2D::ksIsStyleInDocument(short type, LPDISPATCH param, short copy)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH VTS_I2;
	InvokeHelper(0x55, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type, param, copy);
	return result;
}

long ksDocument2D::ksDeleteStyleFromDocument(short type, LPDISPATCH param, short copy)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH VTS_I2;
	InvokeHelper(0x56, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type, param, copy);
	return result;
}

long ksDocument2D::ksExistObj(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x57, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksDocument2D::ksGetObjGabaritRect(long p, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x58, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, par);
	return result;
}

long ksDocument2D::ksSheetToView(double x, double y, double* outX, double* outY)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x59, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, outX, outY);
	return result;
}

long ksDocument2D::ksViewToSheet(double x, double y, double* outX, double* outY)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x5a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, outX, outY);
	return result;
}

long ksDocument2D::ksPolyline(long style)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		style);
	return result;
}

long ksDocument2D::ksPolylineByParam(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksGetReferenceDocumentPart(short t)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x5d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		t);
	return result;
}

long ksDocument2D::ksGetViewReference(long number)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		number);
	return result;
}

long ksDocument2D::ksGetViewNumber(long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksOpenView(long number)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x60, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		number);
	return result;
}

long ksDocument2D::ksNewViewNumber()
{
	long result;
	InvokeHelper(0x61, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksCreateSheetView(LPDISPATCH par, long* number)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PI4;
	InvokeHelper(0x62, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, number);
	return result;
}

long ksDocument2D::ksDecomposeObj(long p, short level, double arrow, short type)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_R8 VTS_I2;
	InvokeHelper(0x63, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, level, arrow, type);
	return result;
}

long ksDocument2D::ksGetViewObjCount(long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksLinBreakDimension(LPDISPATCH linPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		linPar);
	return result;
}

long ksDocument2D::ksAngBreakDimension(LPDISPATCH angPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		angPar);
	return result;
}

long ksDocument2D::ksIsCurveClosed(long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksBase(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksRough(LPDISPATCH roughPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		roughPar);
	return result;
}

CString ksDocument2D::ksGetGroupName(long gr, long* group, long size)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_I4;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		gr, group, size);
	return result;
}

long ksDocument2D::ksMtr(double x, double y, double angle, double scaleX, double scaleY)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, angle, scaleX, scaleY);
	return result;
}

long ksDocument2D::ksDeleteMtr()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksPointIntoMtr(double x, double y, double* xn, double* yn)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, xn, yn);
	return result;
}

long ksDocument2D::ksPointFromMtr(double x, double y, double* xn, double* yn)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, xn, yn);
	return result;
}

long ksDocument2D::ksLengthIntoMtr(double* len)
{
	long result;
	static BYTE parms[] =
		VTS_PR8;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		len);
	return result;
}

long ksDocument2D::ksLengthFromMtr(double* len)
{
	long result;
	static BYTE parms[] =
		VTS_PR8;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		len);
	return result;
}

long ksDocument2D::ksLeader(LPDISPATCH leaderPar)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		leaderPar);
	return result;
}

long ksDocument2D::ksPositionLeader(LPDISPATCH posLeaderParam)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		posLeaderParam);
	return result;
}

long ksDocument2D::ksBrandLeader(LPDISPATCH brandLeaderParam)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		brandLeaderParam);
	return result;
}

long ksDocument2D::ksMarkerLeader(LPDISPATCH markerLeaderParam)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		markerLeaderParam);
	return result;
}

long ksDocument2D::ksCursor(LPDISPATCH info, double* x, double* y, LPDISPATCH phantom)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PR8 VTS_PR8 VTS_DISPATCH;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info, x, y, phantom);
	return result;
}

long ksDocument2D::ksPlacement(LPDISPATCH info, double* x, double* y, double* angle, LPDISPATCH phantom)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PR8 VTS_PR8 VTS_PR8 VTS_DISPATCH;
	InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info, x, y, angle, phantom);
	return result;
}

long ksDocument2D::ksCommandWindow(LPDISPATCH info)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x77, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info);
	return result;
}

long ksDocument2D::ksChangeObjectInLibRequest(LPDISPATCH info, LPDISPATCH phantom)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x78, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info, phantom);
	return result;
}

long ksDocument2D::ksReleaseReference(long p)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x79, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p);
	return result;
}

LPDISPATCH ksDocument2D::GetFragment()
{
	LPDISPATCH result;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksInitFilePreviewFunc(LPCTSTR funcName, long hInst, LPDISPATCH dispatchOCX)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		funcName, hInst, dispatchOCX);
	return result;
}

long ksDocument2D::ksTable()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksRebuildTableVirtualGrid()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksGetTableItemsCount(long type)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type);
	return result;
}

long ksDocument2D::ksGetTableColumnText(long* numb, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_PI4 VTS_DISPATCH;
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb, par);
	return result;
}

long ksDocument2D::ksSetTableColumnText(long numb, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x80, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb, par);
	return result;
}

long ksDocument2D::ksClearTableColumnText(long numb)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb);
	return result;
}

long ksDocument2D::ksCombineTwoTableItems(long index1, long index2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x82, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index1, index2);
	return result;
}

long ksDocument2D::ksDivideTableItem(long index, BOOL vertical, long style)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL VTS_I4;
	InvokeHelper(0x83, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, vertical, style);
	return result;
}

long ksDocument2D::ksSetTableBorderStyle(long index, short typeBorder, long style)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_I4;
	InvokeHelper(0x84, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, typeBorder, style);
	return result;
}

long ksDocument2D::ksGetTableBorderStyle(long index, short typeBorder)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2;
	InvokeHelper(0x85, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, typeBorder);
	return result;
}

long ksDocument2D::ksOpenTable(long table)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x86, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		table);
	return result;
}

long ksDocument2D::ksColumnNumber(long numb)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x87, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb);
	return result;
}

long ksDocument2D::ksSetMacroParam(long ref, LPDISPATCH userPars, BOOL dblClickOff, BOOL hotpoints, BOOL externEdit)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x88, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, userPars, dblClickOff, hotpoints, externEdit);
	return result;
}

long ksDocument2D::ksGetMacroParam(long ref, LPDISPATCH userPars)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x89, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, userPars);
	return result;
}

long ksDocument2D::ksOpenTechnicalDemand(LPDISPATCH pGab, long style)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x8a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pGab, style);
	return result;
}

long ksDocument2D::ksCloseTechnicalDemand()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksSpecRough(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksViewPointer(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksCutLine(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksApproximationCurve(long p, double eps, BOOL curentLayer, double maxRad, BOOL smooth)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_BOOL VTS_R8 VTS_BOOL;
	InvokeHelper(0x8f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, eps, curentLayer, maxRad, smooth);
	return result;
}

long ksDocument2D::ksTolerance(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x90, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksOpenTolerance(long tolerance)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x91, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		tolerance);
	return result;
}

long ksDocument2D::ksGetToleranceColumnText(long* numb, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_PI4 VTS_DISPATCH;
	InvokeHelper(0x92, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb, par);
	return result;
}

long ksDocument2D::ksSetToleranceColumnText(long numb, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x93, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb, par);
	return result;
}

long ksDocument2D::ksGetPointOnToleranceTable(long tolerance, short entry, LPDISPATCH point)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x94, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		tolerance, entry, point);
	return result;
}

BOOL ksDocument2D::ksOpenDocument(LPCTSTR nameDoc, BOOL regim)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x95, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		nameDoc, regim);
	return result;
}

BOOL ksDocument2D::ksSaveDocument(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x96, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksDocument2D::ksCloseDocument()
{
	BOOL result;
	InvokeHelper(0x97, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument2D::ksCreateDocument(LPDISPATCH par)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x98, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		par);
	return result;
}

BOOL ksDocument2D::ksMovePoint(double* x, double* y, double ang, double len)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_R8 VTS_R8;
	InvokeHelper(0x99, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, ang, len);
	return result;
}

long ksDocument2D::ksReadTableFromFile(LPCTSTR tblFileName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		tblFileName);
	return result;
}

long ksDocument2D::ksDrawKompasDocument(long HWindow, LPCTSTR docFileName)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x9b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, docFileName);
	return result;
}

long ksDocument2D::ksViewGetObjectArea()
{
	long result;
	InvokeHelper(0x9c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksGetMacroPlacement(long macro, double* x, double* y, double* angl)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x9d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro, x, y, angl);
	return result;
}

long ksDocument2D::ksSetMacroPlacement(long macro, double x, double y, double angl, long relativ)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x9e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro, x, y, angl, relativ);
	return result;
}

long ksDocument2D::ksDrawKompasGroup(long HWindow, long gr)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x9f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		HWindow, gr);
	return result;
}

LPDISPATCH ksDocument2D::ksGetDocVariableArray(long p)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksSetDocVariableArray(long obj, LPDISPATCH arr, BOOL setNote)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0xa1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj, arr, setNote);
	return result;
}

long ksDocument2D::ksGetDocOptions(long optionsType, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xa2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		optionsType, param);
	return result;
}

long ksDocument2D::ksSetObjConstraint(long obj, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xa3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj, par);
	return result;
}

LPDISPATCH ksDocument2D::ksGetObjConstraints(long obj)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		obj);
	return result;
}

long ksDocument2D::ksDestroyObjConstraint(long obj, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xa5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj, par);
	return result;
}

CString ksDocument2D::ksGetZona(double x, double y, long* result_)
{
	CString result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PI4;
	InvokeHelper(0xa6, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x, y, result_);
	return result;
}

long ksDocument2D::ksClearRegion(long grClear, long grRegion, BOOL inside)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BOOL;
	InvokeHelper(0xa7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		grClear, grRegion, inside);
	return result;
}

long ksDocument2D::ksNurbsForConicCurve(LPDISPATCH xArr, LPDISPATCH yArr, short style)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_I2;
	InvokeHelper(0xa8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		xArr, yArr, style);
	return result;
}

LPDISPATCH ksDocument2D::GetStamp()
{
	LPDISPATCH result;
	InvokeHelper(0xa9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksDocument2D::ksGetTextLength(LPCTSTR text, long style)
{
	double result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		text, style);
	return result;
}

double ksDocument2D::ksGetTextLengthFromReference(long pText)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xab, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		pText);
	return result;
}

long ksDocument2D::ksZoom(double x1, double y1, double x2, double y2)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0xac, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

long ksDocument2D::ksZoomScale(double x, double y, double scale)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, scale);
	return result;
}

long ksDocument2D::ksZoomPrevNextOrAll(short type)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xae, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type);
	return result;
}

long ksDocument2D::ksGetZoomScale(double* x, double* y, double* scale)
{
	long result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, scale);
	return result;
}

long ksDocument2D::ksSpecificationOnSheet(short onSheet)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb0, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		onSheet);
	return result;
}

LPDISPATCH ksDocument2D::GetSpecification()
{
	LPDISPATCH result;
	InvokeHelper(0xb1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksReDrawDocPart(LPDISPATCH rect, long view)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		rect, view);
	return result;
}

double ksDocument2D::ksGetCursorLimit()
{
	double result;
	InvokeHelper(0xb3, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksGetTextAlign(long pText)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pText);
	return result;
}

long ksDocument2D::ksSetTextAlign(long pText, long align)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xb5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pText, align);
	return result;
}

long ksDocument2D::ksSetTextLineAlign(short align)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		align);
	return result;
}

long ksDocument2D::ksDestroyObjects(long gr)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		gr);
	return result;
}

BOOL ksDocument2D::ksEnableUndo(BOOL enabl)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		enabl);
	return result;
}

long ksDocument2D::ksAddPowerForm(double x, double y)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0xb9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y);
	return result;
}

long ksDocument2D::ksCreatePowerArc()
{
	long result;
	InvokeHelper(0xba, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksTrimNurbs(long pObj, double tMin, double tMax)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0xbb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pObj, tMin, tMax);
	return result;
}

CString ksDocument2D::ksGetDimensionVariableName(long dimObj)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xbc, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		dimObj);
	return result;
}

long ksDocument2D::ksTrimmCurve(long curve, double x1, double y1, double x2, double y2, double x3, double y3, short deleteOldCurve)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2;
	InvokeHelper(0xbd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		curve, x1, y1, x2, y2, x3, y3, deleteOldCurve);
	return result;
}

BOOL ksDocument2D::SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0xbe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, rasterPar);
	return result;
}

LPDISPATCH ksDocument2D::RasterFormatParam()
{
	LPDISPATCH result;
	InvokeHelper(0xbf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksDocument2D::ksGetLeaderShelfLength(long leader, double* x, double* y)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8;
	InvokeHelper(0xc0, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		leader, x, y);
	return result;
}

long ksDocument2D::ksSetDocOptions(long optionsType, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xc1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		optionsType, param);
	return result;
}

long ksDocument2D::ksAxisLine(LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		param);
	return result;
}

BOOL ksDocument2D::SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0xc3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, rasterPar);
	return result;
}

long ksDocument2D::ksCreateSheetArbitraryView(LPDISPATCH par, long* number)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PI4;
	InvokeHelper(0xc4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, number);
	return result;
}

BOOL ksDocument2D::ksCreateSheetStandartViews(LPDISPATCH par, long bitVector, double dx, double dy)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0xc5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		par, bitVector, dx, dy);
	return result;
}

long ksDocument2D::ksCreateSheetProjectionView(LPDISPATCH par, long* number, long view)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PI4 VTS_I4;
	InvokeHelper(0xc6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, number, view);
	return result;
}

long ksDocument2D::ksCreateSheetArrowView(LPDISPATCH par, long* number, long obj)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PI4 VTS_I4;
	InvokeHelper(0xc7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, number, obj);
	return result;
}

long ksDocument2D::ksCreateSheetSectionView(LPDISPATCH par, long* number, long obj)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PI4 VTS_I4;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, number, obj);
	return result;
}

long ksDocument2D::ksCreateSheetRemoteView(LPDISPATCH par, long* number, long obj)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PI4 VTS_I4;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, number, obj);
	return result;
}

BOOL ksDocument2D::ksRebuildDocument()
{
	BOOL result;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksRemoteElement(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksCopyObjEx(LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		param);
	return result;
}

LPUNKNOWN ksDocument2D::GetObject2DNotify(long objType)
{
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		objType);
	return result;
}

LPUNKNOWN ksDocument2D::GetSelectionMngNotify()
{
	LPUNKNOWN result;
	InvokeHelper(0xce, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument2D::GetObject2DNotifyResult()
{
	LPDISPATCH result;
	InvokeHelper(0xcf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPUNKNOWN ksDocument2D::GetDocument2DNotify()
{
	LPUNKNOWN result;
	InvokeHelper(0xd0, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksSetMaterialParam(LPDISPATCH material, double density)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_R8;
	InvokeHelper(0xd1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		material, density);
	return result;
}

long ksDocument2D::ksChangeObjectsOrder(long group, long obj, long type)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xd2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		group, obj, type);
	return result;
}

long ksDocument2D::ksIsSlaveSpcOpened()
{
	long result;
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument2D::ksGetMacroWaitDblClickEdit(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksDocument2D::ksSetMacroWaitDblClickEdit(long ref, long waitDblClick)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xd6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, waitDblClick);
	return result;
}

long ksDocument2D::ksParametrizeObjects(long obj, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xd7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj, par);
	return result;
}

long ksDocument2D::ksCursorEx(LPDISPATCH info, double* x, double* y, LPDISPATCH phantom, LPDISPATCH processParam)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PR8 VTS_PR8 VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xd8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info, x, y, phantom, processParam);
	return result;
}

long ksDocument2D::ksPlacementEx(LPDISPATCH info, double* x, double* y, double* angle, LPDISPATCH phantom, LPDISPATCH processParam)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PR8 VTS_PR8 VTS_PR8 VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xd9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info, x, y, angle, phantom, processParam);
	return result;
}

double ksDocument2D::ksCalcRasterScale(LPCTSTR fileName, double w, double h)
{
	double result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper(0xda, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		fileName, w, h);
	return result;
}

long ksDocument2D::ksTextEx(LPDISPATCH txtParam, long align)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xdb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		txtParam, align);
	return result;
}

long ksDocument2D::ksColouringEx(long color, long group)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xdc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		color, group);
	return result;
}

BOOL ksDocument2D::ksSaveDocumentEx(LPCTSTR fileName, long SaveMode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0xdd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, SaveMode);
	return result;
}

VARIANT ksDocument2D::ksAssociationViewMatrix3D(long ViewRef)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xde, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		ViewRef);
	return result;
}

BOOL ksDocument2D::ksPoint3DToAssociationView(long view, double x3D, double y3D, double z3D, double* x2D, double* y2D)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xdf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		view, x3D, y3D, z3D, x2D, y2D);
	return result;
}

long ksDocument2D::ksGetReferenceDocumentPartEx(short t, long SheetNumb)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_I4;
	InvokeHelper(0xe0, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		t, SheetNumb);
	return result;
}

LPDISPATCH ksDocument2D::GetStampEx(long SheetNumb)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SheetNumb);
	return result;
}

long ksDocument2D::ksGetDocumentPagesCount()
{
	long result;
	InvokeHelper(0xe2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksDocument2D::ksSaveToDXF(LPCTSTR DXFFileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xe3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		DXFFileName);
	return result;
}

long ksDocument2D::ksInitFilePreviewFuncW(LPCTSTR funcName, long hInst, LPDISPATCH dispatchOCX)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xe4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		funcName, hInst, dispatchOCX);
	return result;
}

long ksDocument2D::ksChangeLeader(LPDISPATCH leaderParam)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		leaderParam);
	return result;
}

BOOL ksDocument2D::ksGetShelfPoint(long p, long index, double* x, double* y, long paramType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PR8 VTS_PR8 VTS_I4;
	InvokeHelper(0xe6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		p, index, x, y, paramType);
	return result;
}

long ksDocument2D::ksMakeEncloseContoursEx(long gr, double x, double y, BOOL forHatch)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_BOOL;
	InvokeHelper(0xe7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		gr, x, y, forHatch);
	return result;
}

long ksDocument2D::ksAnnPolylineEx(LPDISPATCH par, short term1, short term2)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I2 VTS_I2;
	InvokeHelper(0xe8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, term1, term2);
	return result;
}

long ksDocument2D::ksAnnEllipseArc(LPDISPATCH par, short term1, short term2)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I2 VTS_I2;
	InvokeHelper(0xe9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, term1, term2);
	return result;
}

long ksDocument2D::ksAnnParEllipseArc(LPDISPATCH par, short term1, short term2)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I2 VTS_I2;
	InvokeHelper(0xea, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par, term1, term2);
	return result;
}

long ksDocument2D::ksAnnCircle(double xc, double yc, double rad, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		xc, yc, rad, style);
	return result;
}

long ksDocument2D::ksAnnEllipse(LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xec, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		par);
	return result;
}

long ksDocument2D::ksAnnPolyline(long style, short term1, short term2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_I2;
	InvokeHelper(0xed, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		style, term1, term2);
	return result;
}

long ksDocument2D::ksAnnTextEx(LPDISPATCH txtParam, long align)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xee, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		txtParam, align);
	return result;
}

long ksDocument2D::ksAnnPoint(double x, double y, long style)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0xef, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, style);
	return result;
}

BOOL ksDocument2D::ksGetAnnObjTerminators(long annObj, short* term1, short* term2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PI2 VTS_PI2;
	InvokeHelper(0xf0, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		annObj, term1, term2);
	return result;
}

long ksDocument2D::ksGetObjectStyle(long obj)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksDocument2D::ksSetObjectStyle(long obj, long style)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xf2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, style);
	return result;
}

long ksDocument2D::ksGetMacroPlacementEx(long macro, double* x, double* y, double* angl, long sheetParam, long* mirrorSymmetry)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8 VTS_PR8 VTS_I4 VTS_PI4;
	InvokeHelper(0xf3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro, x, y, angl, sheetParam, mirrorSymmetry);
	return result;
}

long ksDocument2D::ksSetMacroPlacementEx(long macro, double x, double y, double angl, long relativ, long mirrorSymmetry)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_I4;
	InvokeHelper(0xf4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		macro, x, y, angl, relativ, mirrorSymmetry);
	return result;
}

BOOL ksDocument2D::ksUndoContainer(BOOL Add)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xf5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Add);
	return result;
}

BOOL ksDocument2D::ksGetEditMacroVisibleRegime(long p)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		p);
	return result;
}

long ksDocument2D::ksCopyGroupToDocument(long gr, long from)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xf7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		gr, from);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksObject2DNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksObject2DNotify operations

BOOL ksObject2DNotify::ChangeActive(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginDelete(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::Delete(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginMove(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::Move(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginRotate(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::Rotate(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginScale(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::scale(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginTransform(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::Transform(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginCopy(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::copy(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginSymmetry(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::Symmetry(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginProcess(long pType, long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pType, objRef);
	return result;
}

BOOL ksObject2DNotify::EndProcess(long pType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pType);
	return result;
}

BOOL ksObject2DNotify::CreateObject(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::UpdateObject(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::BeginDestroyObject(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksObject2DNotify::DestroyObject(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSelectionMngNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksSelectionMngNotify operations

BOOL ksSelectionMngNotify::Select(const VARIANT& obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&obj);
	return result;
}

BOOL ksSelectionMngNotify::Unselect(const VARIANT& obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&obj);
	return result;
}

BOOL ksSelectionMngNotify::UnselectAll()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksObject2DNotifyResult properties

/////////////////////////////////////////////////////////////////////////////
// ksObject2DNotifyResult operations

long ksObject2DNotifyResult::GetNotifyType()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksObject2DNotifyResult::IsCopy()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksObject2DNotifyResult::GetSheetPoint(BOOL from, double* x, double* y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8 VTS_PR8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		from, x, y);
	return result;
}

long ksObject2DNotifyResult::GetCopyObject()
{
	long result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

double ksObject2DNotifyResult::GetAngle()
{
	double result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksObject2DNotifyResult::GetScale(double* sx, double* sy)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sx, sy);
	return result;
}

long ksObject2DNotifyResult::GetProcessType()
{
	long result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksObject2DNotifyResult::IsUndoMode()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksObject2DNotifyResult::IsRedoMode()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocument2DNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksDocument2DNotify operations

BOOL ksDocument2DNotify::BeginRebuild()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument2DNotify::Rebuild()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument2DNotify::BeginChoiceMaterial()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument2DNotify::ChoiceMaterial(LPCTSTR material, double density)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		material, density);
	return result;
}

BOOL ksDocument2DNotify::BeginInsertFragment()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument2DNotify::LocalFragmentEdit(LPDISPATCH newDoc, BOOL newFrw)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		newDoc, newFrw);
	return result;
}

BOOL ksDocument2DNotify::BeginChoiceProperty(long objRef, double propID)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef, propID);
	return result;
}

BOOL ksDocument2DNotify::ChoiceProperty(long objRef, double propID)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef, propID);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocument3D properties

CString ksDocument3D::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksDocument3D::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksDocument3D::GetComment()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksDocument3D::SetComment(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CString ksDocument3D::GetAuthor()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksDocument3D::SetAuthor(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

long ksDocument3D::GetReference()
{
	long result;
	GetProperty(0x27, VT_I4, (void*)&result);
	return result;
}

void ksDocument3D::SetReference(long propVal)
{
	SetProperty(0x27, VT_I4, propVal);
}

BOOL ksDocument3D::GetPerspective()
{
	BOOL result;
	GetProperty(0x28, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetPerspective(BOOL propVal)
{
	SetProperty(0x28, VT_BOOL, propVal);
}

long ksDocument3D::GetDrawMode()
{
	long result;
	GetProperty(0x29, VT_I4, (void*)&result);
	return result;
}

void ksDocument3D::SetDrawMode(long propVal)
{
	SetProperty(0x29, VT_I4, propVal);
}

BOOL ksDocument3D::GetHideAllPlanes()
{
	BOOL result;
	GetProperty(0x32, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllPlanes(BOOL propVal)
{
	SetProperty(0x32, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllAxis()
{
	BOOL result;
	GetProperty(0x33, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllAxis(BOOL propVal)
{
	SetProperty(0x33, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllSketches()
{
	BOOL result;
	GetProperty(0x34, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllSketches(BOOL propVal)
{
	SetProperty(0x34, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllPlaces()
{
	BOOL result;
	GetProperty(0x35, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllPlaces(BOOL propVal)
{
	SetProperty(0x35, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllSurfaces()
{
	BOOL result;
	GetProperty(0x36, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllSurfaces(BOOL propVal)
{
	SetProperty(0x36, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllThreads()
{
	BOOL result;
	GetProperty(0x37, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllThreads(BOOL propVal)
{
	SetProperty(0x37, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetShadedWireframe()
{
	BOOL result;
	GetProperty(0x3f, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetShadedWireframe(BOOL propVal)
{
	SetProperty(0x3f, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetDismantleMode()
{
	BOOL result;
	GetProperty(0x44, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetDismantleMode(BOOL propVal)
{
	SetProperty(0x44, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetTreeNeedRebuild()
{
	BOOL result;
	GetProperty(0x46, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetTreeNeedRebuild(BOOL propVal)
{
	SetProperty(0x46, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetEnableRollBackFeaturesInCollections()
{
	BOOL result;
	GetProperty(0x4b, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetEnableRollBackFeaturesInCollections(BOOL propVal)
{
	SetProperty(0x4b, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllCurves()
{
	BOOL result;
	GetProperty(0x4d, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllCurves(BOOL propVal)
{
	SetProperty(0x4d, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllControlPoints()
{
	BOOL result;
	GetProperty(0x4e, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllControlPoints(BOOL propVal)
{
	SetProperty(0x4e, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllDimensions()
{
	BOOL result;
	GetProperty(0x4f, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllDimensions(BOOL propVal)
{
	SetProperty(0x4f, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllDesignations()
{
	BOOL result;
	GetProperty(0x50, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllDesignations(BOOL propVal)
{
	SetProperty(0x50, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideAllAuxiliaryGeom()
{
	BOOL result;
	GetProperty(0x51, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideAllAuxiliaryGeom(BOOL propVal)
{
	SetProperty(0x51, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetHideInComponentsMode()
{
	BOOL result;
	GetProperty(0x52, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetHideInComponentsMode(BOOL propVal)
{
	SetProperty(0x52, VT_BOOL, propVal);
}

BOOL ksDocument3D::GetWindowNeedRebuild()
{
	BOOL result;
	GetProperty(0x54, VT_BOOL, (void*)&result);
	return result;
}

void ksDocument3D::SetWindowNeedRebuild(BOOL propVal)
{
	SetProperty(0x54, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDocument3D operations

BOOL ksDocument3D::GetInvisibleMode()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::Create(BOOL invisible, BOOL typeDoc)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		invisible, typeDoc);
	return result;
}

BOOL ksDocument3D::IsDetail()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::GetPart(long type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		type);
	return result;
}

LPDISPATCH ksDocument3D::MateConstraintCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::UpdateDocumentParam()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::IsEditMode()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::ChangeObjectInLibRequest()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::StopLibRequest()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::GetSpecification()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::GetRequestInfo(LPDISPATCH part)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		part);
	return result;
}

BOOL ksDocument3D::UserGetPlacementAndEntity(long entityCount)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entityCount);
	return result;
}

BOOL ksDocument3D::SetActive()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::IsActive()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::Open(LPCTSTR fileName, BOOL invisible)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, invisible);
	return result;
}

BOOL ksDocument3D::Save()
{
	BOOL result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::SaveAs(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksDocument3D::close()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::UserGetCursor(LPCTSTR prompt, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		prompt, x, y, z);
	return result;
}

BOOL ksDocument3D::SetPartFromFile(LPCTSTR fileName, LPDISPATCH part, BOOL externalFile)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, part, externalFile);
	return result;
}

LPDISPATCH ksDocument3D::EntityCollection(short objType, BOOL checkEntity)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2 VTS_BOOL;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType, checkEntity);
	return result;
}

LPDISPATCH ksDocument3D::UserSelectEntity(LPDISPATCH filterObject, LPCTSTR methodName, LPCTSTR prompt, long hInst, LPDISPATCH val)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BSTR VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		filterObject, methodName, prompt, hInst, val);
	return result;
}

BOOL ksDocument3D::RemoveMateConstraint(long constraintType, LPDISPATCH obj1, LPDISPATCH obj2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		constraintType, obj1, obj2);
	return result;
}

BOOL ksDocument3D::AddMateConstraint(long constraintType, LPDISPATCH obj1, LPDISPATCH obj2, short direction, short fixed, double val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_DISPATCH VTS_I2 VTS_I2 VTS_R8;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		constraintType, obj1, obj2, direction, fixed, val);
	return result;
}

long ksDocument3D::ksDeleteObj(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

LPDISPATCH ksDocument3D::PartCollection(BOOL refresh)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		refresh);
	return result;
}

BOOL ksDocument3D::CreatePartFromFile(LPCTSTR fileName, LPDISPATCH part, LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, part, plane);
	return result;
}

LPDISPATCH ksDocument3D::CreatePartInAssembly(LPCTSTR fileName, LPDISPATCH plane)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		fileName, plane);
	return result;
}

BOOL ksDocument3D::RebuildDocument()
{
	BOOL result;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::ZoomPrevNextOrAll(short type)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		type);
	return result;
}

LPDISPATCH ksDocument3D::GetMateConstraint()
{
	LPDISPATCH result;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, rasterPar);
	return result;
}

LPDISPATCH ksDocument3D::RasterFormatParam()
{
	LPDISPATCH result;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::SaveAsToAdditionFormat(LPCTSTR fileName, LPDISPATCH additionPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, additionPar);
	return result;
}

LPDISPATCH ksDocument3D::AdditionFormatParam()
{
	LPDISPATCH result;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::GetViewProjectionCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::DeleteObject(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

LPDISPATCH ksDocument3D::GetSelectionMng()
{
	LPDISPATCH result;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::GetChooseMng()
{
	LPDISPATCH result;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksDocument3D::GetObjectType(LPDISPATCH obj)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj);
	return result;
}

long ksDocument3D::ksGetObjParam(long ref, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, param, parType);
	return result;
}

long ksDocument3D::ksSetObjParam(long referObj, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		referObj, param, parType);
	return result;
}

BOOL ksDocument3D::SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, rasterPar);
	return result;
}

LPDISPATCH ksDocument3D::AddImportedSurfaces(LPCTSTR fileName, BOOL together)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		fileName, together);
	return result;
}

LPUNKNOWN ksDocument3D::GetDocument3DNotify()
{
	LPUNKNOWN result;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::AttributeCollection(long key1, long key2, long key3, long key4, double numb, LPDISPATCH pObj)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		key1, key2, key3, key4, numb, pObj);
	return result;
}

LPDISPATCH ksDocument3D::FeatureCollection(long key1, long key2, long key3, long key4, double numb, long objType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8 VTS_I4;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		key1, key2, key3, key4, numb, objType);
	return result;
}

BOOL ksDocument3D::SetPartFromFileEx(LPCTSTR fileName, LPDISPATCH part, BOOL externalFile, BOOL redraw)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH VTS_BOOL VTS_BOOL;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, part, externalFile, redraw);
	return result;
}

LPDISPATCH ksDocument3D::ComponentPositioner()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::DefaultPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksDocument3D::ksIsSlaveSpcOpened()
{
	long result;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3D::GetEditMacroObject()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::SaveAsEx(LPCTSTR fileName, long SaveMode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, SaveMode);
	return result;
}

LPDISPATCH ksDocument3D::GetInterface(long o3dType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		o3dType);
	return result;
}

LPDISPATCH ksDocument3D::CopyPart(LPDISPATCH sourcePart, LPDISPATCH newPlacement)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x45, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		sourcePart, newPlacement);
	return result;
}

LPDISPATCH ksDocument3D::UserSelectEntityEx(LPDISPATCH filterObject, LPCTSTR methodName, LPCTSTR prompt, long hInst, LPDISPATCH val, LPUNKNOWN processParam)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BSTR VTS_BSTR VTS_I4 VTS_DISPATCH VTS_UNKNOWN;
	InvokeHelper(0x47, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		filterObject, methodName, prompt, hInst, val, processParam);
	return result;
}

BOOL ksDocument3D::PlaceFeatureAfter(LPDISPATCH obj, LPDISPATCH afterObj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, afterObj);
	return result;
}

BOOL ksDocument3D::SetRollBackFeature(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

LPDISPATCH ksDocument3D::GetRollBackFeature()
{
	LPDISPATCH result;
	InvokeHelper(0x4a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3D::ExcludeFeaturesAfter(LPDISPATCH obj, BOOL exclude)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, exclude);
	return result;
}

LPDISPATCH ksDocument3D::GetDocument3DNotifyResult()
{
	LPDISPATCH result;
	InvokeHelper(0x53, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotify operations

BOOL ksDocument3DNotify::BeginRebuild()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3DNotify::Rebuild()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3DNotify::BeginChoiceMaterial()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3DNotify::ChoiceMaterial(LPCTSTR material, double density)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		material, density);
	return result;
}

BOOL ksDocument3DNotify::BeginChoiceMarking()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3DNotify::ChoiceMarking(LPCTSTR marking)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		marking);
	return result;
}

BOOL ksDocument3DNotify::BeginSetPartFromFile()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocument3DNotify::BeginCreatePartFromFile(BOOL typeDoc, LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		typeDoc, plane);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEntity properties

BOOL ksEntity::GetHidden()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksEntity::SetHidden(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

CString ksEntity::GetName()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksEntity::SetName(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

BOOL ksEntity::GetExcluded()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksEntity::SetExcluded(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksEntity operations

short ksEntity::GetType()
{
	short result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntity::GetDefinition()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntity::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksEntity::IsCreated()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEntity::IsIt(long objType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objType);
	return result;
}

BOOL ksEntity::Create()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEntity::Update()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntity::ColorParam()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksEntity::GetAdvancedColor(long* color, double* ambient, double* diffuse, double* specularity, double* shininess, double* transparency, double* emission)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		color, ambient, diffuse, specularity, shininess, transparency, emission);
	return result;
}

BOOL ksEntity::SetAdvancedColor(long color, double ambient, double diffuse, double specularity, double shininess, double transparency, double emission)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		color, ambient, diffuse, specularity, shininess, transparency, emission);
	return result;
}

LPDISPATCH ksEntity::GetFeature()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntity::BodyCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksEntity::GetMultiBodyParts()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntity::GetBodyParts()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAttribute3DCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksAttribute3DCollection operations

BOOL ksAttribute3DCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksAttribute3DCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAttribute3DCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAttribute3DCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAttribute3DCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAttribute3DCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAttribute3DCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksAttribute3DCollection::FindIt(LPDISPATCH obj)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksAttribute3DCollection::Select(long key1, long key2, long key3, long key4, double numb, long objType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8 VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		key1, key2, key3, key4, numb, objType);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAttribute3D properties

/////////////////////////////////////////////////////////////////////////////
// ksAttribute3D operations

long ksAttribute3D::GetReference()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAttribute3D::FeatureCollection(long objType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType);
	return result;
}

CString ksAttribute3D::GetNameType()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFeatureCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksFeatureCollection operations

BOOL ksFeatureCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksFeatureCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeatureCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeatureCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeatureCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeatureCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeatureCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

LPDISPATCH ksFeatureCollection::GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, testFullName, testIgnoreCase);
	return result;
}

long ksFeatureCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksFeatureCollection::Add(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksFeatureCollection::AddAt(LPDISPATCH obj, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, index);
	return result;
}

BOOL ksFeatureCollection::AddBefore(LPDISPATCH obj, LPDISPATCH base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, base);
	return result;
}

BOOL ksFeatureCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksFeatureCollection::DetachByBody(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksFeatureCollection::Clear()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFeatureCollection::SetByIndex(LPDISPATCH obj, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, index);
	return result;
}

LPDISPATCH ksFeatureCollection::AttributeCollection(long key1, long key2, long key3, long key4, double numb)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		key1, key2, key3, key4, numb);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFeature properties

BOOL ksFeature::GetExcluded()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksFeature::SetExcluded(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksFeature operations

CString ksFeature::GetName()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

unsigned long ksFeature::GetUpdateStamp()
{
	unsigned long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksFeature::IsModified(BOOL recursive)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		recursive);
	return result;
}

LPDISPATCH ksFeature::SubFeatureCollection(BOOL through, BOOL libObject)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		through, libObject);
	return result;
}

LPDISPATCH ksFeature::GetOwnerFeature()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksFeature::IsValid()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

short ksFeature::GetType()
{
	short result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeature::GetObject()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeature::AttributeCollection(long key1, long key2, long key3, long key4, double numb)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		key1, key2, key3, key4, numb);
	return result;
}

LPDISPATCH ksFeature::EntityCollection(short objType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType);
	return result;
}

LPDISPATCH ksFeature::GetVariableCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeature::BodyCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeature::GetAttributeCollectionInSource(long key1, long key2, long key3, long key4, double numb, LPDISPATCH sourcePart)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		key1, key2, key3, key4, numb, sourcePart);
	return result;
}

BOOL ksFeature::IsRollBacked()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFeature::VariableCollectionEx(BOOL sourse)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		sourse);
	return result;
}

long ksFeature::GetObjectError()
{
	long result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEntityCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksEntityCollection operations

BOOL ksEntityCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksEntityCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntityCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntityCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntityCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntityCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEntityCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

BOOL ksEntityCollection::SelectByPoint(double x, double y, double z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

LPDISPATCH ksEntityCollection::GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, testFullName, testIgnoreCase);
	return result;
}

BOOL ksEntityCollection::Add(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksEntityCollection::AddAt(LPDISPATCH entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

BOOL ksEntityCollection::AddBefore(LPDISPATCH entity, LPDISPATCH base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, base);
	return result;
}

BOOL ksEntityCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksEntityCollection::DetachByBody(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksEntityCollection::Clear()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEntityCollection::SetByIndex(LPDISPATCH entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

long ksEntityCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPart properties

CString ksPart::GetName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksPart::SetName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksPart::GetMarking()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksPart::SetMarking(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

BOOL ksPart::GetFixedComponent()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksPart::SetFixedComponent(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksPart::GetStandardComponent()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksPart::SetStandardComponent(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

CString ksPart::GetFileName()
{
	CString result;
	GetProperty(0x6, VT_BSTR, (void*)&result);
	return result;
}

void ksPart::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x6, VT_BSTR, propVal);
}

BOOL ksPart::GetExcluded()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksPart::SetExcluded(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

long ksPart::GetUseColor()
{
	long result;
	GetProperty(0x26, VT_I4, (void*)&result);
	return result;
}

void ksPart::SetUseColor(long propVal)
{
	SetProperty(0x26, VT_I4, propVal);
}

BOOL ksPart::GetNeedRebuild()
{
	BOOL result;
	GetProperty(0x2b, VT_BOOL, (void*)&result);
	return result;
}

void ksPart::SetNeedRebuild(BOOL propVal)
{
	SetProperty(0x2b, VT_BOOL, propVal);
}

BOOL ksPart::GetHidden()
{
	BOOL result;
	GetProperty(0x2e, VT_BOOL, (void*)&result);
	return result;
}

void ksPart::SetHidden(BOOL propVal)
{
	SetProperty(0x2e, VT_BOOL, propVal);
}

BOOL ksPart::GetDoubleClickEditOff()
{
	BOOL result;
	GetProperty(0x34, VT_BOOL, (void*)&result);
	return result;
}

void ksPart::SetDoubleClickEditOff(BOOL propVal)
{
	SetProperty(0x34, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPart operations

CString ksPart::GetMaterial()
{
	CString result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ksPart::SetPlacement(LPDISPATCH placement)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		placement);
	return result;
}

LPDISPATCH ksPart::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::ColorParam()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::VariableCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPart::Update()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksPart::GetUserParamSize()
{
	long result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksPart::UpdatePlacement()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksPart::RebuildModel()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::GetDefaultEntity(short objType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType);
	return result;
}

LPDISPATCH ksPart::NewEntity(short objType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType);
	return result;
}

LPDISPATCH ksPart::EntityCollection(short objType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType);
	return result;
}

BOOL ksPart::GetAdvancedColor(long* color, double* ambient, double* diffuse, double* specularity, double* shininess, double* transparency, double* emission)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		color, ambient, diffuse, specularity, shininess, transparency, emission);
	return result;
}

BOOL ksPart::SetAdvancedColor(long color, double ambient, double diffuse, double specularity, double shininess, double transparency, double emission)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		color, ambient, diffuse, specularity, shininess, transparency, emission);
	return result;
}

BOOL ksPart::SetUserParam(LPDISPATCH userPars)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		userPars);
	return result;
}

BOOL ksPart::IsDetail()
{
	BOOL result;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::BeginEdit()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPart::EndEdit(BOOL Rebuild)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Rebuild);
	return result;
}

LPDISPATCH ksPart::GetPart(short type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		type);
	return result;
}

double ksPart::GetMass()
{
	double result;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksPart::PutStorage(LPCTSTR fileName, long type, BOOL mirror)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, type, mirror);
	return result;
}

BOOL ksPart::SetMateConstraintObjects(LPDISPATCH collection)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		collection);
	return result;
}

LPDISPATCH ksPart::GetMateConstraintObjects()
{
	LPDISPATCH result;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPart::GetUserParam(LPDISPATCH userPars)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		userPars);
	return result;
}

double ksPart::GetDensity()
{
	double result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksPart::SetMaterial(LPCTSTR material, double density)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		material, density);
	return result;
}

LPDISPATCH ksPart::BodyCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::GetFeature()
{
	LPDISPATCH result;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::CalcMassInertiaProperties(unsigned long bitVector)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		bitVector);
	return result;
}

LPDISPATCH ksPart::GetMeasurer()
{
	LPDISPATCH result;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::GetMainBody()
{
	LPDISPATCH result;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPUNKNOWN ksPart::GetObject3DNotify(long objType, LPDISPATCH obj)
{
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		objType, obj);
	return result;
}

LPDISPATCH ksPart::GetObject3DNotifyResult()
{
	LPDISPATCH result;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPart::UpdatePlacementEx(BOOL redraw)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		redraw);
	return result;
}

BOOL ksPart::RebuildModelEx(BOOL redraw)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		redraw);
	return result;
}

BOOL ksPart::CurveIntersection(LPDISPATCH curve, LPDISPATCH parts, LPDISPATCH fases, LPDISPATCH points)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		curve, parts, fases, points);
	return result;
}

BOOL ksPart::TransformPoint(double* x, double* y, double* z, LPDISPATCH part1)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8 VTS_DISPATCH;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, part1);
	return result;
}

BOOL ksPart::SetObject(long index, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, obj);
	return result;
}

LPDISPATCH ksPart::GetObject(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksPart::GetCountObj()
{
	long result;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksPart::ClearAllObj()
{
	BOOL result;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPart::CreateOrEditObject(short objType, LPDISPATCH editObj)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		objType, editObj);
	return result;
}

BOOL ksPart::TransformPoints(VARIANT* points, LPDISPATCH part1)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_DISPATCH;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		points, part1);
	return result;
}

VARIANT ksPart::GetSummMatrix(LPDISPATCH part1)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		part1);
	return result;
}

BOOL ksPart::GetMultiBodyParts()
{
	BOOL result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksPart::SetSourceVariables(BOOL Rebuild)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Rebuild);
	return result;
}

LPDISPATCH ksPart::GetObjectByName(LPCTSTR name, short objType, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I2 VTS_BOOL VTS_BOOL;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, objType, testFullName, testIgnoreCase);
	return result;
}

BOOL ksPart::GetGabarit(BOOL full, BOOL customizable, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		full, customizable, x1, y1, z1, x2, y2, z2);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksObject3DNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksObject3DNotify operations

BOOL ksObject3DNotify::BeginDelete(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::Delete(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::excluded(LPDISPATCH obj, BOOL excluded)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, excluded);
	return result;
}

BOOL ksObject3DNotify::hidden(LPDISPATCH obj, BOOL _hidden)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, _hidden);
	return result;
}

BOOL ksObject3DNotify::BeginPropertyChanged(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::PropertyChanged(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::BeginPlacementChanged(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::PlacementChanged(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::BeginProcess(long pType, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pType, obj);
	return result;
}

BOOL ksObject3DNotify::EndProcess(long pType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pType);
	return result;
}

BOOL ksObject3DNotify::CreateObject(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksObject3DNotify::UpdateObject(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksObject3DNotifyResult properties

/////////////////////////////////////////////////////////////////////////////
// ksObject3DNotifyResult operations

long ksObject3DNotifyResult::GetNotifyType()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksObject3DNotifyResult::GetFeatureCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksObject3DNotifyResult::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksObject3DNotifyResult::GetProcessType()
{
	long result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlacement properties

/////////////////////////////////////////////////////////////////////////////
// ksPlacement operations

BOOL ksPlacement::GetOrigin(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksPlacement::SetOrigin(double x, double y, double z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksPlacement::GetAxis(double* x, double* y, double* z, long type)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8 VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, type);
	return result;
}

BOOL ksPlacement::SetAxis(double x, double y, double z, long type)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, type);
	return result;
}

BOOL ksPlacement::SetPlacement(LPDISPATCH placement)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		placement);
	return result;
}

BOOL ksPlacement::SetAxes(double Xx, double Xy, double Xz, double Yx, double Yy, double Yz)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Xx, Xy, Xz, Yx, Yy, Yz);
	return result;
}

BOOL ksPlacement::PointProjection(double XIn, double YIn, double ZIn, double* XOut, double* YOut)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		XIn, YIn, ZIn, XOut, YOut);
	return result;
}

BOOL ksPlacement::PointOn(double XIn, double YIn, double* XOut, double* YOut, double* ZOut)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		XIn, YIn, XOut, YOut, ZOut);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksComponentPositioner properties

/////////////////////////////////////////////////////////////////////////////
// ksComponentPositioner operations

BOOL ksComponentPositioner::SetPlaneByPlacement(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

BOOL ksComponentPositioner::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

BOOL ksComponentPositioner::SetPlaneByPoints(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, z1, x2, y2, z2, x3, y3, z3);
	return result;
}

BOOL ksComponentPositioner::SetDragPoint(double x, double y, double z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksComponentPositioner::SetAxis(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

BOOL ksComponentPositioner::SetAxisByPoints(double x1, double y1, double z1, double x2, double y2, double z2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, z1, x2, y2, z2);
	return result;
}

long ksComponentPositioner::Prepare(LPDISPATCH part, long positionerType)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		part, positionerType);
	return result;
}

BOOL ksComponentPositioner::MoveComponent(double x, double y, double z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksComponentPositioner::RotateComponent(double angl)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		angl);
	return result;
}

BOOL ksComponentPositioner::Finish()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksKompasObjectNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksKompasObjectNotify operations

BOOL ksKompasObjectNotify::CreateDocument(LPDISPATCH newDoc, long docType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		newDoc, docType);
	return result;
}

BOOL ksKompasObjectNotify::BeginOpenDocument(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksKompasObjectNotify::OpenDocument(LPDISPATCH newDoc, long docType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		newDoc, docType);
	return result;
}

BOOL ksKompasObjectNotify::ChangeActiveDocument(LPDISPATCH newDoc, long docType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		newDoc, docType);
	return result;
}

BOOL ksKompasObjectNotify::ApplicationDestroy()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksKompasObjectNotify::BeginCreate(long docType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		docType);
	return result;
}

BOOL ksKompasObjectNotify::BeginOpenFile()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksKompasObjectNotify::BeginCloseAllDocument()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksKompasObjectNotify::KeyDown(long* key, long flags, BOOL systemKey)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_I4 VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		key, flags, systemKey);
	return result;
}

BOOL ksKompasObjectNotify::KeyUp(long* key, long flags, BOOL systemKey)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_I4 VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		key, flags, systemKey);
	return result;
}

BOOL ksKompasObjectNotify::KeyPress(long* key, BOOL systemKey)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		key, systemKey);
	return result;
}

BOOL ksKompasObjectNotify::BeginReguestFiles(long requestID, VARIANT* files)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		requestID, files);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocumentFileNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksDocumentFileNotify operations

BOOL ksDocumentFileNotify::BeginCloseDocument()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentFileNotify::CloseDocument()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentFileNotify::BeginSaveDocument(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksDocumentFileNotify::SaveDocument()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentFileNotify::Activate()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentFileNotify::Deactivate()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentFileNotify::BeginSaveAsDocument()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentFileNotify::DocumentFrameOpen(LPDISPATCH v)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		v);
	return result;
}

BOOL ksDocumentFileNotify::ProcessActivate(long iD)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iD);
	return result;
}

BOOL ksDocumentFileNotify::ProcessDeactivate(long iD)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iD);
	return result;
}

BOOL ksDocumentFileNotify::BeginProcess(long iD)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iD);
	return result;
}

BOOL ksDocumentFileNotify::EndProcess(long iD, BOOL Success)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		iD, Success);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotifyResult properties

/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotifyResult operations

long ksDocument3DNotifyResult::GetNotifyType()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDocument3DNotifyResult::GetNotifyObjectType()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocument3DNotifyResult::GetNotifyObject()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpecRoughParam properties

long ksSpecRoughParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksSpecRoughParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

short ksSpecRoughParam::GetSign()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksSpecRoughParam::SetSign(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

BOOL ksSpecRoughParam::GetT()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksSpecRoughParam::SetT(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

CString ksSpecRoughParam::GetS()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void ksSpecRoughParam::SetS(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSpecRoughParam operations

BOOL ksSpecRoughParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEllipseParam properties

double ksEllipseParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksEllipseParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksEllipseParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksEllipseParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksEllipseParam::GetA()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksEllipseParam::SetA(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksEllipseParam::GetB()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksEllipseParam::SetB(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksEllipseParam::GetAngle()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksEllipseParam::SetAngle(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksEllipseParam::GetStyle()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksEllipseParam::SetStyle(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksEllipseParam operations

BOOL ksEllipseParam::Init()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEllipseArcParam properties

double ksEllipseArcParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksEllipseArcParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksEllipseArcParam::GetA()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetA(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksEllipseArcParam::GetB()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetB(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksEllipseArcParam::GetAngle()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetAngle(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksEllipseArcParam::GetAngleFirst()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetAngleFirst(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksEllipseArcParam::GetAngleSecond()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetAngleSecond(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

double ksEllipseArcParam::GetDirection()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetDirection(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

long ksEllipseArcParam::GetStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksEllipseArcParam::SetStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksEllipseArcParam operations

BOOL ksEllipseArcParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEllipseArcParam1 properties

double ksEllipseArcParam1::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksEllipseArcParam1::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksEllipseArcParam1::GetA()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetA(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksEllipseArcParam1::GetB()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetB(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksEllipseArcParam1::GetAngle()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetAngle(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksEllipseArcParam1::GetParFirst()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetParFirst(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksEllipseArcParam1::GetParSecond()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetParSecond(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

double ksEllipseArcParam1::GetDirection()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetDirection(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

long ksEllipseArcParam1::GetStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksEllipseArcParam1::SetStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksEllipseArcParam1 operations

BOOL ksEllipseArcParam1::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEquidistantParam properties

long ksEquidistantParam::GetGeoObj()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksEquidistantParam::SetGeoObj(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

short ksEquidistantParam::GetSide()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksEquidistantParam::SetSide(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

BOOL ksEquidistantParam::GetCutMode()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksEquidistantParam::SetCutMode(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksEquidistantParam::GetDegState()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksEquidistantParam::SetDegState(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

double ksEquidistantParam::GetRadRight()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksEquidistantParam::SetRadRight(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksEquidistantParam::GetRadLeft()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksEquidistantParam::SetRadLeft(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

long ksEquidistantParam::GetStyle()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksEquidistantParam::SetStyle(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksEquidistantParam operations

BOOL ksEquidistantParam::Init()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksParagraphParam properties

long ksParagraphParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksParagraphParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksParagraphParam::GetX()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksParagraphParam::SetX(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksParagraphParam::GetY()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksParagraphParam::SetY(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksParagraphParam::GetAng()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksParagraphParam::SetAng(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksParagraphParam::GetWidth()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksParagraphParam::SetWidth(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksParagraphParam::GetHeight()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksParagraphParam::SetHeight(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

long ksParagraphParam::GetVFormat()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksParagraphParam::SetVFormat(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

long ksParagraphParam::GetHFormat()
{
	long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void ksParagraphParam::SetHFormat(long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksParagraphParam operations

BOOL ksParagraphParam::Init()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTextItemParam properties

long ksTextItemParam::GetType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksTextItemParam::SetType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

CString ksTextItemParam::GetS()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksTextItemParam::SetS(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

long ksTextItemParam::GetISNumb()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksTextItemParam::SetISNumb(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksTextItemParam operations

BOOL ksTextItemParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextItemParam::GetItemFont()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksTextItemParam::SetItemFont(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTextLineParam properties

long ksTextLineParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksTextLineParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksTextLineParam operations

LPDISPATCH ksTextLineParam::GetTextItemArr()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksTextLineParam::SetTextItemArr(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksTextLineParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTextItemFont properties

CString ksTextItemFont::GetFontName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksTextItemFont::SetFontName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

double ksTextItemFont::GetHeight()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksTextItemFont::SetHeight(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksTextItemFont::GetKsu()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksTextItemFont::SetKsu(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

long ksTextItemFont::GetColor()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksTextItemFont::SetColor(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

long ksTextItemFont::GetBitVector()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksTextItemFont::SetBitVector(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksTextItemFont operations

BOOL ksTextItemFont::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksTextItemFont::GetBitVectorValue(long val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksTextItemFont::SetBitVectorValue(long val, BOOL state)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val, state);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCornerParam properties

long ksCornerParam::GetIndex()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCornerParam::SetIndex(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

BOOL ksCornerParam::GetFillet()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksCornerParam::SetFillet(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

double ksCornerParam::GetL1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCornerParam::SetL1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksCornerParam::GetL2()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksCornerParam::SetL2(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCornerParam operations

BOOL ksCornerParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksContourParam properties

long ksContourParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksContourParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksContourParam operations

BOOL ksContourParam::Init()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLayerParam properties

short ksLayerParam::GetState()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksLayerParam::SetState(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

long ksLayerParam::GetColor()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksLayerParam::SetColor(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

CString ksLayerParam::GetName()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksLayerParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLayerParam operations

BOOL ksLayerParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLineParam properties

double ksLineParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksLineParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksLineParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksLineParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksLineParam::GetAngle()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksLineParam::SetAngle(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLineParam operations

BOOL ksLineParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRegularPolygonParam properties

long ksRegularPolygonParam::GetCount()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetCount(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksRegularPolygonParam::GetXc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetXc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksRegularPolygonParam::GetYc()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetYc(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksRegularPolygonParam::GetAng()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetAng(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksRegularPolygonParam::GetRadius()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetRadius(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

BOOL ksRegularPolygonParam::GetDescribe()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetDescribe(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

long ksRegularPolygonParam::GetStyle()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksRegularPolygonParam::SetStyle(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRegularPolygonParam operations

LPDISPATCH ksRegularPolygonParam::GetPCorner()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRegularPolygonParam::SetPCorner(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksRegularPolygonParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRectangleParam properties

double ksRectangleParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksRectangleParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksRectangleParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksRectangleParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksRectangleParam::GetAng()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksRectangleParam::SetAng(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksRectangleParam::GetHeight()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksRectangleParam::SetHeight(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksRectangleParam::GetWidth()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksRectangleParam::SetWidth(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksRectangleParam::GetStyle()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksRectangleParam::SetStyle(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRectangleParam operations

LPDISPATCH ksRectangleParam::GetPCorner()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRectangleParam::SetPCorner(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksRectangleParam::Init()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBaseParam properties

long ksBaseParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksBaseParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksBaseParam::GetX1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksBaseParam::SetX1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksBaseParam::GetY1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksBaseParam::SetY1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksBaseParam::GetX2()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksBaseParam::SetX2(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksBaseParam::GetY2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksBaseParam::SetY2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

BOOL ksBaseParam::GetType()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksBaseParam::SetType(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

CString ksBaseParam::GetStr()
{
	CString result;
	GetProperty(0x7, VT_BSTR, (void*)&result);
	return result;
}

void ksBaseParam::SetStr(LPCTSTR propVal)
{
	SetProperty(0x7, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBaseParam operations

LPDISPATCH ksBaseParam::GetPTextItem()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBaseParam::SetPTextItem(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksBaseParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLtVariant properties

CString ksLtVariant::GetStrVal()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksLtVariant::SetStrVal(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

short ksLtVariant::GetShortVal()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksLtVariant::SetShortVal(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

long ksLtVariant::GetIntVal()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksLtVariant::SetIntVal(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

long ksLtVariant::GetLongVal()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksLtVariant::SetLongVal(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

float ksLtVariant::GetFloatVal()
{
	float result;
	GetProperty(0x6, VT_R4, (void*)&result);
	return result;
}

void ksLtVariant::SetFloatVal(float propVal)
{
	SetProperty(0x6, VT_R4, propVal);
}

double ksLtVariant::GetDoubleVal()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksLtVariant::SetDoubleVal(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

short ksLtVariant::GetCharVal()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksLtVariant::SetCharVal(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksLtVariant::GetUCharVal()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksLtVariant::SetUCharVal(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

long ksLtVariant::GetUIntVal()
{
	long result;
	GetProperty(0xa, VT_I4, (void*)&result);
	return result;
}

void ksLtVariant::SetUIntVal(long propVal)
{
	SetProperty(0xa, VT_I4, propVal);
}

CString ksLtVariant::GetWstrVal()
{
	CString result;
	GetProperty(0xc, VT_BSTR, (void*)&result);
	return result;
}

void ksLtVariant::SetWstrVal(LPCTSTR propVal)
{
	SetProperty(0xc, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLtVariant operations

short ksLtVariant::GetValType()
{
	short result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

BOOL ksLtVariant::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksUserParam properties

CString ksUserParam::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksUserParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksUserParam::GetLibName()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksUserParam::SetLibName(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

long ksUserParam::GetNumber()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksUserParam::SetNumber(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

VARIANT ksUserParam::GetUserParams()
{
	VARIANT result;
	GetProperty(0x7, VT_VARIANT, (void*)&result);
	return result;
}

void ksUserParam::SetUserParams(const VARIANT& propVal)
{
	SetProperty(0x7, VT_VARIANT, &propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksUserParam operations

LPDISPATCH ksUserParam::GetUserArray()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksUserParam::SetUserArray(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksUserParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMathPointParam properties

double ksMathPointParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksMathPointParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksMathPointParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksMathPointParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMathPointParam operations

BOOL ksMathPointParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurvePicture properties

/////////////////////////////////////////////////////////////////////////////
// ksCurvePicture operations

LPDISPATCH ksCurvePicture::GetPolygon()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCurvePicture::SetPolygon(LPDISPATCH polygon)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		polygon);
	return result;
}

LPDISPATCH ksCurvePicture::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCurvePicture::SetFill(LPDISPATCH fill)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fill);
	return result;
}

BOOL ksCurvePicture::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurvePattern properties

double ksCurvePattern::GetVisibleSeg()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksCurvePattern::SetVisibleSeg(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksCurvePattern::GetInvisibleSeg()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCurvePattern::SetInvisibleSeg(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCurvePattern operations

BOOL ksCurvePattern::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTAN properties

/////////////////////////////////////////////////////////////////////////////
// ksTAN operations

double ksTAN::GetX1(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksTAN::GetY1(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksTAN::GetX2(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksTAN::GetY2(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCON properties

/////////////////////////////////////////////////////////////////////////////
// ksCON operations

long ksCON::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

double ksCON::GetXc(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksCON::GetYc(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksCON::GetX1(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksCON::GetY1(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksCON::GetX2(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}

double ksCON::GetY2(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksInertiaParam properties

/////////////////////////////////////////////////////////////////////////////
// ksInertiaParam operations

double ksInertiaParam::GetXc()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetYc()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetF()
{
	double result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetLy()
{
	double result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetLx()
{
	double result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetLxy()
{
	double result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetMx()
{
	double result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetMy()
{
	double result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetMxy()
{
	double result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetJx()
{
	double result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetJy()
{
	double result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksInertiaParam::GetA()
{
	double result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMassInertiaParam properties

/////////////////////////////////////////////////////////////////////////////
// ksMassInertiaParam operations

double ksMassInertiaParam::GetXc()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetYc()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetZc()
{
	double result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetLx()
{
	double result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetLy()
{
	double result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetLz()
{
	double result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJx()
{
	double result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJy()
{
	double result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJz()
{
	double result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJxy()
{
	double result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJxz()
{
	double result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJyz()
{
	double result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJx0z()
{
	double result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJy0z()
{
	double result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJx0y()
{
	double result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetLxy()
{
	double result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetLxz()
{
	double result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetLyz()
{
	double result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetR()
{
	double result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetM()
{
	double result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetV()
{
	double result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksMassInertiaParam::SetBitVectorValue(long val, BOOL setState)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val, setState);
	return result;
}

double ksMassInertiaParam::GetF()
{
	double result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJx0()
{
	double result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJy0()
{
	double result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMassInertiaParam::GetJz0()
{
	double result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksMassInertiaParam::GetAxisX(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksMassInertiaParam::GetAxisY(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksMassInertiaParam::GetAxisZ(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMathematic2D properties

/////////////////////////////////////////////////////////////////////////////
// ksMathematic2D operations

double ksMathematic2D::ksCosD(double x)
{
	double result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x);
	return result;
}

double ksMathematic2D::ksSinD(double x)
{
	double result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x);
	return result;
}

double ksMathematic2D::ksTanD(double x)
{
	double result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x);
	return result;
}

double ksMathematic2D::ksAtanD(double x)
{
	double result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x);
	return result;
}

double ksMathematic2D::ksAngle(double x1, double y1, double x2, double y2)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

long ksMathematic2D::ksEqualPoints(double x1, double y1, double x2, double y2)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

BOOL ksMathematic2D::ksIntersectLinSLinS(double x11, double y11, double x12, double y12, double x21, double y21, double x22, double y22, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x11, y11, x12, y12, x21, y21, x22, y22, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectLinSLine(double x1, double y1, double x2, double y2, double x, double y, double ang, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, x2, y2, x, y, ang, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectArcLin(double xc, double yc, double rad, double f1, double f2, long n, double x, double y, double ang, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc, yc, rad, f1, f2, n, x, y, ang, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectLinLin(double x1, double y1, double angle1, double x2, double y2, double angle2, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, angle1, x2, y2, angle2, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectCirCir(double xc1, double yc1, double radius1, double xc2, double yc2, double radius2, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc1, yc1, radius1, xc2, yc2, radius2, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectArcArc(double xac, double yac, double rada, double fa1, double fa2, short directa, double xbc, double ybc, double radb, double fb1, double fb2, long directb, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xac, yac, rada, fa1, fa2, directa, xbc, ybc, radb, fb1, fb2, directb, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectLinSArc(double x1, double y1, double x2, double y2, double xc, double yc, double rad, double f1, double f2, short direct, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, x2, y2, xc, yc, rad, f1, f2, direct, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectLinSCir(double x1, double y1, double x2, double y2, double xc, double yc, double rad, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, x2, y2, xc, yc, rad, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectCirLin(double xc, double yc, double rad, double xl, double yl, double angle, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc, yc, rad, xl, yl, angle, param);
	return result;
}

BOOL ksMathematic2D::ksIntersectCirArc(double xcc, double ycc, double radc, double xac, double yac, double rada, double fa1, double fa2, short directa, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xcc, ycc, radc, xac, yac, rada, fa1, fa2, directa, param);
	return result;
}

long ksMathematic2D::ksIntersectCurvCurv(long p1, long p2, LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p1, p2, param);
	return result;
}

BOOL ksMathematic2D::ksTanLinePointCircle(double x, double y, double xc, double yc, double rad, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, xc, yc, rad, param);
	return result;
}

BOOL ksMathematic2D::ksTanLineAngCircle(double xc, double yc, double rad, double ang, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc, yc, rad, ang, param);
	return result;
}

BOOL ksMathematic2D::ksTanCircleCircle(double xc1, double yc1, double radius1, double xc2, double yc2, double radius2, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc1, yc1, radius1, xc2, yc2, radius2, param);
	return result;
}

long ksMathematic2D::ksTanLinePointCurve(double x, double y, long pCur, LPDISPATCH array)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, pCur, array);
	return result;
}

BOOL ksMathematic2D::ksCouplingLineLine(double x1, double y1, double angle1, double x2, double y2, double angle2, double rad, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, angle1, x2, y2, angle2, rad, param);
	return result;
}

BOOL ksMathematic2D::ksCouplingLineCircle(double xc, double yc, double radc, double x1, double y1, double angle1, double rad, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc, yc, radc, x1, y1, angle1, rad, param);
	return result;
}

BOOL ksMathematic2D::ksCouplingCircleCircle(double xc1, double yc1, double radc1, double xc2, double yc2, double radc2, double rad, LPDISPATCH param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_DISPATCH;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		xc1, yc1, radc1, xc2, yc2, radc2, rad, param);
	return result;
}

BOOL ksMathematic2D::ksSymmetry(double x, double y, double x1, double y1, double x2, double y2, double* xc, double* yc)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, x1, y1, x2, y2, xc, yc);
	return result;
}

BOOL ksMathematic2D::ksRotate(double x, double y, double xc, double yc, double ang, double* xr, double* yr)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, xc, yc, ang, xr, yr);
	return result;
}

double ksMathematic2D::ksDistancePntPnt(double x1, double y1, double x2, double y2)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

double ksMathematic2D::ksDistancePntLineSeg(double x, double y, double x1, double y1, double x2, double y2)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x, y, x1, y1, x2, y2);
	return result;
}

double ksMathematic2D::ksDistancePntArc(double x, double y, double xac, double yac, double rada, double fa1, double fa2, short directa)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I2;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x, y, xac, yac, rada, fa1, fa2, directa);
	return result;
}

double ksMathematic2D::ksDistancePntCircle(double x, double y, double xc, double yc, double rad)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x, y, xc, yc, rad);
	return result;
}

double ksMathematic2D::ksDistancePntLine(double x, double y, double x1, double y1, double angle)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x, y, x1, y1, angle);
	return result;
}

double ksMathematic2D::ksDistancePntLineForPoint(double x, double y, double x1, double y1, double x2, double y2)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		x, y, x1, y1, x2, y2);
	return result;
}

BOOL ksMathematic2D::ksPerpendicular(double x, double y, double x1, double y1, double x2, double y2, double* xp, double* yp)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, x1, y1, x2, y2, xp, yp);
	return result;
}

LPDISPATCH ksMathematic2D::ksPointsOnCurve(long curve, long count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		curve, count);
	return result;
}

double ksMathematic2D::ksGetCurvePerpendicular(long curve, double x, double y)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		curve, x, y);
	return result;
}

long ksMathematic2D::ksGetCurvePointProjection(long curve, double x, double y, double* kx, double* ky)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		curve, x, y, kx, ky);
	return result;
}

long ksMathematic2D::ksMovePointOnCurve(long curve, double* x, double* y, double len, long dir)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8 VTS_R8 VTS_I4;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		curve, x, y, len, dir);
	return result;
}

long ksMathematic2D::ksCalcInertiaProperties(long p, LPDISPATCH prop, short dimension)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I2;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, prop, dimension);
	return result;
}

long ksMathematic2D::ksCalcMassInertiaProperties(long p, LPDISPATCH prop, double density, double param)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_R8 VTS_R8;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, prop, density, param);
	return result;
}

double ksMathematic2D::ksGetCurvePerimeter(long curve, short dimension)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I2;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		curve, dimension);
	return result;
}

LPDISPATCH ksMathematic2D::ksPointsOnCurveByStep(long curve, double step)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		curve, step);
	return result;
}

double ksMathematic2D::ksDistancePntPntOnCurve(long curve, double x1, double y1, double x2, double y2)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		curve, x1, y1, x2, y2);
	return result;
}

long ksMathematic2D::ksGetCurvePointProjectionEx(long curve, double x, double y, double* kx, double* ky, double* t)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		curve, x, y, kx, ky, t);
	return result;
}

long ksMathematic2D::ksGetCurvePoint(long curve, double t, double* x, double* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		curve, t, x, y);
	return result;
}

long ksMathematic2D::ksGetCurveMinMaxParametr(long curve, double* tMin, double* tMax)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		curve, tMin, tMax);
	return result;
}

double ksMathematic2D::ksDistanceT1T2OnCurve(long curve, double t1, double t2)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		curve, t1, t2);
	return result;
}

long ksMathematic2D::ksTanCurvCurv(long p1, long p2, LPDISPATCH pointArr1, LPDISPATCH pointArr2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p1, p2, pointArr1, pointArr2);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDynamicArray properties

long ksDynamicArray::GetReference()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksDynamicArray::SetReference(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDynamicArray operations

long ksDynamicArray::ksDeleteArray()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDynamicArray::ksClearArray()
{
	long result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDynamicArray::ksGetArrayCount()
{
	long result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDynamicArray::ksGetArrayType()
{
	long result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDynamicArray::ksExcludeArrayItem(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}

long ksDynamicArray::ksAddArrayItem(long index, LPDISPATCH item)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, item);
	return result;
}

long ksDynamicArray::ksGetArrayItem(long index, LPDISPATCH item)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, item);
	return result;
}

long ksDynamicArray::ksSetArrayItem(long index, LPDISPATCH item)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, item);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRDimDrawingParam properties

short ksRDimDrawingParam::GetPt1()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksRDimDrawingParam::SetPt1(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksRDimDrawingParam::GetPt2()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksRDimDrawingParam::SetPt2(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

long ksRDimDrawingParam::GetTextPos()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksRDimDrawingParam::SetTextPos(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

double ksRDimDrawingParam::GetAng()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksRDimDrawingParam::SetAng(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

long ksRDimDrawingParam::GetShelfDir()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksRDimDrawingParam::SetShelfDir(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRDimDrawingParam operations

BOOL ksRDimDrawingParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRDimSourceParam properties

double ksRDimSourceParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksRDimSourceParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksRDimSourceParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksRDimSourceParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksRDimSourceParam::GetRad()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksRDimSourceParam::SetRad(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRDimSourceParam operations

BOOL ksRDimSourceParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRDimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksRDimParam operations

LPDISPATCH ksRDimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRDimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksRDimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRDimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksRDimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRDimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLineSegParam properties

double ksLineSegParam::GetX1()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksLineSegParam::SetX1(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksLineSegParam::GetY1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksLineSegParam::SetY1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksLineSegParam::GetX2()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksLineSegParam::SetX2(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksLineSegParam::GetY2()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksLineSegParam::SetY2(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

long ksLineSegParam::GetStyle()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksLineSegParam::SetStyle(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLineSegParam operations

BOOL ksLineSegParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCircleParam properties

double ksCircleParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksCircleParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksCircleParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCircleParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksCircleParam::GetRad()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCircleParam::SetRad(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

long ksCircleParam::GetStyle()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksCircleParam::SetStyle(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCircleParam operations

BOOL ksCircleParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksArcByAngleParam properties

double ksArcByAngleParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksArcByAngleParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksArcByAngleParam::GetRad()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetRad(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksArcByAngleParam::GetAng1()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetAng1(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksArcByAngleParam::GetAng2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetAng2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

short ksArcByAngleParam::GetDir()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetDir(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

long ksArcByAngleParam::GetStyle()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksArcByAngleParam::SetStyle(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksArcByAngleParam operations

BOOL ksArcByAngleParam::Init()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksArcByPointParam properties

double ksArcByPointParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksArcByPointParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksArcByPointParam::GetRad()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetRad(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksArcByPointParam::GetX1()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetX1(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksArcByPointParam::GetY1()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetY1(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksArcByPointParam::GetX2()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetX2(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksArcByPointParam::GetY2()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksArcByPointParam::SetY2(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

short ksArcByPointParam::GetDir()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksArcByPointParam::SetDir(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

long ksArcByPointParam::GetStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksArcByPointParam::SetStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksArcByPointParam operations

BOOL ksArcByPointParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPointParam properties

double ksPointParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksPointParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksPointParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksPointParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

long ksPointParam::GetStyle()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksPointParam::SetStyle(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPointParam operations

BOOL ksPointParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksHatchParam properties

double ksHatchParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksHatchParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksHatchParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksHatchParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksHatchParam::GetStep()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksHatchParam::SetStep(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksHatchParam::GetAng()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksHatchParam::SetAng(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksHatchParam::GetWidth()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksHatchParam::SetWidth(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksHatchParam::GetBoundaries()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksHatchParam::SetBoundaries(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

long ksHatchParam::GetColor()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksHatchParam::SetColor(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

short ksHatchParam::GetSheeting()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksHatchParam::SetSheeting(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

long ksHatchParam::GetStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksHatchParam::SetStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksHatchParam operations

BOOL ksHatchParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTextParam properties

/////////////////////////////////////////////////////////////////////////////
// ksTextParam operations

BOOL ksTextParam::Init()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextParam::GetParagraphParam()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksTextParam::SetParagraphParam(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksTextParam::GetTextLineArr()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksTextParam::SetTextLineArr(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsPointParam properties

double ksNurbsPointParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksNurbsPointParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksNurbsPointParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksNurbsPointParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksNurbsPointParam::GetWeight()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksNurbsPointParam::SetWeight(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksNurbsPointParam operations

BOOL ksNurbsPointParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDoubleValue properties

double ksDoubleValue::GetValue()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksDoubleValue::SetValue(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDoubleValue operations

BOOL ksDoubleValue::Init()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsParam properties

short ksNurbsParam::GetDegree()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksNurbsParam::SetDegree(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksNurbsParam::GetClose()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksNurbsParam::SetClose(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

long ksNurbsParam::GetStyle()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksNurbsParam::SetStyle(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksNurbsParam operations

BOOL ksNurbsParam::GetPeriodic()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksNurbsParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsParam::GetPPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksNurbsParam::SetPPoint(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksNurbsParam::GetPKnot()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksNurbsParam::SetPKnot(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksConicArcParam properties

double ksConicArcParam::GetA()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetA(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksConicArcParam::GetB()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetB(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksConicArcParam::GetC()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetC(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksConicArcParam::GetD()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetD(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksConicArcParam::GetE()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetE(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksConicArcParam::GetF()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetF(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksConicArcParam::GetX1()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetX1(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

double ksConicArcParam::GetY1()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetY1(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

double ksConicArcParam::GetX2()
{
	double result;
	GetProperty(0x9, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetX2(double propVal)
{
	SetProperty(0x9, VT_R8, propVal);
}

double ksConicArcParam::GetY2()
{
	double result;
	GetProperty(0xa, VT_R8, (void*)&result);
	return result;
}

void ksConicArcParam::SetY2(double propVal)
{
	SetProperty(0xa, VT_R8, propVal);
}

long ksConicArcParam::GetStyle()
{
	long result;
	GetProperty(0xb, VT_I4, (void*)&result);
	return result;
}

void ksConicArcParam::SetStyle(long propVal)
{
	SetProperty(0xb, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksConicArcParam operations

BOOL ksConicArcParam::Init()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCentreParam properties

long ksCentreParam::GetBaseCurve()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCentreParam::SetBaseCurve(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksCentreParam::GetX()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetX(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksCentreParam::GetY()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetY(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksCentreParam::GetAngle()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetAngle(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

short ksCentreParam::GetType()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksCentreParam::SetType(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

BOOL ksCentreParam::GetStandXpTail()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksCentreParam::SetStandXpTail(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksCentreParam::GetStandXmTail()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksCentreParam::SetStandXmTail(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

BOOL ksCentreParam::GetStandYpTail()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void ksCentreParam::SetStandYpTail(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

BOOL ksCentreParam::GetStandYmTail()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksCentreParam::SetStandYmTail(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

double ksCentreParam::GetLenXpTail()
{
	double result;
	GetProperty(0xa, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetLenXpTail(double propVal)
{
	SetProperty(0xa, VT_R8, propVal);
}

double ksCentreParam::GetLenXmTail()
{
	double result;
	GetProperty(0xb, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetLenXmTail(double propVal)
{
	SetProperty(0xb, VT_R8, propVal);
}

double ksCentreParam::GetLenYpTail()
{
	double result;
	GetProperty(0xc, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetLenYpTail(double propVal)
{
	SetProperty(0xc, VT_R8, propVal);
}

double ksCentreParam::GetLenYmTail()
{
	double result;
	GetProperty(0xd, VT_R8, (void*)&result);
	return result;
}

void ksCentreParam::SetLenYmTail(double propVal)
{
	SetProperty(0xd, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCentreParam operations

BOOL ksCentreParam::Init()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlacementParam properties

double ksPlacementParam::GetXBase()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksPlacementParam::SetXBase(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksPlacementParam::GetYBase()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksPlacementParam::SetYBase(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksPlacementParam::GetScale_()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksPlacementParam::SetScale_(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksPlacementParam::GetAngle()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksPlacementParam::SetAngle(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlacementParam operations

BOOL ksPlacementParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRasterParam properties

CString ksRasterParam::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksRasterParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

BOOL ksRasterParam::GetEmbeded()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksRasterParam::SetEmbeded(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRasterParam operations

BOOL ksRasterParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksRasterParam::GetPlace()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRasterParam::SetPlace(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPolylineParam properties

long ksPolylineParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksPolylineParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

BOOL ksPolylineParam::GetClosed()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksPolylineParam::SetClosed(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPolylineParam operations

BOOL ksPolylineParam::Init()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPolylineParam::GetpMathPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPolylineParam::SetpMathPoint(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksInsertFragmentParam properties

CString ksInsertFragmentParam::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksInsertFragmentParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksInsertFragmentParam::GetComment()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksInsertFragmentParam::SetComment(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

short ksInsertFragmentParam::GetInsertType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksInsertFragmentParam::SetInsertType(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

BOOL ksInsertFragmentParam::GetMultiLayer()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksInsertFragmentParam::SetMultiLayer(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksInsertFragmentParam operations

BOOL ksInsertFragmentParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksInsertFragmentParam::GetPlace()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksInsertFragmentParam::SetPlace(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksViewParam properties

double ksViewParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksViewParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksViewParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksViewParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksViewParam::GetAngle()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksViewParam::SetAngle(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksViewParam::GetScale_()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksViewParam::SetScale_(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

long ksViewParam::GetColor()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksViewParam::SetColor(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

short ksViewParam::GetState()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksViewParam::SetState(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

CString ksViewParam::GetName()
{
	CString result;
	GetProperty(0x7, VT_BSTR, (void*)&result);
	return result;
}

void ksViewParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x7, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksViewParam operations

BOOL ksViewParam::Init()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLBreakDimSource properties

double ksLBreakDimSource::GetX1()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksLBreakDimSource::SetX1(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksLBreakDimSource::GetY1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksLBreakDimSource::SetY1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksLBreakDimSource::GetX2()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksLBreakDimSource::SetX2(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksLBreakDimSource::GetY2()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksLBreakDimSource::SetY2(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksLBreakDimSource::GetX3()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksLBreakDimSource::SetX3(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksLBreakDimSource::GetY3()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksLBreakDimSource::SetY3(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLBreakDimSource operations

BOOL ksLBreakDimSource::Init()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBreakDimDrawing properties

BOOL ksBreakDimDrawing::GetPl()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksBreakDimDrawing::SetPl(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

short ksBreakDimDrawing::GetPt()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksBreakDimDrawing::SetPt(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

long ksBreakDimDrawing::GetTextPos()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksBreakDimDrawing::SetTextPos(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksBreakDimDrawing::GetShelfDir()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksBreakDimDrawing::SetShelfDir(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

double ksBreakDimDrawing::GetAngle()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksBreakDimDrawing::SetAngle(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksBreakDimDrawing::GetLength()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksBreakDimDrawing::SetLength(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBreakDimDrawing operations

BOOL ksBreakDimDrawing::Init()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLBreakDimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksLBreakDimParam operations

LPDISPATCH ksLBreakDimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLBreakDimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksLBreakDimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLBreakDimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksLBreakDimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLBreakDimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksABreakDimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksABreakDimParam operations

LPDISPATCH ksABreakDimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksABreakDimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksABreakDimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksABreakDimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksABreakDimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksABreakDimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksInsertFragmentParamEx properties

CString ksInsertFragmentParamEx::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksInsertFragmentParamEx::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksInsertFragmentParamEx::GetComment()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksInsertFragmentParamEx::SetComment(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

short ksInsertFragmentParamEx::GetInsertType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksInsertFragmentParamEx::SetInsertType(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

BOOL ksInsertFragmentParamEx::GetMultiLayer()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksInsertFragmentParamEx::SetMultiLayer(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

short ksInsertFragmentParamEx::GetScaleProjLinesSize()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksInsertFragmentParamEx::SetScaleProjLinesSize(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksInsertFragmentParamEx operations

BOOL ksInsertFragmentParamEx::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksInsertFragmentParamEx::GetPlace()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksInsertFragmentParamEx::SetPlace(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBezierParam properties

long ksBezierParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksBezierParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

short ksBezierParam::GetClosed()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksBezierParam::SetClosed(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBezierParam operations

BOOL ksBezierParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBezierParam::GetMathPointArr()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBezierParam::SetMathPointArr(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBezierPointParam properties

double ksBezierPointParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksBezierPointParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksBezierPointParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksBezierPointParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksBezierPointParam::GetAng()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksBezierPointParam::SetAng(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksBezierPointParam::GetLeft()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksBezierPointParam::SetLeft(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksBezierPointParam::GetRight()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksBezierPointParam::SetRight(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBezierPointParam operations

BOOL ksBezierPointParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDimTextParam properties

long ksDimTextParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksDimTextParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long ksDimTextParam::GetSign()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksDimTextParam::SetSign(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

BOOL ksDimTextParam::GetStringFlag()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksDimTextParam::SetStringFlag(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long ksDimTextParam::GetBitFlag()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksDimTextParam::SetBitFlag(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDimTextParam operations

BOOL ksDimTextParam::Init(BOOL stringFlag)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		stringFlag);
	return result;
}

BOOL ksDimTextParam::GetBitFlagValue(long bitFlag)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bitFlag);
	return result;
}

BOOL ksDimTextParam::SetBitFlagValue(long val, BOOL state)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val, state);
	return result;
}

LPDISPATCH ksDimTextParam::GetTextArr()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDimTextParam::SetTextArr(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLDimSourceParam properties

double ksLDimSourceParam::GetX1()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetX1(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksLDimSourceParam::GetY1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetY1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksLDimSourceParam::GetX2()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetX2(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksLDimSourceParam::GetY2()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetY2(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksLDimSourceParam::GetDx()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetDx(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksLDimSourceParam::GetDy()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetDy(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

short ksLDimSourceParam::GetPs()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetPs(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksLDimSourceParam::GetBasePoint()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksLDimSourceParam::SetBasePoint(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLDimSourceParam operations

BOOL ksLDimSourceParam::Init()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDimDrawingParam properties

BOOL ksDimDrawingParam::GetPl1()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetPl1(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL ksDimDrawingParam::GetPl2()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetPl2(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

short ksDimDrawingParam::GetPt1()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetPt1(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

short ksDimDrawingParam::GetPt2()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetPt2(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

long ksDimDrawingParam::GetTextPos()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetTextPos(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

short ksDimDrawingParam::GetTextBase()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetTextBase(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

long ksDimDrawingParam::GetShelfDir()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetShelfDir(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

double ksDimDrawingParam::GetAng()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetAng(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

long ksDimDrawingParam::GetLenght()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksDimDrawingParam::SetLenght(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDimDrawingParam operations

BOOL ksDimDrawingParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLDimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksLDimParam operations

LPDISPATCH ksLDimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLDimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksLDimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLDimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksLDimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLDimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksADimSourceParam properties

double ksADimSourceParam::GetXc()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetXc(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksADimSourceParam::GetYc()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetYc(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksADimSourceParam::GetX1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetX1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksADimSourceParam::GetY1()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetY1(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksADimSourceParam::GetX2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetX2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksADimSourceParam::GetY2()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetY2(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksADimSourceParam::GetAng1()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetAng1(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

double ksADimSourceParam::GetAng2()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetAng2(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

long ksADimSourceParam::GetDir()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksADimSourceParam::SetDir(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

double ksADimSourceParam::GetRad()
{
	double result;
	GetProperty(0xa, VT_R8, (void*)&result);
	return result;
}

void ksADimSourceParam::SetRad(double propVal)
{
	SetProperty(0xa, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksADimSourceParam operations

BOOL ksADimSourceParam::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDimensionPartsParam properties

long ksDimensionPartsParam::GetLine1()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetLine1(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long ksDimensionPartsParam::GetLine2()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetLine2(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long ksDimensionPartsParam::GetDimLine()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetDimLine(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksDimensionPartsParam::GetDimLine1()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetDimLine1(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

long ksDimensionPartsParam::GetLeg()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetLeg(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long ksDimensionPartsParam::GetShelf()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetShelf(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

long ksDimensionPartsParam::GetGr()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetGr(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

long ksDimensionPartsParam::GetCurveExt()
{
	long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void ksDimensionPartsParam::SetCurveExt(long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDimensionPartsParam operations

BOOL ksDimensionPartsParam::Init()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksADimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksADimParam operations

LPDISPATCH ksADimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksADimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksADimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksADimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksADimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksADimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRBreakDrawingParam properties

short ksRBreakDrawingParam::GetPt()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksRBreakDrawingParam::SetPt(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

double ksRBreakDrawingParam::GetAng()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksRBreakDrawingParam::SetAng(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

long ksRBreakDrawingParam::GetPb()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksRBreakDrawingParam::SetPb(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRBreakDrawingParam operations

BOOL ksRBreakDrawingParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRBreakDimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksRBreakDimParam operations

LPDISPATCH ksRBreakDimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRBreakDimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksRBreakDimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRBreakDimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksRBreakDimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRBreakDimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksQualityItemParam properties

short ksQualityItemParam::GetMinLimit()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksQualityItemParam::SetMinLimit(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksQualityItemParam::GetMaxLimit()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksQualityItemParam::SetMaxLimit(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

double ksQualityItemParam::GetHigh()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksQualityItemParam::SetHigh(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksQualityItemParam::GetLow()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksQualityItemParam::SetLow(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksQualityItemParam operations

BOOL ksQualityItemParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksQualityContensParam properties

short ksQualityContensParam::GetSystemQuality()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksQualityContensParam::SetSystemQuality(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksQualityContensParam::GetKindQuality()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksQualityContensParam::SetKindQuality(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

CString ksQualityContensParam::GetName()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksQualityContensParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksQualityContensParam operations

BOOL ksQualityContensParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksQualityContensParam::GetpQualityItems()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksQualityContensParam::SetpQualityItems(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksIterator properties

long ksIterator::GetReference()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksIterator::SetReference(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksIterator operations

BOOL ksIterator::ksCreateIterator(long tipSeartch, long parent)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		tipSeartch, parent);
	return result;
}

long ksIterator::ksMoveIterator(LPCTSTR ksMoveIterator)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ksMoveIterator);
	return result;
}

BOOL ksIterator::ksCreateAttrIterator(long obj, long key1, long key2, long key3, long key4, double numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, key1, key2, key3, key4, numb);
	return result;
}

long ksIterator::ksMoveAttrIterator(LPCTSTR ch, long* pObj)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_PI4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ch, pObj);
	return result;
}

BOOL ksIterator::ksCreateSpcIterator(LPCTSTR nameLib, long styleNumb, long spcObjType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		nameLib, styleNumb, spcObjType);
	return result;
}

BOOL ksIterator::ksCreateQualityIterator(short system, short withLimitation)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2 VTS_I2;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		system, withLimitation);
	return result;
}

BOOL ksIterator::ksMoveQualityIterator(LPDISPATCH param, short inMM, LPCTSTR ch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I2 VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		param, inMM, ch);
	return result;
}

long ksIterator::ksDeleteIterator()
{
	long result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFragment properties

/////////////////////////////////////////////////////////////////////////////
// ksFragment operations

long ksFragment::ksFragmentDefinition(LPCTSTR fileName, LPCTSTR comment, short insertType)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I2;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, comment, insertType);
	return result;
}

long ksFragment::ksInsertFragment(long p, BOOL curentLayer, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, curentLayer, par);
	return result;
}

long ksFragment::ksReadFragment(LPCTSTR fileName, BOOL curentLayer, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, curentLayer, par);
	return result;
}

long ksFragment::ksReadFragmentToGroup(LPCTSTR fileName, BOOL curentLayer, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, curentLayer, par);
	return result;
}

long ksFragment::ksReadFragmentToGroupEx(LPCTSTR fileName, BOOL curentLayer, LPDISPATCH par, BOOL scaleProjLinesSize)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, curentLayer, par, scaleProjLinesSize);
	return result;
}

long ksFragment::ksWriteFragment(long gr, LPCTSTR fileName, LPCTSTR comment, double xb, double yb)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		gr, fileName, comment, xb, yb);
	return result;
}

long ksFragment::ksLocalFragmentDefinition(LPCTSTR comment)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		comment);
	return result;
}

long ksFragment::ksCloseLocalFragmentDefinition()
{
	long result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksFragment::ksInsertFragmentEx(long p, BOOL curentLayer, LPDISPATCH par, BOOL scaleProjLinesSize)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		p, curentLayer, par, scaleProjLinesSize);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFragmentLibrary properties

/////////////////////////////////////////////////////////////////////////////
// ksFragmentLibrary operations

CString ksFragmentLibrary::ksChoiceFragmentFromLib(LPCTSTR frwLibFile, long* type)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_PI4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		frwLibFile, type);
	return result;
}

long ksFragmentLibrary::ksFragmentLibraryOperation(LPCTSTR libName, long type)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, type);
	return result;
}

long ksFragmentLibrary::ksAddFragmentToLibrary(LPCTSTR libName, LPCTSTR frwName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, frwName);
	return result;
}

long ksFragmentLibrary::ksCheckFragmentLibrary(LPCTSTR libName, BOOL possibleMessage)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, possibleMessage);
	return result;
}

long ksFragmentLibrary::ksExistFragmentInLibrary(LPCTSTR frwName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		frwName);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTechnicalDemandParam properties

long ksTechnicalDemandParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksTechnicalDemandParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

short ksTechnicalDemandParam::GetStrCount()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksTechnicalDemandParam::SetStrCount(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksTechnicalDemandParam operations

BOOL ksTechnicalDemandParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTechnicalDemandParam::GetPGab()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksTechnicalDemandParam::SetPGab(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedSourceParam properties

double ksOrdinatedSourceParam::GetX0()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksOrdinatedSourceParam::SetX0(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksOrdinatedSourceParam::GetX1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksOrdinatedSourceParam::SetX1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksOrdinatedSourceParam::GetY1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksOrdinatedSourceParam::SetY1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksOrdinatedSourceParam::GetY0()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksOrdinatedSourceParam::SetY0(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksOrdinatedSourceParam::GetX2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksOrdinatedSourceParam::SetX2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksOrdinatedSourceParam::GetY2()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksOrdinatedSourceParam::SetY2(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedSourceParam operations


/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedDimParam properties

/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedDimParam operations

BOOL ksOrdinatedDimParam::Init()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrdinatedDimParam::GetTPar()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksOrdinatedDimParam::SetTPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksOrdinatedDimParam::GetDPar()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksOrdinatedDimParam::SetDPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksOrdinatedDimParam::GetSPar()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksOrdinatedDimParam::SetSPar(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedDrawingParam properties

long ksOrdinatedDrawingParam::GetType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksOrdinatedDrawingParam::SetType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksOrdinatedDrawingParam operations


/////////////////////////////////////////////////////////////////////////////
// ksSheetSize properties

double ksSheetSize::GetWidth()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksSheetSize::SetWidth(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksSheetSize::GetHeight()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksSheetSize::SetHeight(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSheetSize operations

BOOL ksSheetSize::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksStandartSheet properties

short ksStandartSheet::GetFormat()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksStandartSheet::SetFormat(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksStandartSheet::GetMultiply()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksStandartSheet::SetMultiply(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

BOOL ksStandartSheet::GetDirect()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksStandartSheet::SetDirect(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksStandartSheet operations

BOOL ksStandartSheet::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSheetPar properties

CString ksSheetPar::GetLayoutName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksSheetPar::SetLayoutName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

short ksSheetPar::GetShtType()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksSheetPar::SetShtType(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSheetPar operations

BOOL ksSheetPar::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSheetPar::GetSheetParam()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocumentParam properties

CString ksDocumentParam::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksDocumentParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksDocumentParam::GetComment()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksDocumentParam::SetComment(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CString ksDocumentParam::GetAuthor()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksDocumentParam::SetAuthor(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

short ksDocumentParam::GetType()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksDocumentParam::SetType(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

short ksDocumentParam::GetRegime()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksDocumentParam::SetRegime(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDocumentParam operations

BOOL ksDocumentParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDocumentParam::GetLayoutParam()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDimensionsOptions properties

double ksDimensionsOptions::GetProLineExtension()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetProLineExtension(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksDimensionsOptions::GetTextDistanceFromDimLine()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetTextDistanceFromDimLine(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksDimensionsOptions::GetTextDistanceFromProLine()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetTextDistanceFromProLine(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksDimensionsOptions::GetDimLineExtension()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetDimLineExtension(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksDimensionsOptions::GetArrowLength()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetArrowLength(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksDimensionsOptions::GetStyle()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetStyle(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

short ksDimensionsOptions::GetDecimalsCount()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetDecimalsCount(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

long ksDimensionsOptions::GetAnglePrecisionLevel()
{
	long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetAnglePrecisionLevel(long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

long ksDimensionsOptions::GetHiddenToleranceNumber()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksDimensionsOptions::SetHiddenToleranceNumber(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDimensionsOptions operations

BOOL ksDimensionsOptions::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSnapOptions properties

BOOL ksSnapOptions::GetNearestPoint()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetNearestPoint(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetNearestMiddle()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetNearestMiddle(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetIntersect()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetIntersect(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetTangentToCurve()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetTangentToCurve(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetNormalToCurve()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetNormalToCurve(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetGrid()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetGrid(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetXyAlign()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetXyAlign(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetAngSnap()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetAngSnap(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

BOOL ksSnapOptions::GetPointOnCurve()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksSnapOptions::SetPointOnCurve(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

long ksSnapOptions::GetCommonOpt()
{
	long result;
	GetProperty(0xa, VT_I4, (void*)&result);
	return result;
}

void ksSnapOptions::SetCommonOpt(long propVal)
{
	SetProperty(0xa, VT_I4, propVal);
}

double ksSnapOptions::GetAngleStep()
{
	double result;
	GetProperty(0xb, VT_R8, (void*)&result);
	return result;
}

void ksSnapOptions::SetAngleStep(double propVal)
{
	SetProperty(0xb, VT_R8, propVal);
}

short ksSnapOptions::GetLocalSnap()
{
	short result;
	GetProperty(0xc, VT_I2, (void*)&result);
	return result;
}

void ksSnapOptions::SetLocalSnap(short propVal)
{
	SetProperty(0xc, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSnapOptions operations

BOOL ksSnapOptions::Init()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSnapOptions::GetCommonOptValue(long val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksSnapOptions::SetCommonOptValue(long val, BOOL state)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val, state);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLibraryStyleParam properties

CString ksLibraryStyleParam::GetStyleName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksLibraryStyleParam::SetStyleName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

long ksLibraryStyleParam::GetStyleId()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksLibraryStyleParam::SetStyleId(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLibraryStyleParam operations

BOOL ksLibraryStyleParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksStampNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksStampNotify operations

BOOL ksStampNotify::BeginEditStamp()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksStampNotify::EndEditStamp(BOOL editResult)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		editResult);
	return result;
}

BOOL ksStampNotify::StampCellDblClick(long number)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number);
	return result;
}

BOOL ksStampNotify::StampCellBeginEdit(long number)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number);
	return result;
}

BOOL ksStampNotify::StampBeginClearCells(const VARIANT& cells)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&cells);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksStamp properties

long ksStamp::GetReference()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksStamp::SetReference(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksStamp operations

long ksStamp::ksOpenStamp()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksStamp::ksCloseStamp()
{
	long result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksStamp::ksClearStamp(long numb)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb);
	return result;
}

LPDISPATCH ksStamp::ksGetStampColumnText(long* numb)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PI4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		numb);
	return result;
}

long ksStamp::ksSetStampColumnText(long numb, LPDISPATCH textArr)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb, textArr);
	return result;
}

long ksStamp::ksColumnNumber(long numb)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		numb);
	return result;
}

long ksStamp::ksTextLine(LPDISPATCH textItem)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		textItem);
	return result;
}

long ksStamp::ksSetTextLineAlign(short align)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		align);
	return result;
}

long ksStamp::GetSheetNumb()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSheetOptions properties

short ksSheetOptions::GetShtType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksSheetOptions::SetShtType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

CString ksSheetOptions::GetLayoutName()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksSheetOptions::SetLayoutName(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

BOOL ksSheetOptions::GetSheetType()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksSheetOptions::SetSheetType(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSheetOptions operations

BOOL ksSheetOptions::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSheetOptions::GetSheetParam(BOOL type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		type);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurvePatternEx properties

double ksCurvePatternEx::GetVisibleSeg()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksCurvePatternEx::SetVisibleSeg(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksCurvePatternEx::GetInvisibleSeg()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCurvePatternEx::SetInvisibleSeg(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksCurvePatternEx::GetDx()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCurvePatternEx::SetDx(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksCurvePatternEx::GetDy()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksCurvePatternEx::SetDy(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

short ksCurvePatternEx::GetPictureType()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksCurvePatternEx::SetPictureType(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

CString ksCurvePatternEx::GetFrwName()
{
	CString result;
	GetProperty(0x6, VT_BSTR, (void*)&result);
	return result;
}

void ksCurvePatternEx::SetFrwName(LPCTSTR propVal)
{
	SetProperty(0x6, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCurvePatternEx operations

BOOL ksCurvePatternEx::Init()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCurvePatternEx::GetCurvePicture()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCurvePatternEx::SetCurvePicture(LPDISPATCH picture)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		picture);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurveStyleParam properties

CString ksCurveStyleParam::GetName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

long ksCurveStyleParam::GetColor()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetColor(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

double ksCurveStyleParam::GetPaperWidth()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetPaperWidth(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

short ksCurveStyleParam::GetScreenWidth()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetScreenWidth(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

short ksCurveStyleParam::GetCurveType()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetCurveType(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

short ksCurveStyleParam::GetEven()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetEven(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

short ksCurveStyleParam::GetWidthPen()
{
	short result;
	GetProperty(0xc, VT_I2, (void*)&result);
	return result;
}

void ksCurveStyleParam::SetWidthPen(short propVal)
{
	SetProperty(0xc, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCurveStyleParam operations

LPDISPATCH ksCurveStyleParam::GetPPattern(long type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		type);
	return result;
}

BOOL ksCurveStyleParam::SetPPattern(LPDISPATCH pattern)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pattern);
	return result;
}

BOOL ksCurveStyleParam::SetPropertyCurve(long val, BOOL state)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val, state);
	return result;
}

BOOL ksCurveStyleParam::GetPropertyCurve(long val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksCurveStyleParam::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTextStyleParam properties

CString ksTextStyleParam::GetName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksTextStyleParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

double ksTextStyleParam::GetHeight()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetHeight(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksTextStyleParam::GetKsu()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetKsu(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksTextStyleParam::GetStep()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetStep(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

CString ksTextStyleParam::GetFontName()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void ksTextStyleParam::SetFontName(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

long ksTextStyleParam::GetColor()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksTextStyleParam::SetColor(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

short ksTextStyleParam::GetAlign()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksTextStyleParam::SetAlign(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksTextStyleParam::GetBold()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksTextStyleParam::SetBold(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksTextStyleParam::GetItalic()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksTextStyleParam::SetItalic(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

short ksTextStyleParam::GetUnderline()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}

void ksTextStyleParam::SetUnderline(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}

double ksTextStyleParam::GetPosKS()
{
	double result;
	GetProperty(0xb, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetPosKS(double propVal)
{
	SetProperty(0xb, VT_R8, propVal);
}

double ksTextStyleParam::GetStepParPre()
{
	double result;
	GetProperty(0xc, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetStepParPre(double propVal)
{
	SetProperty(0xc, VT_R8, propVal);
}

double ksTextStyleParam::GetStepParPst()
{
	double result;
	GetProperty(0xd, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetStepParPst(double propVal)
{
	SetProperty(0xd, VT_R8, propVal);
}

double ksTextStyleParam::GetLeftEdge()
{
	double result;
	GetProperty(0xe, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetLeftEdge(double propVal)
{
	SetProperty(0xe, VT_R8, propVal);
}

double ksTextStyleParam::GetRightEdge()
{
	double result;
	GetProperty(0xf, VT_R8, (void*)&result);
	return result;
}

void ksTextStyleParam::SetRightEdge(double propVal)
{
	SetProperty(0xf, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksTextStyleParam operations

BOOL ksTextStyleParam::Init()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksHatchLineParam properties

double ksHatchLineParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksHatchLineParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksHatchLineParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksHatchLineParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksHatchLineParam::GetDx()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksHatchLineParam::SetDx(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksHatchLineParam::GetDy()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksHatchLineParam::SetDy(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksHatchLineParam::GetAng()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksHatchLineParam::SetAng(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

short ksHatchLineParam::GetTypeCurvStyle()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksHatchLineParam::SetTypeCurvStyle(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

short ksHatchLineParam::GetStyle()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksHatchLineParam::SetStyle(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksHatchLineParam operations

LPDISPATCH ksHatchLineParam::GetCurPar()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksHatchLineParam::SetCurPar(LPDISPATCH curPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		curPar);
	return result;
}

BOOL ksHatchLineParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksHatchStyleParam properties

CString ksHatchStyleParam::GetName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

double ksHatchStyleParam::GetStep()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetStep(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksHatchStyleParam::GetAng()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetAng(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksHatchStyleParam::GetWidth()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetWidth(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

long ksHatchStyleParam::GetColor()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetColor(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

short ksHatchStyleParam::GetMayChangeAngle()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetMayChangeAngle(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksHatchStyleParam::GetMayChangeWidth()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetMayChangeWidth(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

short ksHatchStyleParam::GetMayChangeSpace()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetMayChangeSpace(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}

short ksHatchStyleParam::GetIsScalable()
{
	short result;
	GetProperty(0xb, VT_I2, (void*)&result);
	return result;
}

void ksHatchStyleParam::SetIsScalable(short propVal)
{
	SetProperty(0xb, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksHatchStyleParam operations

LPDISPATCH ksHatchStyleParam::GetRefPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksHatchStyleParam::SetRefPoint(LPDISPATCH refPoint)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		refPoint);
	return result;
}

LPDISPATCH ksHatchStyleParam::GetArrLineParam()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksHatchStyleParam::SetArrLineParam(LPDISPATCH arrLineParam)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		arrLineParam);
	return result;
}

BOOL ksHatchStyleParam::Init()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRectParam properties

/////////////////////////////////////////////////////////////////////////////
// ksRectParam operations

LPDISPATCH ksRectParam::GetpBot()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRectParam::SetpBot(LPDISPATCH pBot)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pBot);
	return result;
}

LPDISPATCH ksRectParam::GetpTop()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRectParam::SetpTop(LPDISPATCH pTop)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTop);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksShelfPar properties

long ksShelfPar::GetPsh()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksShelfPar::SetPsh(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksShelfPar::GetAng()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksShelfPar::SetAng(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

long ksShelfPar::GetLength()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksShelfPar::SetLength(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksShelfPar operations

BOOL ksShelfPar::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRoughPar properties

long ksRoughPar::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksRoughPar::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

short ksRoughPar::GetType()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksRoughPar::SetType(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

short ksRoughPar::GetAround()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksRoughPar::SetAround(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

double ksRoughPar::GetX()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksRoughPar::SetX(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksRoughPar::GetY()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksRoughPar::SetY(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksRoughPar::GetAng()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksRoughPar::SetAng(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

short ksRoughPar::GetCText0()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksRoughPar::SetCText0(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksRoughPar::GetCText1()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksRoughPar::SetCText1(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksRoughPar::GetCText2()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksRoughPar::SetCText2(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

short ksRoughPar::GetCText3()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}

void ksRoughPar::SetCText3(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRoughPar operations

LPDISPATCH ksRoughPar::GetpText()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRoughPar::SetpText(LPDISPATCH pText)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pText);
	return result;
}

BOOL ksRoughPar::Init()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksRoughPar::InitEx(long style)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		style);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRoughParam properties

/////////////////////////////////////////////////////////////////////////////
// ksRoughParam operations

LPDISPATCH ksRoughParam::GetrPar()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRoughParam::SetrPar(LPDISPATCH par)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		par);
	return result;
}

LPDISPATCH ksRoughParam::GetshPar()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRoughParam::SetshPar(LPDISPATCH shPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		shPar);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksChar255 properties

CString ksChar255::GetStr()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksChar255::SetStr(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksChar255 operations

BOOL ksChar255::Init()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLeaderParam properties

double ksLeaderParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksLeaderParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksLeaderParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksLeaderParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

short ksLeaderParam::GetArrowType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetArrowType(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

long ksLeaderParam::GetDirX()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksLeaderParam::SetDirX(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

short ksLeaderParam::GetSignType()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetSignType(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

short ksLeaderParam::GetAround()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetAround(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

short ksLeaderParam::GetCText0()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetCText0(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksLeaderParam::GetCText1()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetCText1(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksLeaderParam::GetCText2()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetCText2(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

short ksLeaderParam::GetCText3()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}

void ksLeaderParam::SetCText3(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLeaderParam operations

LPDISPATCH ksLeaderParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLeaderParam::SetpTextline(LPDISPATCH pTextLine)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTextLine);
	return result;
}

LPDISPATCH ksLeaderParam::GetpPolyline()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLeaderParam::SetpPolyline(LPDISPATCH pPolyline)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pPolyline);
	return result;
}

BOOL ksLeaderParam::Init()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPosLeaderParam properties

long ksPosLeaderParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksPosLeaderParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksPosLeaderParam::GetX()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksPosLeaderParam::SetX(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksPosLeaderParam::GetY()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksPosLeaderParam::SetY(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

short ksPosLeaderParam::GetArrowType()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksPosLeaderParam::SetArrowType(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

long ksPosLeaderParam::GetDirX()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksPosLeaderParam::SetDirX(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long ksPosLeaderParam::GetDirY()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksPosLeaderParam::SetDirY(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPosLeaderParam operations

LPDISPATCH ksPosLeaderParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPosLeaderParam::SetpTextline(LPDISPATCH textline)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		textline);
	return result;
}

LPDISPATCH ksPosLeaderParam::GetpPolyline()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPosLeaderParam::SetpPolyline(LPDISPATCH polyline)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		polyline);
	return result;
}

BOOL ksPosLeaderParam::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBrandLeaderParam properties

long ksBrandLeaderParam::GetDirX()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetDirX(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksBrandLeaderParam::GetX()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetX(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksBrandLeaderParam::GetY()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetY(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

short ksBrandLeaderParam::GetArrowType()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetArrowType(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

long ksBrandLeaderParam::GetStyle1()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetStyle1(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long ksBrandLeaderParam::GetStyle2()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetStyle2(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

short ksBrandLeaderParam::GetCText0()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetCText0(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksBrandLeaderParam::GetCText1()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetCText1(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

long ksBrandLeaderParam::GetCText2()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksBrandLeaderParam::SetCText2(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBrandLeaderParam operations

LPDISPATCH ksBrandLeaderParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBrandLeaderParam::SetpTextline(LPDISPATCH pTextLine)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTextLine);
	return result;
}

LPDISPATCH ksBrandLeaderParam::GetpPolyline()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBrandLeaderParam::SetpPolyline(LPDISPATCH pPolyline)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pPolyline);
	return result;
}

BOOL ksBrandLeaderParam::Init()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMarkerLeaderParam properties

double ksMarkerLeaderParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksMarkerLeaderParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

short ksMarkerLeaderParam::GetArrowType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetArrowType(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

long ksMarkerLeaderParam::GetStyle1()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetStyle1(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

long ksMarkerLeaderParam::GetStyle2()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetStyle2(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

short ksMarkerLeaderParam::GetCText0()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetCText0(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

short ksMarkerLeaderParam::GetCText1()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetCText1(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksMarkerLeaderParam::GetCText2()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksMarkerLeaderParam::SetCText2(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMarkerLeaderParam operations

LPDISPATCH ksMarkerLeaderParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMarkerLeaderParam::SetpTextline(LPDISPATCH pTextLine)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTextLine);
	return result;
}

LPDISPATCH ksMarkerLeaderParam::GetpPolyline()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMarkerLeaderParam::SetpPolyline(LPDISPATCH pPolyline)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pPolyline);
	return result;
}

BOOL ksMarkerLeaderParam::Init()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksType1 properties

double ksType1::GetXBase()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksType1::SetXBase(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksType1::GetYBase()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksType1::SetYBase(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksType1::GetScale_()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksType1::SetScale_(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksType1::GetAngle()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksType1::SetAngle(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

long ksType1::GetGr()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksType1::SetGr(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksType1 operations

BOOL ksType1::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksType2 properties

double ksType2::GetXBase()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksType2::SetXBase(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksType2::GetYBase()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksType2::SetYBase(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksType2 operations

BOOL ksType2::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksType3 properties

double ksType3::GetXBase()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksType3::SetXBase(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksType3::GetYBase()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksType3::SetYBase(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksType3::GetAngle()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksType3::SetAngle(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksType3 operations

BOOL ksType3::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksType5 properties

double ksType5::GetXBase()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksType5::SetXBase(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksType5::GetYBase()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksType5::SetYBase(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksType5::GetAngle()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksType5::SetAngle(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

BOOL ksType5::GetHorizon()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksType5::SetHorizon(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksType5 operations

BOOL ksType5::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksType6 properties

long ksType6::GetGr()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksType6::SetGr(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksType6 operations

BOOL ksType6::Init()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPhantom properties

short ksPhantom::GetPhantom()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksPhantom::SetPhantom(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPhantom operations

LPDISPATCH ksPhantom::GetPhantomParam()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPhantom::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRequestInfo properties

CString ksRequestInfo::GetPrompt()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo::SetPrompt(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksRequestInfo::GetTitle()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo::SetTitle(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CString ksRequestInfo::GetCommandsString()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo::SetCommandsString(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

CString ksRequestInfo::GetCursor()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo::SetCursor(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

long ksRequestInfo::GetDynamic()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo::SetDynamic(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long ksRequestInfo::GetCommInstance()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo::SetCommInstance(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

long ksRequestInfo::GetMenuId()
{
	long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo::SetMenuId(long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

long ksRequestInfo::GetTitleId()
{
	long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo::SetTitleId(long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

long ksRequestInfo::GetPromptId()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo::SetPromptId(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

long ksRequestInfo::GetCursorId()
{
	long result;
	GetProperty(0xa, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo::SetCursorId(long propVal)
{
	SetProperty(0xa, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRequestInfo operations

CString ksRequestInfo::GetCallBackC()
{
	CString result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo::SetCallBackC(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		methodName, hInst, dispatchOCX);
	return result;
}

CString ksRequestInfo::GetCallBackP()
{
	CString result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo::SetCallBackP(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		methodName, hInst, dispatchOCX);
	return result;
}

CString ksRequestInfo::GetCallBackCm()
{
	CString result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo::SetCallBackCm(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		methodName, hInst, dispatchOCX);
	return result;
}

BOOL ksRequestInfo::Init()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo::SetCursorText(LPCTSTR text)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		text);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksViewPointerParam properties

long ksViewPointerParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksViewPointerParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksViewPointerParam::GetX1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksViewPointerParam::SetX1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksViewPointerParam::GetY1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksViewPointerParam::SetY1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksViewPointerParam::GetX2()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksViewPointerParam::SetX2(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksViewPointerParam::GetY2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksViewPointerParam::SetY2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksViewPointerParam::GetXt()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksViewPointerParam::SetXt(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksViewPointerParam::GetYt()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksViewPointerParam::SetYt(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

short ksViewPointerParam::GetType()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksViewPointerParam::SetType(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

CString ksViewPointerParam::GetStr()
{
	CString result;
	GetProperty(0x9, VT_BSTR, (void*)&result);
	return result;
}

void ksViewPointerParam::SetStr(LPCTSTR propVal)
{
	SetProperty(0x9, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksViewPointerParam operations

LPDISPATCH ksViewPointerParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksViewPointerParam::SetpTextline(LPDISPATCH pTextLine)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTextLine);
	return result;
}

BOOL ksViewPointerParam::Init()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutLineParam properties

long ksCutLineParam::GetStyle()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCutLineParam::SetStyle(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

short ksCutLineParam::GetRight()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksCutLineParam::SetRight(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

double ksCutLineParam::GetX1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCutLineParam::SetX1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksCutLineParam::GetY1()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksCutLineParam::SetY1(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksCutLineParam::GetX2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksCutLineParam::SetX2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksCutLineParam::GetY2()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksCutLineParam::SetY2(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

short ksCutLineParam::GetType()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksCutLineParam::SetType(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

CString ksCutLineParam::GetStr()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void ksCutLineParam::SetStr(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutLineParam operations

LPDISPATCH ksCutLineParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutLineParam::SetpTextline(LPDISPATCH pTextLine)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTextLine);
	return result;
}

LPDISPATCH ksCutLineParam::GetpMathPoint()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutLineParam::SetpMathPoint(LPDISPATCH pMathPoint)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pMathPoint);
	return result;
}

BOOL ksCutLineParam::Init()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksToleranceBranch properties

short ksToleranceBranch::GetArrowType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksToleranceBranch::SetArrowType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksToleranceBranch::GetTCorner()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksToleranceBranch::SetTCorner(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksToleranceBranch operations

LPDISPATCH ksToleranceBranch::GetpMathPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksToleranceBranch::SetpMathPoint(LPDISPATCH pMathPoint)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pMathPoint);
	return result;
}

BOOL ksToleranceBranch::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksToleranceParam properties

short ksToleranceParam::GetTBase()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksToleranceParam::SetTBase(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

long ksToleranceParam::GetStyle()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksToleranceParam::SetStyle(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

double ksToleranceParam::GetX()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksToleranceParam::SetX(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksToleranceParam::GetY()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksToleranceParam::SetY(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

short ksToleranceParam::GetType()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksToleranceParam::SetType(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksToleranceParam operations

LPDISPATCH ksToleranceParam::GetBranchArr()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksToleranceParam::SetBranchArr(LPDISPATCH branchArr)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		branchArr);
	return result;
}

BOOL ksToleranceParam::Init()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcColumnParam properties

long ksSpcColumnParam::GetColumnType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksSpcColumnParam::SetColumnType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long ksSpcColumnParam::GetIspoln()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksSpcColumnParam::SetIspoln(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long ksSpcColumnParam::GetBlock()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksSpcColumnParam::SetBlock(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksSpcColumnParam::GetTypeVal()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksSpcColumnParam::SetTypeVal(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

CString ksSpcColumnParam::GetName()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void ksSpcColumnParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSpcColumnParam operations

BOOL ksSpcColumnParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRecordTypeAttrParam properties

/////////////////////////////////////////////////////////////////////////////
// ksRecordTypeAttrParam operations

CString ksRecordTypeAttrParam::GetAttrLibName()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ksRecordTypeAttrParam::GetKey1()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksRecordTypeAttrParam::GetKey2()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksRecordTypeAttrParam::GetKey3()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksRecordTypeAttrParam::GetKey4()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksRecordTypeAttrParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNumberTypeAttrParam properties

/////////////////////////////////////////////////////////////////////////////
// ksNumberTypeAttrParam operations

double ksNumberTypeAttrParam::GetMinValue()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksNumberTypeAttrParam::GetMaxValue()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksNumberTypeAttrParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleColumnParam properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleColumnParam operations

CString ksSpcStyleColumnParam::GetNameColumn()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ksSpcStyleColumnParam::GetColumnType()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcStyleColumnParam::GetIspoln()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

short ksSpcStyleColumnParam::GetEdit()
{
	short result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcStyleColumnParam::GetCreateSum()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcStyleColumnParam::GetMultiplyToCount()
{
	short result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcStyleColumnParam::GetUseForSectionTitle()
{
	short result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcStyleColumnParam::GetTextDn()
{
	short result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

long ksSpcStyleColumnParam::GetLinkId()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcStyleColumnParam::GetTypeVal()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleColumnParam::GetAdditionalParam()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcStyleColumnParam::Init()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleSectionParam properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleSectionParam operations

CString ksSpcStyleSectionParam::GetSectionName()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ksSpcStyleSectionParam::GetNumber()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcStyleSectionParam::GetSortColumnType()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcStyleSectionParam::GetSortIspoln()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

short ksSpcStyleSectionParam::GetDataType()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

long ksSpcStyleSectionParam::GetSortType()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleSectionParam::GetArrColumn()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleSectionParam::GetArrAdditionalColumn()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcStyleSectionParam::Init()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcSubSectionParam properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcSubSectionParam operations

CString ksSpcSubSectionParam::GetName()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ksSpcSubSectionParam::GetNumber()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksSpcSubSectionParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcTuningSectionParam properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcTuningSectionParam operations

short ksSpcTuningSectionParam::GetSubsectionOn()
{
	short result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcTuningSectionParam::GetGeometryOn()
{
	short result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcTuningSectionParam::GetPositionOn()
{
	short result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcTuningSectionParam::GetSortOn()
{
	short result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcTuningSectionParam::GetFirstOnSheet()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

long ksSpcTuningSectionParam::GetRezervCount()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcTuningSectionParam::GetNumber()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcTuningSectionParam::GetArrSubSection()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcTuningSectionParam::Init()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcTuningStyleParam properties

short ksSpcTuningStyleParam::GetGrToSP()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetGrToSP(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetZoneCalc()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetZoneCalc(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetShowSectionName()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetShowSectionName(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetPositionCalc()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetPositionCalc(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetGeometryDel()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetGeometryDel(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetPositionDel()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetPositionDel(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetMassCalc()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetMassCalc(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetDisableEmptyStr()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetDisableEmptyStr(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetInsertNull()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetInsertNull(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetInsertDash()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetInsertDash(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetDisableEmptyBlockStr()
{
	short result;
	GetProperty(0xb, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetDisableEmptyBlockStr(short propVal)
{
	SetProperty(0xb, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetShowInfoByDetBlock()
{
	short result;
	GetProperty(0xc, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetShowInfoByDetBlock(short propVal)
{
	SetProperty(0xc, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetIspolnOn()
{
	short result;
	GetProperty(0xd, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetIspolnOn(short propVal)
{
	SetProperty(0xd, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetIspolnMarkFull()
{
	short result;
	GetProperty(0xe, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetIspolnMarkFull(short propVal)
{
	SetProperty(0xe, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetBlocOnNewPage()
{
	short result;
	GetProperty(0xf, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetBlocOnNewPage(short propVal)
{
	SetProperty(0xf, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetUserTextStyle()
{
	short result;
	GetProperty(0x10, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetUserTextStyle(short propVal)
{
	SetProperty(0x10, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetCountIspoln()
{
	short result;
	GetProperty(0x11, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetCountIspoln(short propVal)
{
	SetProperty(0x11, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetCountBlock()
{
	short result;
	GetProperty(0x12, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetCountBlock(short propVal)
{
	SetProperty(0x12, VT_I2, propVal);
}

CString ksSpcTuningStyleParam::GetPredefinedTextFileName()
{
	CString result;
	GetProperty(0x13, VT_BSTR, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetPredefinedTextFileName(LPCTSTR propVal)
{
	SetProperty(0x13, VT_BSTR, propVal);
}

short ksSpcTuningStyleParam::GetDelSpcObjOnDelGeometry()
{
	short result;
	GetProperty(0x1d, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetDelSpcObjOnDelGeometry(short propVal)
{
	SetProperty(0x1d, VT_I2, propVal);
}

short ksSpcTuningStyleParam::GetCopySpcObjOnCopyGeometry()
{
	short result;
	GetProperty(0x1e, VT_I2, (void*)&result);
	return result;
}

void ksSpcTuningStyleParam::SetCopySpcObjOnCopyGeometry(short propVal)
{
	SetProperty(0x1e, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSpcTuningStyleParam operations

LPDISPATCH ksSpcTuningStyleParam::GetSectionTextStyleFirst()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcTuningStyleParam::GetSectionTextStyleNext()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcTuningStyleParam::GetObjectTextStyle()
{
	LPDISPATCH result;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcTuningStyleParam::GetArrSection()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcTuningStyleParam::Init()
{
	BOOL result;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSpcTuningStyleParam::SetSectionTextStyleFirst(LPDISPATCH style)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		style);
	return result;
}

BOOL ksSpcTuningStyleParam::SetSectionTextStyleNext(LPDISPATCH style)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		style);
	return result;
}

BOOL ksSpcTuningStyleParam::SetObjectTextStyle(LPDISPATCH style)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		style);
	return result;
}

BOOL ksSpcTuningStyleParam::SetArrSection(LPDISPATCH arr)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		arr);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleParam properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcStyleParam operations

CString ksSpcStyleParam::GetLayoutName1()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ksSpcStyleParam::GetLayoutName2()
{
	CString result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ksSpcStyleParam::GetShtType1()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcStyleParam::GetShtType2()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

short ksSpcStyleParam::GetVariant()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcStyleParam::GetSectionOn()
{
	short result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcStyleParam::GetType()
{
	short result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleParam::GetTuning()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleParam::GetArrColumn()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleParam::GetArrAdditionalColumn()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleParam::GetArrSection()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcStyleParam::GetSheetParam()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcStyleParam::Init()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcDescrParam properties

CString ksSpcDescrParam::GetLayoutName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksSpcDescrParam::SetLayoutName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

long ksSpcDescrParam::GetStyleId()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksSpcDescrParam::SetStyleId(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

CString ksSpcDescrParam::GetSpcName()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksSpcDescrParam::SetSpcName(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSpcDescrParam operations

BOOL ksSpcDescrParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocAttachedSpcParam properties

CString ksDocAttachedSpcParam::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksDocAttachedSpcParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksDocAttachedSpcParam::GetComment()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksDocAttachedSpcParam::SetComment(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

short ksDocAttachedSpcParam::GetTransmit()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksDocAttachedSpcParam::SetTransmit(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDocAttachedSpcParam operations

BOOL ksDocAttachedSpcParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcObjParam properties

long ksSpcObjParam::GetBlockNumber()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksSpcObjParam::SetBlockNumber(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long ksSpcObjParam::GetNumbSubSection()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksSpcObjParam::SetNumbSubSection(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

short ksSpcObjParam::GetFirstOnSheet()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void ksSpcObjParam::SetFirstOnSheet(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

short ksSpcObjParam::GetPosInc()
{
	short result;
	GetProperty(0xa, VT_I2, (void*)&result);
	return result;
}

void ksSpcObjParam::SetPosInc(short propVal)
{
	SetProperty(0xa, VT_I2, propVal);
}

short ksSpcObjParam::GetDraw()
{
	short result;
	GetProperty(0xc, VT_I2, (void*)&result);
	return result;
}

void ksSpcObjParam::SetDraw(short propVal)
{
	SetProperty(0xc, VT_I2, propVal);
}

short ksSpcObjParam::GetPosNotDraw()
{
	short result;
	GetProperty(0xd, VT_I2, (void*)&result);
	return result;
}

void ksSpcObjParam::SetPosNotDraw(short propVal)
{
	SetProperty(0xd, VT_I2, propVal);
}

short ksSpcObjParam::GetIspoln()
{
	short result;
	GetProperty(0xe, VT_I2, (void*)&result);
	return result;
}

void ksSpcObjParam::SetIspoln(short propVal)
{
	SetProperty(0xe, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSpcObjParam operations

LPDISPATCH ksSpcObjParam::GetDocArr()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcObjParam::SetDocArr(LPDISPATCH docArr)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		docArr);
	return result;
}

long ksSpcObjParam::GetTypeObj()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpcObjParam::GetNumbSection()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString ksSpcObjParam::GetSubSectionName()
{
	CString result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

short ksSpcObjParam::GetInsFrgType()
{
	short result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short ksSpcObjParam::GetFirst()
{
	short result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

BOOL ksSpcObjParam::Init()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLibStyle properties

CString ksLibStyle::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksLibStyle::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

long ksLibStyle::GetStyleNumber()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksLibStyle::SetStyleNumber(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

short ksLibStyle::GetTypeAllocation()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksLibStyle::SetTypeAllocation(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLibStyle operations

BOOL ksLibStyle::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDataBaseObject properties

/////////////////////////////////////////////////////////////////////////////
// ksDataBaseObject operations

long ksDataBaseObject::ksRelation(long db)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db);
	return result;
}

BOOL ksDataBaseObject::ksEndRelation()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksDataBaseObject::ksCreateDB(LPCTSTR typeBD)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		typeBD);
	return result;
}

long ksDataBaseObject::ksDeleteDB(long db)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db);
	return result;
}

long ksDataBaseObject::ksConnectDB(long db, LPCTSTR DBName)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db, DBName);
	return result;
}

long ksDataBaseObject::ksDisconnectDB(long db)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db);
	return result;
}

long ksDataBaseObject::ksFreeStatement(long db, long r, long fOption)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db, r, fOption);
	return result;
}

long ksDataBaseObject::ksDoStatement(long db, long r, LPCTSTR stSQL)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db, r, stSQL);
	return result;
}

long ksDataBaseObject::ksReadRecord(long db, long r, LPDISPATCH userPars)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db, r, userPars);
	return result;
}

long ksDataBaseObject::ksCondition(long db, long r, LPCTSTR stSQL)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		db, r, stSQL);
	return result;
}

long ksDataBaseObject::ksRDouble(LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name);
	return result;
}

long ksDataBaseObject::ksRFloat(LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name);
	return result;
}

long ksDataBaseObject::ksRInt(LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name);
	return result;
}

long ksDataBaseObject::ksRLong(LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name);
	return result;
}

long ksDataBaseObject::ksRChar(LPCTSTR name, long size, long type)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name, size, type);
	return result;
}

long ksDataBaseObject::ksOpenTextFile(LPCTSTR fileName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksDataBaseObject::ksCloseTextFile(long F)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		F);
	return result;
}

CString ksDataBaseObject::ksReadStrFrFile(long F, long* res, long numb)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_I4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		F, res, numb);
	return result;
}

CString ksDataBaseObject::ksGetTableName(long db, long* res, LPCTSTR firstOrNext)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_BSTR;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		db, res, firstOrNext);
	return result;
}

CString ksDataBaseObject::ksGetColumnName(long db, LPCTSTR tableName, long* res, LPCTSTR firstOrNext)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_PI4 VTS_BSTR;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		db, tableName, res, firstOrNext);
	return result;
}

long ksDataBaseObject::ksIsODBCOkey()
{
	long result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksDataBaseObject::ksRCharW(LPCTSTR name, long size, long type)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name, size, type);
	return result;
}

long ksDataBaseObject::ksOpenTextFileEx(LPCTSTR fileName, long textFileType)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fileName, textFileType);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcDocumentNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcDocumentNotify operations

BOOL ksSpcDocumentNotify::DocumentBeginAdd()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSpcDocumentNotify::DocumentAdd(LPCTSTR docName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		docName);
	return result;
}

BOOL ksSpcDocumentNotify::DocumentBeginRemove(LPCTSTR docName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		docName);
	return result;
}

BOOL ksSpcDocumentNotify::DocumentRemove(LPCTSTR docName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		docName);
	return result;
}

BOOL ksSpcDocumentNotify::SpcStyleBeginChange(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}

BOOL ksSpcDocumentNotify::SpcStyleChange(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcDocument properties

long ksSpcDocument::GetReference()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksSpcDocument::SetReference(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSpcDocument operations

LPDISPATCH ksSpcDocument::GetStamp()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcDocument::GetSpecification()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcDocument::ksCloseDocument()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSpcDocument::ksGetSpcSheetSB()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksSpcDocument::ksGetSpcDocumentPagesCount()
{
	long result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksSpcDocument::ksSaveDocument(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksSpcDocument::ksCreateDocument(LPDISPATCH par)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		par);
	return result;
}

long ksSpcDocument::ksDeleteObj(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

long ksSpcDocument::ksSetSpcSheetSB(LPDISPATCH arr)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		arr);
	return result;
}

long ksSpcDocument::ksExistObj(long ref)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref);
	return result;
}

BOOL ksSpcDocument::ksOpenDocument(LPCTSTR nameDoc, short regim)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I2;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		nameDoc, regim);
	return result;
}

long ksSpcDocument::ksGetObjParam(long ref, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, param, parType);
	return result;
}

long ksSpcDocument::ksSetObjParam(long ref, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, param, parType);
	return result;
}

BOOL ksSpcDocument::SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH par)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, par);
	return result;
}

LPDISPATCH ksSpcDocument::RasterFormatParam()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSpcDocument::SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, rasterPar);
	return result;
}

LPUNKNOWN ksSpcDocument::GetSpcDocumentNotify()
{
	LPUNKNOWN result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

BOOL ksSpcDocument::ksSaveDocumentEx(LPCTSTR fileName, long SaveMode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, SaveMode);
	return result;
}

LPDISPATCH ksSpcDocument::GetStampEx(long SheetNumb)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SheetNumb);
	return result;
}

BOOL ksSpcDocument::ksSaveToDXF(LPCTSTR DXFFileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		DXFFileName);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpcObjectNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksSpcObjectNotify operations

BOOL ksSpcObjectNotify::BeginDelete(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::Delete(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::CellDblClick(long objRef, long number)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef, number);
	return result;
}

BOOL ksSpcObjectNotify::CellBeginEdit(long objRef, long number)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef, number);
	return result;
}

BOOL ksSpcObjectNotify::ChangeCurrent(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::DocumentBeginAdd(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::DocumentAdd(long objRef, LPCTSTR docName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef, docName);
	return result;
}

BOOL ksSpcObjectNotify::DocumentRemove(long objRef, LPCTSTR docName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef, docName);
	return result;
}

BOOL ksSpcObjectNotify::BeginGeomChange(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::GeomChange(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::BeginProcess(long pType, long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pType, objRef);
	return result;
}

BOOL ksSpcObjectNotify::EndProcess(long pType)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pType);
	return result;
}

BOOL ksSpcObjectNotify::CreateObject(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::UpdateObject(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::BeginCopy(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}

BOOL ksSpcObjectNotify::copy(long objRef)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		objRef);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpecificationNotify properties

/////////////////////////////////////////////////////////////////////////////
// ksSpecificationNotify operations

BOOL ksSpecificationNotify::TuningSpcStyleBeginChange(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}

BOOL ksSpecificationNotify::TuningSpcStyleChange(LPCTSTR libName, long numb, BOOL isOk)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb, isOk);
	return result;
}

BOOL ksSpecificationNotify::ChangeCurrentSpcDescription(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}

BOOL ksSpecificationNotify::SpcDescriptionAdd(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}

BOOL ksSpecificationNotify::SpcDescriptionRemove(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}

BOOL ksSpecificationNotify::SpcDescriptionBeginEdit(LPCTSTR libName, long numb)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb);
	return result;
}

BOOL ksSpecificationNotify::SpcDescriptionEdit(LPCTSTR libName, long numb, BOOL isOk)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		libName, numb, isOk);
	return result;
}

BOOL ksSpecificationNotify::SynchronizationBegin()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSpecificationNotify::Synchronization()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSpecificationNotify::BeginCalcPositions()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSpecificationNotify::CalcPositions()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSpecificationNotify::BeginCreateObject(long typeObj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		typeObj);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSpecification properties

/////////////////////////////////////////////////////////////////////////////
// ksSpecification operations

long ksSpecification::ksSpcObjectEnd()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpecification::ksSpcObjectEdit(long spcObj)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj);
	return result;
}

long ksSpecification::ksSpcObjectCreate(LPCTSTR nameLib, long styleNumb, long secNumb, long subSecNumb, double numb, short typeObj)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_R8 VTS_I2;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nameLib, styleNumb, secNumb, subSecNumb, numb, typeObj);
	return result;
}

long ksSpecification::ksSpcChangeValue(long colNumb, long itemNumb, LPDISPATCH userPars, short typeVal)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH VTS_I2;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		colNumb, itemNumb, userPars, typeVal);
	return result;
}

long ksSpecification::ksSpcVisible(long colNumb, long itemNumb, short flagOn)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I2;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		colNumb, itemNumb, flagOn);
	return result;
}

long ksSpecification::ksSpcMassa(LPCTSTR sMassa)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		sMassa);
	return result;
}

long ksSpecification::ksSpcCount(short ispoln, LPCTSTR sCount)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ispoln, sCount);
	return result;
}

long ksSpecification::ksSpcPosition(long pos)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pos);
	return result;
}

long ksSpecification::ksSpcIncludeReference(long obj, short Clear)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I2;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj, Clear);
	return result;
}

long ksSpecification::ksGetSpcObjForGeom(LPCTSTR nameLib, long numb, long obj, short equal, short First)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I2 VTS_I2;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nameLib, numb, obj, equal, First);
	return result;
}

long ksSpecification::ksGetSpcObjForGeomWithLimit(LPCTSTR nameLib, long numb, long obj, short equal, short First, long section, double attrTypeNumb)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I2 VTS_I2 VTS_I4 VTS_R8;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nameLib, numb, obj, equal, First, section, attrTypeNumb);
	return result;
}

CString ksSpecification::ksGetSpcSectionName(long spcObj)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		spcObj);
	return result;
}

long ksSpecification::ksEditWindowSpcObject(long obj)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj);
	return result;
}

double ksSpecification::ksGetSpcObjectNumber(long spcObj)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		spcObj);
	return result;
}

long ksSpecification::ksGetSpcObject(double objNumb)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		objNumb);
	return result;
}

CString ksSpecification::ksGetSpcObjectColumnText(long spcObj, long columnType, long ispoln, long block)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		spcObj, columnType, ispoln, block);
	return result;
}

long ksSpecification::ksSetSpcObjectColumnText(long columnType, long ispoln, long block, LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		columnType, ispoln, block, str);
	return result;
}

long ksSpecification::ksGetSpcTableColumn(LPCTSTR nameLib, long numb, short additioanalCol)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I2;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nameLib, numb, additioanalCol);
	return result;
}

long ksSpecification::ksGetSpcColumnType(long spcObj, long colNumb, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj, colNumb, par);
	return result;
}

long ksSpecification::ksGetSpcColumnNumb(long spcObj, long columnType, long ispoln, long block)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj, columnType, ispoln, block);
	return result;
}

long ksSpecification::ksGetSpcStyleParam(LPCTSTR nameLib, long numb, LPDISPATCH par, long tPar)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nameLib, numb, par, tPar);
	return result;
}

long ksSpecification::ksGetSpcDescription(long index, LPDISPATCH param, BOOL* state)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_PBOOL;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, param, state);
	return result;
}

long ksSpecification::ksSetSpcDescription(long index, LPDISPATCH param, short state)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I2;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, param, state);
	return result;
}

long ksSpecification::ksAddSpcDescription(LPDISPATCH param)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		param);
	return result;
}

long ksSpecification::ksDeleteSpcDescription(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}

BOOL ksSpecification::D3SpcIncludePart(LPDISPATCH part, BOOL fillTexts)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		part, fillTexts);
	return result;
}

long ksSpecification::D3GetSpcObjForGeomWithLimit(LPCTSTR nameLib, long numb, LPDISPATCH part, short First, short section, double attrTypeNumb)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH VTS_I2 VTS_I2 VTS_R8;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nameLib, numb, part, First, section, attrTypeNumb);
	return result;
}

double ksSpecification::ksGetWidthColumnSpc(long numColumn, BOOL cellOrText)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		numColumn, cellOrText);
	return result;
}

long ksSpecification::ksGetCurrentSpcObject()
{
	long result;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSpecification::ksSetCurrentSpcObject(long spcObj, long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj, index);
	return result;
}

long ksSpecification::ksSetTuningSpcStyleParam(long index, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, par);
	return result;
}

long ksSpecification::ksGetTuningSpcStyleParam(long index, LPDISPATCH par)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, par);
	return result;
}

long ksSpecification::ksGetSpcObjGeometry(long spcObj)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj);
	return result;
}

LPDISPATCH ksSpecification::D3GetSpcObjGeometry(long spcObj)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		spcObj);
	return result;
}

LPDISPATCH ksSpecification::ksGetSpcObjectColumnTextEx(long spcObj, long columnType, long ispoln, long block)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		spcObj, columnType, ispoln, block);
	return result;
}

long ksSpecification::ksSetSpcObjectColumnTextEx(long columnType, long ispoln, long block, LPDISPATCH arr)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		columnType, ispoln, block, arr);
	return result;
}

LPUNKNOWN ksSpecification::GetSpcObjectNotify(long objType)
{
	LPUNKNOWN result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms,
		objType);
	return result;
}

long ksSpecification::ksGetSpcObjGeometryEx(long spcObj, long geomMode)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj, geomMode);
	return result;
}

BOOL ksSpecification::ksSetSpcObjectColumnTextAlign(long spcObj, long columnNumber, long lineIndex, long align)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		spcObj, columnNumber, lineIndex, align);
	return result;
}

long ksSpecification::ksGetSpcObjectColumnTextAlign(long spcObj, long columnNumber, long lineIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spcObj, columnNumber, lineIndex);
	return result;
}

double ksSpecification::ksGetSpcObjectAttributeNumber(long spcObj)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		spcObj);
	return result;
}

BOOL ksSpecification::ksSetSpcObjectAttributeNumber(long spcObj, double attrNumber)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		spcObj, attrNumber);
	return result;
}

double ksSpecification::ksGetSpcObjectSummaryCount(long spcObj, long ispoln, long blockNumber)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		spcObj, ispoln, blockNumber);
	return result;
}

BOOL ksSpecification::ksSetSpcObjectMaterial(long spcObj, LPCTSTR material, double density)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		spcObj, material, density);
	return result;
}

CString ksSpecification::ksGetSpcPerformanceName(long index, long ispoln, long block)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		index, ispoln, block);
	return result;
}

BOOL ksSpecification::ksSetSpcPerformanceName(long index, long ispoln, long block, LPCTSTR name)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, ispoln, block, name);
	return result;
}

BOOL ksSpecification::ksSpcDocLinksClear(long doc)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		doc);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDocumentTxt properties

long ksDocumentTxt::GetReference()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksDocumentTxt::SetReference(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksDocumentTxt operations

LPDISPATCH ksDocumentTxt::GetStamp()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentTxt::ksCloseDocument()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksDocumentTxt::ksGetTxtDocumentPagesCount()
{
	long result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentTxt::ksSaveDocument(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksDocumentTxt::ksCreateDocument(LPDISPATCH par)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		par);
	return result;
}

BOOL ksDocumentTxt::ksOpenDocument(LPCTSTR nameDoc, short regim)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I2;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		nameDoc, regim);
	return result;
}

BOOL ksDocumentTxt::SaveAsToRasterFormat(LPCTSTR fileName, LPDISPATCH par)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, par);
	return result;
}

LPDISPATCH ksDocumentTxt::RasterFormatParam()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDocumentTxt::SaveAsToUncompressedRasterFormat(LPCTSTR fileName, LPDISPATCH rasterPar)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, rasterPar);
	return result;
}

long ksDocumentTxt::ksGetObjParam(long ref, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, param, parType);
	return result;
}

long ksDocumentTxt::ksSetObjParam(long ref, LPDISPATCH param, long parType)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ref, param, parType);
	return result;
}

BOOL ksDocumentTxt::ksSaveDocumentEx(LPCTSTR fileName, long SaveMode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName, SaveMode);
	return result;
}

LPDISPATCH ksDocumentTxt::GetStampEx(long SheetNumb)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SheetNumb);
	return result;
}

long ksDocumentTxt::ksGetDocumentPagesCount()
{
	long result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAttributeTypeParam properties

long ksAttributeTypeParam::GetKey1()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetKey1(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long ksAttributeTypeParam::GetKey2()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetKey2(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long ksAttributeTypeParam::GetKey3()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetKey3(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksAttributeTypeParam::GetKey4()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetKey4(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

long ksAttributeTypeParam::GetRowsCount()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetRowsCount(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

CString ksAttributeTypeParam::GetHeader()
{
	CString result;
	GetProperty(0x6, VT_BSTR, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetHeader(LPCTSTR propVal)
{
	SetProperty(0x6, VT_BSTR, propVal);
}

BOOL ksAttributeTypeParam::GetFlagVisible()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetFlagVisible(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

CString ksAttributeTypeParam::GetPassword()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void ksAttributeTypeParam::SetPassword(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksAttributeTypeParam operations

LPDISPATCH ksAttributeTypeParam::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksAttributeTypeParam::SetColumns(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

BOOL ksAttributeTypeParam::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksColumnInfoParam properties

short ksColumnInfoParam::GetType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksColumnInfoParam::SetType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

CString ksColumnInfoParam::GetHeader()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksColumnInfoParam::SetHeader(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

short ksColumnInfoParam::GetKey()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksColumnInfoParam::SetKey(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

CString ksColumnInfoParam::GetDef()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void ksColumnInfoParam::SetDef(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

BOOL ksColumnInfoParam::GetFlagEnum()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksColumnInfoParam::SetFlagEnum(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksColumnInfoParam operations

LPDISPATCH ksColumnInfoParam::GetFieldEnum()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksColumnInfoParam::SetFieldEnum(LPDISPATCH fieldEnum)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fieldEnum);
	return result;
}

LPDISPATCH ksColumnInfoParam::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksColumnInfoParam::SetColumns(LPDISPATCH fieldEnum)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fieldEnum);
	return result;
}

BOOL ksColumnInfoParam::Init()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAttributeParam properties

long ksAttributeParam::GetKey1()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksAttributeParam::SetKey1(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long ksAttributeParam::GetKey2()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksAttributeParam::SetKey2(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long ksAttributeParam::GetKey3()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksAttributeParam::SetKey3(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksAttributeParam::GetKey4()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksAttributeParam::SetKey4(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

CString ksAttributeParam::GetPassword()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void ksAttributeParam::SetPassword(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksAttributeParam operations

LPDISPATCH ksAttributeParam::GetValues()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksAttributeParam::SetValues(LPDISPATCH values)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		values);
	return result;
}

LPDISPATCH ksAttributeParam::GetFlagVisible()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksAttributeParam::SetFlagVisible(LPDISPATCH flagVisible)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		flagVisible);
	return result;
}

LPDISPATCH ksAttributeParam::GetColumnKeys()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksAttributeParam::SetColumnKeys(LPDISPATCH columnKeys)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		columnKeys);
	return result;
}

BOOL ksAttributeParam::Init()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksVariable properties

double ksVariable::GetValue()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksVariable::SetValue(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

CString ksVariable::GetNote()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksVariable::SetNote(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

CString ksVariable::GetPseudonym()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void ksVariable::SetPseudonym(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

CString ksVariable::GetExpression()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void ksVariable::SetExpression(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

BOOL ksVariable::GetExternal()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksVariable::SetExternal(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksVariable::GetInformation()
{
	BOOL result;
	GetProperty(0xc, VT_BOOL, (void*)&result);
	return result;
}

void ksVariable::SetInformation(BOOL propVal)
{
	SetProperty(0xc, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksVariable operations

CString ksVariable::GetName()
{
	CString result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ksVariable::GetParameterNote()
{
	CString result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ksVariable::GetLinkVarName()
{
	CString result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ksVariable::GetLinkDocName()
{
	CString result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ksVariable::SetLink(LPCTSTR doc, LPCTSTR name)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		doc, name);
	return result;
}

CString ksVariable::GetDisplayName()
{
	CString result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLibraryAttrTypeParam properties

CString ksLibraryAttrTypeParam::GetName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksLibraryAttrTypeParam::SetName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

double ksLibraryAttrTypeParam::GetTypeId()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksLibraryAttrTypeParam::SetTypeId(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLibraryAttrTypeParam operations

BOOL ksLibraryAttrTypeParam::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAttributeObject properties

/////////////////////////////////////////////////////////////////////////////
// ksAttributeObject operations

double ksAttributeObject::ksCreateAttrType(LPDISPATCH attrType, LPCTSTR libName)
{
	double result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BSTR;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		attrType, libName);
	return result;
}

long ksAttributeObject::ksDeleteAttrType(double attrID, LPCTSTR libName, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		attrID, libName, password);
	return result;
}

long ksAttributeObject::ksGetAttrType(double attrID, LPCTSTR libName, LPDISPATCH attrType)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		attrID, libName, attrType);
	return result;
}

double ksAttributeObject::ksSetAttrType(double attrID, LPCTSTR libName, LPDISPATCH attrType, LPCTSTR password)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_BSTR VTS_DISPATCH VTS_BSTR;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		attrID, libName, attrType, password);
	return result;
}

double ksAttributeObject::ksChoiceAttrTypes(LPCTSTR libName)
{
	double result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		libName);
	return result;
}

long ksAttributeObject::ksCreateAttr(long pObj, LPDISPATCH attr, double attrID, LPCTSTR libName)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_R8 VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pObj, attr, attrID, libName);
	return result;
}

long ksAttributeObject::ksDeleteAttr(long pObj, long pAttr, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pObj, pAttr, password);
	return result;
}

long ksAttributeObject::ksGetAttrValue(long pAttr, long rowNumb, long columnNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowNumb, columnNumb, flagVisible, columnKeys, value);
	return result;
}

long ksAttributeObject::ksSetAttrValue(long pAttr, long rowNumb, long columnNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH VTS_BSTR;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowNumb, columnNumb, flagVisible, columnKeys, value, password);
	return result;
}

long ksAttributeObject::ksGetAttrRow(long pAttr, long rowNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowNumb, flagVisible, columnKeys, value);
	return result;
}

long ksAttributeObject::ksSetAttrRow(long pAttr, long rowNumb, LPDISPATCH flagVisible, LPDISPATCH columnKeys, LPDISPATCH value, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH VTS_BSTR;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowNumb, flagVisible, columnKeys, value, password);
	return result;
}

long ksAttributeObject::ksAddAttrRow(long pAttr, long rowNumb, LPDISPATCH flagVisible, LPDISPATCH value, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH VTS_DISPATCH VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowNumb, flagVisible, value, password);
	return result;
}

long ksAttributeObject::ksDeleteAttrRow(long pAttr, long rowNumb, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowNumb, password);
	return result;
}

long ksAttributeObject::ksGetSizeAttrValue(long pAttr, long columnNumb, long* count)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PI4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, columnNumb, count);
	return result;
}

long ksAttributeObject::ksGetSizeAttrRow(long pAttr, long* count)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, count);
	return result;
}

long ksAttributeObject::ksGetAttrKeysInfo(long pAttr, long* key1, long* key2, long* key3, long* key4, double* numb)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PR8;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, key1, key2, key3, key4, numb);
	return result;
}

long ksAttributeObject::ksGetAttrColumnInfo(long pAttr, long columnNumb, LPDISPATCH columnInfo)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, columnNumb, columnInfo);
	return result;
}

long ksAttributeObject::ksGetAttrTabInfo(long pAttr, long* rowsCount, long* columnsCount)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_PI4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, rowsCount, columnsCount);
	return result;
}

long ksAttributeObject::ksViewEditAttr(long pAttr, long type, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, type, password);
	return result;
}

long ksAttributeObject::ksViewEditAttrType(LPCTSTR libName, long type, double attrID, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_R8 VTS_BSTR;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, type, attrID, password);
	return result;
}

long ksAttributeObject::ksChoiceAttr(long pObj)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pObj);
	return result;
}

LPDISPATCH ksAttributeObject::ksGetLibraryAttrTypesArray(LPCTSTR libName)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		libName);
	return result;
}

LPDISPATCH ksAttributeObject::ksCreateAttr3D(LPDISPATCH pObj, LPDISPATCH attr, double attrID, LPCTSTR libName)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_R8 VTS_BSTR;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pObj, attr, attrID, libName);
	return result;
}

long ksAttributeObject::ksDeleteAttr3D(LPDISPATCH pObj, LPDISPATCH pAttr, LPCTSTR password)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_BSTR;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pObj, pAttr, password);
	return result;
}

LPDISPATCH ksAttributeObject::ksChoiceAttr3D(LPDISPATCH pObj)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pObj);
	return result;
}

LPDISPATCH ksAttributeObject::ksCreateAttr3DEx(LPDISPATCH pObj, LPDISPATCH pSourcePart, LPDISPATCH attr, double attrID, LPCTSTR libName)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH VTS_R8 VTS_BSTR;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pObj, pSourcePart, attr, attrID, libName);
	return result;
}

long ksAttributeObject::ksGetSizeAttrValueW(long pAttr, long columnNumb, long* count)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PI4;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, columnNumb, count);
	return result;
}

long ksAttributeObject::ksGetSizeAttrRowW(long pAttr, long* count)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pAttr, count);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRequestInfo3D properties

CString ksRequestInfo3D::GetPrompt()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetPrompt(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksRequestInfo3D::GetTitle()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetTitle(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CString ksRequestInfo3D::GetCursorName()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetCursorName(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

CString ksRequestInfo3D::GetCommandsString()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetCommandsString(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

long ksRequestInfo3D::GetCursorId()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetCursorId(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

long ksRequestInfo3D::GetMenuId()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetMenuId(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

BOOL ksRequestInfo3D::GetDynamicFiltering()
{
	BOOL result;
	GetProperty(0x14, VT_BOOL, (void*)&result);
	return result;
}

void ksRequestInfo3D::SetDynamicFiltering(BOOL propVal)
{
	SetProperty(0x14, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRequestInfo3D operations

CString ksRequestInfo3D::GetFilterCallBack()
{
	CString result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ksRequestInfo3D::GetCallBack()
{
	CString result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo3D::SetFilterCallBack(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		methodName, hInst, dispatchOCX);
	return result;
}

BOOL ksRequestInfo3D::SetCallBack(LPCTSTR methodName, long hInst, LPDISPATCH dispatchOCX)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		methodName, hInst, dispatchOCX);
	return result;
}

LPDISPATCH ksRequestInfo3D::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksRequestInfo3D::GetEntityCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksRequestInfo3D::GetCurrentCommand()
{
	long result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksRequestInfo3D::GetMateConstraintCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksRequestInfo3D::GetIPhantom()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo3D::CreatePhantom()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPUNKNOWN ksRequestInfo3D::GetProcessParam()
{
	LPUNKNOWN result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo3D::SetProcessParam(LPUNKNOWN param)
{
	BOOL result;
	static BYTE parms[] =
		VTS_UNKNOWN;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		param);
	return result;
}

LPDISPATCH ksRequestInfo3D::GetCallBackFeature()
{
	LPDISPATCH result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRequestInfo3D::SetCursorText(LPCTSTR text)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		text);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMateConstraint properties

short ksMateConstraint::GetConstraintType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksMateConstraint::SetConstraintType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksMateConstraint::GetDirection()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksMateConstraint::SetDirection(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

short ksMateConstraint::GetFixed()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksMateConstraint::SetFixed(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

double ksMateConstraint::GetDistance()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksMateConstraint::SetDistance(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMateConstraint operations

BOOL ksMateConstraint::Create()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMateConstraint::GetBaseObj(short number)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		number);
	return result;
}

BOOL ksMateConstraint::SetBaseObj(short number, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2 VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number, obj);
	return result;
}

LPDISPATCH ksMateConstraint::GetFeature()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksMateConstraint::GetEntityParams(short number, VARIANT* params)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_PVARIANT;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		number, params);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDefaultObject properties

/////////////////////////////////////////////////////////////////////////////
// ksDefaultObject operations

LPDISPATCH ksDefaultObject::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDefaultObject::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksModelLibrary properties

/////////////////////////////////////////////////////////////////////////////
// ksModelLibrary operations

long ksModelLibrary::ModelLibraryOperation(LPCTSTR libName, long type)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, type);
	return result;
}

CString ksModelLibrary::ChoiceModelFromLib(LPCTSTR libFile, long* type)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_PI4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		libFile, type);
	return result;
}

long ksModelLibrary::ExistModelInLibrary(LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		name);
	return result;
}

long ksModelLibrary::AddD3DocumentToLibrary(LPCTSTR libName, LPCTSTR fileName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, fileName);
	return result;
}

long ksModelLibrary::CheckModelLibrary(LPCTSTR libName, BOOL possibleMessage)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		libName, possibleMessage);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksVariableCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksVariableCollection operations

BOOL ksVariableCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksVariableCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksVariableCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksVariableCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksVariableCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksVariableCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksVariableCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

LPDISPATCH ksVariableCollection::GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, testFullName, testIgnoreCase);
	return result;
}

LPDISPATCH ksVariableCollection::AddNewVariable(LPCTSTR name, double value, LPCTSTR note)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_R8 VTS_BSTR;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, value, note);
	return result;
}

BOOL ksVariableCollection::RemoveVariable(LPCTSTR name)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMateConstraintCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksMateConstraintCollection operations

long ksMateConstraintCollection::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMateConstraintCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMateConstraintCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMateConstraintCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMateConstraintCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMateConstraintCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

BOOL ksMateConstraintCollection::AddMateConstraint(LPDISPATCH mate)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		mate);
	return result;
}

BOOL ksMateConstraintCollection::RemoveMateConstraint(LPDISPATCH mate)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		mate);
	return result;
}

BOOL ksMateConstraintCollection::Clear()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksMateConstraintCollection::refresh()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksMateConstraintCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksMateConstraintCollection::GetSafeArrayByObj(LPDISPATCH obj, VARIANT* pArray)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PVARIANT;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj, pArray);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPartCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksPartCollection operations

BOOL ksPartCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksPartCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPartCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPartCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPartCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPartCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPartCollection::GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, testFullName, testIgnoreCase);
	return result;
}

LPDISPATCH ksPartCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

BOOL ksPartCollection::Add(LPDISPATCH part)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		part);
	return result;
}

BOOL ksPartCollection::AddAt(LPDISPATCH part, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		part, index);
	return result;
}

BOOL ksPartCollection::AddBefore(LPDISPATCH part, LPDISPATCH base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		part, base);
	return result;
}

BOOL ksPartCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksPartCollection::DetachByBody(LPDISPATCH part)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		part);
	return result;
}

BOOL ksPartCollection::Clear()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksPartCollection::SetByIndex(LPDISPATCH part, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		part, index);
	return result;
}

long ksPartCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMeshPartArrayDefinition properties

double ksMeshPartArrayDefinition::GetAngle1()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetAngle1(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

long ksMeshPartArrayDefinition::GetCount1()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetCount1(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

double ksMeshPartArrayDefinition::GetStep1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetStep1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

BOOL ksMeshPartArrayDefinition::GetFactor1()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetFactor1(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

double ksMeshPartArrayDefinition::GetAngle2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetAngle2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksMeshPartArrayDefinition::GetCount2()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetCount2(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

double ksMeshPartArrayDefinition::GetStep2()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetStep2(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

BOOL ksMeshPartArrayDefinition::GetFactor2()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetFactor2(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

BOOL ksMeshPartArrayDefinition::GetInsideFlag()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshPartArrayDefinition::SetInsideFlag(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMeshPartArrayDefinition operations

LPDISPATCH ksMeshPartArrayDefinition::GetAxis1()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeshPartArrayDefinition::SetAxis1(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

LPDISPATCH ksMeshPartArrayDefinition::GetAxis2()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeshPartArrayDefinition::SetAxis2(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

LPDISPATCH ksMeshPartArrayDefinition::PartArray()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeshPartArrayDefinition::GetCopyParamAlongAxis(BOOL firstAxis, double* angle, long* count, double* step, BOOL* factor)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8 VTS_PI4 VTS_PR8 VTS_PBOOL;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		firstAxis, angle, count, step, factor);
	return result;
}

BOOL ksMeshPartArrayDefinition::SetCopyParamAlongAxis(BOOL firstAxis, double angle, long count, double step, BOOL factor)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8 VTS_I4 VTS_R8 VTS_BOOL;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		firstAxis, angle, count, step, factor);
	return result;
}

LPDISPATCH ksMeshPartArrayDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCircularPartArrayDefinition properties

long ksCircularPartArrayDefinition::GetCount1()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetCount1(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksCircularPartArrayDefinition::GetStep1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetStep1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksCircularPartArrayDefinition::GetFactor1()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetFactor1(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long ksCircularPartArrayDefinition::GetCount2()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetCount2(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

double ksCircularPartArrayDefinition::GetStep2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetStep2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

BOOL ksCircularPartArrayDefinition::GetFactor2()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetFactor2(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksCircularPartArrayDefinition::GetInverce()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetInverce(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

BOOL ksCircularPartArrayDefinition::GetKeepAngle()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularPartArrayDefinition::SetKeepAngle(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCircularPartArrayDefinition operations

LPDISPATCH ksCircularPartArrayDefinition::PartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCircularPartArrayDefinition::GetAxis()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCircularPartArrayDefinition::SetAxis(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

BOOL ksCircularPartArrayDefinition::GetCopyParamAlongDir(long* count, double* step, BOOL* factor, BOOL dir)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PR8 VTS_PBOOL VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		count, step, factor, dir);
	return result;
}

BOOL ksCircularPartArrayDefinition::SetCopyParamAlongDir(long count, double step, BOOL factor, BOOL dir)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_BOOL VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		count, step, factor, dir);
	return result;
}

LPDISPATCH ksCircularPartArrayDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurvePartArrayDefinition properties

long ksCurvePartArrayDefinition::GetCount()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCurvePartArrayDefinition::SetCount(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksCurvePartArrayDefinition::GetStep()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCurvePartArrayDefinition::SetStep(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksCurvePartArrayDefinition::GetFactor()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksCurvePartArrayDefinition::SetFactor(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksCurvePartArrayDefinition::GetKeepAngle()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksCurvePartArrayDefinition::SetKeepAngle(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL ksCurvePartArrayDefinition::GetFullCurve()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksCurvePartArrayDefinition::SetFullCurve(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL ksCurvePartArrayDefinition::GetSence()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksCurvePartArrayDefinition::SetSence(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCurvePartArrayDefinition operations

LPDISPATCH ksCurvePartArrayDefinition::PartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCurvePartArrayDefinition::CurveArray()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCurvePartArrayDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDerivativePartArrayDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksDerivativePartArrayDefinition operations

LPDISPATCH ksDerivativePartArrayDefinition::PartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksDerivativePartArrayDefinition::GetDeriv()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksDerivativePartArrayDefinition::SetDeriv(LPDISPATCH deriv)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		deriv);
	return result;
}

LPDISPATCH ksDerivativePartArrayDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAxis2PlanesDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksAxis2PlanesDefinition operations

BOOL ksAxis2PlanesDefinition::SetPlane(long number, LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number, plane);
	return result;
}

LPDISPATCH ksAxis2PlanesDefinition::GetPlane(long number)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		number);
	return result;
}

LPDISPATCH ksAxis2PlanesDefinition::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAxisOperationsDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksAxisOperationsDefinition operations

BOOL ksAxisOperationsDefinition::SetOperation(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksAxisOperationsDefinition::GetOperation()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAxisOperationsDefinition::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAxis2PointsDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksAxis2PointsDefinition operations

BOOL ksAxis2PointsDefinition::SetPoint(long number, LPDISPATCH point)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number, point);
	return result;
}

LPDISPATCH ksAxis2PointsDefinition::GetPoint(long number)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		number);
	return result;
}

LPDISPATCH ksAxis2PointsDefinition::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAxisEdgeDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksAxisEdgeDefinition operations

BOOL ksAxisEdgeDefinition::SetEdge(LPDISPATCH edge)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		edge);
	return result;
}

LPDISPATCH ksAxisEdgeDefinition::GetEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAxisEdgeDefinition::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMeshCopyDefinition properties

double ksMeshCopyDefinition::GetAngle1()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetAngle1(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

long ksMeshCopyDefinition::GetCount1()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetCount1(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

double ksMeshCopyDefinition::GetStep1()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetStep1(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

BOOL ksMeshCopyDefinition::GetFactor1()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetFactor1(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

double ksMeshCopyDefinition::GetAngle2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetAngle2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksMeshCopyDefinition::GetCount2()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetCount2(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

double ksMeshCopyDefinition::GetStep2()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetStep2(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

BOOL ksMeshCopyDefinition::GetFactor2()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetFactor2(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

BOOL ksMeshCopyDefinition::GetInsideFlag()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetInsideFlag(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

BOOL ksMeshCopyDefinition::GetGeomArray()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void ksMeshCopyDefinition::SetGeomArray(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMeshCopyDefinition operations

LPDISPATCH ksMeshCopyDefinition::OperationArray()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeshCopyDefinition::GetCopyParamAlongAxis(BOOL firstAxis, double* angle, long* count, double* step, BOOL* factor)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8 VTS_PI4 VTS_PR8 VTS_PBOOL;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		firstAxis, angle, count, step, factor);
	return result;
}

BOOL ksMeshCopyDefinition::SetCopyParamAlongAxis(BOOL firstAxis, double angle, long count, double step, BOOL factor)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8 VTS_I4 VTS_R8 VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		firstAxis, angle, count, step, factor);
	return result;
}

LPDISPATCH ksMeshCopyDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMeshCopyDefinition::GetAxis1()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeshCopyDefinition::SetAxis1(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

LPDISPATCH ksMeshCopyDefinition::GetAxis2()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeshCopyDefinition::SetAxis2(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCircularCopyDefinition properties

long ksCircularCopyDefinition::GetCount1()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetCount1(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksCircularCopyDefinition::GetStep1()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetStep1(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksCircularCopyDefinition::GetFactor1()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetFactor1(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long ksCircularCopyDefinition::GetCount2()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetCount2(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

double ksCircularCopyDefinition::GetStep2()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetStep2(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

BOOL ksCircularCopyDefinition::GetFactor2()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetFactor2(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksCircularCopyDefinition::GetInverce()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetInverce(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

BOOL ksCircularCopyDefinition::GetGeomArray()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void ksCircularCopyDefinition::SetGeomArray(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCircularCopyDefinition operations

LPDISPATCH ksCircularCopyDefinition::GetOperationArray()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCircularCopyDefinition::GetAxis()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCircularCopyDefinition::SetAxis(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

BOOL ksCircularCopyDefinition::GetCopyParamAlongDir(long* count, double* step, BOOL* factor, BOOL dir)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PR8 VTS_PBOOL VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		count, step, factor, dir);
	return result;
}

BOOL ksCircularCopyDefinition::SetCopyParamAlongDir(long count, double step, BOOL factor, BOOL dir)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_BOOL VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		count, step, factor, dir);
	return result;
}

LPDISPATCH ksCircularCopyDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurveCopyDefinition properties

long ksCurveCopyDefinition::GetCount()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetCount(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksCurveCopyDefinition::GetStep()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetStep(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksCurveCopyDefinition::GetFactor()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetFactor(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksCurveCopyDefinition::GetKeepAngle()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetKeepAngle(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL ksCurveCopyDefinition::GetFullCurve()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetFullCurve(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL ksCurveCopyDefinition::GetSence()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetSence(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksCurveCopyDefinition::GetGeomArray()
{
	BOOL result;
	GetProperty(0xa, VT_BOOL, (void*)&result);
	return result;
}

void ksCurveCopyDefinition::SetGeomArray(BOOL propVal)
{
	SetProperty(0xa, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCurveCopyDefinition operations

LPDISPATCH ksCurveCopyDefinition::OperationArray()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCurveCopyDefinition::CurveArray()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCurveCopyDefinition::DeletedCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMirrorCopyDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksMirrorCopyDefinition operations

LPDISPATCH ksMirrorCopyDefinition::GetOperationArray()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMirrorCopyDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMirrorCopyDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMirrorCopyAllDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksMirrorCopyAllDefinition operations

LPDISPATCH ksMirrorCopyAllDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMirrorCopyAllDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksMirrorCopyAllDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksConicSpiralDefinition properties

double ksConicSpiralDefinition::GetTurn()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetTurn(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksConicSpiralDefinition::GetStep()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetStep(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksConicSpiralDefinition::GetTurnDir()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetTurnDir(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

short ksConicSpiralDefinition::GetBuildMode()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetBuildMode(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

BOOL ksConicSpiralDefinition::GetBuildDir()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetBuildDir(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

double ksConicSpiralDefinition::GetHeight()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetHeight(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

short ksConicSpiralDefinition::GetHeightType()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetHeightType(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

double ksConicSpiralDefinition::GetHeightAdd()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetHeightAdd(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

BOOL ksConicSpiralDefinition::GetHeightAddHow()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetHeightAddHow(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

double ksConicSpiralDefinition::GetInitialDiam()
{
	double result;
	GetProperty(0xa, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetInitialDiam(double propVal)
{
	SetProperty(0xa, VT_R8, propVal);
}

short ksConicSpiralDefinition::GetInitialDiamType()
{
	short result;
	GetProperty(0xb, VT_I2, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetInitialDiamType(short propVal)
{
	SetProperty(0xb, VT_I2, propVal);
}

double ksConicSpiralDefinition::GetTerminalDiam()
{
	double result;
	GetProperty(0xc, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetTerminalDiam(double propVal)
{
	SetProperty(0xc, VT_R8, propVal);
}

short ksConicSpiralDefinition::GetTerminalDiamType()
{
	short result;
	GetProperty(0xd, VT_I2, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetTerminalDiamType(short propVal)
{
	SetProperty(0xd, VT_I2, propVal);
}

BOOL ksConicSpiralDefinition::GetTiltAngleHow()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetTiltAngleHow(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

double ksConicSpiralDefinition::GetFirstAngle()
{
	double result;
	GetProperty(0xf, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetFirstAngle(double propVal)
{
	SetProperty(0xf, VT_R8, propVal);
}

double ksConicSpiralDefinition::GetTiltAngle()
{
	double result;
	GetProperty(0x10, VT_R8, (void*)&result);
	return result;
}

void ksConicSpiralDefinition::SetTiltAngle(double propVal)
{
	SetProperty(0x10, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksConicSpiralDefinition operations

LPDISPATCH ksConicSpiralDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksConicSpiralDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

BOOL ksConicSpiralDefinition::GetLocation(double* x, double* y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

BOOL ksConicSpiralDefinition::SetLocation(double x, double y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

LPDISPATCH ksConicSpiralDefinition::GetHeightObject()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksConicSpiralDefinition::SetHeightObject(LPDISPATCH heightObject)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		heightObject);
	return result;
}

LPDISPATCH ksConicSpiralDefinition::GetInitialDiamObject()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksConicSpiralDefinition::SetInitialDiamObject(LPDISPATCH initialDiamObject)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		initialDiamObject);
	return result;
}

LPDISPATCH ksConicSpiralDefinition::GetTerminalDiamObject()
{
	LPDISPATCH result;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksConicSpiralDefinition::SetTerminalDiamObject(LPDISPATCH terminalDiamObject)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		terminalDiamObject);
	return result;
}

LPDISPATCH ksConicSpiralDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCylindricSpiralDefinition properties

double ksCylindricSpiralDefinition::GetTurn()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetTurn(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksCylindricSpiralDefinition::GetStep()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetStep(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksCylindricSpiralDefinition::GetTurnDir()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetTurnDir(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

short ksCylindricSpiralDefinition::GetBuildMode()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetBuildMode(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

BOOL ksCylindricSpiralDefinition::GetBuildDir()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetBuildDir(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

double ksCylindricSpiralDefinition::GetHeight()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetHeight(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

short ksCylindricSpiralDefinition::GetHeightType()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetHeightType(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

double ksCylindricSpiralDefinition::GetHeightAdd()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetHeightAdd(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

BOOL ksCylindricSpiralDefinition::GetHeightAddHow()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetHeightAddHow(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

double ksCylindricSpiralDefinition::GetDiam()
{
	double result;
	GetProperty(0xa, VT_R8, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetDiam(double propVal)
{
	SetProperty(0xa, VT_R8, propVal);
}

short ksCylindricSpiralDefinition::GetDiamType()
{
	short result;
	GetProperty(0xb, VT_I2, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetDiamType(short propVal)
{
	SetProperty(0xb, VT_I2, propVal);
}

double ksCylindricSpiralDefinition::GetFirstAngle()
{
	double result;
	GetProperty(0xc, VT_R8, (void*)&result);
	return result;
}

void ksCylindricSpiralDefinition::SetFirstAngle(double propVal)
{
	SetProperty(0xc, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCylindricSpiralDefinition operations

LPDISPATCH ksCylindricSpiralDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCylindricSpiralDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

BOOL ksCylindricSpiralDefinition::GetLocation(double* x, double* y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

BOOL ksCylindricSpiralDefinition::SetLocation(double x, double y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

LPDISPATCH ksCylindricSpiralDefinition::GetHeightObject()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCylindricSpiralDefinition::SetHeightObject(LPDISPATCH heightObject)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		heightObject);
	return result;
}

LPDISPATCH ksCylindricSpiralDefinition::GetDiamObject()
{
	LPDISPATCH result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCylindricSpiralDefinition::SetDiamObject(LPDISPATCH diamObject)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		diamObject);
	return result;
}

LPDISPATCH ksCylindricSpiralDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPolyLineDefinition properties

BOOL ksPolyLineDefinition::GetClosed()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksPolyLineDefinition::SetClosed(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL ksPolyLineDefinition::GetVertexVisible()
{
	BOOL result;
	GetProperty(0xd, VT_BOOL, (void*)&result);
	return result;
}

void ksPolyLineDefinition::SetVertexVisible(BOOL propVal)
{
	SetProperty(0xd, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPolyLineDefinition operations

long ksPolyLineDefinition::GetCountVertex()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksPolyLineDefinition::AddVertex(double x, double y, double z, double radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, radius);
	return result;
}

BOOL ksPolyLineDefinition::InsertVertex(long index, double x, double y, double z, double radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z, radius);
	return result;
}

BOOL ksPolyLineDefinition::DeleteVertex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksPolyLineDefinition::GetParamVertex(long index, double* x, double* y, double* z, double* radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z, radius);
	return result;
}

BOOL ksPolyLineDefinition::Flush()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksPolyLineDefinition::ReadFromFile(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksPolyLineDefinition::WriteToFile(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

LPDISPATCH ksPolyLineDefinition::EdgeCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPolyLineDefinition::AddPointWithParams(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

LPDISPATCH ksPolyLineDefinition::GetPointParams(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPolyLineVertexParam properties

long ksPolyLineVertexParam::GetBuildingType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksPolyLineVertexParam::SetBuildingType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPolyLineVertexParam operations

BOOL ksPolyLineVertexParam::GetParamVertex(double* x, double* y, double* z, double* radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, radius);
	return result;
}

BOOL ksPolyLineVertexParam::SetParamVertex(double x, double y, double z, double radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, radius);
	return result;
}

BOOL ksPolyLineVertexParam::SetParamByVertex(LPDISPATCH vertex, double radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		vertex, radius);
	return result;
}

BOOL ksPolyLineVertexParam::GetParamByDistance(double* distance, double* radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		distance, radius);
	return result;
}

BOOL ksPolyLineVertexParam::SetParamByDistance(double distance, double radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		distance, radius);
	return result;
}

LPDISPATCH ksPolyLineVertexParam::GetBuildingObject()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPolyLineVertexParam::SetBuildingObject(LPDISPATCH object)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		object);
	return result;
}

LPDISPATCH ksPolyLineVertexParam::GetAssociation()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPolyLineVertexParam::SetAssociation(LPDISPATCH vertex)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		vertex);
	return result;
}

LPDISPATCH ksPolyLineVertexParam::GetVertex()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksPolyLineVertexParam::GetIndex()
{
	long result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSplineDefinition properties

BOOL ksSplineDefinition::GetClosed()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksSplineDefinition::SetClosed(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL ksSplineDefinition::GetSplineOnPoles()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksSplineDefinition::SetSplineOnPoles(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

long ksSplineDefinition::GetDegree()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksSplineDefinition::SetDegree(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSplineDefinition operations

long ksSplineDefinition::GetCountVertex()
{
	long result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksSplineDefinition::AddVertex(double x, double y, double z, double radius)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, radius);
	return result;
}

BOOL ksSplineDefinition::InsertVertex(long index, double x, double y, double z, double weight)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z, weight);
	return result;
}

BOOL ksSplineDefinition::DeleteVertex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksSplineDefinition::GetParamVertex(long index, double* x, double* y, double* z, double* weight)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z, weight);
	return result;
}

BOOL ksSplineDefinition::Flush()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSplineDefinition::ReadFromFile(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksSplineDefinition::WriteToFile(LPCTSTR fileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		fileName);
	return result;
}

BOOL ksSplineDefinition::AddVertexAndAssociation(long index, LPDISPATCH obj, double weight)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH VTS_R8;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, obj, weight);
	return result;
}

BOOL ksSplineDefinition::SetAssociation(long index, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, obj);
	return result;
}

LPDISPATCH ksSplineDefinition::GetAssociation(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBaseExtrusionDefinition properties

short ksBaseExtrusionDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksBaseExtrusionDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBaseExtrusionDefinition operations

BOOL ksBaseExtrusionDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksBaseExtrusionDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBaseExtrusionDefinition::GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PI2 VTS_PR8 VTS_PR8 VTS_PBOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksBaseExtrusionDefinition::SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8 VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksBaseExtrusionDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBaseExtrusionDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBaseExtrusionDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBaseExtrusionDefinition::ExtrusionParam()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBaseExtrusionDefinition::GetDepthObject(BOOL normal)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		normal);
	return result;
}

BOOL ksBaseExtrusionDefinition::SetDepthObject(BOOL normal, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal, obj);
	return result;
}

BOOL ksBaseExtrusionDefinition::ResetDepthObject(BOOL normal)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBossExtrusionDefinition properties

short ksBossExtrusionDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksBossExtrusionDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBossExtrusionDefinition operations

BOOL ksBossExtrusionDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksBossExtrusionDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBossExtrusionDefinition::GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PI2 VTS_PR8 VTS_PR8 VTS_PBOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksBossExtrusionDefinition::SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8 VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksBossExtrusionDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBossExtrusionDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBossExtrusionDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossExtrusionDefinition::ExtrusionParam()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossExtrusionDefinition::GetDepthObject(BOOL normal)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		normal);
	return result;
}

BOOL ksBossExtrusionDefinition::SetDepthObject(BOOL normal, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal, obj);
	return result;
}

BOOL ksBossExtrusionDefinition::ResetDepthObject(BOOL normal)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal);
	return result;
}

LPDISPATCH ksBossExtrusionDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutExtrusionDefinition properties

short ksCutExtrusionDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksCutExtrusionDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksCutExtrusionDefinition::GetCut()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksCutExtrusionDefinition::SetCut(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

long ksCutExtrusionDefinition::GetChooseType()
{
	long result;
	GetProperty(0xf, VT_I4, (void*)&result);
	return result;
}

void ksCutExtrusionDefinition::SetChooseType(long propVal)
{
	SetProperty(0xf, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutExtrusionDefinition operations

BOOL ksCutExtrusionDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksCutExtrusionDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutExtrusionDefinition::GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PI2 VTS_PR8 VTS_PR8 VTS_PBOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksCutExtrusionDefinition::SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8 VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksCutExtrusionDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksCutExtrusionDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksCutExtrusionDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutExtrusionDefinition::ExtrusionParam()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutExtrusionDefinition::GetDepthObject(BOOL normal)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		normal);
	return result;
}

BOOL ksCutExtrusionDefinition::SetDepthObject(BOOL normal, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal, obj);
	return result;
}

BOOL ksCutExtrusionDefinition::ResetDepthObject(BOOL normal)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal);
	return result;
}

LPDISPATCH ksCutExtrusionDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutExtrusionDefinition::ChooseParts()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksExtrusionSurfaceDefinition properties

short ksExtrusionSurfaceDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksExtrusionSurfaceDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksExtrusionSurfaceDefinition::GetClosedShell()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksExtrusionSurfaceDefinition::SetClosedShell(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksExtrusionSurfaceDefinition operations

BOOL ksExtrusionSurfaceDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksExtrusionSurfaceDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksExtrusionSurfaceDefinition::GetSideParam(BOOL side1, short* type, double* depth, double* draftValue, BOOL* draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PI2 VTS_PR8 VTS_PR8 VTS_PBOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

BOOL ksExtrusionSurfaceDefinition::SetSideParam(BOOL side1, short type, double depth, double draftValue, BOOL draftOutward)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8 VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, type, depth, draftValue, draftOutward);
	return result;
}

LPDISPATCH ksExtrusionSurfaceDefinition::ExtrusionParam()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksExtrusionSurfaceDefinition::GetDepthObject(BOOL normal)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		normal);
	return result;
}

BOOL ksExtrusionSurfaceDefinition::SetDepthObject(BOOL normal, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal, obj);
	return result;
}

BOOL ksExtrusionSurfaceDefinition::ResetDepthObject(BOOL normal)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normal);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFaceDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksFaceDefinition operations

BOOL ksFaceDefinition::IsPlanar()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsCone()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsCylinder()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::GetCylinderParam(double* h, double* r)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		h, r);
	return result;
}

LPDISPATCH ksFaceDefinition::GetOwnerEntity()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceDefinition::LoopCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::GetNormalOrientation()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsConnectedWith(LPDISPATCH faceDefinition)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		faceDefinition);
	return result;
}

LPDISPATCH ksFaceDefinition::ConnectedFaceCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceDefinition::EdgeCollection()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceDefinition::GetNextFace()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsTorus()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsSphere()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsNurbsSurface()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsRevolved()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsSwept()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceDefinition::GetTessellation()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksFaceDefinition::GetArea(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}

LPDISPATCH ksFaceDefinition::GetEntity()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksFaceDefinition::IsValid()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEdgeDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksEdgeDefinition operations

BOOL ksEdgeDefinition::IsStraight()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeDefinition::GetOwnerEntity()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeDefinition::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeDefinition::GetAdjacentFace(BOOL facePlus)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		facePlus);
	return result;
}

LPDISPATCH ksEdgeDefinition::GetVertex(BOOL start)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		start);
	return result;
}

LPDISPATCH ksEdgeDefinition::EdgeCollection(BOOL begin)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		begin);
	return result;
}

LPDISPATCH ksEdgeDefinition::OrientedEdgeCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksEdgeDefinition::IsArc()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEdgeDefinition::IsCircle()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEdgeDefinition::IsEllipse()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEdgeDefinition::IsNurbs()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksEdgeDefinition::IsPeriodic()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double ksEdgeDefinition::GetLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}

LPDISPATCH ksEdgeDefinition::GetEntity()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksEdgeDefinition::IsValid()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksChamferDefinition properties

BOOL ksChamferDefinition::GetTangent()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksChamferDefinition::SetTangent(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksChamferDefinition operations

BOOL ksChamferDefinition::GetChamferParam(BOOL* transfer, double* distance1, double* distance2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PR8 VTS_PR8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		transfer, distance1, distance2);
	return result;
}

BOOL ksChamferDefinition::SetChamferParam(BOOL transfer, double distance1, double distance2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8 VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		transfer, distance1, distance2);
	return result;
}

LPDISPATCH ksChamferDefinition::array()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFilletDefinition properties

double ksFilletDefinition::GetRadius()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksFilletDefinition::SetRadius(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

BOOL ksFilletDefinition::GetTangent()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksFilletDefinition::SetTangent(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksFilletDefinition operations

LPDISPATCH ksFilletDefinition::array()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBaseLoftDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksBaseLoftDefinition operations

BOOL ksBaseLoftDefinition::GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PBOOL VTS_PBOOL;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksBaseLoftDefinition::SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksBaseLoftDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBaseLoftDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBaseLoftDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBaseLoftDefinition::Sketchs()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBossLoftDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksBossLoftDefinition operations

BOOL ksBossLoftDefinition::GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PBOOL VTS_PBOOL;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksBossLoftDefinition::SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksBossLoftDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBossLoftDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBossLoftDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossLoftDefinition::Sketchs()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossLoftDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossLoftDefinition::GetDirectionalLine()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBossLoftDefinition::SetDirectionalLine(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutLoftDefinition properties

BOOL ksCutLoftDefinition::GetCut()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksCutLoftDefinition::SetCut(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

long ksCutLoftDefinition::GetChooseType()
{
	long result;
	GetProperty(0xb, VT_I4, (void*)&result);
	return result;
}

void ksCutLoftDefinition::SetChooseType(long propVal)
{
	SetProperty(0xb, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutLoftDefinition operations

BOOL ksCutLoftDefinition::GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PBOOL VTS_PBOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksCutLoftDefinition::SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksCutLoftDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksCutLoftDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksCutLoftDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutLoftDefinition::Sketchs()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutLoftDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutLoftDefinition::GetDirectionalLine()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutLoftDefinition::SetDirectionalLine(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksCutLoftDefinition::ChooseParts()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLoftSurfaceDefinition properties

short ksLoftSurfaceDefinition::GetClosedShell()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksLoftSurfaceDefinition::SetClosedShell(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksLoftSurfaceDefinition operations

BOOL ksLoftSurfaceDefinition::GetLoftParam(BOOL* closed, BOOL* flipVertex, BOOL* autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PBOOL VTS_PBOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

BOOL ksLoftSurfaceDefinition::SetLoftParam(BOOL closed, BOOL flipVertex, BOOL autoPath)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, flipVertex, autoPath);
	return result;
}

LPDISPATCH ksLoftSurfaceDefinition::Sketchs()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksInclineDefinition properties

double ksInclineDefinition::GetAngle()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksInclineDefinition::SetAngle(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

BOOL ksInclineDefinition::GetDirection()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksInclineDefinition::SetDirection(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksInclineDefinition operations

LPDISPATCH ksInclineDefinition::FaceArray()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksInclineDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksInclineDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksShellDefinition properties

double ksShellDefinition::GetThickness()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksShellDefinition::SetThickness(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

BOOL ksShellDefinition::GetThinType()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksShellDefinition::SetThinType(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksShellDefinition operations

LPDISPATCH ksShellDefinition::FaceArray()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBaseEvolutionDefinition properties

short ksBaseEvolutionDefinition::GetSketchShiftType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksBaseEvolutionDefinition::SetSketchShiftType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBaseEvolutionDefinition operations

BOOL ksBaseEvolutionDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksBaseEvolutionDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBaseEvolutionDefinition::PathPartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBaseEvolutionDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBaseEvolutionDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBaseEvolutionDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksBaseEvolutionDefinition::GetPathLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBossEvolutionDefinition properties

short ksBossEvolutionDefinition::GetSketchShiftType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksBossEvolutionDefinition::SetSketchShiftType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBossEvolutionDefinition operations

BOOL ksBossEvolutionDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksBossEvolutionDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossEvolutionDefinition::PathPartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBossEvolutionDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBossEvolutionDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBossEvolutionDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossEvolutionDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksBossEvolutionDefinition::GetPathLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutEvolutionDefinition properties

short ksCutEvolutionDefinition::GetSketchShiftType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksCutEvolutionDefinition::SetSketchShiftType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksCutEvolutionDefinition::GetCut()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksCutEvolutionDefinition::SetCut(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

long ksCutEvolutionDefinition::GetChooseType()
{
	long result;
	GetProperty(0xa, VT_I4, (void*)&result);
	return result;
}

void ksCutEvolutionDefinition::SetChooseType(long propVal)
{
	SetProperty(0xa, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutEvolutionDefinition operations

BOOL ksCutEvolutionDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksCutEvolutionDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutEvolutionDefinition::PathPartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutEvolutionDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksCutEvolutionDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksCutEvolutionDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutEvolutionDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutEvolutionDefinition::ChooseParts()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksCutEvolutionDefinition::GetPathLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEvolutionSurfaceDefinition properties

short ksEvolutionSurfaceDefinition::GetSketchShiftType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksEvolutionSurfaceDefinition::SetSketchShiftType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksEvolutionSurfaceDefinition::GetClosedShell()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksEvolutionSurfaceDefinition::SetClosedShell(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksEvolutionSurfaceDefinition operations

BOOL ksEvolutionSurfaceDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksEvolutionSurfaceDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEvolutionSurfaceDefinition::PathPartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksEvolutionSurfaceDefinition::GetPathLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRibDefinition properties

long ksRibDefinition::GetIndex()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksRibDefinition::SetIndex(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksRibDefinition::GetAngle()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksRibDefinition::SetAngle(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

long ksRibDefinition::GetSide()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksRibDefinition::SetSide(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRibDefinition operations

LPDISPATCH ksRibDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRibDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

BOOL ksRibDefinition::GetThinParam(short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksRibDefinition::SetThinParam(short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksRibDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutByPlaneDefinition properties

BOOL ksCutByPlaneDefinition::GetDirection()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksCutByPlaneDefinition::SetDirection(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

long ksCutByPlaneDefinition::GetChooseType()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksCutByPlaneDefinition::SetChooseType(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutByPlaneDefinition operations

LPDISPATCH ksCutByPlaneDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutByPlaneDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksCutByPlaneDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutByPlaneDefinition::ChooseParts()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutBySketchDefinition properties

BOOL ksCutBySketchDefinition::GetDirection()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksCutBySketchDefinition::SetDirection(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

long ksCutBySketchDefinition::GetChooseType()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksCutBySketchDefinition::SetChooseType(long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutBySketchDefinition operations

LPDISPATCH ksCutBySketchDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutBySketchDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksCutBySketchDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutBySketchDefinition::ChooseParts()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneOffsetDefinition properties

double ksPlaneOffsetDefinition::GetOffset()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksPlaneOffsetDefinition::SetOffset(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

BOOL ksPlaneOffsetDefinition::GetDirection()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksPlaneOffsetDefinition::SetDirection(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneOffsetDefinition operations

BOOL ksPlaneOffsetDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksPlaneOffsetDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneOffsetDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneAngleDefinition properties

double ksPlaneAngleDefinition::GetAngle()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksPlaneAngleDefinition::SetAngle(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneAngleDefinition operations

BOOL ksPlaneAngleDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksPlaneAngleDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneAngleDefinition::SetAxis(LPDISPATCH axis)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		axis);
	return result;
}

LPDISPATCH ksPlaneAngleDefinition::GetAxis()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneAngleDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlane3PointsDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksPlane3PointsDefinition operations

BOOL ksPlane3PointsDefinition::SetPoint(long number, LPDISPATCH point)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number, point);
	return result;
}

LPDISPATCH ksPlane3PointsDefinition::GetPoint(long number)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		number);
	return result;
}

LPDISPATCH ksPlane3PointsDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneNormalToSurfaceDefinition properties

double ksPlaneNormalToSurfaceDefinition::GetAngle()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksPlaneNormalToSurfaceDefinition::SetAngle(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneNormalToSurfaceDefinition operations

BOOL ksPlaneNormalToSurfaceDefinition::SetFace(LPDISPATCH face)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		face);
	return result;
}

LPDISPATCH ksPlaneNormalToSurfaceDefinition::GetFace()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneNormalToSurfaceDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksPlaneNormalToSurfaceDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneNormalToSurfaceDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneTangentToSurfaceDefinition properties

short ksPlaneTangentToSurfaceDefinition::GetChoosePlane()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksPlaneTangentToSurfaceDefinition::SetChoosePlane(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

double ksPlaneTangentToSurfaceDefinition::GetAngle()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksPlaneTangentToSurfaceDefinition::SetAngle(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneTangentToSurfaceDefinition operations

BOOL ksPlaneTangentToSurfaceDefinition::SetFace(LPDISPATCH face)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		face);
	return result;
}

LPDISPATCH ksPlaneTangentToSurfaceDefinition::GetFace()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneTangentToSurfaceDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksPlaneTangentToSurfaceDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneTangentToSurfaceDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneEdgePointDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksPlaneEdgePointDefinition operations

BOOL ksPlaneEdgePointDefinition::SetEdge(LPDISPATCH edge)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		edge);
	return result;
}

LPDISPATCH ksPlaneEdgePointDefinition::GetEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneEdgePointDefinition::SetPoint(LPDISPATCH point)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		point);
	return result;
}

LPDISPATCH ksPlaneEdgePointDefinition::GetPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneEdgePointDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneParallelDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksPlaneParallelDefinition operations

BOOL ksPlaneParallelDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksPlaneParallelDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneParallelDefinition::SetPoint(LPDISPATCH point)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		point);
	return result;
}

LPDISPATCH ksPlaneParallelDefinition::GetPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneParallelDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlanePerpendicularDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksPlanePerpendicularDefinition operations

BOOL ksPlanePerpendicularDefinition::SetEdge(LPDISPATCH edge)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		edge);
	return result;
}

LPDISPATCH ksPlanePerpendicularDefinition::GetEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlanePerpendicularDefinition::SetPoint(LPDISPATCH point)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		point);
	return result;
}

LPDISPATCH ksPlanePerpendicularDefinition::GetPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlanePerpendicularDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneLineToEdgeDefinition properties

BOOL ksPlaneLineToEdgeDefinition::GetParallel()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksPlaneLineToEdgeDefinition::SetParallel(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneLineToEdgeDefinition operations

BOOL ksPlaneLineToEdgeDefinition::SetEdgeFirst(LPDISPATCH edge1)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		edge1);
	return result;
}

LPDISPATCH ksPlaneLineToEdgeDefinition::GetEdgeFirst()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneLineToEdgeDefinition::SetEdgeSecond(LPDISPATCH edge2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		edge2);
	return result;
}

LPDISPATCH ksPlaneLineToEdgeDefinition::GetEdgeSecond()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneLineToEdgeDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneLineToPlaneDefinition properties

BOOL ksPlaneLineToPlaneDefinition::GetParallel()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksPlaneLineToPlaneDefinition::SetParallel(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneLineToPlaneDefinition operations

BOOL ksPlaneLineToPlaneDefinition::SetEdge(LPDISPATCH edge)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		edge);
	return result;
}

LPDISPATCH ksPlaneLineToPlaneDefinition::GetEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksPlaneLineToPlaneDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksPlaneLineToPlaneDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksPlaneLineToPlaneDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksThinParam properties

BOOL ksThinParam::GetThin()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksThinParam::SetThin(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

short ksThinParam::GetThinType()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksThinParam::SetThinType(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

double ksThinParam::GetNormalThickness()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksThinParam::SetNormalThickness(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksThinParam::GetReverseThickness()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksThinParam::SetReverseThickness(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksThinParam operations


/////////////////////////////////////////////////////////////////////////////
// ksExtrusionParam properties

short ksExtrusionParam::GetTypeNormal()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksExtrusionParam::SetTypeNormal(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

double ksExtrusionParam::GetDepthNormal()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDepthNormal(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksExtrusionParam::GetDraftValueNormal()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDraftValueNormal(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

BOOL ksExtrusionParam::GetDraftOutwardNormal()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDraftOutwardNormal(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

short ksExtrusionParam::GetTypeReverse()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksExtrusionParam::SetTypeReverse(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

double ksExtrusionParam::GetDepthReverse()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDepthReverse(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksExtrusionParam::GetDraftValueReverse()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDraftValueReverse(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

BOOL ksExtrusionParam::GetDraftOutwardReverse()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDraftOutwardReverse(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

long ksExtrusionParam::GetDirection()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksExtrusionParam::SetDirection(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksExtrusionParam operations


/////////////////////////////////////////////////////////////////////////////
// ksRotatedParam properties

double ksRotatedParam::GetAngleNormal()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksRotatedParam::SetAngleNormal(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksRotatedParam::GetAngleReverse()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksRotatedParam::SetAngleReverse(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksRotatedParam::GetToroidShape()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksRotatedParam::SetToroidShape(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long ksRotatedParam::GetDirection()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksRotatedParam::SetDirection(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRotatedParam operations


/////////////////////////////////////////////////////////////////////////////
// ksColorParam properties

long ksColorParam::GetColor()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksColorParam::SetColor(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

double ksColorParam::GetAmbient()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksColorParam::SetAmbient(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksColorParam::GetDiffuse()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksColorParam::SetDiffuse(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksColorParam::GetSpecularity()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksColorParam::SetSpecularity(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksColorParam::GetShininess()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksColorParam::SetShininess(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksColorParam::GetTransparency()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksColorParam::SetTransparency(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksColorParam::GetEmission()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksColorParam::SetEmission(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksColorParam operations

BOOL ksColorParam::Clear()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBaseRotatedDefinition properties

short ksBaseRotatedDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksBaseRotatedDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksBaseRotatedDefinition::GetToroidShapeType()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksBaseRotatedDefinition::SetToroidShapeType(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBaseRotatedDefinition operations

BOOL ksBaseRotatedDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksBaseRotatedDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBaseRotatedDefinition::GetSideParam(BOOL side1, double* angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksBaseRotatedDefinition::SetSideParam(BOOL side1, double angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksBaseRotatedDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBaseRotatedDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBaseRotatedDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBaseRotatedDefinition::RotatedParam()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBossRotatedDefinition properties

short ksBossRotatedDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksBossRotatedDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksBossRotatedDefinition::GetToroidShapeType()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksBossRotatedDefinition::SetToroidShapeType(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBossRotatedDefinition operations

BOOL ksBossRotatedDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksBossRotatedDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBossRotatedDefinition::GetSideParam(BOOL side1, double* angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksBossRotatedDefinition::SetSideParam(BOOL side1, double angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksBossRotatedDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksBossRotatedDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksBossRotatedDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossRotatedDefinition::RotatedParam()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBossRotatedDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCutRotatedDefinition properties

short ksCutRotatedDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksCutRotatedDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksCutRotatedDefinition::GetToroidShapeType()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksCutRotatedDefinition::SetToroidShapeType(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL ksCutRotatedDefinition::GetCut()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksCutRotatedDefinition::SetCut(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long ksCutRotatedDefinition::GetChooseType()
{
	long result;
	GetProperty(0xd, VT_I4, (void*)&result);
	return result;
}

void ksCutRotatedDefinition::SetChooseType(long propVal)
{
	SetProperty(0xd, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCutRotatedDefinition operations

BOOL ksCutRotatedDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksCutRotatedDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksCutRotatedDefinition::GetSideParam(BOOL side1, double* angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksCutRotatedDefinition::SetSideParam(BOOL side1, double angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksCutRotatedDefinition::GetThinParam(BOOL* thin, short* thinType, double* normalThickness, double* reverseTthickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PBOOL VTS_PI2 VTS_PR8 VTS_PR8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseTthickness);
	return result;
}

BOOL ksCutRotatedDefinition::SetThinParam(BOOL thin, short thinType, double normalThickness, double reverseThickness)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_I2 VTS_R8 VTS_R8;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		thin, thinType, normalThickness, reverseThickness);
	return result;
}

LPDISPATCH ksCutRotatedDefinition::ThinParam()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutRotatedDefinition::RotatedParam()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutRotatedDefinition::ChooseBodies()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCutRotatedDefinition::ChooseParts()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRotatedSurfaceDefinition properties

short ksRotatedSurfaceDefinition::GetDirectionType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksRotatedSurfaceDefinition::SetDirectionType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksRotatedSurfaceDefinition::GetToroidShapeType()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksRotatedSurfaceDefinition::SetToroidShapeType(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

short ksRotatedSurfaceDefinition::GetClosedShell()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksRotatedSurfaceDefinition::SetClosedShell(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRotatedSurfaceDefinition operations

BOOL ksRotatedSurfaceDefinition::SetSketch(LPDISPATCH sketch)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sketch);
	return result;
}

LPDISPATCH ksRotatedSurfaceDefinition::GetSketch()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRotatedSurfaceDefinition::GetSideParam(BOOL side1, double* angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

BOOL ksRotatedSurfaceDefinition::SetSideParam(BOOL side1, double angle)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		side1, angle);
	return result;
}

LPDISPATCH ksRotatedSurfaceDefinition::RotatedParam()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSketchDefinition properties

double ksSketchDefinition::GetAngle()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksSketchDefinition::SetAngle(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksSketchDefinition operations

BOOL ksSketchDefinition::EndEdit()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSketchDefinition::SetPlane(LPDISPATCH plane)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		plane);
	return result;
}

LPDISPATCH ksSketchDefinition::GetPlane()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSketchDefinition::GetLocation(double* x, double* y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

BOOL ksSketchDefinition::SetLocation(double x, double y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

BOOL ksSketchDefinition::GetLoftPoint(double* x, double* y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

BOOL ksSketchDefinition::UserSetPlacement(LPCTSTR prompt)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		prompt);
	return result;
}

LPDISPATCH ksSketchDefinition::BeginEdit()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksSketchDefinition::AddProjectionOf(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksSketchDefinition::SetLoftPoint(double x, double y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

LPDISPATCH ksSketchDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSketchDefinition::BeginEditEx(long readOnly)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		readOnly);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRasterFormatParam properties

short ksRasterFormatParam::GetFormat()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetFormat(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

short ksRasterFormatParam::GetColorBPP()
{
	short result;
	GetProperty(0x2, VT_I2, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetColorBPP(short propVal)
{
	SetProperty(0x2, VT_I2, propVal);
}

BOOL ksRasterFormatParam::GetGreyScale()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetGreyScale(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

long ksRasterFormatParam::GetExtResolution()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetExtResolution(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

double ksRasterFormatParam::GetExtScale()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetExtScale(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

short ksRasterFormatParam::GetColorType()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetColorType(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

BOOL ksRasterFormatParam::GetOnlyThinLine()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetOnlyThinLine(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

CString ksRasterFormatParam::GetPages()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetPages(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

short ksRasterFormatParam::GetRangeIndex()
{
	short result;
	GetProperty(0x9, VT_I2, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetRangeIndex(short propVal)
{
	SetProperty(0x9, VT_I2, propVal);
}

BOOL ksRasterFormatParam::GetMultiPageOutput()
{
	BOOL result;
	GetProperty(0xa, VT_BOOL, (void*)&result);
	return result;
}

void ksRasterFormatParam::SetMultiPageOutput(BOOL propVal)
{
	SetProperty(0xa, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRasterFormatParam operations

BOOL ksRasterFormatParam::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAdditionFormatParam properties

short ksAdditionFormatParam::GetFormat()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksAdditionFormatParam::SetFormat(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL ksAdditionFormatParam::GetFormatBinary()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksAdditionFormatParam::SetFormatBinary(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL ksAdditionFormatParam::GetTopolgyIncluded()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksAdditionFormatParam::SetTopolgyIncluded(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksAdditionFormatParam operations

BOOL ksAdditionFormatParam::Init()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksConstraintParam properties

short ksConstraintParam::GetConstrType()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void ksConstraintParam::SetConstrType(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

long ksConstraintParam::GetIndex()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksConstraintParam::SetIndex(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long ksConstraintParam::GetPartner()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksConstraintParam::SetPartner(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksConstraintParam::GetPartnerIndex()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksConstraintParam::SetPartnerIndex(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksConstraintParam operations

BOOL ksConstraintParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksImportedSurfaceDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksImportedSurfaceDefinition operations

BOOL ksImportedSurfaceDefinition::Clear()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksImportedSurfaceDefinition::BeginCurve()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksImportedSurfaceDefinition::AddPoint(double x, double y, double z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksImportedSurfaceDefinition::EndCurve()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksImportedSurfaceDefinition::AddCurve(const VARIANT& arr)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&arr);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFaceCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksFaceCollection operations

BOOL ksFaceCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksFaceCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksFaceCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

LPDISPATCH ksFaceCollection::GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, testFullName, testIgnoreCase);
	return result;
}

long ksFaceCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksVertexDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksVertexDefinition operations

BOOL ksVertexDefinition::GetPoint(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

LPDISPATCH ksVertexDefinition::GetOwnerEntity()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksVertexDefinition::GetTopologyVertex()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksVertexDefinition::GetFreeVertex()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTessellation properties

/////////////////////////////////////////////////////////////////////////////
// ksTessellation operations

long ksTessellation::GetFacetsCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksTessellation::GetFacetData(long index, LPDISPATCH facet)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, facet);
	return result;
}

long ksTessellation::GetPointsCount()
{
	long result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksTessellation::GetPoint(long index, float* x, float* y, float* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR4 VTS_PR4 VTS_PR4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z);
	return result;
}

BOOL ksTessellation::GetNormal(long index, float* x, float* y, float* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR4 VTS_PR4 VTS_PR4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z);
	return result;
}

BOOL ksTessellation::SetFacetSize(double sag)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		sag);
	return result;
}

double ksTessellation::GetFacetSize()
{
	double result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTessellation::GetFacet()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksTessellation::refresh()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksTessellation::GetFacetPoints(VARIANT* points, VARIANT* indexes)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		points, indexes);
	return result;
}

BOOL ksTessellation::GetFacetNormals(VARIANT* normals)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		normals);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksFacet properties

/////////////////////////////////////////////////////////////////////////////
// ksFacet operations

long ksFacet::GetPointsCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksFacet::GetPoint(long index, float* x, float* y, float* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR4 VTS_PR4 VTS_PR4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z);
	return result;
}

BOOL ksFacet::GetNormal(long index, float* x, float* y, float* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR4 VTS_PR4 VTS_PR4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z);
	return result;
}

long ksFacet::GetTessellationIndex(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMeasurer properties

unsigned long ksMeasurer::GetUnit()
{
	unsigned long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

void ksMeasurer::SetUnit(unsigned long propVal)
{
	SetProperty(0x5, VT_I4, propVal);
}

BOOL ksMeasurer::GetExtendObject1()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksMeasurer::SetExtendObject1(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksMeasurer::GetExtendObject2()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksMeasurer::SetExtendObject2(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMeasurer operations

BOOL ksMeasurer::SetObject1(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksMeasurer::SetObject2(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

LPDISPATCH ksMeasurer::GetObject1()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMeasurer::GetObject2()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMeasurer::Calc()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksMeasurer::IsAngleValid()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double ksMeasurer::GetAngle()
{
	double result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMeasurer::GetDistance()
{
	double result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksMeasurer::GetPoint1(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksMeasurer::GetPoint2(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

double ksMeasurer::GetMaxDistance()
{
	double result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksMeasurer::GetNormalDistance()
{
	double result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksMeasurer::GetMaxPoint1(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksMeasurer::GetMaxPoint2(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksMeasurer::GetNormalPoint1(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksMeasurer::GetNormalPoint2(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

long ksMeasurer::GetMeasureResult()
{
	long result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBodyCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksBodyCollection operations

BOOL ksBodyCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksBodyCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBodyCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBodyCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBodyCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBodyCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBodyCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksBodyCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksBodyCollection::Clear()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksBodyCollection::Add(LPDISPATCH body)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		body);
	return result;
}

BOOL ksBodyCollection::AddAt(LPDISPATCH body, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		body, index);
	return result;
}

BOOL ksBodyCollection::AddBefore(LPDISPATCH body, LPDISPATCH base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		body, base);
	return result;
}

BOOL ksBodyCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksBodyCollection::DetachByBody(LPDISPATCH body)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		body);
	return result;
}

BOOL ksBodyCollection::SetByIndex(LPDISPATCH body, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		body, index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBody properties

/////////////////////////////////////////////////////////////////////////////
// ksBody operations

BOOL ksBody::GetGabarit(double* x1, double* y1, double* z1, double* x2, double* y2, double* z2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, z1, x2, y2, z2);
	return result;
}

LPDISPATCH ksBody::FaceCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksBody::IsSolid()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBody::CalcMassInertiaProperties(unsigned long bitVector)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		bitVector);
	return result;
}

BOOL ksBody::CurveIntersection(LPDISPATCH curve, LPDISPATCH fases, LPDISPATCH points)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		curve, fases, points);
	return result;
}

LPDISPATCH ksBody::CheckIntersectionWithBody(LPDISPATCH otherBody, BOOL checkTangent)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		otherBody, checkTangent);
	return result;
}

BOOL ksBody::GetMultiBodyParts()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksBody::GetFeature()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ksBody::GetIntersectionFacesWithBody(LPDISPATCH otherBody, VARIANT* intersectionFaces1, VARIANT* intersectionFaces2, VARIANT* connectedFaces1, VARIANT* connectedFaces2)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		otherBody, intersectionFaces1, intersectionFaces2, connectedFaces1, connectedFaces2);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSurface properties

/////////////////////////////////////////////////////////////////////////////
// ksSurface operations

BOOL ksSurface::GetGabarit(double* x1, double* y1, double* z1, double* x2, double* y2, double* z2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, z1, x2, y2, z2);
	return result;
}

BOOL ksSurface::GetPoint(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetNormal(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetTangentVectorU(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetTangentVectorV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeU(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeUU(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeVV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeUV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeUUU(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeVVV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeUVV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

BOOL ksSurface::GetDerivativeUUV(double paramU, double paramV, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU, paramV, x, y, z);
	return result;
}

double ksSurface::GetParamUMin()
{
	double result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksSurface::GetParamUMax()
{
	double result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksSurface::GetParamVMin()
{
	double result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksSurface::GetParamVMax()
{
	double result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsClosedU()
{
	BOOL result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsClosedV()
{
	BOOL result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsPlane()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsCone()
{
	BOOL result;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsCylinder()
{
	BOOL result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsTorus()
{
	BOOL result;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsSphere()
{
	BOOL result;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsNurbsSurface()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsRevolved()
{
	BOOL result;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::IsSwept()
{
	BOOL result;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSurface::GetSurfaceParam()
{
	LPDISPATCH result;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksSurface::GetArea(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}

BOOL ksSurface::NearPointProjection(double x, double y, double z, double* u, double* v, BOOL ext)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8 VTS_BOOL;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, u, v, ext);
	return result;
}

BOOL ksSurface::CurveIntersection(LPDISPATCH curve, LPDISPATCH points, BOOL extSurf, BOOL extCurve)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_BOOL VTS_BOOL;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		curve, points, extSurf, extCurve);
	return result;
}

LPDISPATCH ksSurface::GetNurbsSurfaceParam()
{
	LPDISPATCH result;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksSurface::GetBoundaryUVNurbs(BOOL uv, BOOL closed, long loopIndex, long edgeIndex, long* degree, VARIANT* points, VARIANT* weights, VARIANT* knots, double* tMin, double* tMax)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_I4 VTS_I4 VTS_PI4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PR8 VTS_PR8;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		uv, closed, loopIndex, edgeIndex, degree, points, weights, knots, tMin, tMax);
	return result;
}

long ksSurface::GetBoundaryCount()
{
	long result;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ksSurface::GetEdgesCount(long loopIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		loopIndex);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEdgeCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksEdgeCollection operations

BOOL ksEdgeCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksEdgeCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEdgeCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksEdgeCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksOrientedEdge properties

/////////////////////////////////////////////////////////////////////////////
// ksOrientedEdge operations

LPDISPATCH ksOrientedEdge::GetEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksOrientedEdge::GetOrientation()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdge::GetOwnerEntity()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdge::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksOrientedEdge::GetSameSense()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdge::GetAdjacentFace(long facePlus)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		facePlus);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksOrientedEdgeCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksOrientedEdgeCollection operations

BOOL ksOrientedEdgeCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksOrientedEdgeCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdgeCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdgeCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdgeCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdgeCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksOrientedEdgeCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksOrientedEdgeCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLoop properties

/////////////////////////////////////////////////////////////////////////////
// ksLoop operations

LPDISPATCH ksLoop::OrientedEdgeCollection(LPDISPATCH edge)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		edge);
	return result;
}

LPDISPATCH ksLoop::EdgeCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksLoop::IsOuter()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double ksLoop::GetLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLoopCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksLoopCollection operations

BOOL ksLoopCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksLoopCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksLoopCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksLoopCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksLoopCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksLoopCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksLoopCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCurve3D properties

/////////////////////////////////////////////////////////////////////////////
// ksCurve3D operations

BOOL ksCurve3D::GetPoint(double paramT, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramT, x, y, z);
	return result;
}

BOOL ksCurve3D::GetTangentVector(double paramT, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramT, x, y, z);
	return result;
}

BOOL ksCurve3D::GetNormal(double paramT, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramT, x, y, z);
	return result;
}

BOOL ksCurve3D::GetDerivativeT(double paramT, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramT, x, y, z);
	return result;
}

BOOL ksCurve3D::GetDerivativeTT(double paramT, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramT, x, y, z);
	return result;
}

BOOL ksCurve3D::GetDerivativeTTT(double paramT, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramT, x, y, z);
	return result;
}

double ksCurve3D::GetParamMin()
{
	double result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksCurve3D::GetParamMax()
{
	double result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsClosed()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsPeriodic()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

double ksCurve3D::GetMetricLength(double startParam, double endParam)
{
	double result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		startParam, endParam);
	return result;
}

BOOL ksCurve3D::GetGabarit(double* x1, double* y1, double* z1, double* x2, double* y2, double* z2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x1, y1, z1, x2, y2, z2);
	return result;
}

BOOL ksCurve3D::IsDegenerate()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsPlanar()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsLineSeg()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsArc()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsCircle()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsEllipse()
{
	BOOL result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksCurve3D::IsNurbs()
{
	BOOL result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCurve3D::GetCurveParam()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksCurve3D::GetLength(unsigned long bitVector)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		bitVector);
	return result;
}

BOOL ksCurve3D::NearPointProjection(double x, double y, double z, double* t, BOOL ext)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_BOOL;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z, t, ext);
	return result;
}

LPDISPATCH ksCurve3D::GetNurbs3dParam()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT ksCurve3D::CalculatePolygon(double step)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		step);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksLineSeg3dParam properties

/////////////////////////////////////////////////////////////////////////////
// ksLineSeg3dParam operations

BOOL ksLineSeg3dParam::GetPointFirst(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

BOOL ksLineSeg3dParam::GetPointLast(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCircle3dParam properties

/////////////////////////////////////////////////////////////////////////////
// ksCircle3dParam operations

double ksCircle3dParam::GetRadius()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCircle3dParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksEllipse3dParam properties

/////////////////////////////////////////////////////////////////////////////
// ksEllipse3dParam operations

double ksEllipse3dParam::GetMajorRadius()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksEllipse3dParam::GetMinorRadius()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksEllipse3dParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneParam properties

/////////////////////////////////////////////////////////////////////////////
// ksPlaneParam operations

LPDISPATCH ksPlaneParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksConeParam properties

/////////////////////////////////////////////////////////////////////////////
// ksConeParam operations

double ksConeParam::GetRadius()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksConeParam::GetHeight()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksConeParam::GetAngle()
{
	double result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksConeParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCylinderParam properties

/////////////////////////////////////////////////////////////////////////////
// ksCylinderParam operations

double ksCylinderParam::GetRadius()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksCylinderParam::GetHeight()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksCylinderParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSphereParam properties

/////////////////////////////////////////////////////////////////////////////
// ksSphereParam operations

double ksSphereParam::GetRadius()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSphereParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTorusParam properties

/////////////////////////////////////////////////////////////////////////////
// ksTorusParam operations

double ksTorusParam::GetRadius()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksTorusParam::GetGeneratrixRadius()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTorusParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dParam properties

/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dParam operations

BOOL ksNurbsPoint3dParam::GetPoint(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}

double ksNurbsPoint3dParam::GetWeight()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsSurfaceParam properties

/////////////////////////////////////////////////////////////////////////////
// ksNurbsSurfaceParam operations

short ksNurbsSurfaceParam::GetDegree(BOOL paramU)
{
	short result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		paramU);
	return result;
}

BOOL ksNurbsSurfaceParam::GetClose(BOOL paramU)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU);
	return result;
}

LPDISPATCH ksNurbsSurfaceParam::GetPointCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsSurfaceParam::GetKnotCollection(BOOL paramU)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		paramU);
	return result;
}

BOOL ksNurbsSurfaceParam::GetPeriodic(BOOL paramU)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		paramU);
	return result;
}

BOOL ksNurbsSurfaceParam::GetNurbsParams(BOOL closedV, BOOL closedU, long* degreeV, long* degreeU, long* nPV, long* nPU, VARIANT* points, VARIANT* weights, VARIANT* knotsV, VARIANT* knotsU)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closedV, closedU, degreeV, degreeU, nPV, nPU, points, weights, knotsV, knotsU);
	return result;
}

BOOL ksNurbsSurfaceParam::GetBoundaryUVNurbs(BOOL uv, BOOL closed, long loopIndex, long edgeIndex, long* degree, VARIANT* points, VARIANT* weights, VARIANT* knots, double* tMin, double* tMax)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_I4 VTS_I4 VTS_PI4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		uv, closed, loopIndex, edgeIndex, degree, points, weights, knots, tMin, tMax);
	return result;
}

long ksNurbsSurfaceParam::GetBoundaryCount()
{
	long result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksNurbsSurfaceParam::GetEdgesCount(long loopIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		loopIndex);
	return result;
}

BOOL ksNurbsSurfaceParam::GetMinMaxParameters(BOOL closedV, BOOL closedU, double* uMin, double* uMax, double* vMin, double* vMax)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closedV, closedU, uMin, uMax, vMin, vMax);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbs3dParam properties

/////////////////////////////////////////////////////////////////////////////
// ksNurbs3dParam operations

short ksNurbs3dParam::GetDegree()
{
	short result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

BOOL ksNurbs3dParam::GetClose()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbs3dParam::GetPointCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbs3dParam::GetKnotCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksNurbs3dParam::GetPeriodic()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksNurbs3dParam::GetNurbsPoints3DParams(BOOL closed, VARIANT* points, VARIANT* weights, VARIANT* knots)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, points, weights, knots);
	return result;
}

BOOL ksNurbs3dParam::GetMinMaxParameters(BOOL closed, double* tMin, double* tMax)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL VTS_PR8 VTS_PR8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		closed, tMin, tMax);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsKnotCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksNurbsKnotCollection operations

BOOL ksNurbsKnotCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksNurbsKnotCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

double ksNurbsKnotCollection::First()
{
	double result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksNurbsKnotCollection::Last()
{
	double result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksNurbsKnotCollection::Next()
{
	double result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksNurbsKnotCollection::Prev()
{
	double result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double ksNurbsKnotCollection::GetByIndex(long index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		index);
	return result;
}

BOOL ksNurbsKnotCollection::Clear()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksNurbsKnotCollection::Add(double entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksNurbsKnotCollection::AddAt(double entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

BOOL ksNurbsKnotCollection::AddBefore(double entity, double base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, base);
	return result;
}

BOOL ksNurbsKnotCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksNurbsKnotCollection::DetachByBody(double entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksNurbsKnotCollection::SetByIndex(double entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_R8 VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dCollCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dCollCollection operations

BOOL ksNurbsPoint3dCollCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksNurbsPoint3dCollCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::Clear()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::Add(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::AddAt(LPDISPATCH entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::AddBefore(LPDISPATCH entity, LPDISPATCH base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, base);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::DetachByBody(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksNurbsPoint3dCollCollection::SetByIndex(LPDISPATCH entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

long ksNurbsPoint3dCollCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksNurbsPoint3dCollection operations

BOOL ksNurbsPoint3dCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksNurbsPoint3dCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksNurbsPoint3dCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

BOOL ksNurbsPoint3dCollection::Clear()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksNurbsPoint3dCollection::Add(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksNurbsPoint3dCollection::AddAt(LPDISPATCH entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

BOOL ksNurbsPoint3dCollection::AddBefore(LPDISPATCH entity, LPDISPATCH base)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, base);
	return result;
}

BOOL ksNurbsPoint3dCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksNurbsPoint3dCollection::DetachByBody(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksNurbsPoint3dCollection::SetByIndex(LPDISPATCH entity, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity, index);
	return result;
}

long ksNurbsPoint3dCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksViewProjection properties

CString ksViewProjection::GetName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksViewProjection::SetName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

double ksViewProjection::GetScale()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksViewProjection::SetScale(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksViewProjection operations

BOOL ksViewProjection::IsCurrent()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksViewProjection::SetCurrent()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksViewProjection::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksViewProjection::SetPlacement(LPDISPATCH place)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		place);
	return result;
}

long ksViewProjection::GetIndex()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksViewProjection::SetMatrix3D(const VARIANT& Matrix3D)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&Matrix3D);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksViewProjectionCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksViewProjectionCollection operations

BOOL ksViewProjectionCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksViewProjectionCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksViewProjectionCollection::First()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksViewProjectionCollection::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksViewProjectionCollection::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksViewProjectionCollection::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksViewProjectionCollection::GetByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

LPDISPATCH ksViewProjectionCollection::GetByName(LPCTSTR name, BOOL testFullName, BOOL testIgnoreCase)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		name, testFullName, testIgnoreCase);
	return result;
}

long ksViewProjectionCollection::FindIt(LPDISPATCH entity)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksViewProjectionCollection::Add(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksViewProjectionCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksViewProjectionCollection::DetachByBody(LPDISPATCH entity)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		entity);
	return result;
}

BOOL ksViewProjectionCollection::DetachByName(LPCTSTR name)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		name);
	return result;
}

LPDISPATCH ksViewProjectionCollection::NewViewProjection()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksSelectionMng properties

/////////////////////////////////////////////////////////////////////////////
// ksSelectionMng operations

BOOL ksSelectionMng::Select(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksSelectionMng::Unselect(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksSelectionMng::UnselectAll()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksSelectionMng::IsSelected(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

long ksSelectionMng::GetCount()
{
	long result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSelectionMng::First()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSelectionMng::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSelectionMng::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSelectionMng::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksSelectionMng::GetObjectByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksSelectionMng::GetObjectType(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksChooseMng properties

long ksChooseMng::GetCurrentManagerType()
{
	long result;
	GetProperty(0xc, VT_I4, (void*)&result);
	return result;
}

void ksChooseMng::SetCurrentManagerType(long propVal)
{
	SetProperty(0xc, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksChooseMng operations

BOOL ksChooseMng::Choose(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksChooseMng::UnChoose(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksChooseMng::UnChooseAll()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksChooseMng::IsChoosen(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

long ksChooseMng::GetCount()
{
	long result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksChooseMng::First()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksChooseMng::Last()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksChooseMng::Next()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksChooseMng::Prev()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksChooseMng::GetObjectByIndex(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksChooseMng::GetObjectType(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}

long ksChooseMng::GetManagerIndex(LPDISPATCH obj)
{
	long result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		obj);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksArc3dParam properties

/////////////////////////////////////////////////////////////////////////////
// ksArc3dParam operations

LPDISPATCH ksArc3dParam::GetPlacement()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

double ksArc3dParam::GetRadius()
{
	double result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double ksArc3dParam::GetAngle()
{
	double result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTreeNodeParam properties

/////////////////////////////////////////////////////////////////////////////
// ksTreeNodeParam operations

BOOL ksTreeNodeParam::Init()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksTreeNodeParam::GetType()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString ksTreeNodeParam::GetName()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTreeNodeParam::GetComment()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTreeNodeParam::GetNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAssociationViewParam properties

CString ksAssociationViewParam::GetFileName()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

CString ksAssociationViewParam::GetProjectionName()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetProjectionName(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

BOOL ksAssociationViewParam::GetProjectionLink()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetProjectionLink(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetDisassembly()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetDisassembly(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

long ksAssociationViewParam::GetVisibleLinesStyle()
{
	long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetVisibleLinesStyle(long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

long ksAssociationViewParam::GetHiddenLinesStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetHiddenLinesStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

long ksAssociationViewParam::GetTangentEdgesStyle()
{
	long result;
	GetProperty(0xa, VT_I4, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetTangentEdgesStyle(long propVal)
{
	SetProperty(0xa, VT_I4, propVal);
}

BOOL ksAssociationViewParam::GetHiddenLinesShow()
{
	BOOL result;
	GetProperty(0xb, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetHiddenLinesShow(BOOL propVal)
{
	SetProperty(0xb, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetTangentEdgesShow()
{
	BOOL result;
	GetProperty(0xc, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetTangentEdgesShow(BOOL propVal)
{
	SetProperty(0xc, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetProjBodies()
{
	BOOL result;
	GetProperty(0xd, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetProjBodies(BOOL propVal)
{
	SetProperty(0xd, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetProjSurfaces()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetProjSurfaces(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetProjThreads()
{
	BOOL result;
	GetProperty(0xf, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetProjThreads(BOOL propVal)
{
	SetProperty(0xf, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetSection()
{
	BOOL result;
	GetProperty(0x11, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetSection(BOOL propVal)
{
	SetProperty(0x11, VT_BOOL, propVal);
}

BOOL ksAssociationViewParam::GetSameHatch()
{
	BOOL result;
	GetProperty(0x13, VT_BOOL, (void*)&result);
	return result;
}

void ksAssociationViewParam::SetSameHatch(BOOL propVal)
{
	SetProperty(0x13, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksAssociationViewParam operations

BOOL ksAssociationViewParam::Init()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAssociationViewParam::GetViewParam()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

short ksAssociationViewParam::GetViewType()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAssociationViewParam::GetHatchParam()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksAssociationViewParam::SetDimensionLayoutScaling(BOOL scaling)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		scaling);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksViewColorParam properties

long ksViewColorParam::GetColor()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksViewColorParam::SetColor(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

BOOL ksViewColorParam::GetUseGradient()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksViewColorParam::SetUseGradient(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

long ksViewColorParam::GetTopColor()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksViewColorParam::SetTopColor(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

long ksViewColorParam::GetBottomColor()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void ksViewColorParam::SetBottomColor(long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksViewColorParam operations

BOOL ksViewColorParam::Init()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAxisLineParam properties

/////////////////////////////////////////////////////////////////////////////
// ksAxisLineParam operations

BOOL ksAxisLineParam::Init()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAxisLineParam::GetBegPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAxisLineParam::GetEndPoint()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksTextDocumentParam properties

CString ksTextDocumentParam::GetFileName()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void ksTextDocumentParam::SetFileName(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString ksTextDocumentParam::GetComment()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void ksTextDocumentParam::SetComment(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CString ksTextDocumentParam::GetAuthor()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void ksTextDocumentParam::SetAuthor(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

short ksTextDocumentParam::GetType()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void ksTextDocumentParam::SetType(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

short ksTextDocumentParam::GetRegime()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void ksTextDocumentParam::SetRegime(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksTextDocumentParam operations

BOOL ksTextDocumentParam::Init()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextDocumentParam::GetFirstSheet()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextDocumentParam::GetEvenSheet()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextDocumentParam::GetOddSheet()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextDocumentParam::GetArrTitleSheet()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextDocumentParam::GetArrTailSheet()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksTextDocumentParam::GetSheetParam()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksRemoteElementParam properties

long ksRemoteElementParam::GetStyle()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetStyle(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long ksRemoteElementParam::GetSignType()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetSignType(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

double ksRemoteElementParam::GetX()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetX(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksRemoteElementParam::GetY()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetY(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksRemoteElementParam::GetWidth()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetWidth(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksRemoteElementParam::GetHeight()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetHeight(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

double ksRemoteElementParam::GetRadius()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetRadius(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

double ksRemoteElementParam::GetSmooth()
{
	double result;
	GetProperty(0x9, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetSmooth(double propVal)
{
	SetProperty(0x9, VT_R8, propVal);
}

double ksRemoteElementParam::GetShelfX()
{
	double result;
	GetProperty(0xa, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetShelfX(double propVal)
{
	SetProperty(0xa, VT_R8, propVal);
}

double ksRemoteElementParam::GetShelfY()
{
	double result;
	GetProperty(0xb, VT_R8, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetShelfY(double propVal)
{
	SetProperty(0xb, VT_R8, propVal);
}

short ksRemoteElementParam::GetShelfDir()
{
	short result;
	GetProperty(0xc, VT_I2, (void*)&result);
	return result;
}

void ksRemoteElementParam::SetShelfDir(short propVal)
{
	SetProperty(0xc, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksRemoteElementParam operations

BOOL ksRemoteElementParam::Init(long style)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		style);
	return result;
}

LPDISPATCH ksRemoteElementParam::GetpText()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksRemoteElementParam::SetpText(LPDISPATCH pText)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pText);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksDeletedCopyCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksDeletedCopyCollection operations

BOOL ksDeletedCopyCollection::refresh()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksDeletedCopyCollection::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksDeletedCopyCollection::First(long* index1, long* index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PI4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::Last(long* index1, long* index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PI4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::Next(long* index1, long* index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PI4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::Prev(long* index1, long* index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PI4 VTS_PI4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::GetByIndex(long index, long* index1, long* index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PI4 VTS_PI4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::Clear()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksDeletedCopyCollection::Add(long index1, long index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::AddAt(long index1, long index2, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2, index);
	return result;
}

BOOL ksDeletedCopyCollection::DetachByIndex(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksDeletedCopyCollection::DetachByBody(long index1, long index2)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2);
	return result;
}

BOOL ksDeletedCopyCollection::SetByIndex(long index1, long index2, long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index1, index2, index);
	return result;
}

long ksDeletedCopyCollection::FindIt(long index1, long index2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index1, index2);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCopyObjectParam properties

long ksCopyObjectParam::GetObjRef()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetObjRef(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

double ksCopyObjectParam::GetXOld()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetXOld(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double ksCopyObjectParam::GetYOld()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetYOld(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksCopyObjectParam::GetXNew()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetXNew(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

double ksCopyObjectParam::GetYNew()
{
	double result;
	GetProperty(0x6, VT_R8, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetYNew(double propVal)
{
	SetProperty(0x6, VT_R8, propVal);
}

double ksCopyObjectParam::GetScale()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetScale(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

double ksCopyObjectParam::GetAngle()
{
	double result;
	GetProperty(0x8, VT_R8, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetAngle(double propVal)
{
	SetProperty(0x8, VT_R8, propVal);
}

BOOL ksCopyObjectParam::GetAttrCopy()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetAttrCopy(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

BOOL ksCopyObjectParam::GetDimLineScale()
{
	BOOL result;
	GetProperty(0xa, VT_BOOL, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetDimLineScale(BOOL propVal)
{
	SetProperty(0xa, VT_BOOL, propVal);
}

BOOL ksCopyObjectParam::GetSpcObjCopy()
{
	BOOL result;
	GetProperty(0xb, VT_BOOL, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetSpcObjCopy(BOOL propVal)
{
	SetProperty(0xb, VT_BOOL, propVal);
}

BOOL ksCopyObjectParam::GetStoragesCopy()
{
	BOOL result;
	GetProperty(0xc, VT_BOOL, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetStoragesCopy(BOOL propVal)
{
	SetProperty(0xc, VT_BOOL, propVal);
}

BOOL ksCopyObjectParam::GetHyperLinksCopy()
{
	BOOL result;
	GetProperty(0xd, VT_BOOL, (void*)&result);
	return result;
}

void ksCopyObjectParam::SetHyperLinksCopy(BOOL propVal)
{
	SetProperty(0xd, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksCopyObjectParam operations

BOOL ksCopyObjectParam::Init()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksThreadDefinition properties

double ksThreadDefinition::GetDr()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksThreadDefinition::SetDr(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksThreadDefinition::GetLength()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksThreadDefinition::SetLength(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

double ksThreadDefinition::GetP()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void ksThreadDefinition::SetP(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

BOOL ksThreadDefinition::GetAutoDefinDr()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksThreadDefinition::SetAutoDefinDr(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL ksThreadDefinition::GetAllLength()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksThreadDefinition::SetAllLength(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

BOOL ksThreadDefinition::GetFaceValue()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void ksThreadDefinition::SetFaceValue(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksThreadDefinition operations

BOOL ksThreadDefinition::GetOutside()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksThreadDefinition::GetBaseObject()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksThreadDefinition::SetBaseObject(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

LPDISPATCH ksThreadDefinition::GetFaceBegin()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksThreadDefinition::SetFaceBegin(LPDISPATCH face)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		face);
	return result;
}

LPDISPATCH ksThreadDefinition::GetFaceEnd()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksThreadDefinition::SetFaceEnd(LPDISPATCH face)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		face);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksOverlapObjectOptions properties

BOOL ksOverlapObjectOptions::GetOverlap()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksOverlapObjectOptions::SetOverlap(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

double ksOverlapObjectOptions::GetGap()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksOverlapObjectOptions::SetGap(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksOverlapObjectOptions operations

BOOL ksOverlapObjectOptions::Init()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksObjectsFilter3D properties

BOOL ksObjectsFilter3D::GetFilterAll()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksObjectsFilter3D::SetFilterAll(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL ksObjectsFilter3D::GetFilterFaces()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void ksObjectsFilter3D::SetFilterFaces(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL ksObjectsFilter3D::GetFilterEdges()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksObjectsFilter3D::SetFilterEdges(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksObjectsFilter3D::GetFilterVertexs()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksObjectsFilter3D::SetFilterVertexs(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL ksObjectsFilter3D::GetFilterCPlanes()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksObjectsFilter3D::SetFilterCPlanes(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL ksObjectsFilter3D::GetFilterCAxis()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksObjectsFilter3D::SetFilterCAxis(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksObjectsFilter3D operations


/////////////////////////////////////////////////////////////////////////////
// ksParametrizationParam properties

BOOL ksParametrizationParam::GetNearestPoints()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksParametrizationParam::SetNearestPoints(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

double ksParametrizationParam::GetPointsLimit()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksParametrizationParam::SetPointsLimit(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

BOOL ksParametrizationParam::GetHorizontal()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksParametrizationParam::SetHorizontal(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL ksParametrizationParam::GetVertical()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void ksParametrizationParam::SetVertical(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL ksParametrizationParam::GetParallel()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void ksParametrizationParam::SetParallel(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL ksParametrizationParam::GetPerpendicular()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void ksParametrizationParam::SetPerpendicular(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

double ksParametrizationParam::GetAngleLimit()
{
	double result;
	GetProperty(0x7, VT_R8, (void*)&result);
	return result;
}

void ksParametrizationParam::SetAngleLimit(double propVal)
{
	SetProperty(0x7, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksParametrizationParam operations

BOOL ksParametrizationParam::Init()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMacro3DDefinition properties

BOOL ksMacro3DDefinition::GetStaffVisible()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksMacro3DDefinition::SetStaffVisible(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL ksMacro3DDefinition::GetDoubleClickEditOff()
{
	BOOL result;
	GetProperty(0xc, VT_BOOL, (void*)&result);
	return result;
}

void ksMacro3DDefinition::SetDoubleClickEditOff(BOOL propVal)
{
	SetProperty(0xc, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMacro3DDefinition operations

LPDISPATCH ksMacro3DDefinition::FeatureCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMacro3DDefinition::Destroy()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ksMacro3DDefinition::Add(LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		obj);
	return result;
}

BOOL ksMacro3DDefinition::SetUserParam(LPDISPATCH userPars)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		userPars);
	return result;
}

long ksMacro3DDefinition::GetUserParamSize()
{
	long result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksMacro3DDefinition::GetUserParam(LPDISPATCH userPars)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		userPars);
	return result;
}

BOOL ksMacro3DDefinition::SetObject(long index, LPDISPATCH obj)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, obj);
	return result;
}

LPDISPATCH ksMacro3DDefinition::GetObject(long index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		index);
	return result;
}

long ksMacro3DDefinition::GetCountObj()
{
	long result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksMacro3DDefinition::ClearAllObj()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAxisConefaceDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksAxisConefaceDefinition operations

BOOL ksAxisConefaceDefinition::SetFace(LPDISPATCH face)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		face);
	return result;
}

LPDISPATCH ksAxisConefaceDefinition::GetFace()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksAxisConefaceDefinition::GetCurve3D()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksUnionComponentsDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksUnionComponentsDefinition operations

LPDISPATCH ksUnionComponentsDefinition::PartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksMoldCavityDefinition properties

double ksMoldCavityDefinition::GetScale()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksMoldCavityDefinition::SetScale(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksMoldCavityDefinition operations

LPDISPATCH ksMoldCavityDefinition::PartArray()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ksMoldCavityDefinition::GetScaleCentre()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksMoldCavityDefinition::SetScaleCentre(LPDISPATCH vert)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		vert);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksCoordinate3dCollection properties

/////////////////////////////////////////////////////////////////////////////
// ksCoordinate3dCollection operations

long ksCoordinate3dCollection::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksCoordinate3dCollection::GetByIndex(long index, double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, x, y, z);
	return result;
}

BOOL ksCoordinate3dCollection::GetSafeArray(VARIANT* array)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		array);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksIntersectionResult properties

/////////////////////////////////////////////////////////////////////////////
// ksIntersectionResult operations

long ksIntersectionResult::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long ksIntersectionResult::GetIntersectionType(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksPlaneMiddleDefinition properties

BOOL ksPlaneMiddleDefinition::GetPosition()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksPlaneMiddleDefinition::SetPosition(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksPlaneMiddleDefinition operations

BOOL ksPlaneMiddleDefinition::SetObject(long number, LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		number, val);
	return result;
}

LPDISPATCH ksPlaneMiddleDefinition::GetObject(long number)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		number);
	return result;
}

LPDISPATCH ksPlaneMiddleDefinition::GetSurface()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksControlPointDefinition properties

/////////////////////////////////////////////////////////////////////////////
// ksControlPointDefinition operations

BOOL ksControlPointDefinition::SetVertex(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksControlPointDefinition::GetVertex()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksControlPointDefinition::GetPoint(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksConjunctivePointDefinition properties

BOOL ksConjunctivePointDefinition::GetDirection()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void ksConjunctivePointDefinition::SetDirection(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksConjunctivePointDefinition operations

BOOL ksConjunctivePointDefinition::SetVertex(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksConjunctivePointDefinition::GetVertex()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksConjunctivePointDefinition::SetEdge(LPDISPATCH val)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		val);
	return result;
}

LPDISPATCH ksConjunctivePointDefinition::GetEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksConjunctivePointDefinition::GetPoint(double* x, double* y, double* z)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PR8 VTS_PR8 VTS_PR8;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y, z);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksChooseBodies properties

long ksChooseBodies::GetChooseBodiesType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksChooseBodies::SetChooseBodiesType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksChooseBodies operations

LPDISPATCH ksChooseBodies::BodyCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksAggregateDefinition properties

long ksAggregateDefinition::GetBooleanType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksAggregateDefinition::SetBooleanType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksAggregateDefinition operations

LPDISPATCH ksAggregateDefinition::BodyCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksChangeLeaderParam properties

double ksChangeLeaderParam::GetX()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void ksChangeLeaderParam::SetX(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

double ksChangeLeaderParam::GetY()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void ksChangeLeaderParam::SetY(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

short ksChangeLeaderParam::GetSignType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void ksChangeLeaderParam::SetSignType(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

double ksChangeLeaderParam::GetSignHeight()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void ksChangeLeaderParam::SetSignHeight(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

double ksChangeLeaderParam::GetLeaderLength()
{
	double result;
	GetProperty(0x5, VT_R8, (void*)&result);
	return result;
}

void ksChangeLeaderParam::SetLeaderLength(double propVal)
{
	SetProperty(0x5, VT_R8, propVal);
}

long ksChangeLeaderParam::GetStyle()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void ksChangeLeaderParam::SetStyle(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksChangeLeaderParam operations

LPDISPATCH ksChangeLeaderParam::GetpTextline()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksChangeLeaderParam::SetpTextline(LPDISPATCH pTextLine)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pTextLine);
	return result;
}

LPDISPATCH ksChangeLeaderParam::GetpPolyline()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL ksChangeLeaderParam::SetpPolyline(LPDISPATCH pPolyline)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pPolyline);
	return result;
}

BOOL ksChangeLeaderParam::Init()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksChooseParts properties

long ksChooseParts::GetChoosePartsType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void ksChooseParts::SetChoosePartsType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksChooseParts operations

LPDISPATCH ksChooseParts::PartCollection()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ksBodyParts properties

BOOL ksBodyParts::GetAllSelected()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void ksBodyParts::SetAllSelected(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// ksBodyParts operations

BOOL ksBodyParts::UserBodyPartsChoice()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ksBodyParts::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ksBodyParts::SetPartSelected(long index, BOOL Select)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index, Select);
	return result;
}

BOOL ksBodyParts::GetPartSelected(long index)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		index);
	return result;
}

BOOL ksBodyParts::SetGreatPartsSelected()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}
