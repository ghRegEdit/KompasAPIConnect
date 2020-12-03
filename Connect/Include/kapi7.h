#ifndef _KAPI7_H
#define _KAPI7_H

// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// IKompasAPIObject wrapper class

class IKompasAPIObject : public COleDispatchDriver
{
public:
	IKompasAPIObject() {}		// Calls COleDispatchDriver default constructor
	IKompasAPIObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasAPIObject(const IKompasAPIObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
};
/////////////////////////////////////////////////////////////////////////////
// IApplication wrapper class

class IApplication : public COleDispatchDriver
{
public:
	IApplication() {}		// Calls COleDispatchDriver default constructor
	IApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IApplication(const IApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	LPDISPATCH GetDocuments();
	void Quit();
	LPDISPATCH CreateProcessParam();
	void StopCurrentProcess(BOOL PostMessage, LPDISPATCH PDoc);
	LPDISPATCH CreatePropertyManager(BOOL NewManager);
	void SetActiveDocument(LPDISPATCH newValue);
	LPDISPATCH GetActiveDocument();
	LPDISPATCH GetLibraryManager();
	LPDISPATCH GetKompasError();
	LPDISPATCH GetConverter(const VARIANT& Library);
	LPDISPATCH GetCheckSum();
	LPDISPATCH GetProgressBarIndicator();
	void SetHideMessage(long nNewValue);
	long GetHideMessage();
	BOOL ExecuteKompasCommand(long CommandID, BOOL PostMessage);
	BOOL IsKompasCommandEnable(long CommandID);
	long IsKompasCommandCheck(long CommandID);
	LPDISPATCH GetSystemSettings();
	CString GetApplicationName(BOOL FullName);
	LPDISPATCH GetMath2D();
	LPDISPATCH GetPrintJob();
	long MessageBoxEx(LPCTSTR Text, LPCTSTR Caption, long Flags);
};
/////////////////////////////////////////////////////////////////////////////
// IDocuments wrapper class

class IDocuments : public COleDispatchDriver
{
public:
	IDocuments() {}		// Calls COleDispatchDriver default constructor
	IDocuments(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDocuments(const IDocuments& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(long Type, BOOL Visible);
	LPDISPATCH Open(LPCTSTR PathName, BOOL Visible, BOOL ReadOnly);
	LPDISPATCH OpenEx(LPCTSTR PathName, BOOL Visible, BOOL ReadOnly, const VARIANT& LoadCombinationIndex);
	VARIANT GetLoadCombinations(LPCTSTR PathName, long* CurrentIndex);
	LPDISPATCH AddWithDefaultSettings(long Type, BOOL Visible);
	void SetDocumentSynchronize(BOOL bNewValue);
	BOOL GetDocumentSynchronize();
	BOOL GetRecoverMode();
	void SetRecoverMode(BOOL bNewValue);
	long GetRecoverError();
	void SetRecoverError(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IKompasCollection wrapper class

class IKompasCollection : public COleDispatchDriver
{
public:
	IKompasCollection() {}		// Calls COleDispatchDriver default constructor
	IKompasCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasCollection(const IKompasCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// IKompasDocument wrapper class

class IKompasDocument : public COleDispatchDriver
{
public:
	IKompasDocument() {}		// Calls COleDispatchDriver default constructor
	IKompasDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasDocument(const IKompasDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
};
/////////////////////////////////////////////////////////////////////////////
// IDocumentFrames wrapper class

class IDocumentFrames : public COleDispatchDriver
{
public:
	IDocumentFrames() {}		// Calls COleDispatchDriver default constructor
	IDocumentFrames(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDocumentFrames(const IDocumentFrames& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IDocumentFrame wrapper class

class IDocumentFrame : public COleDispatchDriver
{
public:
	IDocumentFrame() {}		// Calls COleDispatchDriver default constructor
	IDocumentFrame(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDocumentFrame(const IDocumentFrame& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetRegime(long nNewValue);
	long GetRegime();
	void SetActive(BOOL bNewValue);
	BOOL GetActive();
	CString GetCaption();
	void Zoom(double X1, double Y1, double X2, double Y2);
	void ZoomPrevNextOrAll(long Type);
	void ZoomScale(double X, double Y, double Scale);
	void GetZoomScale(double* X, double* Y, double* Scale);
	long GetHWND();
	void SetGabaritModifying();
	void RefreshWindow();
	BOOL ConvertCoordinates(long Type, long LX, long LY, double* X, double* Y, double* Z);
	BOOL ExecuteKompasCommand(long CommandID, BOOL PostMessage);
	BOOL IsKompasCommandEnable(long CommandID);
	long IsKompasCommandCheck(long CommandID);
};
/////////////////////////////////////////////////////////////////////////////
// IDocumentSettings wrapper class

class IDocumentSettings : public COleDispatchDriver
{
public:
	IDocumentSettings() {}		// Calls COleDispatchDriver default constructor
	IDocumentSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDocumentSettings(const IDocumentSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationDescriptions wrapper class

class ISpecificationDescriptions : public COleDispatchDriver
{
public:
	ISpecificationDescriptions() {}		// Calls COleDispatchDriver default constructor
	ISpecificationDescriptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationDescriptions(const ISpecificationDescriptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR LayoutName, long StyleID, LPCTSTR SpcName);
	LPDISPATCH GetDescription(LPCTSTR LayoutName, long StyleID);
	LPDISPATCH GetActive();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationDescription wrapper class

class ISpecificationDescription : public COleDispatchDriver
{
public:
	ISpecificationDescription() {}		// Calls COleDispatchDriver default constructor
	ISpecificationDescription(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationDescription(const ISpecificationDescription& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetLayoutName();
	void SetLayoutName(LPCTSTR lpszNewValue);
	long GetStyleID();
	void SetStyleID(long nNewValue);
	CString GetSpecificationDocumentName();
	void SetSpecificationDocumentName(LPCTSTR lpszNewValue);
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL Update();
	BOOL Delete();
	LPDISPATCH GetSpecificationStyle();
	LPDISPATCH GetSpecificationTuning();
	VARIANT GetObjects();
	LPDISPATCH GetBaseObjects();
	LPDISPATCH GetCommentObjects();
	BOOL GetShowOnSheet();
	void SetShowOnSheet(BOOL bNewValue);
	LPDISPATCH GetCurrentObject();
	void SetCurrentObject(LPDISPATCH newValue);
	BOOL GetShowAllObjects();
	void SetShowAllObjects(BOOL bNewValue);
	CString GetPerformanceName(long PerformanceIndex, long BlockIndex);
	void SetPerformanceName(long PerformanceIndex, long BlockIndex, LPCTSTR lpszNewValue);
	BOOL GetDelegateMode();
	void SetDelegateMode(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationStyle wrapper class

class ISpecificationStyle : public COleDispatchDriver
{
public:
	ISpecificationStyle() {}		// Calls COleDispatchDriver default constructor
	ISpecificationStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationStyle(const ISpecificationStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetLayoutName1();
	long GetStyleID1();
	CString GetLayoutName2();
	long GetStyleID2();
	long GetVariant();
	BOOL GetSectionOn();
	LPDISPATCH GetSpecificationTuning();
	LPDISPATCH GetFormat();
	LPDISPATCH GetColumns();
	LPDISPATCH GetAdditionalColumns();
	LPDISPATCH GetSections();
	LPDISPATCH GetAdditionalBlocks();
	BOOL GetSortSectionDown();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationTuning wrapper class

class ISpecificationTuning : public COleDispatchDriver
{
public:
	ISpecificationTuning() {}		// Calls COleDispatchDriver default constructor
	ISpecificationTuning(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationTuning(const ISpecificationTuning& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetLinkType();
	void SetLinkType(long nNewValue);
	BOOL GetCalculateZone();
	void SetCalculateZone(BOOL bNewValue);
	BOOL GetCalculatePosition();
	void SetCalculatePosition(BOOL bNewValue);
	BOOL GetShowSectionName();
	void SetShowSectionName(BOOL bNewValue);
	BOOL GetDeleteGeometry();
	void SetDeleteGeometry(BOOL bNewValue);
	BOOL GetDisableEmptyString();
	void SetDisableEmptyString(BOOL bNewValue);
	BOOL GetDisableEmptyBlockString();
	void SetDisableEmptyBlockString(BOOL bNewValue);
	BOOL GetInsertNull();
	void SetInsertNull(BOOL bNewValue);
	BOOL GetInsertDash();
	void SetInsertDash(BOOL bNewValue);
	BOOL GetShowInfoByObjects();
	void SetShowInfoByObjects(BOOL bNewValue);
	BOOL GetSupportPerformance();
	void SetSupportPerformance(BOOL bNewValue);
	BOOL GetShowPerformanceFull();
	void SetShowPerformanceFull(BOOL bNewValue);
	BOOL GetBlockOnNewPage();
	void SetBlockOnNewPage(BOOL bNewValue);
	BOOL GetPositionUp();
	void SetPositionUp(BOOL bNewValue);
	BOOL GetDrawBottomUp();
	void SetDrawBottomUp(BOOL bNewValue);
	BOOL GetUserTextStyle();
	void SetUserTextStyle(BOOL bNewValue);
	long GetPerformanceCount();
	void SetPerformanceCount(long nNewValue);
	long GetBlockCount();
	long GetInitialPosition();
	void SetInitialPosition(long nNewValue);
	CString GetPredefinedTextFileName();
	void SetPredefinedTextFileName(LPCTSTR lpszNewValue);
	LPDISPATCH GetSectionTextStyleFirst();
	LPDISPATCH GetSectionTextStyleNext();
	LPDISPATCH GetObjectTextStyle();
	LPDISPATCH GetSections();
	BOOL GetUseAdditionalBlocks();
	void SetUseAdditionalBlocks(BOOL bNewValue);
	LPDISPATCH GetAdditionalBlocks();
	BOOL GetShowAdditionalBlockName();
	void SetShowAdditionalBlockName(BOOL bNewValue);
	BOOL GetShowNestingBlockName();
	void SetShowNestingBlockName(BOOL bNewValue);
	BOOL GetShowPerformanceBlockName();
	void SetShowPerformanceBlockName(BOOL bNewValue);
	LPDISPATCH GetPerformanceBlockTextStyleFirst();
	LPDISPATCH GetPerformanceBlockTextStyleNext();
	LPDISPATCH GetAdditionalBlockTextStyleFirst();
	LPDISPATCH GetAdditionalBlockTextStyleNext();
	LPDISPATCH GetNestingBlockTextStyleFirst();
	LPDISPATCH GetNestingBlockTextStyleNext();
	BOOL GetDisableNestingBlockEmptyStrings();
	void SetDisableNestingBlockEmptyStrings(BOOL bNewValue);
	BOOL GetDisableAdditionalBlockEmptyStrings();
	void SetDisableAdditionalBlockEmptyStrings(BOOL bNewValue);
	BOOL Update();
	BOOL GetDeleteSpcObjectOnDeleteGeometry();
	void SetDeleteSpcObjectOnDeleteGeometry(BOOL bNewValue);
	BOOL GetCopySpcObjectOnCopyGeometry();
	void SetCopySpcObjectOnCopyGeometry(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ITextStyle wrapper class

class ITextStyle : public COleDispatchDriver
{
public:
	ITextStyle() {}		// Calls COleDispatchDriver default constructor
	ITextStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextStyle(const ITextStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetNumber();
	void SetNumber(long nNewValue);
	double GetStep();
	void SetStep(double newValue);
	long GetAlign();
	void SetAlign(long nNewValue);
	double GetIndentedLine();
	void SetIndentedLine(double newValue);
	double GetStepBeforeParagraph();
	void SetStepBeforeParagraph(double newValue);
	double GetStepAfterParagraph();
	void SetStepAfterParagraph(double newValue);
	double GetLeftEdge();
	void SetLeftEdge(double newValue);
	double GetRightEdge();
	void SetRightEdge(double newValue);
	BOOL GetExtended();
	void SetExtended(BOOL bNewValue);
	long GetLinesCount();
	void SetLinesCount(long nNewValue);
	BOOL GetEnableLine1();
	void SetEnableLine1(BOOL bNewValue);
	double GetHeight1();
	void SetHeight1(double newValue);
	double GetWidthFactor1();
	void SetWidthFactor1(double newValue);
	double GetStep1();
	void SetStep1(double newValue);
	BOOL GetEnableLine2();
	void SetEnableLine2(BOOL bNewValue);
	double GetHeight2();
	void SetHeight2(double newValue);
	double GetWidthFactor2();
	void SetWidthFactor2(double newValue);
	double GetStep2();
	void SetStep2(double newValue);
	BOOL GetEnableLine3();
	void SetEnableLine3(BOOL bNewValue);
	double GetHeight3();
	void SetHeight3(double newValue);
	double GetWidthFactor3();
	void SetWidthFactor3(double newValue);
	double GetStep3();
	void SetStep3(double newValue);
	LPDISPATCH GetFont();
	LPDISPATCH GetTabulators();
};
/////////////////////////////////////////////////////////////////////////////
// ITextFont wrapper class

class ITextFont : public COleDispatchDriver
{
public:
	ITextFont() {}		// Calls COleDispatchDriver default constructor
	ITextFont(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextFont(const ITextFont& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetFontName();
	void SetFontName(LPCTSTR lpszNewValue);
	double GetHeight();
	void SetHeight(double newValue);
	double GetWidthFactor();
	void SetWidthFactor(double newValue);
	long GetColor();
	void SetColor(long nNewValue);
	BOOL GetBold();
	void SetBold(BOOL bNewValue);
	BOOL GetItalic();
	void SetItalic(BOOL bNewValue);
	BOOL GetUnderline();
	void SetUnderline(BOOL bNewValue);
	BOOL GetTextLineStep();
	void SetTextLineStep(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ITabulators wrapper class

class ITabulators : public COleDispatchDriver
{
public:
	ITabulators() {}		// Calls COleDispatchDriver default constructor
	ITabulators(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITabulators(const ITabulators& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(long Position);
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// ITabulator wrapper class

class ITabulator : public COleDispatchDriver
{
public:
	ITabulator() {}		// Calls COleDispatchDriver default constructor
	ITabulator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITabulator(const ITabulator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetPosition();
	void SetPosition(long nNewValue);
	long GetAlign();
	void SetAlign(long nNewValue);
	long GetFilling();
	void SetFilling(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationTuningSections wrapper class

class ISpecificationTuningSections : public COleDispatchDriver
{
public:
	ISpecificationTuningSections() {}		// Calls COleDispatchDriver default constructor
	ISpecificationTuningSections(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationTuningSections(const ISpecificationTuningSections& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationTuningSection wrapper class

class ISpecificationTuningSection : public COleDispatchDriver
{
public:
	ISpecificationTuningSection() {}		// Calls COleDispatchDriver default constructor
	ISpecificationTuningSection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationTuningSection(const ISpecificationTuningSection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetNumber();
	BOOL GetSubsectionOn();
	void SetSubsectionOn(BOOL bNewValue);
	BOOL GetAttachGeometry();
	void SetAttachGeometry(BOOL bNewValue);
	BOOL GetPutPosition();
	void SetPutPosition(BOOL bNewValue);
	BOOL GetSortObjects();
	void SetSortObjects(BOOL bNewValue);
	BOOL GetFirstOnSheet();
	void SetFirstOnSheet(BOOL bNewValue);
	short GetReserveStringCount();
	void SetReserveStringCount(short nNewValue);
	LPDISPATCH GetSubsections();
	BOOL GetUseAdditionalBlocks();
	void SetUseAdditionalBlocks(BOOL bNewValue);
	LPDISPATCH GetAdditionalBlocks();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationSubsections wrapper class

class ISpecificationSubsections : public COleDispatchDriver
{
public:
	ISpecificationSubsections() {}		// Calls COleDispatchDriver default constructor
	ISpecificationSubsections(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationSubsections(const ISpecificationSubsections& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR Name, short Number);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationSubsection wrapper class

class ISpecificationSubsection : public COleDispatchDriver
{
public:
	ISpecificationSubsection() {}		// Calls COleDispatchDriver default constructor
	ISpecificationSubsection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationSubsection(const ISpecificationSubsection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	short GetNumber();
	BOOL Change(LPCTSTR Name, short Number);
	BOOL Delete();
};
/////////////////////////////////////////////////////////////////////////////
// IAdditionalBlockTunings wrapper class

class IAdditionalBlockTunings : public COleDispatchDriver
{
public:
	IAdditionalBlockTunings() {}		// Calls COleDispatchDriver default constructor
	IAdditionalBlockTunings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdditionalBlockTunings(const IAdditionalBlockTunings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IAdditionalBlockTuning wrapper class

class IAdditionalBlockTuning : public COleDispatchDriver
{
public:
	IAdditionalBlockTuning() {}		// Calls COleDispatchDriver default constructor
	IAdditionalBlockTuning(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdditionalBlockTuning(const IAdditionalBlockTuning& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetNumber();
	CString GetDocumentName();
	void SetDocumentName(LPCTSTR lpszNewValue);
	BOOL GetUse();
	void SetUse(BOOL bNewValue);
	BOOL GetFirstOnSheet();
	void SetFirstOnSheet(BOOL bNewValue);
	LPDISPATCH GetSections();
};
/////////////////////////////////////////////////////////////////////////////
// IAdditionalBlockSectionTunings wrapper class

class IAdditionalBlockSectionTunings : public COleDispatchDriver
{
public:
	IAdditionalBlockSectionTunings() {}		// Calls COleDispatchDriver default constructor
	IAdditionalBlockSectionTunings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdditionalBlockSectionTunings(const IAdditionalBlockSectionTunings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IAdditionalBlockSectionTuning wrapper class

class IAdditionalBlockSectionTuning : public COleDispatchDriver
{
public:
	IAdditionalBlockSectionTuning() {}		// Calls COleDispatchDriver default constructor
	IAdditionalBlockSectionTuning(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdditionalBlockSectionTuning(const IAdditionalBlockSectionTuning& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetNumber();
	BOOL GetUse();
	void SetUse(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISheetFormat wrapper class

class ISheetFormat : public COleDispatchDriver
{
public:
	ISheetFormat() {}		// Calls COleDispatchDriver default constructor
	ISheetFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetFormat(const ISheetFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetFormat();
	void SetFormat(long nNewValue);
	long GetFormatMultiplicity();
	void SetFormatMultiplicity(long nNewValue);
	BOOL GetVerticalOrientation();
	void SetVerticalOrientation(BOOL bNewValue);
	double GetFormatWidth();
	void SetFormatWidth(double newValue);
	double GetFormatHeight();
	void SetFormatHeight(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationColumnStyles wrapper class

class ISpecificationColumnStyles : public COleDispatchDriver
{
public:
	ISpecificationColumnStyles() {}		// Calls COleDispatchDriver default constructor
	ISpecificationColumnStyles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationColumnStyles(const ISpecificationColumnStyles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationColumnStyle wrapper class

class ISpecificationColumnStyle : public COleDispatchDriver
{
public:
	ISpecificationColumnStyle() {}		// Calls COleDispatchDriver default constructor
	ISpecificationColumnStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationColumnStyle(const ISpecificationColumnStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	long GetColumnType();
	long GetNumber();
	BOOL GetEdit();
	BOOL GetCalculateSum();
	BOOL GetMultiplyToCount();
	BOOL GetUseForSectionTitle();
	BOOL GetTextDown();
	long GetStampLinkID();
	long GetValueType();
	CString GetAttributeLibraryName();
	long GetAttributeKey1();
	long GetAttributeKey2();
	long GetAttributeKey3();
	long GetAttributeKey4();
	double GetMinValue();
	double GetMaxValue();
	BOOL GetUseIn3D();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationSectionStyles wrapper class

class ISpecificationSectionStyles : public COleDispatchDriver
{
public:
	ISpecificationSectionStyles() {}		// Calls COleDispatchDriver default constructor
	ISpecificationSectionStyles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationSectionStyles(const ISpecificationSectionStyles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationSectionStyle wrapper class

class ISpecificationSectionStyle : public COleDispatchDriver
{
public:
	ISpecificationSectionStyle() {}		// Calls COleDispatchDriver default constructor
	ISpecificationSectionStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationSectionStyle(const ISpecificationSectionStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	long GetNumber();
	long GetSortColumnType();
	long GetSortColumnNumber();
	BOOL GetFillDataFromStamp();
	long GetSortType();
	LPDISPATCH GetColumns();
	LPDISPATCH GetAdditionalColumns();
	LPDISPATCH GetAdditionalBlocks();
};
/////////////////////////////////////////////////////////////////////////////
// IAdditionalBlockStyles wrapper class

class IAdditionalBlockStyles : public COleDispatchDriver
{
public:
	IAdditionalBlockStyles() {}		// Calls COleDispatchDriver default constructor
	IAdditionalBlockStyles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdditionalBlockStyles(const IAdditionalBlockStyles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IAdditionalBlockStyle wrapper class

class IAdditionalBlockStyle : public COleDispatchDriver
{
public:
	IAdditionalBlockStyle() {}		// Calls COleDispatchDriver default constructor
	IAdditionalBlockStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdditionalBlockStyle(const IAdditionalBlockStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	long GetNumber();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationBaseObjects wrapper class

class ISpecificationBaseObjects : public COleDispatchDriver
{
public:
	ISpecificationBaseObjects() {}		// Calls COleDispatchDriver default constructor
	ISpecificationBaseObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationBaseObjects(const ISpecificationBaseObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(long SectionNumb, double AttrNumb);
	VARIANT GetSpecificationObjectsForGeom(const VARIANT& PGeom, BOOL Equal, long SectionNumb, double AttrNumb);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationBaseObject wrapper class

class ISpecificationBaseObject : public COleDispatchDriver
{
public:
	ISpecificationBaseObject() {}		// Calls COleDispatchDriver default constructor
	ISpecificationBaseObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationBaseObject(const ISpecificationBaseObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetObjectType();
	long GetSection();
	long GetSubsection();
	void SetSubsection(long nNewValue);
	long GetAdditionalSection();
	void SetAdditionalSection(long nNewValue);
	long GetAdditionalBlock();
	void SetAdditionalBlock(long nNewValue);
	long GetNestedSection();
	void SetNestedSection(long nNewValue);
	long GetNestedBlock();
	void SetNestedBlock(long nNewValue);
	long GetBlockNumberByIndex(long Val);
	double GetUniqueNumber();
	long GetState();
	BOOL GetFirstOnSheet();
	void SetFirstOnSheet(BOOL bNewValue);
	BOOL GetIncrementPosition();
	void SetIncrementPosition(BOOL bNewValue);
	LPDISPATCH GetColumns();
	LPDISPATCH GetAdditionalColumns();
	LPDISPATCH GetAttachedDocuments();
	BOOL Update();
	BOOL Delete();
	BOOL Edit();
	BOOL GetDraw();
	void SetDraw(BOOL bNewValue);
	BOOL GetDrawPosition();
	void SetDrawPosition(BOOL bNewValue);
	BOOL GetPerformance();
	void SetPerformance(BOOL bNewValue);
	LPDISPATCH GetCommentObjects();
	VARIANT GetDocuments();
	double GetAttributeNumber();
	void SetAttributeNumber(double newValue);
	double GetSummaryCount(long ColumnTypeNumber, long BlockNumber);
	BOOL SetMaterial(LPCTSTR Material, double Density);
	VARIANT GetGeometry();
	void SetGeometry(const VARIANT& newValue);
	BOOL IncludeGeometry(const VARIANT& PVal, BOOL FillText);
	BOOL ClearGeometry(BOOL ClearGeometry, BOOL ClearLeaders);
	BOOL GetEditSourceObject();
	void SetEditSourceObject(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationObject wrapper class

class ISpecificationObject : public COleDispatchDriver
{
public:
	ISpecificationObject() {}		// Calls COleDispatchDriver default constructor
	ISpecificationObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationObject(const ISpecificationObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetObjectType();
	long GetSection();
	long GetSubsection();
	void SetSubsection(long nNewValue);
	long GetAdditionalSection();
	void SetAdditionalSection(long nNewValue);
	long GetAdditionalBlock();
	void SetAdditionalBlock(long nNewValue);
	long GetNestedSection();
	void SetNestedSection(long nNewValue);
	long GetNestedBlock();
	void SetNestedBlock(long nNewValue);
	long GetBlockNumberByIndex(long Val);
	double GetUniqueNumber();
	long GetState();
	BOOL GetFirstOnSheet();
	void SetFirstOnSheet(BOOL bNewValue);
	BOOL GetIncrementPosition();
	void SetIncrementPosition(BOOL bNewValue);
	LPDISPATCH GetColumns();
	LPDISPATCH GetAdditionalColumns();
	LPDISPATCH GetAttachedDocuments();
	BOOL Update();
	BOOL Delete();
	BOOL Edit();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationColumns wrapper class

class ISpecificationColumns : public COleDispatchDriver
{
public:
	ISpecificationColumns() {}		// Calls COleDispatchDriver default constructor
	ISpecificationColumns(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationColumns(const ISpecificationColumns& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetColumn(long ColumnType, long ColumnNumber, long BlockNumber);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationColumn wrapper class

class ISpecificationColumn : public COleDispatchDriver
{
public:
	ISpecificationColumn() {}		// Calls COleDispatchDriver default constructor
	ISpecificationColumn(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationColumn(const ISpecificationColumn& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetColumnType();
	long GetColumnTypeNumber();
	long GetBlockNumber();
	long GetNumber();
	long GetValueType();
	LPDISPATCH GetColumnItems();
	double GetAttributeNumber();
	void SetAttributeNumber(double newValue);
	LPDISPATCH GetText();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationColumnItems wrapper class

class ISpecificationColumnItems : public COleDispatchDriver
{
public:
	ISpecificationColumnItems() {}		// Calls COleDispatchDriver default constructor
	ISpecificationColumnItems(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationColumnItems(const ISpecificationColumnItems& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationColumnItem wrapper class

class ISpecificationColumnItem : public COleDispatchDriver
{
public:
	ISpecificationColumnItem() {}		// Calls COleDispatchDriver default constructor
	ISpecificationColumnItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationColumnItem(const ISpecificationColumnItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetValueType();
	short GetKey();
	void SetKey(short nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IText wrapper class

class IText : public COleDispatchDriver
{
public:
	IText() {}		// Calls COleDispatchDriver default constructor
	IText(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IText(const IText& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetStyle();
	void SetStyle(long nNewValue);
	VARIANT GetTextLines();
	long GetCount();
	LPDISPATCH GetTextLine(long Index);
	LPDISPATCH Add();
	LPDISPATCH AddBefore(long Index);
	CString GetStr();
	void SetStr(LPCTSTR lpszNewValue);
	BOOL Clear();
	LPDISPATCH AddTextLine(long Type, LPCTSTR FileName);
	LPDISPATCH AddTextLineBefore(long Type, long Index, LPCTSTR FileName);
	BOOL Replace(LPCTSTR SrcText, LPCTSTR NewText, BOOL Case, BOOL WordOnly, BOOL ReplaceAll);
	BOOL Assign(LPDISPATCH Other);
};
/////////////////////////////////////////////////////////////////////////////
// ITextLine wrapper class

class ITextLine : public COleDispatchDriver
{
public:
	ITextLine() {}		// Calls COleDispatchDriver default constructor
	ITextLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextLine(const ITextLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetStyle();
	void SetStyle(long nNewValue);
	VARIANT GetTextItems();
	long GetCount();
	LPDISPATCH GetTextItem(long Index);
	LPDISPATCH Add();
	LPDISPATCH AddBefore(long Index);
	CString GetStr();
	void SetStr(LPCTSTR lpszNewValue);
	BOOL Clear();
	double GetStep();
	void SetStep(double newValue);
	long GetAlign();
	void SetAlign(long nNewValue);
	double GetIndentedLine();
	void SetIndentedLine(double newValue);
	double GetStepBeforeParagraph();
	void SetStepBeforeParagraph(double newValue);
	double GetStepAfterParagraph();
	void SetStepAfterParagraph(double newValue);
	double GetLeftEdge();
	void SetLeftEdge(double newValue);
	double GetRightEdge();
	void SetRightEdge(double newValue);
	LPDISPATCH GetTabulators();
	long GetLevel();
	void SetLevel(long nNewValue);
	long GetNumbering();
	void SetNumbering(long nNewValue);
	BOOL Delete();
	long GetTextLineType();
	LPDISPATCH GetTextLineData();
	BOOL GetNewPage();
	void SetNewPage(BOOL bNewValue);
	BOOL Assign(LPDISPATCH Other);
	LPDISPATCH InsertHypertextReference(long TextItemIndex, LPDISPATCH Object, long Type, BOOL Brackets, long TextLineIndex, long Precision, double ProperyId);
};
/////////////////////////////////////////////////////////////////////////////
// ITextItem wrapper class

class ITextItem : public COleDispatchDriver
{
public:
	ITextItem() {}		// Calls COleDispatchDriver default constructor
	ITextItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextItem(const ITextItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetItemType();
	void SetItemType(long nNewValue);
	CString GetStr();
	void SetStr(LPCTSTR lpszNewValue);
	CString GetSymbolFontName();
	void SetSymbolFontName(LPCTSTR lpszNewValue);
	long GetNumber();
	void SetNumber(long nNewValue);
	long GetSizeFactor();
	void SetSizeFactor(long nNewValue);
	BOOL GetNewLine();
	void SetNewLine(BOOL bNewValue);
	BOOL Delete();
	BOOL Update();
};
/////////////////////////////////////////////////////////////////////////////
// IAttachedDocuments wrapper class

class IAttachedDocuments : public COleDispatchDriver
{
public:
	IAttachedDocuments() {}		// Calls COleDispatchDriver default constructor
	IAttachedDocuments(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttachedDocuments(const IAttachedDocuments& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR Name, BOOL Transmit);
};
/////////////////////////////////////////////////////////////////////////////
// IAttachedDocument wrapper class

class IAttachedDocument : public COleDispatchDriver
{
public:
	IAttachedDocument() {}		// Calls COleDispatchDriver default constructor
	IAttachedDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttachedDocument(const IAttachedDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	BOOL GetTransmit();
	void SetTransmit(BOOL bNewValue);
	CString GetComment();
	void SetComment(LPCTSTR lpszNewValue);
	BOOL Delete();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationCommentObjects wrapper class

class ISpecificationCommentObjects : public COleDispatchDriver
{
public:
	ISpecificationCommentObjects() {}		// Calls COleDispatchDriver default constructor
	ISpecificationCommentObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationCommentObjects(const ISpecificationCommentObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(long SectionNamb);
	BOOL Attach(LPDISPATCH PVal);
	BOOL Detach(LPDISPATCH PVal);
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationCommentObject wrapper class

class ISpecificationCommentObject : public COleDispatchDriver
{
public:
	ISpecificationCommentObject() {}		// Calls COleDispatchDriver default constructor
	ISpecificationCommentObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationCommentObject(const ISpecificationCommentObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetObjectType();
	long GetSection();
	long GetSubsection();
	void SetSubsection(long nNewValue);
	long GetAdditionalSection();
	void SetAdditionalSection(long nNewValue);
	long GetAdditionalBlock();
	void SetAdditionalBlock(long nNewValue);
	long GetNestedSection();
	void SetNestedSection(long nNewValue);
	long GetNestedBlock();
	void SetNestedBlock(long nNewValue);
	long GetBlockNumberByIndex(long Val);
	double GetUniqueNumber();
	long GetState();
	BOOL GetFirstOnSheet();
	void SetFirstOnSheet(BOOL bNewValue);
	BOOL GetIncrementPosition();
	void SetIncrementPosition(BOOL bNewValue);
	LPDISPATCH GetColumns();
	LPDISPATCH GetAdditionalColumns();
	LPDISPATCH GetAttachedDocuments();
	BOOL Update();
	BOOL Delete();
	BOOL Edit();
	LPDISPATCH GetBaseObject();
	long GetBlockNumber();
	void SetBlockNumber(long nNewValue);
	BOOL GetEditSourceObject();
	void SetEditSourceObject(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILayoutSheets wrapper class

class ILayoutSheets : public COleDispatchDriver
{
public:
	ILayoutSheets() {}		// Calls COleDispatchDriver default constructor
	ILayoutSheets(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayoutSheets(const ILayoutSheets& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetItemByNumber(long Number);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ILayoutSheet wrapper class

class ILayoutSheet : public COleDispatchDriver
{
public:
	ILayoutSheet() {}		// Calls COleDispatchDriver default constructor
	ILayoutSheet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayoutSheet(const ILayoutSheet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetFormat();
	CString GetLayoutLibraryFileName();
	void SetLayoutLibraryFileName(LPCTSTR lpszNewValue);
	double GetLayoutStyleNumber();
	void SetLayoutStyleNumber(double newValue);
	BOOL Update();
	BOOL Delete();
	LPDISPATCH GetStamp();
};
/////////////////////////////////////////////////////////////////////////////
// IStamp wrapper class

class IStamp : public COleDispatchDriver
{
public:
	IStamp() {}		// Calls COleDispatchDriver default constructor
	IStamp(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IStamp(const IStamp& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetText(long Id);
	BOOL Update();
	BOOL Clear(long Id);
	long GetNextColumnId(long Id);
};
/////////////////////////////////////////////////////////////////////////////
// IUserDataStoragesMng wrapper class

class IUserDataStoragesMng : public COleDispatchDriver
{
public:
	IUserDataStoragesMng() {}		// Calls COleDispatchDriver default constructor
	IUserDataStoragesMng(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUserDataStoragesMng(const IUserDataStoragesMng& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPDISPATCH Object);
	BOOL Delete(const VARIANT& Index);
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// IUserDataStorages wrapper class

class IUserDataStorages : public COleDispatchDriver
{
public:
	IUserDataStorages() {}		// Calls COleDispatchDriver default constructor
	IUserDataStorages(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUserDataStorages(const IUserDataStorages& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR StorageName);
	BOOL Delete(LPCTSTR Password, const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IUserDataStorage wrapper class

class IUserDataStorage : public COleDispatchDriver
{
public:
	IUserDataStorage() {}		// Calls COleDispatchDriver default constructor
	IUserDataStorage(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUserDataStorage(const IUserDataStorage& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName(LPCTSTR Pass);
	void SetName(LPCTSTR Pass, LPCTSTR lpszNewValue);
	BOOL SetPassword(LPCTSTR OldPass, LPCTSTR NewPass);
	long GetVersion(LPCTSTR Pass);
	void SetVersion(LPCTSTR Pass, long nNewValue);
	CString GetObject(const VARIANT& Index, VARIANT* Object, long* Numb);
	long SetObject(LPCTSTR Pass, const VARIANT& Index, const VARIANT& Object, LPCTSTR Comment);
	long AddObject(LPCTSTR Pass, const VARIANT& Object, LPCTSTR Comment);
	BOOL Delete(LPCTSTR Pass, const VARIANT& Index);
	BOOL Clear(LPCTSTR Pass);
};
/////////////////////////////////////////////////////////////////////////////
// IProcessParam wrapper class

class IProcessParam : public COleDispatchDriver
{
public:
	IProcessParam() {}		// Calls COleDispatchDriver default constructor
	IProcessParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProcessParam(const IProcessParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	LPDISPATCH GetPropertyTabs();
	void SetSpecToolbar(long nNewValue);
	long GetSpecToolbar();
	void SetAutoReduce(BOOL bNewValue);
	BOOL GetAutoReduce();
	void SetDefaultControlFix(long nNewValue);
	long GetDefaultControlFix();
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
	void SetSpecToolbarEx(long nNewValue);
	long GetSpecToolbarEx();
	void SetBmpBeginId(long Size, long nNewValue);
	long GetBmpBeginId(long Size);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyTabs wrapper class

class IPropertyTabs : public COleDispatchDriver
{
public:
	IPropertyTabs() {}		// Calls COleDispatchDriver default constructor
	IPropertyTabs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyTabs(const IPropertyTabs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR Caption);
	BOOL Delete(const VARIANT& Index);
	LPDISPATCH GetActive();
	LPDISPATCH GetSystemTab();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyTab wrapper class

class IPropertyTab : public COleDispatchDriver
{
public:
	IPropertyTab() {}		// Calls COleDispatchDriver default constructor
	IPropertyTab(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyTab(const IPropertyTab& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	void SetActive(BOOL bNewValue);
	BOOL GetActive();
	LPDISPATCH GetPropertyControls();
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
	void SetImage(const VARIANT& newValue);
	VARIANT GetImage();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyControls wrapper class

class IPropertyControls : public COleDispatchDriver
{
public:
	IPropertyControls() {}		// Calls COleDispatchDriver default constructor
	IPropertyControls(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyControls(const IPropertyControls& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(long Type);
	BOOL Delete(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyControl wrapper class

class IPropertyControl : public COleDispatchDriver
{
public:
	IPropertyControl() {}		// Calls COleDispatchDriver default constructor
	IPropertyControl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyControl(const IPropertyControl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManager wrapper class

class IPropertyManager : public COleDispatchDriver
{
public:
	IPropertyManager() {}		// Calls COleDispatchDriver default constructor
	IPropertyManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManager(const IPropertyManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	void SetLayout(long nNewValue);
	long GetLayout();
	LPDISPATCH GetPropertyTabs();
	void SetGabaritRect(long Left, long Top, long Right, long Bottom);
	void GetGabaritRect(long* Left, long* Top, long* Right, long* Bottom);
	BOOL ShowTabs();
	BOOL UpdateTabs();
	BOOL HideTabs();
	void SetSpecToolbar(long nNewValue);
	long GetSpecToolbar();
	BOOL RepeatCommand();
	void SetAutoHideMode(BOOL bNewValue);
	BOOL GetAutoHideMode();
};
/////////////////////////////////////////////////////////////////////////////
// ILibraryManager wrapper class

class ILibraryManager : public COleDispatchDriver
{
public:
	ILibraryManager() {}		// Calls COleDispatchDriver default constructor
	ILibraryManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILibraryManager(const ILibraryManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetProceduresLibraries();
	LPDISPATCH GetFragmentsLibraries();
	LPDISPATCH GetModelsLibraries();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	long GetLayout();
	CString GetActiveFolder();
	void SetActiveFolder(LPCTSTR lpszNewValue);
	VARIANT GetActiveFolderComment();
	void SetActiveFolderComment(const VARIANT& newValue);
	void AddFolder(LPCTSTR PathFolder);
	void RemoveFolder(LPCTSTR PathFolder);
	LPDISPATCH GetSystemControlStartLibrary();
	LPDISPATCH GetCurrentLibrary();
	BOOL SetCurrentLibrary(LPDISPATCH PVal);
	long GetSystemControlStartResult();
};
/////////////////////////////////////////////////////////////////////////////
// IProceduresLibraries wrapper class

class IProceduresLibraries : public COleDispatchDriver
{
public:
	IProceduresLibraries() {}		// Calls COleDispatchDriver default constructor
	IProceduresLibraries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProceduresLibraries(const IProceduresLibraries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IProceduresLibrary wrapper class

class IProceduresLibrary : public COleDispatchDriver
{
public:
	IProceduresLibrary() {}		// Calls COleDispatchDriver default constructor
	IProceduresLibrary(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProceduresLibrary(const IProceduresLibrary& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetLibraryManagerFolder();
	BOOL GetAttach();
	void SetAttach(BOOL bNewValue);
	long GetLibraryType();
	CString GetName();
	CString GetPathName();
	BOOL GetEnable();
	BOOL Execute(long Command, LPDISPATCH External, BOOL Post);
	long GetStyle();
	void SetStyle(long nNewValue);
	LPDISPATCH GetProcedures();
	long GetCurrentCommand();
	BOOL SystemControlStop();
	long SystemControlStart(LPCTSTR menuCommand);
	long GetUniqueId();
	BOOL GetExecutable();
	BOOL GetAddIns();
	LPDISPATCH GetExternalInterface();
	CString GetLibraryName();
};
/////////////////////////////////////////////////////////////////////////////
// ILibrary wrapper class

class ILibrary : public COleDispatchDriver
{
public:
	ILibrary() {}		// Calls COleDispatchDriver default constructor
	ILibrary(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILibrary(const ILibrary& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetLibraryManagerFolder();
	BOOL GetAttach();
	void SetAttach(BOOL bNewValue);
	long GetLibraryType();
	CString GetName();
	CString GetPathName();
	BOOL GetEnable();
	BOOL Execute(long Command, LPDISPATCH External, BOOL Post);
};
/////////////////////////////////////////////////////////////////////////////
// IProcedures wrapper class

class IProcedures : public COleDispatchDriver
{
public:
	IProcedures() {}		// Calls COleDispatchDriver default constructor
	IProcedures(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProcedures(const IProcedures& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetItemByID(long Id);
};
/////////////////////////////////////////////////////////////////////////////
// IProcedure wrapper class

class IProcedure : public COleDispatchDriver
{
public:
	IProcedure() {}		// Calls COleDispatchDriver default constructor
	IProcedure(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProcedure(const IProcedure& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	CString GetLibraryFolder();
	long GetId();
	BOOL Execute(LPDISPATCH External, BOOL Post);
};
/////////////////////////////////////////////////////////////////////////////
// IInsertsLibraries wrapper class

class IInsertsLibraries : public COleDispatchDriver
{
public:
	IInsertsLibraries() {}		// Calls COleDispatchDriver default constructor
	IInsertsLibraries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertsLibraries(const IInsertsLibraries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IInsertsLibrary wrapper class

class IInsertsLibrary : public COleDispatchDriver
{
public:
	IInsertsLibrary() {}		// Calls COleDispatchDriver default constructor
	IInsertsLibrary(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertsLibrary(const IInsertsLibrary& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetLibraryManagerFolder();
	BOOL GetAttach();
	void SetAttach(BOOL bNewValue);
	long GetLibraryType();
	CString GetName();
	CString GetPathName();
	BOOL GetEnable();
	BOOL Execute(long Command, LPDISPATCH External, BOOL Post);
	CString GetActiveFolder();
	BOOL SetActiveFolder(LPCTSTR PathFolder, BOOL LastIsFile, BOOL HaveLibName);
	LPDISPATCH GetInserts();
	BOOL AddFolder(LPCTSTR PathFolder);
	BOOL RemoveFolder(LPCTSTR PathFolder);
};
/////////////////////////////////////////////////////////////////////////////
// IInserts wrapper class

class IInserts : public COleDispatchDriver
{
public:
	IInserts() {}		// Calls COleDispatchDriver default constructor
	IInserts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInserts(const IInserts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR Name, long DocType);
};
/////////////////////////////////////////////////////////////////////////////
// IInsert wrapper class

class IInsert : public COleDispatchDriver
{
public:
	IInsert() {}		// Calls COleDispatchDriver default constructor
	IInsert(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsert(const IInsert& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	VARIANT GetComment();
	void SetComment(const VARIANT& newValue);
	CString GetLibraryFolder();
	CString GetPathName();
	LPDISPATCH Edit();
	BOOL Delete();
};
/////////////////////////////////////////////////////////////////////////////
// IKompasError wrapper class

class IKompasError : public COleDispatchDriver
{
public:
	IKompasError() {}		// Calls COleDispatchDriver default constructor
	IKompasError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasError(const IKompasError& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetCode();
	CString GetDescription();
	BOOL GetError3D();
	void Report();
	void Clear();
};
/////////////////////////////////////////////////////////////////////////////
// IConverter wrapper class

class IConverter : public COleDispatchDriver
{
public:
	IConverter() {}		// Calls COleDispatchDriver default constructor
	IConverter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConverter(const IConverter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN ConverterParameters(long Command);
	CString GetFilter(long DocType, BOOL SaveAs, long* Command);
	long Convert(LPCTSTR InputFile, LPCTSTR Outfile, long Command, BOOL ShowParam);
	BOOL VisualEditConvertParam(long ParentHwnd, long Command);
};
/////////////////////////////////////////////////////////////////////////////
// ICheckSum wrapper class

class ICheckSum : public COleDispatchDriver
{
public:
	ICheckSum() {}		// Calls COleDispatchDriver default constructor
	ICheckSum(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICheckSum(const ICheckSum& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void Add(const VARIANT& Value, BOOL Com);
	VARIANT GetResult();
	CString GetStrResult();
	BOOL AddInterface(LPUNKNOWN Object, BOOL Com);
	BOOL AddReference(long Object, long Doc, BOOL Com);
	void Clear();
	long GetVersion();
	void SetVersion(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IProgressBarIndicator wrapper class

class IProgressBarIndicator : public COleDispatchDriver
{
public:
	IProgressBarIndicator() {}		// Calls COleDispatchDriver default constructor
	IProgressBarIndicator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProgressBarIndicator(const IProgressBarIndicator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void Start(long MinVal, long MaxVal, LPCTSTR TextVal, BOOL ResetVal);
	void SetProgress(long CurrentVal, LPCTSTR TextVal, BOOL ResetVal);
	void SetText(LPCTSTR TextVal);
	void Stop(LPCTSTR TextVal, BOOL ResetVal);
};
/////////////////////////////////////////////////////////////////////////////
// ISystemSettings wrapper class

class ISystemSettings : public COleDispatchDriver
{
public:
	ISystemSettings() {}		// Calls COleDispatchDriver default constructor
	ISystemSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISystemSettings(const ISystemSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetFilesAutoSaveSwitchOn(BOOL bNewValue);
	BOOL GetFilesAutoSaveSwitchOn();
	void SetFilesBackupPrevCopySwitchOn(BOOL bNewValue);
	BOOL GetFilesBackupPrevCopySwitchOn();
	void SetModelLocalCSCreateInAbsoluteCS(BOOL bNewValue);
	BOOL GetModelLocalCSCreateInAbsoluteCS();
	void SetModelLocalCSSetActive(BOOL bNewValue);
	BOOL GetModelLocalCSSetActive();
	void SetModelSmoothMotion(BOOL bNewValue);
	BOOL GetModelSmoothMotion();
	LPDISPATCH GetReportStyleListSettings();
	void SetObjectsFilter3D(long Type, BOOL bNewValue);
	BOOL GetObjectsFilter3D(long Type);
};
/////////////////////////////////////////////////////////////////////////////
// ILibArraySettings wrapper class

class ILibArraySettings : public COleDispatchDriver
{
public:
	ILibArraySettings() {}		// Calls COleDispatchDriver default constructor
	ILibArraySettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILibArraySettings(const ILibArraySettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetLibraryCount();
	CString GetLibrary(long Index, BOOL* Use);
	BOOL SetLibraryUse(const VARIANT& Index, BOOL Use);
	BOOL GetLibrarys(VARIANT* FileNames, VARIANT* Uses);
	BOOL AddLibrary(LPCTSTR FileName, BOOL Use);
	BOOL RemoveLibrary(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IMath2D wrapper class

class IMath2D : public COleDispatchDriver
{
public:
	IMath2D() {}		// Calls COleDispatchDriver default constructor
	IMath2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMath2D(const IMath2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH Line(double X, double Y, double Angle);
	LPDISPATCH LineSeg(double X1, double Y1, double X2, double Y2);
	LPDISPATCH Arc(double Xc, double Yc, double Radius, double Angle1, double Angle2, BOOL Direction);
	LPDISPATCH Circle(double Xc, double Yc, double Radius);
	LPDISPATCH PolyLine(const VARIANT& Points, BOOL Closed);
	LPDISPATCH Ellipse(double Xc, double Yc, double A, double B, double Angle);
	LPDISPATCH EllipseArc(double Xc, double Yc, double A, double B, double Angle, double Angle1, double Angle2, BOOL Direction);
	LPDISPATCH Bezier(BOOL Closed, BOOL AllPoints, const VARIANT& Points);
	LPDISPATCH Nurbs(BOOL Closed, long Degree, const VARIANT& Points, const VARIANT& Weights, const VARIANT& Knots);
	BOOL Symmetry(double* X, double* Y, LPDISPATCH Curve);
	BOOL Rotate(double* X, double* Y, double Xc, double Yc, double Angle);
	BOOL MovePoint(double* X, double* Y, double Angle, double Len);
};
/////////////////////////////////////////////////////////////////////////////
// ICurve2D wrapper class

class ICurve2D : public COleDispatchDriver
{
public:
	ICurve2D() {}		// Calls COleDispatchDriver default constructor
	ICurve2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICurve2D(const ICurve2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	VARIANT Intersect(LPDISPATCH Curve2);
	BOOL Tangent(LPDISPATCH Curve2, VARIANT* Curve1Points, VARIANT* Curve2Points);
	VARIANT TangentLinePoint(double X, double Y);
	VARIANT CouplingCurvCurv(LPDISPATCH Curve2, double Radius);
	BOOL PointProjection(double X, double Y, double* Kx, double* Ky, double* T, double* Angle);
	VARIANT CalculatePolygonByStep(double Step);
	BOOL MovePoint(double* X, double* Y, double Lenght, BOOL Direction);
	double GetLength();
	double GetDistancePointPoint(double X1, double Y1, double X2, double Y2);
	double GetDistanceToPoint(double X, double Y);
	BOOL PointOn(double T, double* X, double* Y);
	double GetMetricLength(double T1, double T2);
	double GetParamMin();
	double GetParamMax();
	BOOL GetIsClosed();
	BOOL GetNurbsParams(BOOL Closed, VARIANT* Points, VARIANT* Weights, VARIANT* Knots, double* TMin, double* TMax);
};
/////////////////////////////////////////////////////////////////////////////
// IPrintJob wrapper class

class IPrintJob : public COleDispatchDriver
{
public:
	IPrintJob() {}		// Calls COleDispatchDriver default constructor
	IPrintJob(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPrintJob(const IPrintJob& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL Clear();
	BOOL ShowPreviewWindow();
	BOOL Load(LPCTSTR FileName, VARIANT* Errors);
	BOOL Save(LPCTSTR FileName);
	BOOL Execute(LPCTSTR OutputFileName);
	BOOL AddSheets(LPCTSTR FileName, const VARIANT& Sheets, long Range);
	long GetSheetsCount();
	LPDISPATCH GetSheet(long Index);
	BOOL RemoveSheets(const VARIANT& Index);
	long GetPagesCount();
	BOOL GetPageGabarites(double* Width, double* Height);
	BOOL GetPagesMapGabarites(long* WPageCount, long* HPageCount);
	BOOL GetPagePrintableFlag(long WPage, long HPage);
	void SetPagePrintableFlag(long WPage, long HPage, BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPrintJob_Sheet wrapper class

class IPrintJob_Sheet : public COleDispatchDriver
{
public:
	IPrintJob_Sheet() {}		// Calls COleDispatchDriver default constructor
	IPrintJob_Sheet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPrintJob_Sheet(const IPrintJob_Sheet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetDocumentName();
	long GetNumber();
	BOOL GetGabarites(double* Width, double* Height);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetScale(double newValue);
	double GetScale();
	BOOL GetClipFlag();
	void SetClipFlag(BOOL bNewValue);
	BOOL GetClipFrameGabarites(double* Left, double* Bottom, double* Right, double* Top);
	BOOL SetClipFrameGabarites(double Left, double Bottom, double Right, double Top);
};
/////////////////////////////////////////////////////////////////////////////
// IKompasDocument2D wrapper class

class IKompasDocument2D : public COleDispatchDriver
{
public:
	IKompasDocument2D() {}		// Calls COleDispatchDriver default constructor
	IKompasDocument2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasDocument2D(const IKompasDocument2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetViewsAndLayersManager();
	LPDISPATCH GetDrawingObjectNotifyResult();
};
/////////////////////////////////////////////////////////////////////////////
// IViewsAndLayersManager wrapper class

class IViewsAndLayersManager : public COleDispatchDriver
{
public:
	IViewsAndLayersManager() {}		// Calls COleDispatchDriver default constructor
	IViewsAndLayersManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IViewsAndLayersManager(const IViewsAndLayersManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetViews();
	LPDISPATCH GetLayerGroups();
};
/////////////////////////////////////////////////////////////////////////////
// IViews wrapper class

class IViews : public COleDispatchDriver
{
public:
	IViews() {}		// Calls COleDispatchDriver default constructor
	IViews(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IViews(const IViews& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetView(const VARIANT& Index);
	LPDISPATCH GetViewByNumber(long Numb);
	LPDISPATCH Add(long ViewType);
	LPDISPATCH GetActiveView();
	BOOL AddStandartViews(LPCTSTR FileName, LPCTSTR ProjectionName, const VARIANT& ProjectionsTypes, double X, double Y, double Scale, double DX, double DY);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingObjects wrapper class

class IDrawingObjects : public COleDispatchDriver
{
public:
	IDrawingObjects() {}		// Calls COleDispatchDriver default constructor
	IDrawingObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingObjects(const IDrawingObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingObject wrapper class

class IDrawingObject : public COleDispatchDriver
{
public:
	IDrawingObject() {}		// Calls COleDispatchDriver default constructor
	IDrawingObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingObject(const IDrawingObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IView wrapper class

class IView : public COleDispatchDriver
{
public:
	IView() {}		// Calls COleDispatchDriver default constructor
	IView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IView(const IView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetNumber(long nNewValue);
	long GetNumber();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	void SetBackground(BOOL bNewValue);
	BOOL GetBackground();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetCurrent(BOOL bNewValue);
	BOOL GetCurrent();
	void SetColor(long nNewValue);
	long GetColor();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetComment();
	long GetObjectCount();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	long GetViewType();
	LPDISPATCH GetLayers();
	VARIANT GetVariables();
	LPDISPATCH GetVariable(const VARIANT& Index);
	long GetVariablesCount();
};
/////////////////////////////////////////////////////////////////////////////
// ILayers wrapper class

class ILayers : public COleDispatchDriver
{
public:
	ILayers() {}		// Calls COleDispatchDriver default constructor
	ILayers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayers(const ILayers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLayer(const VARIANT& Index);
	LPDISPATCH GetLayerByNumber(long Number);
	LPDISPATCH Add();
	BOOL Attach(LPDISPATCH PVal);
	BOOL Detach(LPDISPATCH PVal);
};
/////////////////////////////////////////////////////////////////////////////
// ILayer wrapper class

class ILayer : public COleDispatchDriver
{
public:
	ILayer() {}		// Calls COleDispatchDriver default constructor
	ILayer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayer(const ILayer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	void SetBackground(BOOL bNewValue);
	BOOL GetBackground();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetCurrent(BOOL bNewValue);
	BOOL GetCurrent();
	void SetColor(long nNewValue);
	long GetColor();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetComment();
	long GetObjectCount();
};
/////////////////////////////////////////////////////////////////////////////
// IVariable7 wrapper class

class IVariable7 : public COleDispatchDriver
{
public:
	IVariable7() {}		// Calls COleDispatchDriver default constructor
	IVariable7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVariable7(const IVariable7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetNote(LPCTSTR lpszNewValue);
	CString GetNote();
	void SetValue(double newValue);
	double GetValue();
	void SetExternal(BOOL bNewValue);
	BOOL GetExternal();
	void SetInformation(BOOL bNewValue);
	BOOL GetInformation();
	void SetExpression(LPCTSTR lpszNewValue);
	CString GetExpression();
	CString GetParameterNote();
	CString GetDisplayName();
	CString GetLinkVariableName();
	CString GetLinkDocumentName();
	BOOL SetLink(LPCTSTR DocumentName, LPCTSTR VariableName);
	BOOL Delete();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetReadOnly();
};
/////////////////////////////////////////////////////////////////////////////
// ILayerGroups wrapper class

class ILayerGroups : public COleDispatchDriver
{
public:
	ILayerGroups() {}		// Calls COleDispatchDriver default constructor
	ILayerGroups(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayerGroups(const ILayerGroups& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(LPDISPATCH Owner, BOOL Dinamic);
	BOOL Attach(LPDISPATCH PGroup);
	BOOL Detach(LPDISPATCH PGroup);
};
/////////////////////////////////////////////////////////////////////////////
// ILayerGroup wrapper class

class ILayerGroup : public COleDispatchDriver
{
public:
	ILayerGroup() {}		// Calls COleDispatchDriver default constructor
	ILayerGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayerGroup(const ILayerGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetOwnerGroup();
	LPDISPATCH GetLayerGroups();
	LPDISPATCH GetLayers();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	LPDISPATCH GetLayerFilterConditions();
	BOOL GetLayerStates(const VARIANT& LayerIndex, BOOL* Visible, BOOL* Background, BOOL* Curent, long* Color);
	BOOL SetLayerStates(const VARIANT& LayerIndex, BOOL Visible, BOOL Background, BOOL Curent, long Color);
	void SetCurrent(BOOL bNewValue);
	BOOL GetCurrent();
	BOOL Delete();
	LPDISPATCH GetOwnerView();
	void SetOwnerView(LPDISPATCH newValue);
	double GetUniqueId();
};
/////////////////////////////////////////////////////////////////////////////
// ILayerFilterConditions wrapper class

class ILayerFilterConditions : public COleDispatchDriver
{
public:
	ILayerFilterConditions() {}		// Calls COleDispatchDriver default constructor
	ILayerFilterConditions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayerFilterConditions(const ILayerFilterConditions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ILayerFilterCondition wrapper class

class ILayerFilterCondition : public COleDispatchDriver
{
public:
	ILayerFilterCondition() {}		// Calls COleDispatchDriver default constructor
	ILayerFilterCondition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayerFilterCondition(const ILayerFilterCondition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetNumber(LPCTSTR lpszNewValue);
	CString GetNumber();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	void SetBackground(long nNewValue);
	long GetBackground();
	void SetVisible(long nNewValue);
	long GetVisible();
	void SetHaveObjects(long nNewValue);
	long GetHaveObjects();
	void SetColor(long nNewValue);
	long GetColor();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetComment();
};
/////////////////////////////////////////////////////////////////////////////
// IKompasDocument3D wrapper class

class IKompasDocument3D : public COleDispatchDriver
{
public:
	IKompasDocument3D() {}		// Calls COleDispatchDriver default constructor
	IKompasDocument3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasDocument3D(const IKompasDocument3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetTopPart();
	void SetHideAllPlanes(BOOL bNewValue);
	BOOL GetHideAllPlanes();
	void SetHideAllAxis(BOOL bNewValue);
	BOOL GetHideAllAxis();
	void SetHideAllSketches(BOOL bNewValue);
	BOOL GetHideAllSketches();
	void SetHideAllPlaces(BOOL bNewValue);
	BOOL GetHideAllPlaces();
	void SetHideAllSurfaces(BOOL bNewValue);
	BOOL GetHideAllSurfaces();
	void SetHideAllThreads(BOOL bNewValue);
	BOOL GetHideAllThreads();
	void SetHideAllCurves(BOOL bNewValue);
	BOOL GetHideAllCurves();
	void SetHideAllControlPoints(BOOL bNewValue);
	BOOL GetHideAllControlPoints();
	void SetPerspective(BOOL bNewValue);
	BOOL GetPerspective();
	void SetDrawMode(long nNewValue);
	long GetDrawMode();
	void SetShadedWireframe(BOOL bNewValue);
	BOOL GetShadedWireframe();
	void SetCreateObjectsInCurrentLocalCS(BOOL bNewValue);
	BOOL GetCreateObjectsInCurrentLocalCS();
	void SetHideAllDimensions(BOOL bNewValue);
	BOOL GetHideAllDimensions();
	void SetHideAllDesignations(BOOL bNewValue);
	BOOL GetHideAllDesignations();
	void SetHideAllAuxiliaryGeom(BOOL bNewValue);
	BOOL GetHideAllAuxiliaryGeom();
	void SetHideInComponentsMode(BOOL bNewValue);
	BOOL GetHideInComponentsMode();
	LPDISPATCH GetSelectionManager();
	LPDISPATCH GetChooseManager();
	LPDISPATCH CreateAttrEx(double AttrID, LPCTSTR Libname, const VARIANT& Objects, LPDISPATCH SourcePart);
	VARIANT GetAttributesEx(long Key1, long Key2, long Key3, long Key4, double Numb, const VARIANT& Objects, LPDISPATCH SourcePart);
	BOOL RebuildDocument();
	void SetEnableUndo(BOOL bNewValue);
	BOOL GetEnableUndo();
	void SetUndoContainer(BOOL bNewValue);
	BOOL GetUndoContainer();
};
/////////////////////////////////////////////////////////////////////////////
// IPart7 wrapper class

class IPart7 : public COleDispatchDriver
{
public:
	IPart7() {}		// Calls COleDispatchDriver default constructor
	IPart7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPart7(const IPart7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	CString GetMarking();
	void SetMarking(LPCTSTR lpszNewValue);
	CString GetFileName();
	void SetFileName(LPCTSTR lpszNewValue);
	void SetStandard(BOOL bNewValue);
	BOOL GetStandard();
	void SetFixed(BOOL bNewValue);
	BOOL GetFixed();
	BOOL GetDetail();
	double GetMass();
	double GetDensity();
	CString GetMaterial();
	BOOL SetMaterial(LPCTSTR Name, double Density);
	LPDISPATCH GetParts();
	LPDISPATCH GetVariableTable();
	VARIANT GetPartsEx(const VARIANT& PartCollectionType);
	long GetInstanceCount(LPDISPATCH Part);
	VARIANT SelectByPoint(const VARIANT& Objects, double X, double Y, double Z);
	BOOL TransferObjects(const VARIANT& Objects, LPDISPATCH Lcs, BOOL holdPosition);
	BOOL Load(BOOL Full);
	BOOL Unload(BOOL Full);
	long GetLoadState();
	LPDISPATCH GetDefaultObject(long Type);
	BOOL IsVariableNameValid(LPCTSTR Name);
	LPDISPATCH AddVariable(LPCTSTR Name, double Value, LPCTSTR Note);
	BOOL RebuildModel(BOOL Redraw);
	long GetReadOnly();
	void SetReadOnly(long nNewValue);
	BOOL GetStaffVisible();
	void SetStaffVisible(BOOL bNewValue);
	BOOL SaveAs(LPCTSTR PathName);
	LPDISPATCH FindObject(LPDISPATCH Obj, LPDISPATCH SourcePart);
};
/////////////////////////////////////////////////////////////////////////////
// IModelObject wrapper class

class IModelObject : public COleDispatchDriver
{
public:
	IModelObject() {}		// Calls COleDispatchDriver default constructor
	IModelObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelObject(const IModelObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
};
/////////////////////////////////////////////////////////////////////////////
// IFeature7 wrapper class

class IFeature7 : public COleDispatchDriver
{
public:
	IFeature7() {}		// Calls COleDispatchDriver default constructor
	IFeature7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFeature7(const IFeature7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	long GetUpdateStamp();
	LPDISPATCH GetOwnerFeature();
	BOOL GetValid();
	void SetExcluded(BOOL bNewValue);
	BOOL GetExcluded();
	VARIANT GetModelObjects(const VARIANT& ObjType);
	long GetFeatureType();
	BOOL Delete();
	VARIANT GetSubFeatures(long TreeType, BOOL Through, BOOL LibObject);
	VARIANT GetResultBodies();
	VARIANT GetVariables(BOOL ExternalOnly, BOOL InSource);
	LPDISPATCH GetVariable(BOOL External, BOOL InSource, const VARIANT& Index);
	long GetVariablesCount(BOOL External, BOOL InSource);
};
/////////////////////////////////////////////////////////////////////////////
// IParts7 wrapper class

class IParts7 : public COleDispatchDriver
{
public:
	IParts7() {}		// Calls COleDispatchDriver default constructor
	IParts7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IParts7(const IParts7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetPart(const VARIANT& Index);
	LPDISPATCH AddFromFile(LPCTSTR FileName, BOOL ExternalFile, BOOL Redraw);
	LPDISPATCH Add(LPCTSTR FileName, LPDISPATCH Plane);
};
/////////////////////////////////////////////////////////////////////////////
// IModelObjects wrapper class

class IModelObjects : public COleDispatchDriver
{
public:
	IModelObjects() {}		// Calls COleDispatchDriver default constructor
	IModelObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelObjects(const IModelObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// IVariableTable wrapper class

class IVariableTable : public COleDispatchDriver
{
public:
	IVariableTable() {}		// Calls COleDispatchDriver default constructor
	IVariableTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVariableTable(const IVariableTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetRowsCount();
	long GetColumnsCount();
	CString GetVarName(long Column);
	void SetVarName(long Column, LPCTSTR lpszNewValue);
	VARIANT GetVarNames();
	void SetVarNames(const VARIANT& newValue);
	CString GetComment(long Val);
	void SetComment(long Val, LPCTSTR lpszNewValue);
	VARIANT GetTableRow(const VARIANT& Index);
	void SetTableRow(const VARIANT& Index, const VARIANT& newValue);
	double GetCell(long RowIndexVal, long ColIndex);
	void SetCell(long RowIndexVal, long ColIndex, double newValue);
	BOOL ApplyVars(const VARIANT& Index);
	long GetVisualTable(long WinVal, BOOL Select);
	long AddColumn(LPCTSTR Val);
	BOOL DeleteColumn(const VARIANT& ColVal);
	long AddRow(LPCTSTR Val);
	BOOL DeleteRow(const VARIANT& RowVal);
	BOOL Clear();
	long FindColumnIndex(LPCTSTR Val);
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCoordinateSystem wrapper class

class ILocalCoordinateSystem : public COleDispatchDriver
{
public:
	ILocalCoordinateSystem() {}		// Calls COleDispatchDriver default constructor
	ILocalCoordinateSystem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCoordinateSystem(const ILocalCoordinateSystem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetZ(double newValue);
	double GetZ();
	BOOL SetAssociationObject(LPDISPATCH NewVal);
	LPDISPATCH GetAssociationObject();
	void SetSymbol(long nNewValue);
	long GetSymbol();
	void SetParameterType(long nNewValue);
	long GetParameterType();
	LPDISPATCH GetParameters();
	BOOL SetDisplacementByAxis(long Axis, double NewVal);
	void SetOrientationType(long nNewValue);
	long GetOrientationType();
	BOOL ReadFromFile(LPCTSTR FileName);
	BOOL WriteToFile(LPCTSTR FileName);
	BOOL SetStartingOrientation();
	BOOL GetVector(long Axis, double* X, double* Y, double* Z);
	LPDISPATCH GetLocalCSParameters();
	void SetCurrent(BOOL bNewValue);
	BOOL GetCurrent();
	LPDISPATCH GetDefaultObject(long Val);
	BOOL InitByMatrix3D(const VARIANT& mtr);
	LPDISPATCH GetVector3D(long Axis);
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3D wrapper class

class IPoint3D : public COleDispatchDriver
{
public:
	IPoint3D() {}		// Calls COleDispatchDriver default constructor
	IPoint3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3D(const IPoint3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetZ(double newValue);
	double GetZ();
	BOOL SetAssociationObject(LPDISPATCH NewVal);
	LPDISPATCH GetAssociationObject();
	void SetSymbol(long nNewValue);
	long GetSymbol();
	void SetParameterType(long nNewValue);
	long GetParameterType();
	LPDISPATCH GetParameters();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3D wrapper class

class IVector3D : public COleDispatchDriver
{
public:
	IVector3D() {}		// Calls COleDispatchDriver default constructor
	IVector3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3D(const IVector3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetParametersType(long nNewValue);
	long GetParametersType();
	LPDISPATCH GetParameters();
};
/////////////////////////////////////////////////////////////////////////////
// ISelectionManager wrapper class

class ISelectionManager : public COleDispatchDriver
{
public:
	ISelectionManager() {}		// Calls COleDispatchDriver default constructor
	ISelectionManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISelectionManager(const ISelectionManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL Select(const VARIANT& Objects);
	BOOL Unselect(const VARIANT& Objects);
	BOOL UnselectAll();
	BOOL IsSelected(LPDISPATCH Object);
	VARIANT GetSelectedObjects();
};
/////////////////////////////////////////////////////////////////////////////
// IChooseManager wrapper class

class IChooseManager : public COleDispatchDriver
{
public:
	IChooseManager() {}		// Calls COleDispatchDriver default constructor
	IChooseManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IChooseManager(const IChooseManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL Choose(const VARIANT& Objects);
	BOOL Unchoose(const VARIANT& Objects);
	BOOL UnchooseAll();
	BOOL IsChoosen(LPDISPATCH Object);
	VARIANT GetChoosenObjects();
	long GetCurrentManagerType();
	void SetCurrentManagerType(long nNewValue);
	long GetManagerIndex(LPDISPATCH Object);
};
/////////////////////////////////////////////////////////////////////////////
// IAttribute wrapper class

class IAttribute : public COleDispatchDriver
{
public:
	IAttribute() {}		// Calls COleDispatchDriver default constructor
	IAttribute(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttribute(const IAttribute& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetObjects(const VARIANT& newValue);
	VARIANT GetObjects();
	VARIANT GetValue(long RowNumb, long ColumnNumb);
	BOOL SetValue(LPCTSTR Password, long RowNumb, long ColumnNumb, const VARIANT& Value);
	VARIANT GetValues();
	BOOL SetValues(LPCTSTR Password, const VARIANT& Values);
	VARIANT GetFlagVisible();
	BOOL SetFlagVisible(LPCTSTR Password, const VARIANT& Values);
	VARIANT GetColumnKey();
	BOOL SetColumnKey(LPCTSTR Password, const VARIANT& Keys);
	BOOL SetPassword(LPCTSTR OldPassword, LPCTSTR NewPassword);
	BOOL AddRow(LPCTSTR Password, long RowNumb);
	BOOL DeleteRow(LPCTSTR Password, long RowNumb);
	BOOL GetKeysInfo(long* Key1, long* Key2, long* Key3, long* Key4, double* Numb);
	BOOL SetKeysInfo(LPCTSTR Password, long Key1, long Key2, long Key3, long Key4);
	LPDISPATCH GetAttributeType();
	long GetRowsCount();
	long GetColumnsCount();
	BOOL Delete(LPCTSTR Password, const VARIANT& Objects);
	BOOL ViewEdit(long Parent, LPCTSTR Password, BOOL ReadOnly);
	VARIANT GetRecordFlagVisible(long ColumnNumb);
	BOOL SetRecordFlagVisible(LPCTSTR Password, long ColumnNumb, const VARIANT& Values);
};
/////////////////////////////////////////////////////////////////////////////
// IAttributeType wrapper class

class IAttributeType : public COleDispatchDriver
{
public:
	IAttributeType() {}		// Calls COleDispatchDriver default constructor
	IAttributeType(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttributeType(const IAttributeType& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetTypeName(LPCTSTR lpszNewValue);
	CString GetTypeName();
	void SetAttrType(long nNewValue);
	long GetAttrType();
	BOOL GetKeysInfo(long* Key1, long* Key2, long* Key3, long* Key4);
	BOOL SetKeysInfo(long Key1, long Key2, long Key3, long Key4);
	double GetUniqueNumb();
	BOOL SetPassword(LPCTSTR OldPassword, LPCTSTR NewPassword);
	LPDISPATCH GetColumnInfo(const VARIANT& Index);
	LPDISPATCH AddColumn(long Index, long Type, LPCTSTR Name);
	BOOL Update(LPCTSTR Password);
	BOOL Delete(LPCTSTR Password);
	BOOL ViewEdit(long Parent, LPCTSTR Password, BOOL ReadOnly);
	void SetRowsCount(long nNewValue);
	long GetRowsCount();
	CString GetFileName();
	long GetColumnsCount();
};
/////////////////////////////////////////////////////////////////////////////
// IColumnInfo wrapper class

class IColumnInfo : public COleDispatchDriver
{
public:
	IColumnInfo() {}		// Calls COleDispatchDriver default constructor
	IColumnInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IColumnInfo(const IColumnInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	void SetColType(long nNewValue);
	long GetColType();
	void SetKey(long nNewValue);
	long GetKey();
	void SetDefValue(const VARIANT& newValue);
	VARIANT GetDefValue();
	void SetListValue(BOOL bNewValue);
	BOOL GetListValue();
	void SetSortListValue(BOOL bNewValue);
	BOOL GetSortListValue();
	void SetRange(const VARIANT& newValue);
	VARIANT GetRange();
	LPDISPATCH GetRecordColumnInfo(const VARIANT& Index);
	LPDISPATCH AddRecordColumn(long Index, long Type, LPCTSTR Name);
	BOOL Delete();
	long GetRecordColumnsCount();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingObject1 wrapper class

class IDrawingObject1 : public COleDispatchDriver
{
public:
	IDrawingObject1() {}		// Calls COleDispatchDriver default constructor
	IDrawingObject1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingObject1(const IDrawingObject1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetConstraints();
	LPDISPATCH NewConstraint();
	BOOL Associate();
	BOOL DeleteConstraints();
	BOOL GetTransparentBackground();
	void SetTransparentBackground(BOOL bNewValue);
	BOOL GetAutoTransparentBackground();
	void SetAutoTransparentBackground(BOOL bNewValue);
	BOOL GetIsGeometryObject();
	BOOL GetIsAnnotativeObject();
	BOOL GetIsCurve();
	CString GetHyperLinkParam(long* Type, LPDISPATCH* LinkObject, long* Level);
	BOOL DeleteHyperLink();
};
/////////////////////////////////////////////////////////////////////////////
// IParametriticConstraint wrapper class

class IParametriticConstraint : public COleDispatchDriver
{
public:
	IParametriticConstraint() {}		// Calls COleDispatchDriver default constructor
	IParametriticConstraint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IParametriticConstraint(const IParametriticConstraint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetConstraintType(long nNewValue);
	long GetConstraintType();
	void SetIndex(long nNewValue);
	long GetIndex();
	void SetPartner(const VARIANT& newValue);
	VARIANT GetPartner();
	void SetPartnerIndex(long nNewValue);
	long GetPartnerIndex();
	void SetValue(double newValue);
	double GetValue();
	void SetExpression(LPCTSTR lpszNewValue);
	CString GetExpression();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetComment();
	void SetVariable(LPCTSTR lpszNewValue);
	CString GetVariable();
	void SetDegrees(long nNewValue);
	long GetDegrees();
	void SetMinutes(long nNewValue);
	long GetMinutes();
	void SetSeconds(double newValue);
	double GetSeconds();
	BOOL Delete();
	BOOL Create();
	BOOL GetValid();
	LPDISPATCH GetAxis();
	void SetAxis(LPDISPATCH newValue);
	void SetBisectorVariant(long nNewValue);
	long GetBisectorVariant();
};
/////////////////////////////////////////////////////////////////////////////
// IKompasDocument1 wrapper class

class IKompasDocument1 : public COleDispatchDriver
{
public:
	IKompasDocument1() {}		// Calls COleDispatchDriver default constructor
	IKompasDocument1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasDocument1(const IKompasDocument1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Delete(const VARIANT& Objects);
	VARIANT GetAttributes(long Key1, long Key2, long Key3, long Key4, double Numb, const VARIANT& Objects);
	VARIANT GetObjectsByAttr(long Key1, long Key2, long Key3, long Key4, double Numb, const VARIANT& ObjectType);
	LPDISPATCH CreateAttr(double AttrID, LPCTSTR Libname, const VARIANT& Objects);
	BOOL ViewEditAttr(long HWnd, const VARIANT& Objects);
	LPDISPATCH GetInterface(long Type);
	VARIANT GetExternalFilesNames(BOOL allFiles);
	BOOL SaveAsEx(LPCTSTR PathName, long saveMode);
	double GetCreationDate();
	double GetLastChangeDate();
};
/////////////////////////////////////////////////////////////////////////////
// IKompasDocument2D1 wrapper class

class IKompasDocument2D1 : public COleDispatchDriver
{
public:
	IKompasDocument2D1() {}		// Calls COleDispatchDriver default constructor
	IKompasDocument2D1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasDocument2D1(const IKompasDocument2D1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetEditMacroObject();
	LPDISPATCH GetDrawingGroups();
	LPDISPATCH GetNamedGroups();
	LPDISPATCH GetCurrentGroup();
	LPDISPATCH GetSelectionManager();
	LPDISPATCH GetChooseManager();
	VARIANT CopyObjects(const VARIANT& Objects, LPDISPATCH Params);
	VARIANT GetVariables(BOOL ExternalOnly);
	LPDISPATCH GetVariable(BOOL External, const VARIANT& Index);
	long GetVariablesCount(BOOL External);
	BOOL UpdateVariables();
	LPDISPATCH GetVariableTable();
	BOOL IsVariableNameValid(LPCTSTR Name);
	LPDISPATCH AddVariable(LPCTSTR Name, double Value, LPCTSTR Note);
	BOOL RebuildDocument();
	BOOL CreateHyperLink(const VARIANT& Objects, long Type, LPCTSTR Text, LPDISPATCH LinkObject, long Level);
	VARIANT GetHyperLinkObjects(long Type, LPDISPATCH LinkObject, long Level, LPCTSTR Text);
	BOOL DeleteHyperLinks(const VARIANT& Objects);
	BOOL GetEditMacroVisibleRegime();
};
/////////////////////////////////////////////////////////////////////////////
// IMacroObject wrapper class

class IMacroObject : public COleDispatchDriver
{
public:
	IMacroObject() {}		// Calls COleDispatchDriver default constructor
	IMacroObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMacroObject(const IMacroObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetLibraryFileName(LPCTSTR lpszNewValue);
	CString GetLibraryFileName();
	void SetLibraryName(LPCTSTR lpszNewValue);
	CString GetLibraryName();
	void SetCommand(long nNewValue);
	long GetCommand();
	void SetDoubleClickEditable(BOOL bNewValue);
	BOOL GetDoubleClickEditable();
	void SetHotPointsEditable(BOOL bNewValue);
	BOOL GetHotPointsEditable();
	void SetExternalEditable(BOOL bNewValue);
	BOOL GetExternalEditable();
	void SetUserParams(const VARIANT& newValue);
	VARIANT GetUserParams();
	BOOL AddObjects(const VARIANT& Objects);
	BOOL GetPlacement(double* X, double* Y, double* Angle, BOOL* MirrorSymmetry);
	BOOL SetPlacement(double X, double Y, double Angle, BOOL* MirrorSymmetry, BOOL Relative);
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	LPDISPATCH GetAttachedLeaders();
	BOOL DeleteAttachedLeaders();
	BOOL AddDefaultHotPoint(double X, double Y);
	BOOL DeleteDefaultHotPoint();
};
/////////////////////////////////////////////////////////////////////////////
// ILeaders wrapper class

class ILeaders : public COleDispatchDriver
{
public:
	ILeaders() {}		// Calls COleDispatchDriver default constructor
	ILeaders(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILeaders(const ILeaders& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLeader(const VARIANT& Index);
	LPDISPATCH Add(long DimType);
};
/////////////////////////////////////////////////////////////////////////////
// IBaseLeader wrapper class

class IBaseLeader : public COleDispatchDriver
{
public:
	IBaseLeader() {}		// Calls COleDispatchDriver default constructor
	IBaseLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBaseLeader(const IBaseLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	long GetArrowType();
	void SetArrowType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingGroups wrapper class

class IDrawingGroups : public COleDispatchDriver
{
public:
	IDrawingGroups() {}		// Calls COleDispatchDriver default constructor
	IDrawingGroups(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingGroups(const IDrawingGroups& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(BOOL Temp, LPCTSTR Name);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingGroup wrapper class

class IDrawingGroup : public COleDispatchDriver
{
public:
	IDrawingGroup() {}		// Calls COleDispatchDriver default constructor
	IDrawingGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingGroup(const IDrawingGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	VARIANT GetObjects(const VARIANT& Type);
	BOOL AddObjects(const VARIANT& Objects);
	BOOL DetachObjects(const VARIANT& Objects, BOOL DeleteTmp);
	BOOL Clear(BOOL DeleteTmp);
	BOOL Store();
	long GetObjectsCount();
	BOOL ExistObject(LPDISPATCH Object);
	BOOL Delete();
	BOOL AddRegion(long RegionType, double XMin, double YMin, double XMax, double YMax);
	BOOL ReadFragment(LPCTSTR FileName, BOOL CurentLayer, double XBase, double YBase, double Scale, double Angle, BOOL ScaleProjLinesSize);
	BOOL WriteFragment(LPCTSTR FileName, LPCTSTR Comment, double XBase, double YBase);
	BOOL WriteToClip(BOOL AttrCopy, BOOL SpcObjCopy);
	BOOL ReadFromClip(BOOL AttrCopy, BOOL SpcObjCopy);
	BOOL Draw(long HWnd);
	BOOL Open();
	BOOL Close();
	BOOL GetCurrent();
};
/////////////////////////////////////////////////////////////////////////////
// ICopyObjectParam wrapper class

class ICopyObjectParam : public COleDispatchDriver
{
public:
	ICopyObjectParam() {}		// Calls COleDispatchDriver default constructor
	ICopyObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICopyObjectParam(const ICopyObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetXOld(double newValue);
	double GetXOld();
	void SetYOld(double newValue);
	double GetYOld();
	void SetXNew(double newValue);
	double GetXNew();
	void SetYNew(double newValue);
	double GetYNew();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	void SetAttributeCopy(BOOL bNewValue);
	BOOL GetAttributeCopy();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	void SetSpecificationObjectCopy(BOOL bNewValue);
	BOOL GetSpecificationObjectCopy();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingDocument wrapper class

class IDrawingDocument : public COleDispatchDriver
{
public:
	IDrawingDocument() {}		// Calls COleDispatchDriver default constructor
	IDrawingDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingDocument(const IDrawingDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetViewsAndLayersManager();
	LPDISPATCH GetDrawingObjectNotifyResult();
	LPDISPATCH GetChangeListDescriptions();
	LPDISPATCH GetSpecRough();
	LPDISPATCH GetTechnicalDemand();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecRough wrapper class

class ISpecRough : public COleDispatchDriver
{
public:
	ISpecRough() {}		// Calls COleDispatchDriver default constructor
	ISpecRough(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecRough(const ISpecRough& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	void SetAutoPlacement(BOOL bNewValue);
	BOOL GetAutoPlacement();
	long GetSignType();
	void SetSignType(long nNewValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	double GetDistance();
	void SetDistance(double newValue);
	BOOL GetAddSign();
	void SetAddSign(BOOL bNewValue);
	BOOL Update();
	BOOL Delete();
	BOOL GetIsCreated();
};
/////////////////////////////////////////////////////////////////////////////
// ITechnicalDemand wrapper class

class ITechnicalDemand : public COleDispatchDriver
{
public:
	ITechnicalDemand() {}		// Calls COleDispatchDriver default constructor
	ITechnicalDemand(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITechnicalDemand(const ITechnicalDemand& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetText();
	VARIANT GetBlocksGabarits();
	void SetBlocksGabarits(const VARIANT& newValue);
	void SetAutoPlacement(BOOL bNewValue);
	BOOL GetAutoPlacement();
	BOOL Update();
	BOOL Delete();
	BOOL GetIsCreated();
	VARIANT GetBlocksStartLineNumbers();
};
/////////////////////////////////////////////////////////////////////////////
// IFragmentDocument wrapper class

class IFragmentDocument : public COleDispatchDriver
{
public:
	IFragmentDocument() {}		// Calls COleDispatchDriver default constructor
	IFragmentDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFragmentDocument(const IFragmentDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetViewsAndLayersManager();
	LPDISPATCH GetDrawingObjectNotifyResult();
	BOOL GetIsSketch();
};
/////////////////////////////////////////////////////////////////////////////
// ISpecificationDocument wrapper class

class ISpecificationDocument : public COleDispatchDriver
{
public:
	ISpecificationDocument() {}		// Calls COleDispatchDriver default constructor
	ISpecificationDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpecificationDocument(const ISpecificationDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetAttachedDocuments();
};
/////////////////////////////////////////////////////////////////////////////
// ITextDocument wrapper class

class ITextDocument : public COleDispatchDriver
{
public:
	ITextDocument() {}		// Calls COleDispatchDriver default constructor
	ITextDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextDocument(const ITextDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
};
/////////////////////////////////////////////////////////////////////////////
// IPartDocument wrapper class

class IPartDocument : public COleDispatchDriver
{
public:
	IPartDocument() {}		// Calls COleDispatchDriver default constructor
	IPartDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPartDocument(const IPartDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetTopPart();
	void SetHideAllPlanes(BOOL bNewValue);
	BOOL GetHideAllPlanes();
	void SetHideAllAxis(BOOL bNewValue);
	BOOL GetHideAllAxis();
	void SetHideAllSketches(BOOL bNewValue);
	BOOL GetHideAllSketches();
	void SetHideAllPlaces(BOOL bNewValue);
	BOOL GetHideAllPlaces();
	void SetHideAllSurfaces(BOOL bNewValue);
	BOOL GetHideAllSurfaces();
	void SetHideAllThreads(BOOL bNewValue);
	BOOL GetHideAllThreads();
	void SetHideAllCurves(BOOL bNewValue);
	BOOL GetHideAllCurves();
	void SetHideAllControlPoints(BOOL bNewValue);
	BOOL GetHideAllControlPoints();
	void SetPerspective(BOOL bNewValue);
	BOOL GetPerspective();
	void SetDrawMode(long nNewValue);
	long GetDrawMode();
	void SetShadedWireframe(BOOL bNewValue);
	BOOL GetShadedWireframe();
	void SetCreateObjectsInCurrentLocalCS(BOOL bNewValue);
	BOOL GetCreateObjectsInCurrentLocalCS();
	void SetHideAllDimensions(BOOL bNewValue);
	BOOL GetHideAllDimensions();
	void SetHideAllDesignations(BOOL bNewValue);
	BOOL GetHideAllDesignations();
	void SetHideAllAuxiliaryGeom(BOOL bNewValue);
	BOOL GetHideAllAuxiliaryGeom();
	void SetHideInComponentsMode(BOOL bNewValue);
	BOOL GetHideInComponentsMode();
	LPDISPATCH GetSelectionManager();
	LPDISPATCH GetChooseManager();
	LPDISPATCH CreateAttrEx(double AttrID, LPCTSTR Libname, const VARIANT& Objects, LPDISPATCH SourcePart);
	VARIANT GetAttributesEx(long Key1, long Key2, long Key3, long Key4, double Numb, const VARIANT& Objects, LPDISPATCH SourcePart);
	BOOL RebuildDocument();
	void SetEnableUndo(BOOL bNewValue);
	BOOL GetEnableUndo();
	void SetUndoContainer(BOOL bNewValue);
	BOOL GetUndoContainer();
};
/////////////////////////////////////////////////////////////////////////////
// IAssemblyDocument wrapper class

class IAssemblyDocument : public COleDispatchDriver
{
public:
	IAssemblyDocument() {}		// Calls COleDispatchDriver default constructor
	IAssemblyDocument(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAssemblyDocument(const IAssemblyDocument& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDocumentType();
	LPDISPATCH GetDocumentFrames();
	BOOL Close(long closeOptions);
	void Save();
	void SaveAs(LPCTSTR PathName);
	CString GetName();
	CString GetPathName();
	CString GetPath();
	BOOL GetVisible();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetChanged();
	LPDISPATCH GetDocumentSettings();
	LPDISPATCH GetSpecificationDescriptions();
	LPDISPATCH GetLayoutSheets();
	LPDISPATCH GetUserDataStoragesMng();
	LPDISPATCH GetTopPart();
	void SetHideAllPlanes(BOOL bNewValue);
	BOOL GetHideAllPlanes();
	void SetHideAllAxis(BOOL bNewValue);
	BOOL GetHideAllAxis();
	void SetHideAllSketches(BOOL bNewValue);
	BOOL GetHideAllSketches();
	void SetHideAllPlaces(BOOL bNewValue);
	BOOL GetHideAllPlaces();
	void SetHideAllSurfaces(BOOL bNewValue);
	BOOL GetHideAllSurfaces();
	void SetHideAllThreads(BOOL bNewValue);
	BOOL GetHideAllThreads();
	void SetHideAllCurves(BOOL bNewValue);
	BOOL GetHideAllCurves();
	void SetHideAllControlPoints(BOOL bNewValue);
	BOOL GetHideAllControlPoints();
	void SetPerspective(BOOL bNewValue);
	BOOL GetPerspective();
	void SetDrawMode(long nNewValue);
	long GetDrawMode();
	void SetShadedWireframe(BOOL bNewValue);
	BOOL GetShadedWireframe();
	void SetCreateObjectsInCurrentLocalCS(BOOL bNewValue);
	BOOL GetCreateObjectsInCurrentLocalCS();
	void SetHideAllDimensions(BOOL bNewValue);
	BOOL GetHideAllDimensions();
	void SetHideAllDesignations(BOOL bNewValue);
	BOOL GetHideAllDesignations();
	void SetHideAllAuxiliaryGeom(BOOL bNewValue);
	BOOL GetHideAllAuxiliaryGeom();
	void SetHideInComponentsMode(BOOL bNewValue);
	BOOL GetHideInComponentsMode();
	LPDISPATCH GetSelectionManager();
	LPDISPATCH GetChooseManager();
	LPDISPATCH CreateAttrEx(double AttrID, LPCTSTR Libname, const VARIANT& Objects, LPDISPATCH SourcePart);
	VARIANT GetAttributesEx(long Key1, long Key2, long Key3, long Key4, double Numb, const VARIANT& Objects, LPDISPATCH SourcePart);
	BOOL RebuildDocument();
	void SetEnableUndo(BOOL bNewValue);
	BOOL GetEnableUndo();
	void SetUndoContainer(BOOL bNewValue);
	BOOL GetUndoContainer();
};
/////////////////////////////////////////////////////////////////////////////
// IDimensionText wrapper class

class IDimensionText : public COleDispatchDriver
{
public:
	IDimensionText() {}		// Calls COleDispatchDriver default constructor
	IDimensionText(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDimensionText(const IDimensionText& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetSign();
	void SetSign(long nNewValue);
	CString GetSignFont();
	void SetSignFont(LPCTSTR lpszNewValue);
	double GetNominalValue();
	void SetNominalValue(double newValue);
	BOOL GetAutoNominalValue();
	void SetAutoNominalValue(BOOL bNewValue);
	BOOL GetToleranceOn();
	void SetToleranceOn(BOOL bNewValue);
	BOOL GetDeviationOn();
	void SetDeviationOn(BOOL bNewValue);
	long GetDeviationType();
	void SetDeviationType(long nNewValue);
	BOOL GetRectangle();
	void SetRectangle(BOOL bNewValue);
	BOOL GetUnderline();
	void SetUnderline(BOOL bNewValue);
	long GetBrackets();
	void SetBrackets(long nNewValue);
	long GetTextAlign();
	void SetTextAlign(long nNewValue);
	LPDISPATCH GetPrefix();
	LPDISPATCH GetNominalText();
	CString GetTolerance();
	void SetTolerance(LPCTSTR lpszNewValue);
	LPDISPATCH GetHighDeviation();
	LPDISPATCH GetLowDeviation();
	LPDISPATCH GetUnit();
	LPDISPATCH GetSuffix();
	LPDISPATCH GetTextUnder();
	long GetTextFormat();
	void SetTextFormat(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDimensionParams wrapper class

class IDimensionParams : public COleDispatchDriver
{
public:
	IDimensionParams() {}		// Calls COleDispatchDriver default constructor
	IDimensionParams(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDimensionParams(const IDimensionParams& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetRemoteLine1();
	void SetRemoteLine1(BOOL bNewValue);
	BOOL GetRemoteLine2();
	void SetRemoteLine2(BOOL bNewValue);
	long GetArrowType1();
	void SetArrowType1(long nNewValue);
	long GetArrowType2();
	void SetArrowType2(long nNewValue);
	long GetArrowPos();
	void SetArrowPos(long nNewValue);
	long GetTextPos();
	void SetTextPos(long nNewValue);
	long GetTextType();
	void SetTextType(long nNewValue);
	long GetTextOnLine();
	void SetTextOnLine(long nNewValue);
	long GetTextBase();
	void SetTextBase(long nNewValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	double GetShelfAngle();
	void SetShelfAngle(double newValue);
	double GetShelfLength();
	void SetShelfLength(double newValue);
	BOOL GetGap();
	void SetGap(BOOL bNewValue);
	long GetGapValue();
	void SetGapValue(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILoadCombination wrapper class

class ILoadCombination : public COleDispatchDriver
{
public:
	ILoadCombination() {}		// Calls COleDispatchDriver default constructor
	ILoadCombination(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILoadCombination(const ILoadCombination& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetCompletelyLoaded();
	VARIANT GetLoadCombinations();
	long GetCurrentIndex();
	long Create(LPCTSTR CombinationName);
	BOOL Delete(const VARIANT& LoadCombinationIndex);
	BOOL Apply(const VARIANT& LoadCombinationIndex);
};
/////////////////////////////////////////////////////////////////////////////
// IFrameTreesManager wrapper class

class IFrameTreesManager : public COleDispatchDriver
{
public:
	IFrameTreesManager() {}		// Calls COleDispatchDriver default constructor
	IFrameTreesManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFrameTreesManager(const IFrameTreesManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH AddTab(LPCTSTR TabCaption, LPCTSTR OcxClassID);
	BOOL RemoveTab(LPDISPATCH Ocx);
	LPDISPATCH GetActiveTab();
	void SetActiveTab(LPDISPATCH newValue);
	BOOL GetTabsVisible();
	void SetTabsVisible(BOOL bNewValue);
	CString GetTreeCaption(LPDISPATCH Ocx);
	void SetTreeCaption(LPDISPATCH Ocx, LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IAttrTypeMng wrapper class

class IAttrTypeMng : public COleDispatchDriver
{
public:
	IAttrTypeMng() {}		// Calls COleDispatchDriver default constructor
	IAttrTypeMng(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttrTypeMng(const IAttrTypeMng& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH CreateAttrType(const VARIANT& Libname);
	LPDISPATCH GetAttrType(double AttrID, const VARIANT& Libname);
	LPDISPATCH ChoiceAttrTypes(long HWnd, const VARIANT& Libname);
	VARIANT GetAttrTypes(const VARIANT& Libname);
};
/////////////////////////////////////////////////////////////////////////////
// IPrintJob_OutputParameters wrapper class

class IPrintJob_OutputParameters : public COleDispatchDriver
{
public:
	IPrintJob_OutputParameters() {}		// Calls COleDispatchDriver default constructor
	IPrintJob_OutputParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPrintJob_OutputParameters(const IPrintJob_OutputParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetNumberOfCopies(long nNewValue);
	long GetNumberOfCopies();
	void SetCollateCopies(BOOL bNewValue);
	BOOL GetCollateCopies();
	void SetPlotToFile(BOOL bNewValue);
	BOOL GetPlotToFile();
	void SetColor(long nNewValue);
	long GetColor();
	void SetOnlyThinLines(BOOL bNewValue);
	BOOL GetOnlyThinLines();
	void SetAlternativeFillingOutput(BOOL bNewValue);
	BOOL GetAlternativeFillingOutput();
	void SetAccuracyModelOutput(long nNewValue);
	long GetAccuracyModelOutput();
	void SetPageOutputOrder(long nNewValue);
	long GetPageOutputOrder();
	void SetDefaultScale(double newValue);
	double GetDefaultScale();
	void SetAutoScale(BOOL bNewValue);
	BOOL GetAutoScale();
	void SetUseCatchSpacing(BOOL bNewValue);
	BOOL GetUseCatchSpacing();
	void SetCatchSpacing(long nNewValue);
	long GetCatchSpacing();
	void SetUseHooking(BOOL bNewValue);
	BOOL GetUseHooking();
	void SetHooking(long nNewValue);
	long GetHooking();
};
/////////////////////////////////////////////////////////////////////////////
// IProperty wrapper class

class IProperty : public COleDispatchDriver
{
public:
	IProperty() {}		// Calls COleDispatchDriver default constructor
	IProperty(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProperty(const IProperty& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	double GetId();
	void SetDataType(long nNewValue);
	long GetDataType();
	VARIANT GetMinValue();
	VARIANT GetMaxValue();
	BOOL SetValueRange(const VARIANT& MinVal, const VARIANT& MaxVal);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	long GetSignificantDigitsCount();
	void SetSignificantDigitsCount(long nNewValue);
	CString GetSourceName();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetComment();
	void SetPropertyTypeId(LPCTSTR lpszNewValue);
	CString GetPropertyTypeId();
	void SetUnitId(LPCTSTR lpszNewValue);
	CString GetUnitId();
	BOOL ViewEdit(long Parent, BOOL ReadOnly);
	BOOL Delete();
	BOOL Update();
	BOOL GetUseListVal();
	void SetUseListVal(BOOL bNewValue);
	VARIANT GetListVal();
	void SetListVal(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyMng wrapper class

class IPropertyMng : public COleDispatchDriver
{
public:
	IPropertyMng() {}		// Calls COleDispatchDriver default constructor
	IPropertyMng(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyMng(const IPropertyMng& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetPropertyCount(const VARIANT& Libname);
	LPDISPATCH GetProperty_(const VARIANT& Libname, const VARIANT& Index);
	VARIANT GetProperties(const VARIANT& Libname);
	LPDISPATCH AddProperty(const VARIANT& Libname, const VARIANT& Val);
	BOOL RemoveProperty(const VARIANT& Libname, const VARIANT& Val);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyKeeper wrapper class

class IPropertyKeeper : public COleDispatchDriver
{
public:
	IPropertyKeeper() {}		// Calls COleDispatchDriver default constructor
	IPropertyKeeper(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyKeeper(const IPropertyKeeper& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPropertyValue(LPDISPATCH Property_, VARIANT* Value, BOOL BaseUnit, BOOL* FromSource);
	BOOL SetPropertyValue(LPDISPATCH Property_, const VARIANT& Value, BOOL BaseUnit);
	LPDISPATCH GetPropertyAdditionalStorage(LPDISPATCH Property_, BOOL Create, BOOL* FromSource);
};
/////////////////////////////////////////////////////////////////////////////
// IReportProcess wrapper class

class IReportProcess : public COleDispatchDriver
{
public:
	IReportProcess() {}		// Calls COleDispatchDriver default constructor
	IReportProcess(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IReportProcess(const IReportProcess& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetStylesCount();
	void SetActiveStyleIndex(const VARIANT& newValue);
	VARIANT GetActiveStyleIndex();
	LPDISPATCH GetReportFilter();
	void SetReportFilterUse(BOOL bNewValue);
	BOOL GetReportFilterUse();
};
/////////////////////////////////////////////////////////////////////////////
// IReportFilter wrapper class

class IReportFilter : public COleDispatchDriver
{
public:
	IReportFilter() {}		// Calls COleDispatchDriver default constructor
	IReportFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IReportFilter(const IReportFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetConditionCount();
	BOOL GetCondition(long Index, VARIANT* UniqId, long* Type, VARIANT* Val);
	BOOL SetCondition(long Index, const VARIANT& UniqId, long Type, const VARIANT& Val);
	BOOL RemoveCondition(long Index);
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// IPrintJob_PrinterSettings wrapper class

class IPrintJob_PrinterSettings : public COleDispatchDriver
{
public:
	IPrintJob_PrinterSettings() {}		// Calls COleDispatchDriver default constructor
	IPrintJob_PrinterSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPrintJob_PrinterSettings(const IPrintJob_PrinterSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL InitPrinterSettings(LPCTSTR DeviceName, BOOL IsPortraitPage, long PaperSize, long PaperLength, long PaperWidth, long PaperSource);
	CString GetDeviceName();
	CString GetPort();
	BOOL LoadPrinterConfig(LPCTSTR FileName);
	BOOL SavePrinterConfig(LPCTSTR FileName);
	void SetIsPortraitPage(BOOL bNewValue);
	BOOL GetIsPortraitPage();
	void SetPaperSize(long nNewValue);
	long GetPaperSize();
	void SetPaperSource(long nNewValue);
	long GetPaperSource();
	void SetPaperLength(long nNewValue);
	long GetPaperLength();
	void SetPaperWidth(long nNewValue);
	long GetPaperWidth();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyControl1 wrapper class

class IPropertyControl1 : public COleDispatchDriver
{
public:
	IPropertyControl1() {}		// Calls COleDispatchDriver default constructor
	IPropertyControl1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyControl1(const IPropertyControl1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetPredefineNumber(long nNewValue);
	long GetPredefineNumber();
	void SetUserMenu(long nNewValue);
	long GetUserMenu();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyEdit wrapper class

class IPropertyEdit : public COleDispatchDriver
{
public:
	IPropertyEdit() {}		// Calls COleDispatchDriver default constructor
	IPropertyEdit(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyEdit(const IPropertyEdit& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	VARIANT GetMinValue();
	VARIANT GetMaxValue();
	BOOL SetValueRange(const VARIANT& MinVal, const VARIANT& MaxVal);
	void SetWithCheck(BOOL bNewValue);
	BOOL GetWithCheck();
	void SetCheckState(long nNewValue);
	long GetCheckState();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetWidth(long nNewValue);
	long GetWidth();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertySeparator wrapper class

class IPropertySeparator : public COleDispatchDriver
{
public:
	IPropertySeparator() {}		// Calls COleDispatchDriver default constructor
	IPropertySeparator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertySeparator(const IPropertySeparator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetSeparatorType(long nNewValue);
	long GetSeparatorType();
	BOOL SetImage(const VARIANT& IdBmp, const VARIANT& HInstance);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyList wrapper class

class IPropertyList : public COleDispatchDriver
{
public:
	IPropertyList() {}		// Calls COleDispatchDriver default constructor
	IPropertyList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyList(const IPropertyList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	VARIANT GetMinValue();
	VARIANT GetMaxValue();
	BOOL SetValueRange(const VARIANT& MinVal, const VARIANT& MaxVal);
	void SetWithCheck(BOOL bNewValue);
	BOOL GetWithCheck();
	void SetCheckState(long nNewValue);
	long GetCheckState();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetWidth(long nNewValue);
	long GetWidth();
	void ClearList();
	void Add(const VARIANT& NewVal);
	void SetSort(BOOL bNewValue);
	BOOL GetSort();
	long Find(const VARIANT& Val);
	BOOL SetCurrentByIndex(long Val);
	void SetPrecision(double newValue);
	double GetPrecision();
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyCheckBox wrapper class

class IPropertyCheckBox : public COleDispatchDriver
{
public:
	IPropertyCheckBox() {}		// Calls COleDispatchDriver default constructor
	IPropertyCheckBox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyCheckBox(const IPropertyCheckBox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetCustomBitmaps(const VARIANT& IdUnchecked, const VARIANT& IdChecked, const VARIANT& IdIndeterminate, const VARIANT& HInstance);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyMultiButton wrapper class

class IPropertyMultiButton : public COleDispatchDriver
{
public:
	IPropertyMultiButton() {}		// Calls COleDispatchDriver default constructor
	IPropertyMultiButton(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyMultiButton(const IPropertyMultiButton& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetButtonsType(long nNewValue);
	long GetButtonsType();
	void SetButtonChecked(long BtnID, BOOL bNewValue);
	BOOL GetButtonChecked(long BtnID);
	void SetButtonEnable(long BtnID, BOOL bNewValue);
	BOOL GetButtonEnable(long BtnID);
	void AddButton(long BtnID, const VARIANT& Bmp, long InsertAt);
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
	void SetButtonTips(long BtnID, LPCTSTR lpszNewValue);
	CString GetButtonTips(long BtnID);
	void SetButtonHint(long BtnID, LPCTSTR lpszNewValue);
	CString GetButtonHint(long BtnID);
	void SetNextCommand(BOOL bNewValue);
	BOOL GetNextCommand();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertySlideBox wrapper class

class IPropertySlideBox : public COleDispatchDriver
{
public:
	IPropertySlideBox() {}		// Calls COleDispatchDriver default constructor
	IPropertySlideBox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertySlideBox(const IPropertySlideBox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
	void SetSlideType(long nNewValue);
	long GetSlideType();
	void SetDrawingSlide(const VARIANT& newValue);
	VARIANT GetDrawingSlide();
	void SetWidth(long nNewValue);
	long GetWidth();
	void SetHeight(long nNewValue);
	long GetHeight();
	void SetCheckBoxVisibility(BOOL bNewValue);
	BOOL GetCheckBoxVisibility();
	void UpdateParam();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyUserControl wrapper class

class IPropertyUserControl : public COleDispatchDriver
{
public:
	IPropertyUserControl() {}		// Calls COleDispatchDriver default constructor
	IPropertyUserControl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyUserControl(const IPropertyUserControl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetWidth(long nNewValue);
	long GetWidth();
	void SetHeight(long nNewValue);
	long GetHeight();
	void SetOCXControl(LPCTSTR ProgID);
	void SetFixHeight(BOOL bNewValue);
	BOOL GetFixHeight();
	void SetFixWidth(BOOL bNewValue);
	BOOL GetFixWidth();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyGrid wrapper class

class IPropertyGrid : public COleDispatchDriver
{
public:
	IPropertyGrid() {}		// Calls COleDispatchDriver default constructor
	IPropertyGrid(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyGrid(const IPropertyGrid& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetColumnCount(long nNewValue);
	long GetColumnCount();
	void SetRowCount(long nNewValue);
	long GetRowCount();
	void SetFixedColumnCount(long nNewValue);
	long GetFixedColumnCount();
	void SetFixedRowCount(long nNewValue);
	long GetFixedRowCount();
	void SetColumnWidth(long Index, long nNewValue);
	long GetColumnWidth(long Index);
	void SetRowHeight(long Index, long nNewValue);
	long GetRowHeight(long Index);
	void SetEnableEdit(long NRow, long NCol, BOOL bNewValue);
	BOOL GetEnableEdit(long NRow, long NCol);
	void SetCellText(long NRow, long NCol, LPCTSTR lpszNewValue);
	CString GetCellText(long NRow, long NCol);
	void SetCellFormat(long NRow, long NCol, long nNewValue);
	long GetCellFormat(long NRow, long NCol);
	void SetWidth(long nNewValue);
	long GetWidth();
	void SetHeight(long nNewValue);
	long GetHeight();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetAutoSizeColumns(BOOL bNewValue);
	BOOL GetAutoSizeColumns();
	void UpdateParam();
	void SetCurrentColumn(long nNewValue);
	long GetCurrentColumn();
	void SetCurrentRow(long nNewValue);
	long GetCurrentRow();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyTextButton wrapper class

class IPropertyTextButton : public COleDispatchDriver
{
public:
	IPropertyTextButton() {}		// Calls COleDispatchDriver default constructor
	IPropertyTextButton(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyTextButton(const IPropertyTextButton& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertySpinEdit wrapper class

class IPropertySpinEdit : public COleDispatchDriver
{
public:
	IPropertySpinEdit() {}		// Calls COleDispatchDriver default constructor
	IPropertySpinEdit(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertySpinEdit(const IPropertySpinEdit& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	VARIANT GetMinValue();
	VARIANT GetMaxValue();
	BOOL SetValueRange(const VARIANT& MinVal, const VARIANT& MaxVal);
	void SetWithCheck(BOOL bNewValue);
	BOOL GetWithCheck();
	void SetCheckState(long nNewValue);
	long GetCheckState();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetWidth(long nNewValue);
	long GetWidth();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyFileName wrapper class

class IPropertyFileName : public COleDispatchDriver
{
public:
	IPropertyFileName() {}		// Calls COleDispatchDriver default constructor
	IPropertyFileName(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyFileName(const IPropertyFileName& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetCreateOpenButton(BOOL bNewValue);
	BOOL GetCreateOpenButton();
	void SetBitmap(const VARIANT& newValue);
	void SetExtension(LPCTSTR lpszNewValue);
	CString GetExtension();
	void SetFilter(LPCTSTR lpszNewValue);
	CString GetFilter();
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetReadOnly();
	void SetWidth(long nNewValue);
	long GetWidth();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyColor wrapper class

class IPropertyColor : public COleDispatchDriver
{
public:
	IPropertyColor() {}		// Calls COleDispatchDriver default constructor
	IPropertyColor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyColor(const IPropertyColor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetWidth(long nNewValue);
	long GetWidth();
	void SetEnableDefaultButton(BOOL bNewValue);
	BOOL GetEnableDefaultButton();
	void SetDefaultColor(long nNewValue);
	long GetDefaultColor();
	void SetDefaultButtonName(LPCTSTR lpszNewValue);
	CString GetDefaultButtonName();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyEditList wrapper class

class IPropertyEditList : public COleDispatchDriver
{
public:
	IPropertyEditList() {}		// Calls COleDispatchDriver default constructor
	IPropertyEditList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyEditList(const IPropertyEditList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	long GetListType();
	void SetListType(long nNewValue);
	BOOL GetItemChecked(long Index);
	void SetItemChecked(long Index, BOOL bNewValue);
	BOOL GetMultySelect();
	void SetMultySelect(BOOL bNewValue);
	BOOL GetItemSelected(long Index);
	void SetItemSelected(long Index, BOOL bNewValue);
	BOOL GetSort();
	void SetSort(BOOL bNewValue);
	void ClearList();
	void Add(LPCTSTR NewVal);
	void Delete(const VARIANT& Index);
	long GetItemsCount();
	void SetItemValue(const VARIANT& Index, LPCTSTR lpszNewValue);
	CString GetItemValue(const VARIANT& Index);
	long Find(const VARIANT& Val);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyToolBar wrapper class

class IPropertyToolBar : public COleDispatchDriver
{
public:
	IPropertyToolBar() {}		// Calls COleDispatchDriver default constructor
	IPropertyToolBar(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyToolBar(const IPropertyToolBar& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetButtonChecked(long BtnID, BOOL bNewValue);
	BOOL GetButtonChecked(long BtnID);
	void SetButtonEnable(long BtnID, BOOL bNewValue);
	BOOL GetButtonEnable(long BtnID);
	void AddButton(long BtnID, const VARIANT& Bmp, long InsertAt);
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
	void SetButtonTips(long BtnID, LPCTSTR lpszNewValue);
	CString GetButtonTips(long BtnID);
	void SetButtonHint(long BtnID, LPCTSTR lpszNewValue);
	CString GetButtonHint(long BtnID);
	void SetButtonType(long BtnID, long nNewValue);
	long GetButtonType(long BtnID);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyBmpList wrapper class

class IPropertyBmpList : public COleDispatchDriver
{
public:
	IPropertyBmpList() {}		// Calls COleDispatchDriver default constructor
	IPropertyBmpList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyBmpList(const IPropertyBmpList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void Add(LPCTSTR NewStr, const VARIANT& NewBmp);
	long GetCount();
	void ClearList();
	long Find(LPCTSTR Val);
	void SetCurrentIndex(long nNewValue);
	long GetCurrentIndex();
	void SetResModule(const VARIANT& newValue);
	VARIANT GetResModule();
};
/////////////////////////////////////////////////////////////////////////////
// IProcessInfoWindow wrapper class

class IProcessInfoWindow : public COleDispatchDriver
{
public:
	IProcessInfoWindow() {}		// Calls COleDispatchDriver default constructor
	IProcessInfoWindow(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProcessInfoWindow(const IProcessInfoWindow& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetCreateWindow(BOOL bNewValue);
	BOOL GetCreateWindow();
	void SetWindowCaption(LPCTSTR lpszNewValue);
	CString GetWindowCaption();
	void SetCloseProcess(BOOL bNewValue);
	BOOL GetCloseProcess();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetText(LPCTSTR lpszNewValue);
	CString GetText();
	void SetHelpId(long nNewValue);
	long GetHelpId();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyLibExplorer wrapper class

class IPropertyLibExplorer : public COleDispatchDriver
{
public:
	IPropertyLibExplorer() {}		// Calls COleDispatchDriver default constructor
	IPropertyLibExplorer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyLibExplorer(const IPropertyLibExplorer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	void SetFileName(LPCTSTR lpszNewValue);
	CString GetFileName();
	void SetRootName(LPCTSTR lpszNewValue);
	CString GetRootName();
	BOOL GetFileValue();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyStyleList wrapper class

class IPropertyStyleList : public COleDispatchDriver
{
public:
	IPropertyStyleList() {}		// Calls COleDispatchDriver default constructor
	IPropertyStyleList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyStyleList(const IPropertyStyleList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	BOOL Add(const VARIANT& Styles);
	long GetCount();
	BOOL ClearList();
	long Find(long Val);
	void SetCurrentIndex(long nNewValue);
	long GetCurrentIndex();
	void SetAnotherStyleBtnEnable(BOOL bNewValue);
	BOOL GetAnotherStyleBtnEnable();
};
/////////////////////////////////////////////////////////////////////////////
// IAssociationView wrapper class

class IAssociationView : public COleDispatchDriver
{
public:
	IAssociationView() {}		// Calls COleDispatchDriver default constructor
	IAssociationView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAssociationView(const IAssociationView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetNumber(long nNewValue);
	long GetNumber();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	void SetBackground(BOOL bNewValue);
	BOOL GetBackground();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetCurrent(BOOL bNewValue);
	BOOL GetCurrent();
	void SetColor(long nNewValue);
	long GetColor();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetComment();
	long GetObjectCount();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	long GetViewType();
	LPDISPATCH GetLayers();
	VARIANT GetVariables();
	LPDISPATCH GetVariable(const VARIANT& Index);
	long GetVariablesCount();
	CString GetSourceFileName();
	void SetSourceFileName(LPCTSTR lpszNewValue);
	CString GetProjectionName();
	void SetProjectionName(LPCTSTR lpszNewValue);
	BOOL GetExplodedView();
	void SetExplodedView(BOOL bNewValue);
	void SetDimensionLayoutScaling(BOOL bNewValue);
	BOOL GetProjectionLink();
	void SetProjectionLink(BOOL bNewValue);
	BOOL GetSection();
	void SetSection(BOOL bNewValue);
	BOOL GetUnfold();
	void SetUnfold(BOOL bNewValue);
	long GetVisibleLinesStyle();
	void SetVisibleLinesStyle(long nNewValue);
	BOOL GetHiddenLines();
	void SetHiddenLines(BOOL bNewValue);
	BOOL GetHiddenLinesVisible();
	void SetHiddenLinesVisible(BOOL bNewValue);
	long GetHiddenLinesStyle();
	void SetHiddenLinesStyle(long nNewValue);
	BOOL GetBreakLinesVisible();
	void SetBreakLinesVisible(BOOL bNewValue);
	long GetBreakLinesStyle();
	void SetBreakLinesStyle(long nNewValue);
	BOOL GetBendLinesVisible();
	void SetBendLinesVisible(BOOL bNewValue);
	long GetBendLinesStyle();
	void SetBendLinesStyle(long nNewValue);
	LPDISPATCH GetBaseView();
	void SetBaseView(LPDISPATCH newValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	BOOL GetLocal();
	void SetLocal(BOOL bNewValue);
	BOOL CreateLocalView(LPDISPATCH Contour);
	BOOL GetSameHatch();
	void SetSameHatch(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IViewDesignation wrapper class

class IViewDesignation : public COleDispatchDriver
{
public:
	IViewDesignation() {}		// Calls COleDispatchDriver default constructor
	IViewDesignation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IViewDesignation(const IViewDesignation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetShowName();
	void SetShowName(BOOL bNewValue);
	BOOL GetShowUnfold();
	void SetShowUnfold(BOOL bNewValue);
	BOOL GetShowScale();
	void SetShowScale(BOOL bNewValue);
	BOOL GetShowTurn();
	void SetShowTurn(BOOL bNewValue);
	BOOL GetShowAngle();
	void SetShowAngle(BOOL bNewValue);
	BOOL GetShowPage();
	void SetShowPage(BOOL bNewValue);
	BOOL GetShowZone();
	void SetShowZone(BOOL bNewValue);
	CString GetDesignation();
	VARIANT GetRefObject();
	void SetRefObject(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IAssociationViewElements wrapper class

class IAssociationViewElements : public COleDispatchDriver
{
public:
	IAssociationViewElements() {}		// Calls COleDispatchDriver default constructor
	IAssociationViewElements(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAssociationViewElements(const IAssociationViewElements& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetProjectBodies();
	void SetProjectBodies(BOOL bNewValue);
	BOOL GetProjectSurfaces();
	void SetProjectSurfaces(BOOL bNewValue);
	BOOL GetHiddenObjectsVisible();
	void SetHiddenObjectsVisible(BOOL bNewValue);
	BOOL GetProjectThreads();
	void SetProjectThreads(BOOL bNewValue);
	BOOL GetProjectDimensions();
	void SetProjectDimensions(BOOL bNewValue);
	BOOL GetProjectRoughs();
	void SetProjectRoughs(BOOL bNewValue);
	BOOL GetProjectBases();
	void SetProjectBases(BOOL bNewValue);
	BOOL GetProjectTolerances();
	void SetProjectTolerances(BOOL bNewValue);
	BOOL GetProjectPositions();
	void SetProjectPositions(BOOL bNewValue);
	BOOL GetProjectLeaders();
	void SetProjectLeaders(BOOL bNewValue);
	BOOL GetProjectMarkLeaders();
	void SetProjectMarkLeaders(BOOL bNewValue);
	BOOL GetProjectBrandLeaders();
	void SetProjectBrandLeaders(BOOL bNewValue);
	BOOL GetProjectHiddenComponents();
	void SetProjectHiddenComponents(BOOL bNewValue);
	BOOL GetProjectStandartElements();
	void SetProjectStandartElements(BOOL bNewValue);
	BOOL GetProjectCurves();
	void SetProjectCurves(BOOL bNewValue);
	BOOL GetProjectPoints();
	void SetProjectPoints(BOOL bNewValue);
	BOOL GetProjectAllObjects();
	void SetProjectAllObjects(BOOL bNewValue);
	BOOL GetProjectAllDesignations();
	void SetProjectAllDesignations(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBreakViewParam wrapper class

class IBreakViewParam : public COleDispatchDriver
{
public:
	IBreakViewParam() {}		// Calls COleDispatchDriver default constructor
	IBreakViewParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakViewParam(const IBreakViewParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddBreakLine(double X1, double Y1, double X2, double Y2, double Angle);
	BOOL DeleteBreakLine(long Index);
	BOOL DeleteAllBreakLines();
	BOOL SetBreakLinePosition(long Index, double X1, double Y1, double X2, double Y2);
	BOOL GetBreakLinePosition(long Index, double* X1, double* Y1, double* X2, double* Y2);
	BOOL SetBreakLineParams(long Index, double Angle, double Clearance, long BreakLineType, double Amplitude, double MaxAmplitude);
	BOOL GetBreakLineParams(long Index, double* Angle, double* Clearance, long* BreakLineType, double* Amplitude, double* MaxAmplitude);
	long GetBreaksCount();
	BOOL GetBreaksVisible();
	void SetBreaksVisible(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICutViewParam wrapper class

class ICutViewParam : public COleDispatchDriver
{
public:
	ICutViewParam() {}		// Calls COleDispatchDriver default constructor
	ICutViewParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutViewParam(const ICutViewParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddCut(LPCTSTR Name, long Number, double X, double Y, BOOL ModelCut, LPDISPATCH Contour, LPDISPATCH View);
	BOOL DeleteCut(long Index);
	BOOL DeleteAllCuts();
	BOOL SetCutPlanePosition(long Index, double X, double Y);
	BOOL GetCutPlanePosition(long Index, double* X, double* Y);
	BOOL SetCutParams(long Index, LPCTSTR Name, long Number, BOOL ModelCut);
	LPDISPATCH GetCutParams(long Index, BSTR* Name, long* Number, BOOL* ModelCut);
	long GetCutsCount();
	BOOL GetLocalCut(long Index);
	void SetLocalCut(long Index, BOOL bNewValue);
	LPDISPATCH GetHatchParam(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IHatchParam wrapper class

class IHatchParam : public COleDispatchDriver
{
public:
	IHatchParam() {}		// Calls COleDispatchDriver default constructor
	IHatchParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHatchParam(const IHatchParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	double GetStep();
	void SetStep(double newValue);
	double GetHatchAngle();
	void SetHatchAngle(double newValue);
	BOOL GetHatchType();
	void SetHatchType(BOOL bNewValue);
	double GetWidth();
	void SetWidth(double newValue);
	BOOL GetIsSheetAngle();
	void SetIsSheetAngle(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCoordinateSystem2D wrapper class

class ILocalCoordinateSystem2D : public COleDispatchDriver
{
public:
	ILocalCoordinateSystem2D() {}		// Calls COleDispatchDriver default constructor
	ILocalCoordinateSystem2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCoordinateSystem2D(const ILocalCoordinateSystem2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetAngle(double newValue);
	double GetAngle();
	void SetAxisXLabel(LPCTSTR lpszNewValue);
	CString GetAxisXLabel();
	void SetAxisYLabel(LPCTSTR lpszNewValue);
	CString GetAxisYLabel();
	BOOL Delete();
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCoordinateSystems2D wrapper class

class ILocalCoordinateSystems2D : public COleDispatchDriver
{
public:
	ILocalCoordinateSystems2D() {}		// Calls COleDispatchDriver default constructor
	ILocalCoordinateSystems2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCoordinateSystems2D(const ILocalCoordinateSystems2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add();
	void SetCurrent(LPDISPATCH newValue);
	LPDISPATCH GetCurrent();
};
/////////////////////////////////////////////////////////////////////////////
// IView1 wrapper class

class IView1 : public COleDispatchDriver
{
public:
	IView1() {}		// Calls COleDispatchDriver default constructor
	IView1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IView1(const IView1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetLocalCoordinateSystems2D();
	BOOL GetEditMacroVisibleRegime();
	void SetNumerator(double newValue);
	double GetNumerator();
};
/////////////////////////////////////////////////////////////////////////////
// IDocument2DSettings wrapper class

class IDocument2DSettings : public COleDispatchDriver
{
public:
	IDocument2DSettings() {}		// Calls COleDispatchDriver default constructor
	IDocument2DSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDocument2DSettings(const IDocument2DSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetLayersGroupWay(long nNewValue);
	long GetLayersGroupWay();
	void SetCompositionInherit(BOOL bNewValue);
	BOOL GetCompositionInherit();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingDocumentSettings wrapper class

class IDrawingDocumentSettings : public COleDispatchDriver
{
public:
	IDrawingDocumentSettings() {}		// Calls COleDispatchDriver default constructor
	IDrawingDocumentSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingDocumentSettings(const IDrawingDocumentSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetSheetAutoNumber(BOOL bNewValue);
	BOOL GetSheetAutoNumber();
	void SetSheetFirstNumber(long nNewValue);
	long GetSheetFirstNumber();
	void SetSheetAutoCount(BOOL bNewValue);
	BOOL GetSheetAutoCount();
	void SetSheetsCount(long nNewValue);
	long GetSheetsCount();
};
/////////////////////////////////////////////////////////////////////////////
// IFragmentDocumentSettings wrapper class

class IFragmentDocumentSettings : public COleDispatchDriver
{
public:
	IFragmentDocumentSettings() {}		// Calls COleDispatchDriver default constructor
	IFragmentDocumentSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFragmentDocumentSettings(const IFragmentDocumentSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// ILibItemSettings wrapper class

class ILibItemSettings : public COleDispatchDriver
{
public:
	ILibItemSettings() {}		// Calls COleDispatchDriver default constructor
	ILibItemSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILibItemSettings(const ILibItemSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetItemCount();
	double GetItem(const VARIANT& Index, BOOL* Use);
	BOOL SetItem(const VARIANT& Index, BOOL Use);
	BOOL GetItems(VARIANT* UniqIds, VARIANT* Uses);
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionParameters wrapper class

class IInsertionParameters : public COleDispatchDriver
{
public:
	IInsertionParameters() {}		// Calls COleDispatchDriver default constructor
	IInsertionParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionParameters(const IInsertionParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetFileName();
	double GetSourceHeight();
	double GetSourceWidth();
	double GetHeight();
	void SetHeight(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	double GetScale();
	void SetScale(double newValue);
	BOOL AutoScale(BOOL ByHeight);
	long GetAngle();
	void SetAngle(long nNewValue);
	LPDISPATCH GetInsertionDefinition();
	void SetInsertionDefinition(LPDISPATCH newValue);
	double GetImageResolution();
	void SetImageResolution(double newValue);
	long GetPalette();
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionDefinition wrapper class

class IInsertionDefinition : public COleDispatchDriver
{
public:
	IInsertionDefinition() {}		// Calls COleDispatchDriver default constructor
	IInsertionDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionDefinition(const IInsertionDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetInsertionType();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	void SetFileName(LPCTSTR lpszNewValue);
	CString GetFileName();
	LPDISPATCH Open(BOOL Visible, BOOL ReadOnly);
	long GetInsertionObjectsCount();
};
/////////////////////////////////////////////////////////////////////////////
// ITableCell wrapper class

class ITableCell : public COleDispatchDriver
{
public:
	ITableCell() {}		// Calls COleDispatchDriver default constructor
	ITableCell(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITableCell(const ITableCell& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPDISPATCH GetText();
	long GetCellID();
	long GetRow();
	long GetColumn();
};
/////////////////////////////////////////////////////////////////////////////
// ITable wrapper class

class ITable : public COleDispatchDriver
{
public:
	ITable() {}		// Calls COleDispatchDriver default constructor
	ITable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITable(const ITable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetRowsCount();
	long GetColumnsCount();
	LPDISPATCH GetCell(long RowN, long ColN);
	LPDISPATCH GetCellById(long CellID);
	BOOL AddColumn(long ColN, BOOL Right);
	BOOL DeleteColumn(long ColN);
	BOOL AddRow(long RowN, BOOL Down);
	BOOL DeleteRow(long RowN);
	BOOL Clear();
	LPDISPATCH GetRange(long BeginRow, long BeginColumn, long EndRow, long EndColumn);
};
/////////////////////////////////////////////////////////////////////////////
// ITableRange wrapper class

class ITableRange : public COleDispatchDriver
{
public:
	ITableRange() {}		// Calls COleDispatchDriver default constructor
	ITableRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITableRange(const ITableRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL CombineCells();
	BOOL DivideCells(long ColumnCount, long RowCount, BOOL PrepareCombine);
	BOOL ClearCells();
	VARIANT GetCells();
	LPDISPATCH GetCellsFormat();
	LPDISPATCH GetCellsBoundaries();
	VARIANT GetTexts();
	void SetTexts(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICellFormat wrapper class

class ICellFormat : public COleDispatchDriver
{
public:
	ICellFormat() {}		// Calls COleDispatchDriver default constructor
	ICellFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICellFormat(const ICellFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetTextStyle();
	void SetTextStyle(long nNewValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	BOOL GetOneLine();
	void SetOneLine(BOOL bNewValue);
	double GetLeftEdge();
	void SetLeftEdge(double newValue);
	double GetRightEdge();
	void SetRightEdge(double newValue);
	double GetSpaceBefore();
	void SetSpaceBefore(double newValue);
	double GetSpaceAfter();
	void SetSpaceAfter(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	double GetHeight();
	void SetHeight(double newValue);
	long GetHFormat();
	void SetHFormat(long nNewValue);
	BOOL GetVFormat();
	void SetVFormat(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICellBoundaries wrapper class

class ICellBoundaries : public COleDispatchDriver
{
public:
	ICellBoundaries() {}		// Calls COleDispatchDriver default constructor
	ICellBoundaries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICellBoundaries(const ICellBoundaries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetLineStyle(long Index);
	void SetLineStyle(long Index, long nNewValue);
	BOOL GetLineVisible(long Index);
	void SetLineVisible(long Index, BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ksPropertyManagerNotify wrapper class

class ksPropertyManagerNotify : public COleDispatchDriver
{
public:
	ksPropertyManagerNotify() {}		// Calls COleDispatchDriver default constructor
	ksPropertyManagerNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPropertyManagerNotify(const ksPropertyManagerNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL ButtonClick(long ButtonID);
	BOOL ChangeControlValue(LPDISPATCH Control);
	BOOL ControlCommand(LPDISPATCH Control, long ButtonID);
	BOOL ButtonUpdate(long ButtonID, long* Check, BOOL* Enable);
	BOOL ProcessActivate();
	BOOL ProcessDeactivate();
	BOOL CommandHelp(long Id);
	BOOL SelectItem(LPDISPATCH Control, long Index, BOOL Select);
	BOOL CheckItem(LPDISPATCH Control, long Index, BOOL Check);
	BOOL ChangeActiveTab(long TabIndex);
	BOOL EditFocus(LPDISPATCH Control, BOOL Set);
	BOOL UserMenuCommand(LPDISPATCH Control, long MenuID);
};
/////////////////////////////////////////////////////////////////////////////
// ksPropertyUserControlNotify wrapper class

class ksPropertyUserControlNotify : public COleDispatchDriver
{
public:
	ksPropertyUserControlNotify() {}		// Calls COleDispatchDriver default constructor
	ksPropertyUserControlNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksPropertyUserControlNotify(const ksPropertyUserControlNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL CreateOCX(LPDISPATCH IOcx);
	BOOL DestroyOCX();
};
/////////////////////////////////////////////////////////////////////////////
// ksDocumentFrameNotify wrapper class

class ksDocumentFrameNotify : public COleDispatchDriver
{
public:
	ksDocumentFrameNotify() {}		// Calls COleDispatchDriver default constructor
	ksDocumentFrameNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocumentFrameNotify(const ksDocumentFrameNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginPaint(LPDISPATCH PaintObj);
	BOOL ClosePaint(LPDISPATCH PaintObj);
	BOOL MouseDown(short NButton, short NShiftState, long X, long Y);
	BOOL MouseUp(short NButton, short NShiftState, long X, long Y);
	BOOL MouseDblClick(short NButton, short NShiftState, long X, long Y);
	BOOL BeginPaintGL(LPDISPATCH GlObj, long DrawMode);
	BOOL ClosePaintGL(LPDISPATCH GlObj, long DrawMode);
	BOOL AddGabarit(LPDISPATCH GabObj);
	BOOL Activate();
	BOOL Deactivate();
	BOOL CloseFrame();
	BOOL MouseMove(short NShiftState, long X, long Y);
	BOOL ShowOcxTree(LPDISPATCH Ocx, BOOL show);
};
/////////////////////////////////////////////////////////////////////////////
// IPaintObject wrapper class

class IPaintObject : public COleDispatchDriver
{
public:
	IPaintObject() {}		// Calls COleDispatchDriver default constructor
	IPaintObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPaintObject(const IPaintObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetHWND();
	void GetTransformMatrix(double* A11, double* A12, double* A13, double* A14, double* A21, double* A22, double* A23, double* A24);
	CString GetDIBForOutput();
};
/////////////////////////////////////////////////////////////////////////////
// ksGLObject wrapper class

class ksGLObject : public COleDispatchDriver
{
public:
	ksGLObject() {}		// Calls COleDispatchDriver default constructor
	ksGLObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksGLObject(const ksGLObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL glBegin(long Mode);
	BOOL glEnd();
	BOOL glEnable(long Cap);
	BOOL glDisable(long Cap);
	BOOL glColor3d(double R, double G, double B);
	BOOL glLineWidth(double W);
	BOOL glLineStipple(long Factor, short Pattern);
	BOOL glPointSize(double W);
	BOOL glPolygonMode(long Face, long Mode);
	BOOL glVertex2d(double X, double Y);
	BOOL glVertex2dv(double* PData, long CountDouble);
	BOOL glVertex3d(double X, double Y, double Z);
	BOOL glVertex3dv(double* PData, long CountDouble);
	BOOL glVertex4d(double X, double Y, double Z, double W);
	BOOL glVertex4dv(double* PData, long CountDouble);
};
/////////////////////////////////////////////////////////////////////////////
// IGabaritObject wrapper class

class IGabaritObject : public COleDispatchDriver
{
public:
	IGabaritObject() {}		// Calls COleDispatchDriver default constructor
	IGabaritObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IGabaritObject(const IGabaritObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetCurrentGabarit(long NPage, double* P1X, double* P1Y, double* P1Z, double* P2X, double* P2Y, double* P2Z);
	BOOL AddGabarit(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	BOOL GetGabaritModifying();
};
/////////////////////////////////////////////////////////////////////////////
// ksDrawingObjectNotify wrapper class

class ksDrawingObjectNotify : public COleDispatchDriver
{
public:
	ksDrawingObjectNotify() {}		// Calls COleDispatchDriver default constructor
	ksDrawingObjectNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDrawingObjectNotify(const ksDrawingObjectNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL ChangeActive(const VARIANT& Obj);
	BOOL BeginDelete(const VARIANT& Objects);
	BOOL Delete(const VARIANT& Objects);
	BOOL BeginMove(const VARIANT& Objects);
	BOOL Move(const VARIANT& Objects);
	BOOL BeginRotate(const VARIANT& Objects);
	BOOL Rotate(const VARIANT& Objects);
	BOOL BeginScale(const VARIANT& Objects);
	BOOL Scale(const VARIANT& Objects);
	BOOL BeginTransform(const VARIANT& Objects);
	BOOL Transform(const VARIANT& Objects);
	BOOL BeginCopy(const VARIANT& Objects);
	BOOL Copy(const VARIANT& Objects);
	BOOL BeginSymmetry(const VARIANT& Objects);
	BOOL Symmetry(const VARIANT& Objects);
	BOOL BeginProcess(long PType, const VARIANT& ObjRef);
	BOOL EndProcess(long PType);
	BOOL CreateObject(const VARIANT& Objects);
	BOOL UpdateObject(const VARIANT& Objects);
	BOOL BeginDestroyObject(const VARIANT& Objects);
	BOOL DestroyObject(const VARIANT& Objects);
};
/////////////////////////////////////////////////////////////////////////////
// ksViewsAndLayersManagerNotify wrapper class

class ksViewsAndLayersManagerNotify : public COleDispatchDriver
{
public:
	ksViewsAndLayersManagerNotify() {}		// Calls COleDispatchDriver default constructor
	ksViewsAndLayersManagerNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksViewsAndLayersManagerNotify(const ksViewsAndLayersManagerNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginEdit();
	BOOL EndEdit(BOOL IsOk);
};
/////////////////////////////////////////////////////////////////////////////
// ksLibraryManagerNotify wrapper class

class ksLibraryManagerNotify : public COleDispatchDriver
{
public:
	ksLibraryManagerNotify() {}		// Calls COleDispatchDriver default constructor
	ksLibraryManagerNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLibraryManagerNotify(const ksLibraryManagerNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginAttach(LPDISPATCH PLibrary);
	BOOL Attach(LPDISPATCH PLibrary);
	BOOL BeginDetach(LPDISPATCH PLibrary);
	BOOL Detach(LPDISPATCH PLibrary);
	BOOL BeginExecute(LPDISPATCH PLibrary);
	BOOL EndExecute(LPDISPATCH PLibrary);
	BOOL SystemControlStop(LPDISPATCH PLibrary);
	BOOL SystemControlStart(LPDISPATCH PLibrary);
	BOOL AddLibraryDescription(LPDISPATCH PLibrary);
	BOOL DeleteLibraryDescription(LPDISPATCH PLibrary);
	BOOL AddInsert(LPDISPATCH PInsert, BOOL Create);
	BOOL DeleteInsert(LPDISPATCH PInsert);
	BOOL EditInsert(LPDISPATCH PLibrary, LPDISPATCH PDoc, BOOL NewFrw);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpecificationDescriptionNotify wrapper class

class ksSpecificationDescriptionNotify : public COleDispatchDriver
{
public:
	ksSpecificationDescriptionNotify() {}		// Calls COleDispatchDriver default constructor
	ksSpecificationDescriptionNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpecificationDescriptionNotify(const ksSpecificationDescriptionNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL TuningSpcStyleBeginChange(LPDISPATCH Descr);
	BOOL TuningSpcStyleChange(LPDISPATCH Descr, BOOL IsOk);
	BOOL ChangeCurrentSpcDescription(LPDISPATCH Descr);
	BOOL SpcDescriptionAdd(LPDISPATCH Descr);
	BOOL SpcDescriptionRemove(LPDISPATCH Descr);
	BOOL SpcDescriptionBeginEdit(LPDISPATCH Descr);
	BOOL SpcDescriptionEdit(LPDISPATCH Descr, BOOL IsOk);
	BOOL SynchronizationBegin();
	BOOL Synchronization();
	BOOL BeginCalcPositions();
	BOOL CalcPositions();
	BOOL BeginCreateObject(long TypeObj);
};
/////////////////////////////////////////////////////////////////////////////
// ksSpecificationObjectNotify wrapper class

class ksSpecificationObjectNotify : public COleDispatchDriver
{
public:
	ksSpecificationObjectNotify() {}		// Calls COleDispatchDriver default constructor
	ksSpecificationObjectNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksSpecificationObjectNotify(const ksSpecificationObjectNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginDelete(LPDISPATCH Obj);
	BOOL Delete(LPDISPATCH Obj);
	BOOL CellDblClick(LPDISPATCH Obj, long Number);
	BOOL CellBeginEdit(LPDISPATCH Obj, long Number);
	BOOL ChangeCurrent(LPDISPATCH Obj);
	BOOL DocumentBeginAdd(LPDISPATCH Obj);
	BOOL DocumentAdd(LPDISPATCH Obj, LPCTSTR DocName);
	BOOL DocumentRemove(LPDISPATCH Obj, LPCTSTR DocName);
	BOOL BeginGeomChange(LPDISPATCH Obj);
	BOOL GeomChange(LPDISPATCH Obj);
	BOOL BeginProcess(long PType, LPDISPATCH Obj);
	BOOL EndProcess(long PType);
	BOOL CreateObject(LPDISPATCH Obj);
	BOOL UpdateObject(LPDISPATCH Obj);
};
/////////////////////////////////////////////////////////////////////////////
// ksLayoutSheetsNotify wrapper class

class ksLayoutSheetsNotify : public COleDispatchDriver
{
public:
	ksLayoutSheetsNotify() {}		// Calls COleDispatchDriver default constructor
	ksLayoutSheetsNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksLayoutSheetsNotify(const ksLayoutSheetsNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL Add(LPDISPATCH PSheet);
	BOOL Delete(LPDISPATCH PSheet);
	BOOL Update(LPDISPATCH PSheet);
};
/////////////////////////////////////////////////////////////////////////////
// ksModelObjectNotify wrapper class

class ksModelObjectNotify : public COleDispatchDriver
{
public:
	ksModelObjectNotify() {}		// Calls COleDispatchDriver default constructor
	ksModelObjectNotify(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksModelObjectNotify(const ksModelObjectNotify& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginDelete(const VARIANT& Obj);
	BOOL Delete(const VARIANT& Obj);
	BOOL Excluded(const VARIANT& Obj, BOOL Excluded);
	BOOL Hidden(const VARIANT& Obj, BOOL _Hidden);
	BOOL BeginPropertyChanged(const VARIANT& Obj);
	BOOL PropertyChanged(const VARIANT& Obj);
	BOOL BeginPlacementChanged(const VARIANT& Obj);
	BOOL PlacementChanged(const VARIANT& Obj);
	BOOL BeginProcess(long PType, const VARIANT& Pbj);
	BOOL EndProcess(long PType);
	BOOL CreateObject(const VARIANT& Obj);
	BOOL UpdateObject(const VARIANT& Obj);
};
/////////////////////////////////////////////////////////////////////////////
// ksDocument3DNotify7 wrapper class

class ksDocument3DNotify7 : public COleDispatchDriver
{
public:
	ksDocument3DNotify7() {}		// Calls COleDispatchDriver default constructor
	ksDocument3DNotify7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ksDocument3DNotify7(const ksDocument3DNotify7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL BeginRebuild();
	BOOL Rebuild();
	BOOL BeginChoiceMaterial();
	BOOL ChoiceMaterial(LPCTSTR Material, double Density);
	BOOL BeginChoiceMarking();
	BOOL ChoiceMarking(LPCTSTR Marking);
	BOOL BeginSetPartFromFile();
	BOOL BeginCreatePartFromFile(BOOL TypeDoc, LPDISPATCH Plane);
};
/////////////////////////////////////////////////////////////////////////////
// IModelObjectNotifyResult wrapper class

class IModelObjectNotifyResult : public COleDispatchDriver
{
public:
	IModelObjectNotifyResult() {}		// Calls COleDispatchDriver default constructor
	IModelObjectNotifyResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelObjectNotifyResult(const IModelObjectNotifyResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNotifyType();
	VARIANT GetNotifyObjects();
	long GetProcessType();
};
/////////////////////////////////////////////////////////////////////////////
// IKompasDocument3DNotifyResult wrapper class

class IKompasDocument3DNotifyResult : public COleDispatchDriver
{
public:
	IKompasDocument3DNotifyResult() {}		// Calls COleDispatchDriver default constructor
	IKompasDocument3DNotifyResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IKompasDocument3DNotifyResult(const IKompasDocument3DNotifyResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNotifyType();
	long GetNotifyObjectType();
	LPDISPATCH GetNotifyObject();
};
/////////////////////////////////////////////////////////////////////////////
// IModelContainer wrapper class

class IModelContainer : public COleDispatchDriver
{
public:
	IModelContainer() {}		// Calls COleDispatchDriver default constructor
	IModelContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelContainer(const IModelContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetObjects(const VARIANT& ObjType);
	LPDISPATCH GetSketchs();
	LPDISPATCH GetExtrusions();
	LPDISPATCH GetPoints3D();
	LPDISPATCH GetFeaturePatterns();
	LPDISPATCH GetSurfaceThickenings();
	LPDISPATCH GetRotateds();
	LPDISPATCH GetScalings3D();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchs wrapper class

class ISketchs : public COleDispatchDriver
{
public:
	ISketchs() {}		// Calls COleDispatchDriver default constructor
	ISketchs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchs(const ISketchs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSketch(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISketch wrapper class

class ISketch : public COleDispatchDriver
{
public:
	ISketch() {}		// Calls COleDispatchDriver default constructor
	ISketch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketch(const ISketch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetPlane(LPDISPATCH newValue);
	LPDISPATCH GetPlane();
	void SetAngle(double newValue);
	double GetAngle();
	BOOL GetLocation(double* X, double* Y);
	BOOL SetLocation(double X, double Y);
	BOOL GetLoftPoint(double* X, double* Y);
	BOOL SetLoftPoint(double X, double Y);
	LPDISPATCH BeginEdit();
	BOOL EndEdit();
	LPDISPATCH BeginEditEx(BOOL ReadOnly);
};
/////////////////////////////////////////////////////////////////////////////
// IExtrusions wrapper class

class IExtrusions : public COleDispatchDriver
{
public:
	IExtrusions() {}		// Calls COleDispatchDriver default constructor
	IExtrusions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtrusions(const IExtrusions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetExtrusion(const VARIANT& Index);
	LPDISPATCH Add(long ExtrusionType);
};
/////////////////////////////////////////////////////////////////////////////
// IExtrusion wrapper class

class IExtrusion : public COleDispatchDriver
{
public:
	IExtrusion() {}		// Calls COleDispatchDriver default constructor
	IExtrusion(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtrusion(const IExtrusion& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetSketch();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetExtrusionType(BOOL Normal, long nNewValue);
	long GetExtrusionType(BOOL Normal);
	void SetDepth(BOOL Normal, double newValue);
	double GetDepth(BOOL Normal);
	void SetDraftValue(BOOL Normal, double newValue);
	double GetDraftValue(BOOL Normal);
	void SetDraftOutward(BOOL Normal, BOOL bNewValue);
	BOOL GetDraftOutward(BOOL Normal);
	void SetDepthObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetDepthObject(BOOL Normal);
	BOOL GetSideParameters(BOOL Normal, long* ExtrusionType, double* Depth, double* DraftValue, BOOL* DraftOutward, LPDISPATCH* DepthObject);
	BOOL SetSideParameters(BOOL Normal, long ExtrusionType, double Depth, double DraftValue, BOOL DraftOutward, LPDISPATCH DepthObject);
};
/////////////////////////////////////////////////////////////////////////////
// IPoints3D wrapper class

class IPoints3D : public COleDispatchDriver
{
public:
	IPoints3D() {}		// Calls COleDispatchDriver default constructor
	IPoints3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoints3D(const IPoints3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetPoint3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IFeaturePatterns wrapper class

class IFeaturePatterns : public COleDispatchDriver
{
public:
	IFeaturePatterns() {}		// Calls COleDispatchDriver default constructor
	IFeaturePatterns(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFeaturePatterns(const IFeaturePatterns& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetFeaturePattern(const VARIANT& Index);
	LPDISPATCH Add(long Type);
};
/////////////////////////////////////////////////////////////////////////////
// IFeaturePattern wrapper class

class IFeaturePattern : public COleDispatchDriver
{
public:
	IFeaturePattern() {}		// Calls COleDispatchDriver default constructor
	IFeaturePattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFeaturePattern(const IFeaturePattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceThickenings wrapper class

class ISurfaceThickenings : public COleDispatchDriver
{
public:
	ISurfaceThickenings() {}		// Calls COleDispatchDriver default constructor
	ISurfaceThickenings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceThickenings(const ISurfaceThickenings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSurfaceThickening(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceThickening wrapper class

class ISurfaceThickening : public COleDispatchDriver
{
public:
	ISurfaceThickening() {}		// Calls COleDispatchDriver default constructor
	ISurfaceThickening(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceThickening(const ISurfaceThickening& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetFaces(const VARIANT& newValue);
	VARIANT GetFaces();
};
/////////////////////////////////////////////////////////////////////////////
// IRotateds wrapper class

class IRotateds : public COleDispatchDriver
{
public:
	IRotateds() {}		// Calls COleDispatchDriver default constructor
	IRotateds(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRotateds(const IRotateds& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRotated(const VARIANT& Index);
	LPDISPATCH Add(long RotatedType);
};
/////////////////////////////////////////////////////////////////////////////
// IRotated wrapper class

class IRotated : public COleDispatchDriver
{
public:
	IRotated() {}		// Calls COleDispatchDriver default constructor
	IRotated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRotated(const IRotated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetProfile(LPDISPATCH newValue);
	LPDISPATCH GetProfile();
	void SetAxis(LPDISPATCH newValue);
	LPDISPATCH GetAxis();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetToroidShapeType(BOOL bNewValue);
	BOOL GetToroidShapeType();
	void SetRotatedType(BOOL Normal, long nNewValue);
	long GetRotatedType(BOOL Normal);
	void SetAngle(BOOL Normal, double newValue);
	double GetAngle(BOOL Normal);
	void SetAngleObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetAngleObject(BOOL Normal);
	void SetCutOffByPoint(BOOL Normal, BOOL bNewValue);
	BOOL GetCutOffByPoint(BOOL Normal);
};
/////////////////////////////////////////////////////////////////////////////
// IScalings3D wrapper class

class IScalings3D : public COleDispatchDriver
{
public:
	IScalings3D() {}		// Calls COleDispatchDriver default constructor
	IScalings3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IScalings3D(const IScalings3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetScaling3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IScaling3D wrapper class

class IScaling3D : public COleDispatchDriver
{
public:
	IScaling3D() {}		// Calls COleDispatchDriver default constructor
	IScaling3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IScaling3D(const IScaling3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetShell(LPDISPATCH newValue);
	LPDISPATCH GetShell();
	void SetScale(double newValue);
	double GetScale();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
};
/////////////////////////////////////////////////////////////////////////////
// IMassInertiaParam7 wrapper class

class IMassInertiaParam7 : public COleDispatchDriver
{
public:
	IMassInertiaParam7() {}		// Calls COleDispatchDriver default constructor
	IMassInertiaParam7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMassInertiaParam7(const IMassInertiaParam7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetZc(double newValue);
	double GetZc();
	void SetManualMassCentre(BOOL bNewValue);
	BOOL GetManualMassCentre();
	void SetLengthUnits(long nNewValue);
	long GetLengthUnits();
	void SetMassUnits(long nNewValue);
	long GetMassUnits();
	void SetManualMass(double newValue);
	double GetCalculateMass();
	void SetMassSettingMode(long nNewValue);
	long GetMassSettingMode();
	void SetManualDensity(double newValue);
	double GetHandBookDensity();
	void SetDensityMode(BOOL bNewValue);
	BOOL GetDensityMode();
	double GetVolume();
	double GetArea();
	void SetSourceData(BOOL bNewValue);
	BOOL GetSourceData();
	BOOL GetActual();
	BOOL Calculate();
	double GetLx();
	double GetLy();
	double GetLz();
	double GetLxy();
	double GetLxz();
	double GetLyz();
	double GetJx();
	double GetJy();
	double GetJz();
	double GetJxy();
	double GetJxz();
	double GetJyz();
	double GetJx0();
	double GetJy0();
	double GetJz0();
	BOOL GetAxisX(double* X, double* Y, double* Z);
	BOOL GetAxisY(double* X, double* Y, double* Z);
	BOOL GetAxisZ(double* X, double* Y, double* Z);
	double GetMass();
	double GetDensity();
	CString GetMaterial();
	BOOL SetMaterial(LPCTSTR Name, double Density);
};
/////////////////////////////////////////////////////////////////////////////
// IExtrusion1 wrapper class

class IExtrusion1 : public COleDispatchDriver
{
public:
	IExtrusion1() {}		// Calls COleDispatchDriver default constructor
	IExtrusion1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtrusion1(const IExtrusion1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetProfile(LPDISPATCH newValue);
	LPDISPATCH GetProfile();
	void SetDirectionObject(LPDISPATCH newValue);
	LPDISPATCH GetDirectionObject();
	LPDISPATCH GetVector3D();
	void SetCutOffByPoint(BOOL Normal, BOOL bNewValue);
	BOOL GetCutOffByPoint(BOOL Normal);
};
/////////////////////////////////////////////////////////////////////////////
// IThinParameters wrapper class

class IThinParameters : public COleDispatchDriver
{
public:
	IThinParameters() {}		// Calls COleDispatchDriver default constructor
	IThinParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IThinParameters(const IThinParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetThin(BOOL bNewValue);
	BOOL GetThin();
	void SetThinType(long nNewValue);
	long GetThinType();
	void SetThickness(BOOL Normal, double newValue);
	double GetThickness(BOOL Normal);
	BOOL GetThinParameters(BOOL* Thin, long* ThinType, double* ThicknessNormal, double* ThicknessReverse);
	BOOL SetThinParameters(BOOL Thin, long ThinType, double ThicknessNormal, double ThicknessReverse);
};
/////////////////////////////////////////////////////////////////////////////
// ICutExtrusion wrapper class

class ICutExtrusion : public COleDispatchDriver
{
public:
	ICutExtrusion() {}		// Calls COleDispatchDriver default constructor
	ICutExtrusion(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutExtrusion(const ICutExtrusion& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetSketch();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetExtrusionType(BOOL Normal, long nNewValue);
	long GetExtrusionType(BOOL Normal);
	void SetDepth(BOOL Normal, double newValue);
	double GetDepth(BOOL Normal);
	void SetDraftValue(BOOL Normal, double newValue);
	double GetDraftValue(BOOL Normal);
	void SetDraftOutward(BOOL Normal, BOOL bNewValue);
	BOOL GetDraftOutward(BOOL Normal);
	void SetDepthObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetDepthObject(BOOL Normal);
	BOOL GetSideParameters(BOOL Normal, long* ExtrusionType, double* Depth, double* DraftValue, BOOL* DraftOutward, LPDISPATCH* DepthObject);
	BOOL SetSideParameters(BOOL Normal, long ExtrusionType, double Depth, double DraftValue, BOOL DraftOutward, LPDISPATCH DepthObject);
	void SetCut(BOOL bNewValue);
	BOOL GetCut();
};
/////////////////////////////////////////////////////////////////////////////
// IChooseBodies7 wrapper class

class IChooseBodies7 : public COleDispatchDriver
{
public:
	IChooseBodies7() {}		// Calls COleDispatchDriver default constructor
	IChooseBodies7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IChooseBodies7(const IChooseBodies7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetChooseBodiesType(long nNewValue);
	long GetChooseBodiesType();
	void SetBodies(const VARIANT& newValue);
	VARIANT GetBodies();
};
/////////////////////////////////////////////////////////////////////////////
// IBody7 wrapper class

class IBody7 : public COleDispatchDriver
{
public:
	IBody7() {}		// Calls COleDispatchDriver default constructor
	IBody7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBody7(const IBody7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL GetGabarit(double* X1, double* Y1, double* Z1, double* X2, double* Y2, double* Z2);
	CString GetMarking();
	void SetMarking(LPCTSTR lpszNewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	BOOL Update();
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalBodies wrapper class

class ISheetMetalBodies : public COleDispatchDriver
{
public:
	ISheetMetalBodies() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalBodies(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalBodies(const ISheetMetalBodies& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSheetMetalBody(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalBody wrapper class

class ISheetMetalBody : public COleDispatchDriver
{
public:
	ISheetMetalBody() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalBody(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalBody(const ISheetMetalBody& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetThicknessDirection(BOOL bNewValue);
	BOOL GetThicknessDirection();
	void SetThickness(double newValue);
	double GetThickness();
	void SetStraighten(BOOL bNewValue);
	BOOL GetStraighten();
	void SetRadius(double newValue);
	double GetRadius();
	void SetUnfoldType(long nNewValue);
	long GetUnfoldType();
	void SetBendCoefficient(double newValue);
	double GetBendCoefficient();
	void SetBendValue(double newValue);
	double GetBendValue();
	void SetBendReduction(double newValue);
	double GetBendReduction();
	void SetBendTablePath(LPCTSTR lpszNewValue);
	CString GetBendTablePath();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetSketch();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetExtrusionType(BOOL Normal, long nNewValue);
	long GetExtrusionType(BOOL Normal);
	void SetDepth(BOOL Normal, double newValue);
	double GetDepth(BOOL Normal);
	void SetDepthObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetDepthObject(BOOL Normal);
	BOOL GetSideParameters(BOOL Normal, long* ExtrusionType, double* Depth, LPDISPATCH* DepthObject);
	BOOL SetSideParameters(BOOL Normal, long ExtrusionType, double Depth, LPDISPATCH DepthObject);
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalContainer wrapper class

class ISheetMetalContainer : public COleDispatchDriver
{
public:
	ISheetMetalContainer() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalContainer(const ISheetMetalContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSheetMetalBodies();
	LPDISPATCH GetSheetMetalBends();
	LPDISPATCH GetSheetMetalLineBends();
	LPDISPATCH GetSheetMetalHoles();
	LPDISPATCH GetSheetMetalCuts();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalBends wrapper class

class ISheetMetalBends : public COleDispatchDriver
{
public:
	ISheetMetalBends() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalBends(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalBends(const ISheetMetalBends& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSheetMetalBend(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalBend wrapper class

class ISheetMetalBend : public COleDispatchDriver
{
public:
	ISheetMetalBend() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalBend(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalBend(const ISheetMetalBend& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetDisposal(long nNewValue);
	long GetDisposal();
	void SetWidth(double newValue);
	double GetWidth();
	void SetLengthType(long nNewValue);
	long GetLengthType();
	void SetInternalLength(BOOL bNewValue);
	BOOL GetInternalLength();
	void SetLength(double newValue);
	double GetLength();
	void SetAngleType(BOOL bNewValue);
	BOOL GetAngleType();
	void SetAngle(double newValue);
	double GetAngle();
	void SetOffsetType(long nNewValue);
	long GetOffsetType();
	void SetOffset(double newValue);
	double GetOffset();
	void SetStraighten(BOOL bNewValue);
	BOOL GetStraighten();
	void SetLeftSideType(long nNewValue);
	long GetLeftSideType();
	void SetDistanceLeftSide(double newValue);
	double GetDistanceLeftSide();
	void SetLeftSideAngle(double newValue);
	double GetLeftSideAngle();
	void SetDeviationLeftSide(double newValue);
	double GetDeviationLeftSide();
	void SetWideningLeftSide(double newValue);
	double GetWideningLeftSide();
	void SetRightSideType(long nNewValue);
	long GetRightSideType();
	void SetDistanceRightSide(double newValue);
	double GetDistanceRightSide();
	void SetRightSideAngle(double newValue);
	double GetRightSideAngle();
	void SetDeviationRightSide(double newValue);
	double GetDeviationRightSide();
	void SetWideningRightSide(double newValue);
	double GetWideningRightSide();
	void SetWithoutAngleRelease(BOOL bNewValue);
	BOOL GetWithoutAngleRelease();
	void SetWithoutBendRelease(BOOL bNewValue);
	BOOL GetWithoutBendRelease();
	void SetDismissalWithWidth(BOOL bNewValue);
	BOOL GetDismissalWithWidth();
	void SetBendRelease(long nNewValue);
	long GetBendRelease();
	void SetDismissalWidth(double newValue);
	double GetDismissalWidth();
	void SetDismissalDepth(double newValue);
	double GetDismissalDepth();
	void SetDismissalAngleType(long nNewValue);
	long GetDismissalAngleType();
	void SetBendObject(LPDISPATCH newValue);
	LPDISPATCH GetBendObject();
	void SetInternalRadius(BOOL bNewValue);
	BOOL GetInternalRadius();
	void SetRadius(double newValue);
	double GetRadius();
	void SetUnfoldType(long nNewValue);
	long GetUnfoldType();
	void SetBendCoefficient(double newValue);
	double GetBendCoefficient();
	void SetBendValue(double newValue);
	double GetBendValue();
	void SetBendReduction(double newValue);
	double GetBendReduction();
	CString GetBendTablePath();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalLineBends wrapper class

class ISheetMetalLineBends : public COleDispatchDriver
{
public:
	ISheetMetalLineBends() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalLineBends(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalLineBends(const ISheetMetalLineBends& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSheetMetalLineBend(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalLineBend wrapper class

class ISheetMetalLineBend : public COleDispatchDriver
{
public:
	ISheetMetalLineBend() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalLineBend(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalLineBend(const ISheetMetalLineBend& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetBendLeftSideFixed(BOOL bNewValue);
	BOOL GetBendLeftSideFixed();
	void SetAngleType(BOOL bNewValue);
	BOOL GetAngleType();
	void SetAngle(double newValue);
	double GetAngle();
	void SetBendType(long nNewValue);
	long GetBendType();
	void SetStraighten(BOOL bNewValue);
	BOOL GetStraighten();
	void SetDismissalAngleType(long nNewValue);
	long GetDismissalAngleType();
	void SetInternalRadius(BOOL bNewValue);
	BOOL GetInternalRadius();
	void SetRadius(double newValue);
	double GetRadius();
	void SetUnfoldType(long nNewValue);
	long GetUnfoldType();
	void SetBendCoefficient(double newValue);
	double GetBendCoefficient();
	void SetBendValue(double newValue);
	double GetBendValue();
	void SetBendReduction(double newValue);
	double GetBendReduction();
	CString GetBendTablePath();
	void SetFaces(const VARIANT& newValue);
	VARIANT GetFaces();
	void SetLine(LPDISPATCH newValue);
	LPDISPATCH GetLine();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalHoles wrapper class

class ISheetMetalHoles : public COleDispatchDriver
{
public:
	ISheetMetalHoles() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalHoles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalHoles(const ISheetMetalHoles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSheetMetalHole(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalHole wrapper class

class ISheetMetalHole : public COleDispatchDriver
{
public:
	ISheetMetalHole() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalHole(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalHole(const ISheetMetalHole& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetCutType(long nNewValue);
	long GetCutType();
	void SetDiameter(double newValue);
	double GetDiameter();
	void SetDepth(double newValue);
	double GetDepth();
	void SetBasePlane(LPDISPATCH newValue);
	LPDISPATCH GetBasePlane();
	void SetDepthObject(LPDISPATCH newValue);
	LPDISPATCH GetDepthObject();
	LPDISPATCH GetSketch();
	void SetBody(LPDISPATCH newValue);
	LPDISPATCH GetBody();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalCuts wrapper class

class ISheetMetalCuts : public COleDispatchDriver
{
public:
	ISheetMetalCuts() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalCuts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalCuts(const ISheetMetalCuts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSheetMetalCut(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalCut wrapper class

class ISheetMetalCut : public COleDispatchDriver
{
public:
	ISheetMetalCut() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalCut(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalCut(const ISheetMetalCut& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetSketch();
	void SetCutType(long nNewValue);
	long GetCutType();
	void SetDepth(double newValue);
	double GetDepth();
	void SetDepthObject(LPDISPATCH newValue);
	LPDISPATCH GetDepthObject();
	void SetCut(BOOL bNewValue);
	BOOL GetCut();
	void SetBody(LPDISPATCH newValue);
	LPDISPATCH GetBody();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamDisplace wrapper class

class IPoint3DParamDisplace : public COleDispatchDriver
{
public:
	IPoint3DParamDisplace() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamDisplace(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamDisplace(const IPoint3DParamDisplace& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetDx(double newValue);
	double GetDx();
	void SetDy(double newValue);
	double GetDy();
	void SetDz(double newValue);
	double GetDz();
	BOOL SetAssociationVertex(LPDISPATCH NewVal);
	LPDISPATCH GetAssociationVertex();
	BOOL SetGuidingObject(LPDISPATCH NewVal);
	LPDISPATCH GetGuidingObject();
	void SetDistance(double newValue);
	double GetDistance();
	LPDISPATCH GetVector3D();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamIntersect wrapper class

class IPoint3DParamIntersect : public COleDispatchDriver
{
public:
	IPoint3DParamIntersect() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamIntersect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamIntersect(const IPoint3DParamIntersect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetCurveObject(LPDISPATCH NewVal);
	LPDISPATCH GetCurveObject();
	BOOL SetSurfaceObject(LPDISPATCH NewVal);
	LPDISPATCH GetSurfaceObject();
	VARIANT GetCartPointArray();
	void SetIndex(long nNewValue);
	long GetIndex();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamCenter wrapper class

class IPoint3DParamCenter : public COleDispatchDriver
{
public:
	IPoint3DParamCenter() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamCenter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamCenter(const IPoint3DParamCenter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetObject(LPDISPATCH NewVal);
	LPDISPATCH GetObject();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamCurve wrapper class

class IPoint3DParamCurve : public COleDispatchDriver
{
public:
	IPoint3DParamCurve() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamCurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamCurve(const IPoint3DParamCurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetCurveObject(LPDISPATCH NewVal);
	LPDISPATCH GetCurveObject();
	void SetOffsetType(long nNewValue);
	long GetOffsetType();
	void SetOffset(double newValue);
	double GetOffset();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamSurface wrapper class

class IPoint3DParamSurface : public COleDispatchDriver
{
public:
	IPoint3DParamSurface() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamSurface(const IPoint3DParamSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetSurfaceObject(LPDISPATCH NewVal);
	LPDISPATCH GetSurfaceObject();
	void SetOffsetType(long nNewValue);
	long GetOffsetType();
	void SetOffset1(double newValue);
	double GetOffset1();
	void SetOffset2(double newValue);
	double GetOffset2();
	BOOL SetObject1(LPDISPATCH NewVal);
	LPDISPATCH GetObject1();
	BOOL SetObject2(LPDISPATCH NewVal);
	LPDISPATCH GetObject2();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamProjection wrapper class

class IPoint3DParamProjection : public COleDispatchDriver
{
public:
	IPoint3DParamProjection() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamProjection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamProjection(const IPoint3DParamProjection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetAssociationVertex(LPDISPATCH NewVal);
	LPDISPATCH GetAssociationVertex();
	BOOL SetSurfaceObject(LPDISPATCH NewVal);
	LPDISPATCH GetSurfaceObject();
	BOOL SetGuidingObject(LPDISPATCH NewVal);
	LPDISPATCH GetGuidingObject();
	LPDISPATCH GetVector3D();
};
/////////////////////////////////////////////////////////////////////////////
// ISourcePart7Params wrapper class

class ISourcePart7Params : public COleDispatchDriver
{
public:
	ISourcePart7Params() {}		// Calls COleDispatchDriver default constructor
	ISourcePart7Params(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISourcePart7Params(const ISourcePart7Params& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetSourceName();
	void SetSourceName(LPCTSTR lpszNewValue);
	CString GetSourceMarking();
	void SetSourceMarking(LPCTSTR lpszNewValue);
	CString GetDocumentAuthor();
	void SetDocumentAuthor(LPCTSTR lpszNewValue);
	VARIANT GetDocumentComment();
	void SetDocumentComment(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISymbols3DContainer wrapper class

class ISymbols3DContainer : public COleDispatchDriver
{
public:
	ISymbols3DContainer() {}		// Calls COleDispatchDriver default constructor
	ISymbols3DContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISymbols3DContainer(const ISymbols3DContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetLineDimensions3D();
	LPDISPATCH GetRadialDimensions3D();
	LPDISPATCH GetDiametralDimensions3D();
	LPDISPATCH GetAngleDimensions3D();
	LPDISPATCH GetLeaders3D();
	LPDISPATCH GetRoughs3D();
	LPDISPATCH GetBases3D();
	LPDISPATCH GetTolerances3D();
};
/////////////////////////////////////////////////////////////////////////////
// ILineDimensions3D wrapper class

class ILineDimensions3D : public COleDispatchDriver
{
public:
	ILineDimensions3D() {}		// Calls COleDispatchDriver default constructor
	ILineDimensions3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILineDimensions3D(const ILineDimensions3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLineDimension3D(const VARIANT& Index);
	LPDISPATCH Add(long DimType);
};
/////////////////////////////////////////////////////////////////////////////
// IBaseLineDimension3D wrapper class

class IBaseLineDimension3D : public COleDispatchDriver
{
public:
	IBaseLineDimension3D() {}		// Calls COleDispatchDriver default constructor
	IBaseLineDimension3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBaseLineDimension3D(const IBaseLineDimension3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	double GetLength();
	void SetLength(double newValue);
	LPDISPATCH GetObject1();
	void SetObject1(LPDISPATCH newValue);
	LPDISPATCH GetObject2();
	void SetObject2(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRadialDimensions3D wrapper class

class IRadialDimensions3D : public COleDispatchDriver
{
public:
	IRadialDimensions3D() {}		// Calls COleDispatchDriver default constructor
	IRadialDimensions3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRadialDimensions3D(const IRadialDimensions3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRadialDimension3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRadialDimension3D wrapper class

class IRadialDimension3D : public COleDispatchDriver
{
public:
	IRadialDimension3D() {}		// Calls COleDispatchDriver default constructor
	IRadialDimension3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRadialDimension3D(const IRadialDimension3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	LPDISPATCH GetObject1();
	void SetObject1(LPDISPATCH newValue);
	LPDISPATCH GetPlaneObject();
	void SetPlaneObject(LPDISPATCH newValue);
	BOOL GetDimensionType();
	void SetDimensionType(BOOL bNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetSurfacePoint(double* X, double* Y, double* Z);
	BOOL SetSurfacePoint(double X, double Y, double Z);
	BOOL GetCenterPoint(double* X, double* Y, double* Z);
	BOOL SetCenterPoint(double X, double Y, double Z);
};
/////////////////////////////////////////////////////////////////////////////
// IDiametralDimensions3D wrapper class

class IDiametralDimensions3D : public COleDispatchDriver
{
public:
	IDiametralDimensions3D() {}		// Calls COleDispatchDriver default constructor
	IDiametralDimensions3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDiametralDimensions3D(const IDiametralDimensions3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetDiametralDimension3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IDiametralDimension3D wrapper class

class IDiametralDimension3D : public COleDispatchDriver
{
public:
	IDiametralDimension3D() {}		// Calls COleDispatchDriver default constructor
	IDiametralDimension3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDiametralDimension3D(const IDiametralDimension3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	LPDISPATCH GetObject1();
	void SetObject1(LPDISPATCH newValue);
	LPDISPATCH GetPlaneObject();
	void SetPlaneObject(LPDISPATCH newValue);
	BOOL GetDimensionType();
	void SetDimensionType(BOOL bNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetSurfacePoint(double* X, double* Y, double* Z);
	BOOL SetSurfacePoint(double X, double Y, double Z);
	BOOL GetCenterPoint(double* X, double* Y, double* Z);
	BOOL SetCenterPoint(double X, double Y, double Z);
};
/////////////////////////////////////////////////////////////////////////////
// IAngleDimensions3D wrapper class

class IAngleDimensions3D : public COleDispatchDriver
{
public:
	IAngleDimensions3D() {}		// Calls COleDispatchDriver default constructor
	IAngleDimensions3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAngleDimensions3D(const IAngleDimensions3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetAngleDimension3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IAngleDimension3D wrapper class

class IAngleDimension3D : public COleDispatchDriver
{
public:
	IAngleDimension3D() {}		// Calls COleDispatchDriver default constructor
	IAngleDimension3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAngleDimension3D(const IAngleDimension3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	LPDISPATCH GetObject1();
	void SetObject1(LPDISPATCH newValue);
	LPDISPATCH GetObject2();
	void SetObject2(LPDISPATCH newValue);
	double GetLength();
	void SetLength(double newValue);
	long GetDimensionType();
	void SetDimensionType(long nNewValue);
	BOOL Inverse();
	BOOL GetCenterPoint(double* X, double* Y, double* Z);
	BOOL SetCenterPoint(double X, double Y, double Z);
};
/////////////////////////////////////////////////////////////////////////////
// ILeaders3D wrapper class

class ILeaders3D : public COleDispatchDriver
{
public:
	ILeaders3D() {}		// Calls COleDispatchDriver default constructor
	ILeaders3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILeaders3D(const ILeaders3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLeader3D(const VARIANT& Index);
	LPDISPATCH Add(long DimType);
};
/////////////////////////////////////////////////////////////////////////////
// IBaseLeader3D wrapper class

class IBaseLeader3D : public COleDispatchDriver
{
public:
	IBaseLeader3D() {}		// Calls COleDispatchDriver default constructor
	IBaseLeader3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBaseLeader3D(const IBaseLeader3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	long GetBasePlane();
	void SetBasePlane(long nNewValue);
	LPDISPATCH GetPositionObject();
	void SetPositionObject(LPDISPATCH newValue);
	BOOL GetPosition(double* X, double* Y, double* Z);
	BOOL SetPosition(double X, double Y, double Z);
	long GetArrowType();
	void SetArrowType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRoughs3D wrapper class

class IRoughs3D : public COleDispatchDriver
{
public:
	IRoughs3D() {}		// Calls COleDispatchDriver default constructor
	IRoughs3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRoughs3D(const IRoughs3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRough3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRough3D wrapper class

class IRough3D : public COleDispatchDriver
{
public:
	IRough3D() {}		// Calls COleDispatchDriver default constructor
	IRough3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRough3D(const IRough3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	long GetBasePlane();
	void SetBasePlane(long nNewValue);
	LPDISPATCH GetPositionObject();
	void SetPositionObject(LPDISPATCH newValue);
	BOOL GetPosition(double* X, double* Y, double* Z);
	BOOL SetPosition(double X, double Y, double Z);
	LPDISPATCH GetBaseObject();
	BOOL GetBasePosition(double* X, double* Y, double* Z);
	BOOL SetBasePosition(double X, double Y, double Z, LPDISPATCH Object);
	BOOL GetShelfPosition(double* X, double* Y, double* Z);
	BOOL SetShelfPosition(double X, double Y, double Z);
};
/////////////////////////////////////////////////////////////////////////////
// IBases3D wrapper class

class IBases3D : public COleDispatchDriver
{
public:
	IBases3D() {}		// Calls COleDispatchDriver default constructor
	IBases3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBases3D(const IBases3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBase3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBase3D wrapper class

class IBase3D : public COleDispatchDriver
{
public:
	IBase3D() {}		// Calls COleDispatchDriver default constructor
	IBase3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBase3D(const IBase3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	long GetBasePlane();
	void SetBasePlane(long nNewValue);
	LPDISPATCH GetPositionObject();
	void SetPositionObject(LPDISPATCH newValue);
	BOOL GetPosition(double* X, double* Y, double* Z);
	BOOL SetPosition(double X, double Y, double Z);
	LPDISPATCH GetBaseObject();
	BOOL GetDrawType();
	void SetDrawType(BOOL bNewValue);
	BOOL GetAutoSorted();
	void SetAutoSorted(BOOL bNewValue);
	LPDISPATCH GetText();
	BOOL GetBranchBeginPoint(double* X, double* Y, double* Z);
	BOOL SetBranchBeginPoint(double X, double Y, double Z, LPDISPATCH Object);
	BOOL GetBranchEndPoint(double* X, double* Y, double* Z);
	BOOL SetBranchEndPoint(double X, double Y, double Z);
};
/////////////////////////////////////////////////////////////////////////////
// ITolerances3D wrapper class

class ITolerances3D : public COleDispatchDriver
{
public:
	ITolerances3D() {}		// Calls COleDispatchDriver default constructor
	ITolerances3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITolerances3D(const ITolerances3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetTolerance3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ITolerance3D wrapper class

class ITolerance3D : public COleDispatchDriver
{
public:
	ITolerance3D() {}		// Calls COleDispatchDriver default constructor
	ITolerance3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITolerance3D(const ITolerance3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	long GetBasePlane();
	void SetBasePlane(long nNewValue);
	LPDISPATCH GetPositionObject();
	void SetPositionObject(LPDISPATCH newValue);
	BOOL GetPosition(double* X, double* Y, double* Z);
	BOOL SetPosition(double X, double Y, double Z);
	BOOL GetArrowType(long Index);
	void SetArrowType(long Index, BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILineDimension3D wrapper class

class ILineDimension3D : public COleDispatchDriver
{
public:
	ILineDimension3D() {}		// Calls COleDispatchDriver default constructor
	ILineDimension3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILineDimension3D(const ILineDimension3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	double GetLength();
	void SetLength(double newValue);
	LPDISPATCH GetObject1();
	void SetObject1(LPDISPATCH newValue);
	LPDISPATCH GetObject2();
	void SetObject2(LPDISPATCH newValue);
	LPDISPATCH GetPlane();
	void SetPlane(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICurveVertexParam wrapper class

class ICurveVertexParam : public COleDispatchDriver
{
public:
	ICurveVertexParam() {}		// Calls COleDispatchDriver default constructor
	ICurveVertexParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICurveVertexParam(const ICurveVertexParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetBuildingType(long nNewValue);
	long GetBuildingType();
	void SetBuildingObject(LPDISPATCH newValue);
	LPDISPATCH GetBuildingObject();
	void SetAssociationVertex(LPDISPATCH newValue);
	LPDISPATCH GetAssociationVertex();
	LPDISPATCH GetVertex();
	long GetIndex();
	LPDISPATCH GetPointParameters();
	void SetPointType(long nNewValue);
	long GetPointType();
	BOOL GetParamVertex(double* X, double* Y, double* Z, double* Value);
	BOOL SetParamVertex(double X, double Y, double Z, double Value);
	BOOL SetParamByVertex(LPDISPATCH Obj, double Value);
	BOOL GetParamByDistance(double* Distance, double* Value);
	BOOL SetParamByDistance(double Distance, double Value);
	LPDISPATCH GetVector3D();
};
/////////////////////////////////////////////////////////////////////////////
// ISplines3D wrapper class

class ISplines3D : public COleDispatchDriver
{
public:
	ISplines3D() {}		// Calls COleDispatchDriver default constructor
	ISplines3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISplines3D(const ISplines3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSpline3D(const VARIANT& Index);
	LPDISPATCH Add();
	VARIANT Convert(const VARIANT& Objects);
};
/////////////////////////////////////////////////////////////////////////////
// ISpline3D wrapper class

class ISpline3D : public COleDispatchDriver
{
public:
	ISpline3D() {}		// Calls COleDispatchDriver default constructor
	ISpline3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpline3D(const ISpline3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	void SetSplineOnPoles(BOOL bNewValue);
	BOOL GetSplineOnPoles();
	void SetSplineOrder(long nNewValue);
	long GetSplineOrder();
	long GetVertexCount();
	LPDISPATCH GetVertexParams(long Index);
	LPDISPATCH AddVertex(long Index);
	BOOL DeleteVertex(long Index);
	BOOL Flush();
	BOOL ReadFromFile(LPCTSTR FileName);
	BOOL WriteToFile(LPCTSTR FileName);
	VARIANT GetVertexParamsArray();
	BOOL GetVertexCoordinatesArray(VARIANT* Coordinates, VARIANT* Weights);
	void SetKnots(const VARIANT& newValue);
	VARIANT GetKnots();
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCoordinateSystems wrapper class

class ILocalCoordinateSystems : public COleDispatchDriver
{
public:
	ILocalCoordinateSystems() {}		// Calls COleDispatchDriver default constructor
	ILocalCoordinateSystems(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCoordinateSystems(const ILocalCoordinateSystems& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLocalCoordinateSystem(const VARIANT& Index);
	LPDISPATCH Add();
	LPDISPATCH GetCurrent();
	BOOL SetCurrent(LPDISPATCH Object);
};
/////////////////////////////////////////////////////////////////////////////
// IAuxiliaryGeomContainer wrapper class

class IAuxiliaryGeomContainer : public COleDispatchDriver
{
public:
	IAuxiliaryGeomContainer() {}		// Calls COleDispatchDriver default constructor
	IAuxiliaryGeomContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAuxiliaryGeomContainer(const IAuxiliaryGeomContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetLocalCoordinateSystems();
	LPDISPATCH GetSplines3D();
	LPDISPATCH GetPolyLines();
	LPDISPATCH GetControlPoints();
	LPDISPATCH GetConjunctivePoints();
	LPDISPATCH GetSplitLines();
	LPDISPATCH GetSurfacesIntersectionCurves();
	LPDISPATCH GetEquidistants3D();
	LPDISPATCH GetTrimmedCurves();
	LPDISPATCH GetConnectCurves();
	LPDISPATCH GetFilletCurves();
	LPDISPATCH GetArcs3D();
};
/////////////////////////////////////////////////////////////////////////////
// IPolyLines wrapper class

class IPolyLines : public COleDispatchDriver
{
public:
	IPolyLines() {}		// Calls COleDispatchDriver default constructor
	IPolyLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPolyLines(const IPolyLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetPolyLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IPolyLine wrapper class

class IPolyLine : public COleDispatchDriver
{
public:
	IPolyLine() {}		// Calls COleDispatchDriver default constructor
	IPolyLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPolyLine(const IPolyLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	void SetVertexVisible(BOOL bNewValue);
	BOOL GetVertexVisible();
	long GetVertexCount();
	VARIANT GetEdges();
	LPDISPATCH GetVertexParams(long Index);
	BOOL ReadFromFile(LPCTSTR FileName);
	BOOL WriteToFile(LPCTSTR FileName);
	LPDISPATCH AddVertex(long Index);
	BOOL DeleteVertex(long Index);
	BOOL Flush();
	VARIANT GetVertexParamsArray();
	BOOL GetVertexCoordinatesArray(VARIANT* Coordinates, VARIANT* Radiuses);
};
/////////////////////////////////////////////////////////////////////////////
// IControlPoints wrapper class

class IControlPoints : public COleDispatchDriver
{
public:
	IControlPoints() {}		// Calls COleDispatchDriver default constructor
	IControlPoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IControlPoints(const IControlPoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetControlPoint(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IControlPoint wrapper class

class IControlPoint : public COleDispatchDriver
{
public:
	IControlPoint() {}		// Calls COleDispatchDriver default constructor
	IControlPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IControlPoint(const IControlPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetZ(double newValue);
	double GetZ();
	BOOL SetAssociationObject(LPDISPATCH NewVal);
	LPDISPATCH GetAssociationObject();
	void SetSymbol(long nNewValue);
	long GetSymbol();
	void SetParameterType(long nNewValue);
	long GetParameterType();
	LPDISPATCH GetParameters();
};
/////////////////////////////////////////////////////////////////////////////
// IConjunctivePoints wrapper class

class IConjunctivePoints : public COleDispatchDriver
{
public:
	IConjunctivePoints() {}		// Calls COleDispatchDriver default constructor
	IConjunctivePoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConjunctivePoints(const IConjunctivePoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetConjunctivePoint(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IConjunctivePoint wrapper class

class IConjunctivePoint : public COleDispatchDriver
{
public:
	IConjunctivePoint() {}		// Calls COleDispatchDriver default constructor
	IConjunctivePoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConjunctivePoint(const IConjunctivePoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetZ(double newValue);
	double GetZ();
	BOOL SetAssociationObject(LPDISPATCH NewVal);
	LPDISPATCH GetAssociationObject();
	void SetSymbol(long nNewValue);
	long GetSymbol();
	void SetParameterType(long nNewValue);
	long GetParameterType();
	LPDISPATCH GetParameters();
	BOOL SetDirectionObject1(LPDISPATCH NewVal);
	LPDISPATCH GetDirectionObject1();
	BOOL SetDirectionObject2(LPDISPATCH NewVal);
	LPDISPATCH GetDirectionObject2();
	BOOL GetDirection1();
	void SetDirection1(BOOL bNewValue);
	BOOL GetDirection2();
	void SetDirection2(BOOL bNewValue);
	LPDISPATCH GetAxis(long Val);
	LPDISPATCH GetVector3D(BOOL First);
};
/////////////////////////////////////////////////////////////////////////////
// ISplitLines wrapper class

class ISplitLines : public COleDispatchDriver
{
public:
	ISplitLines() {}		// Calls COleDispatchDriver default constructor
	ISplitLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISplitLines(const ISplitLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSplitLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISplitLine wrapper class

class ISplitLine : public COleDispatchDriver
{
public:
	ISplitLine() {}		// Calls COleDispatchDriver default constructor
	ISplitLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISplitLine(const ISplitLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetSketch();
	VARIANT GetFaces();
	void SetFaces(const VARIANT& newValue);
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetCutObjects(const VARIANT& newValue);
	VARIANT GetCutObjects();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfacesIntersectionCurves wrapper class

class ISurfacesIntersectionCurves : public COleDispatchDriver
{
public:
	ISurfacesIntersectionCurves() {}		// Calls COleDispatchDriver default constructor
	ISurfacesIntersectionCurves(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfacesIntersectionCurves(const ISurfacesIntersectionCurves& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSurfacesIntersectionCurve(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfacesIntersectionCurve wrapper class

class ISurfacesIntersectionCurve : public COleDispatchDriver
{
public:
	ISurfacesIntersectionCurve() {}		// Calls COleDispatchDriver default constructor
	ISurfacesIntersectionCurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfacesIntersectionCurve(const ISurfacesIntersectionCurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	BOOL SetObjects(const VARIANT& ObjectsArray1, const VARIANT& ObjectsArray2);
	BOOL GetObjects(VARIANT* ObjectsArray1, VARIANT* ObjectsArray2);
	BOOL AddObjects(BOOL ForArray1, const VARIANT& Objects);
	BOOL Clear(BOOL ForArray1);
	long GetObjectsCount(BOOL ForArray1);
	LPDISPATCH GetObject(BOOL ForArray1, long Index);
	BOOL GetAutoCheck();
	void SetAutoCheck(BOOL bNewValue);
	VARIANT GetEdgesChecks();
	void SetEdgesChecks(const VARIANT& newValue);
	long GetEdgesArraysCount();
	VARIANT GetEdges(long Index);
	BOOL GetEdgesCheck(long EdgesArrayIndex);
	void SetEdgesCheck(long EdgesArrayIndex, BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IEquidistants3D wrapper class

class IEquidistants3D : public COleDispatchDriver
{
public:
	IEquidistants3D() {}		// Calls COleDispatchDriver default constructor
	IEquidistants3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquidistants3D(const IEquidistants3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetEquidistant3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IEquidistant3D wrapper class

class IEquidistant3D : public COleDispatchDriver
{
public:
	IEquidistant3D() {}		// Calls COleDispatchDriver default constructor
	IEquidistant3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquidistant3D(const IEquidistant3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	void SetOnFace(BOOL bNewValue);
	BOOL GetOnFace();
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	void SetAngle(double newValue);
	double GetAngle();
	void SetDistance(double newValue);
	double GetDistance();
	void SetCutMode(long nNewValue);
	long GetCutMode();
	void SetKeepRadius(BOOL bNewValue);
	BOOL GetKeepRadius();
	void SetDirFromBegin(BOOL bNewValue);
	BOOL GetDirFromBegin();
	LPDISPATCH GetVector3D();
};
/////////////////////////////////////////////////////////////////////////////
// ITrimmedCurves wrapper class

class ITrimmedCurves : public COleDispatchDriver
{
public:
	ITrimmedCurves() {}		// Calls COleDispatchDriver default constructor
	ITrimmedCurves(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITrimmedCurves(const ITrimmedCurves& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetTrimmedCurve(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ITrimmedCurve wrapper class

class ITrimmedCurve : public COleDispatchDriver
{
public:
	ITrimmedCurve() {}		// Calls COleDispatchDriver default constructor
	ITrimmedCurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITrimmedCurve(const ITrimmedCurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetCurve(LPDISPATCH newValue);
	LPDISPATCH GetCurve();
	void SetCutObject1(LPDISPATCH newValue);
	LPDISPATCH GetCutObject1();
	void SetCutObject2(LPDISPATCH newValue);
	LPDISPATCH GetCutObject2();
	void SetUseTwoCutObjecs(BOOL bNewValue);
	BOOL GetUseTwoCutObjecs();
	void SetSense(BOOL bNewValue);
	BOOL GetSense();
	void SetBeginParameter(double newValue);
	double GetBeginParameter();
	void SetEndParameter(double newValue);
	double GetEndParameter();
	BOOL GetIntersectParameters(VARIANT* CutPoints1, VARIANT* CutPoints2);
};
/////////////////////////////////////////////////////////////////////////////
// IConnectCurves wrapper class

class IConnectCurves : public COleDispatchDriver
{
public:
	IConnectCurves() {}		// Calls COleDispatchDriver default constructor
	IConnectCurves(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConnectCurves(const IConnectCurves& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetConnectCurve(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IConnectCurve wrapper class

class IConnectCurve : public COleDispatchDriver
{
public:
	IConnectCurve() {}		// Calls COleDispatchDriver default constructor
	IConnectCurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConnectCurve(const IConnectCurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetCurve1(LPDISPATCH newValue);
	LPDISPATCH GetCurve1();
	void SetCurve2(LPDISPATCH newValue);
	LPDISPATCH GetCurve2();
	void SetCurve1ConnectType(long nNewValue);
	long GetCurve1ConnectType();
	void SetCurve2ConnectType(long nNewValue);
	long GetCurve2ConnectType();
	void SetCurve1ConnectVertex(BOOL bNewValue);
	BOOL GetCurve1ConnectVertex();
	void SetCurve2ConnectVertex(BOOL bNewValue);
	BOOL GetCurve2ConnectVertex();
	void SetTension(double newValue);
	double GetTension();
};
/////////////////////////////////////////////////////////////////////////////
// IFilletCurves wrapper class

class IFilletCurves : public COleDispatchDriver
{
public:
	IFilletCurves() {}		// Calls COleDispatchDriver default constructor
	IFilletCurves(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFilletCurves(const IFilletCurves& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetFilletCurve(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IFilletCurve wrapper class

class IFilletCurve : public COleDispatchDriver
{
public:
	IFilletCurve() {}		// Calls COleDispatchDriver default constructor
	IFilletCurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFilletCurve(const IFilletCurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetCurve1(LPDISPATCH newValue);
	LPDISPATCH GetCurve1();
	void SetCurve2(LPDISPATCH newValue);
	LPDISPATCH GetCurve2();
	void SetTrimCurve1(BOOL bNewValue);
	BOOL GetTrimCurve1();
	void SetTrimCurve2(BOOL bNewValue);
	BOOL GetTrimCurve2();
	BOOL GetDirection();
	void SetDirection(BOOL bNewValue);
	void SetRadius(double newValue);
	double GetRadius();
	BOOL GetCurve1CutPoint(double* X, double* Y, double* Z);
	BOOL SetCurve1CutPoint(double X, double Y, double Z);
	BOOL GetCurve2CutPoint(double* X, double* Y, double* Z);
	BOOL SetCurve2CutPoint(double X, double Y, double Z);
};
/////////////////////////////////////////////////////////////////////////////
// IArcs3D wrapper class

class IArcs3D : public COleDispatchDriver
{
public:
	IArcs3D() {}		// Calls COleDispatchDriver default constructor
	IArcs3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArcs3D(const IArcs3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetArc3D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IArc3D wrapper class

class IArc3D : public COleDispatchDriver
{
public:
	IArc3D() {}		// Calls COleDispatchDriver default constructor
	IArc3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArc3D(const IArc3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetBuildingType(long nNewValue);
	long GetBuildingType();
	void SetRadius(double newValue);
	double GetRadius();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
	BOOL GetPoint(long Index, double* X, double* Y, double* Z);
	BOOL SetPoint(long Index, double X, double Y, double Z);
	void SetAssociationObject(long Index, LPDISPATCH newValue);
	LPDISPATCH GetAssociationObject(long Index);
	void SetBuildingObject(LPDISPATCH newValue);
	LPDISPATCH GetBuildingObject();
	LPDISPATCH GetBuildingVectorParameters();
	void SetDirectionPointIndex(long nNewValue);
	long GetDirectionPointIndex();
	void SetPointType(long Index, long nNewValue);
	long GetPointType(long Index);
	LPDISPATCH GetPointParameters(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCSAxesDirectionParam wrapper class

class ILocalCSAxesDirectionParam : public COleDispatchDriver
{
public:
	ILocalCSAxesDirectionParam() {}		// Calls COleDispatchDriver default constructor
	ILocalCSAxesDirectionParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCSAxesDirectionParam(const ILocalCSAxesDirectionParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetDirectingObject(long Axis, LPDISPATCH Object);
	LPDISPATCH GetDirectingObject(long Axis);
	BOOL RotateAxis(long Axis);
	void SetAngleByOwnAxis(long Axis, double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCSEulerParam wrapper class

class ILocalCSEulerParam : public COleDispatchDriver
{
public:
	ILocalCSEulerParam() {}		// Calls COleDispatchDriver default constructor
	ILocalCSEulerParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCSEulerParam(const ILocalCSEulerParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetNutationAngle(double newValue);
	double GetNutationAngle();
	void SetPrecessionAngle(double newValue);
	double GetPrecessionAngle();
	void SetRotationAngle(double newValue);
	double GetRotationAngle();
};
/////////////////////////////////////////////////////////////////////////////
// IRoughParams wrapper class

class IRoughParams : public COleDispatchDriver
{
public:
	IRoughParams() {}		// Calls COleDispatchDriver default constructor
	IRoughParams(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRoughParams(const IRoughParams& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSignType();
	void SetSignType(long nNewValue);
	LPDISPATCH GetRoughParamText();
	LPDISPATCH GetProcessText();
	LPDISPATCH GetBaseLengthText();
	LPDISPATCH GetTrendText();
	BOOL GetProcessingByContour();
	void SetProcessingByContour(BOOL bNewValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	double GetLeaderLength();
	void SetLeaderLength(double newValue);
	double GetLeaderAngle();
	void SetLeaderAngle(double newValue);
	long GetArrowType();
	void SetArrowType(long nNewValue);
	BOOL GetArrowInside();
	void SetArrowInside(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBranchs3D wrapper class

class IBranchs3D : public COleDispatchDriver
{
public:
	IBranchs3D() {}		// Calls COleDispatchDriver default constructor
	IBranchs3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBranchs3D(const IBranchs3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetBranchCount();
	BOOL GetBranchBeginPoint(double* X, double* Y, double* Z);
	BOOL SetBranchBeginPoint(double X, double Y, double Z);
	BOOL GetBranchEndPoint(long Index, double* X, double* Y, double* Z);
	BOOL SetBranchEndPoint(long Index, double X, double Y, double Z);
	void SetBranchPoints(long Index, const VARIANT& newValue);
	VARIANT GetBranchPoints(long Index);
	long GetBranchPointsCount(long Index);
	BOOL AddBranch(const VARIANT& Points, LPDISPATCH Object);
	BOOL AddBranchByPoint(double X, double Y, double Z, LPDISPATCH Object);
	BOOL DeleteBranch(long Index);
	LPDISPATCH GetBranchObject(long Index);
	VARIANT GetBranchObjects();
	VARIANT GetBranchEndPoints();
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCSOrientByObjectParam wrapper class

class ILocalCSOrientByObjectParam : public COleDispatchDriver
{
public:
	ILocalCSOrientByObjectParam() {}		// Calls COleDispatchDriver default constructor
	ILocalCSOrientByObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCSOrientByObjectParam(const ILocalCSOrientByObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	BOOL SetOrientationObject(LPDISPATCH Object);
	LPDISPATCH GetOrientationObject();
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCSObject wrapper class

class ILocalCSObject : public COleDispatchDriver
{
public:
	ILocalCSObject() {}		// Calls COleDispatchDriver default constructor
	ILocalCSObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCSObject(const ILocalCSObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetModelObjectParamType(long nNewValue);
	long GetModelObjectParamType();
	LPDISPATCH GetLocalCoordinateSystem();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceContainer wrapper class

class ISurfaceContainer : public COleDispatchDriver
{
public:
	ISurfaceContainer() {}		// Calls COleDispatchDriver default constructor
	ISurfaceContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceContainer(const ISurfaceContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSurfacePatches();
	LPDISPATCH GetFaceRemovers();
	LPDISPATCH GetSurfaceSewers();
	LPDISPATCH GetNurbsSurfaces();
	LPDISPATCH GetRuledSurfaces();
	LPDISPATCH GetEquidistantSurfaces();
	LPDISPATCH GetTrimmedSurfaces();
	LPDISPATCH GetExtensionSurfaces();
	LPDISPATCH GetExtrusionSurfaces();
	LPDISPATCH GetRotatedSurfaces();
	LPDISPATCH GetMeshPointsSurfaces();
	LPDISPATCH GetCloudPointsSurfaces();
	LPDISPATCH GetImportedSurfaces();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfacePatches wrapper class

class ISurfacePatches : public COleDispatchDriver
{
public:
	ISurfacePatches() {}		// Calls COleDispatchDriver default constructor
	ISurfacePatches(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfacePatches(const ISurfacePatches& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSurfacePatch(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfacePatch wrapper class

class ISurfacePatch : public COleDispatchDriver
{
public:
	ISurfacePatch() {}		// Calls COleDispatchDriver default constructor
	ISurfacePatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfacePatch(const ISurfacePatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IFaceRemovers wrapper class

class IFaceRemovers : public COleDispatchDriver
{
public:
	IFaceRemovers() {}		// Calls COleDispatchDriver default constructor
	IFaceRemovers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFaceRemovers(const IFaceRemovers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetFaceRemover(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IFaceRemover wrapper class

class IFaceRemover : public COleDispatchDriver
{
public:
	IFaceRemover() {}		// Calls COleDispatchDriver default constructor
	IFaceRemover(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFaceRemover(const IFaceRemover& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	VARIANT GetFaces();
	void SetFaces(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceSewers wrapper class

class ISurfaceSewers : public COleDispatchDriver
{
public:
	ISurfaceSewers() {}		// Calls COleDispatchDriver default constructor
	ISurfaceSewers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceSewers(const ISurfaceSewers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetSurfaceSewer(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceSewer wrapper class

class ISurfaceSewer : public COleDispatchDriver
{
public:
	ISurfaceSewer() {}		// Calls COleDispatchDriver default constructor
	ISurfaceSewer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceSewer(const ISurfaceSewer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	VARIANT GetShells();
	void SetShells(const VARIANT& newValue);
	double GetPrecision();
	void SetPrecision(double newValue);
	BOOL GetCreateBody();
	void SetCreateBody(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// INurbsSurfaces wrapper class

class INurbsSurfaces : public COleDispatchDriver
{
public:
	INurbsSurfaces() {}		// Calls COleDispatchDriver default constructor
	INurbsSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	INurbsSurfaces(const INurbsSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetNurbsSurface(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// INurbsSurface wrapper class

class INurbsSurface : public COleDispatchDriver
{
public:
	INurbsSurface() {}		// Calls COleDispatchDriver default constructor
	INurbsSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	INurbsSurface(const INurbsSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	BOOL GetNurbsParams(BOOL ClosedV, BOOL ClosedU, long* DegreeV, long* DegreeU, long* NPV, long* NPU, VARIANT* Points, VARIANT* Weights, VARIANT* KnotsV, VARIANT* KnotsU);
	BOOL SetNurbsParams(BOOL ClosedV, BOOL ClosedU, long DegreeV, long DegreeU, long NPV, long NPU, const VARIANT& Points, const VARIANT& Weights, const VARIANT& KnotsV, const VARIANT& KnotsU);
	BOOL InitParamByFace(LPDISPATCH Face);
	BOOL GetClosedU();
	void SetClosedU(BOOL bNewValue);
	BOOL GetClosedV();
	void SetClosedV(BOOL bNewValue);
	long GetBoundaryCount();
	BOOL AddBoundary(BOOL UV, BOOL Closed, long Degree, const VARIANT& Points, const VARIANT& Weights, const VARIANT& Knots, double TMin, double TMax);
	BOOL GetBoundary(BOOL UV, BOOL Closed, long BoundaryIndex, long* Degree, VARIANT* Points, VARIANT* Weights, VARIANT* Knots, double* TMin, double* TMax);
	BOOL DeleteBoundary(long BoundaryIndex);
};
/////////////////////////////////////////////////////////////////////////////
// IRuledSurfaces wrapper class

class IRuledSurfaces : public COleDispatchDriver
{
public:
	IRuledSurfaces() {}		// Calls COleDispatchDriver default constructor
	IRuledSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRuledSurfaces(const IRuledSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRuledSurface(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRuledSurface wrapper class

class IRuledSurface : public COleDispatchDriver
{
public:
	IRuledSurface() {}		// Calls COleDispatchDriver default constructor
	IRuledSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRuledSurface(const IRuledSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetCurves1(const VARIANT& newValue);
	VARIANT GetCurves1();
	void SetCurves2(const VARIANT& newValue);
	VARIANT GetCurves2();
	void SetCheckSelfIntersection(BOOL bNewValue);
	BOOL GetCheckSelfIntersection();
	void SetAutoSegmentation(BOOL bNewValue);
	BOOL GetAutoSegmentation();
	BOOL AddNewEdge(long IndexAt);
	BOOL DeleteEdge(long Index);
	long GetEdgesCount();
	BOOL SetEdgePointParam(long EdgeIndex, BOOL StartPoint, double X, double Y, double Z, double* T, LPDISPATCH Segment, LPDISPATCH AssociateVertex);
	BOOL GetEdgePointParam(long EdgeIndex, BOOL StartPoint, double* X, double* Y, double* Z, double* T, LPDISPATCH* Segment, LPDISPATCH* AssociateVertex);
	BOOL GetEdgePointParams(VARIANT* Points1, VARIANT* T1, VARIANT* Segments1, VARIANT* AssociateVertexes1, VARIANT* Points2, VARIANT* T2, VARIANT* Segments2, VARIANT* AssociateVertexes2);
};
/////////////////////////////////////////////////////////////////////////////
// IEquidistantSurfaces wrapper class

class IEquidistantSurfaces : public COleDispatchDriver
{
public:
	IEquidistantSurfaces() {}		// Calls COleDispatchDriver default constructor
	IEquidistantSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquidistantSurfaces(const IEquidistantSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetEquidistantSurface(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IEquidistantSurface wrapper class

class IEquidistantSurface : public COleDispatchDriver
{
public:
	IEquidistantSurface() {}		// Calls COleDispatchDriver default constructor
	IEquidistantSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquidistantSurface(const IEquidistantSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetBaseSurface(const VARIANT& newValue);
	VARIANT GetBaseSurface();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetDistance(double newValue);
	double GetDistance();
};
/////////////////////////////////////////////////////////////////////////////
// ITrimmedSurfaces wrapper class

class ITrimmedSurfaces : public COleDispatchDriver
{
public:
	ITrimmedSurfaces() {}		// Calls COleDispatchDriver default constructor
	ITrimmedSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITrimmedSurfaces(const ITrimmedSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetTrimmedSurface(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ITrimmedSurface wrapper class

class ITrimmedSurface : public COleDispatchDriver
{
public:
	ITrimmedSurface() {}		// Calls COleDispatchDriver default constructor
	ITrimmedSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITrimmedSurface(const ITrimmedSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetSurface(const VARIANT& newValue);
	VARIANT GetSurface();
	void SetCutObject(const VARIANT& newValue);
	VARIANT GetCutObject();
	void SetSense(BOOL bNewValue);
	BOOL GetSense();
};
/////////////////////////////////////////////////////////////////////////////
// IExtensionSurfaces wrapper class

class IExtensionSurfaces : public COleDispatchDriver
{
public:
	IExtensionSurfaces() {}		// Calls COleDispatchDriver default constructor
	IExtensionSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtensionSurfaces(const IExtensionSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetExtensionSurface(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IExtensionSurface wrapper class

class IExtensionSurface : public COleDispatchDriver
{
public:
	IExtensionSurface() {}		// Calls COleDispatchDriver default constructor
	IExtensionSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtensionSurface(const IExtensionSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	void SetExtensionType(long nNewValue);
	long GetExtensionType();
	void SetExtensionLimitType(long nNewValue);
	long GetExtensionLimitType();
	void SetLength(double newValue);
	double GetLength();
	void SetSideEdges(BOOL bNewValue);
	BOOL GetSideEdges();
	void SetDirObject(LPDISPATCH newValue);
	LPDISPATCH GetDirObject();
	void SetTargetObject(LPDISPATCH newValue);
	LPDISPATCH GetTargetObject();
	void SetSense(BOOL bNewValue);
	BOOL GetSense();
	LPDISPATCH GetBuildingVectorParameters();
};
/////////////////////////////////////////////////////////////////////////////
// IMeshPointsSurfaces wrapper class

class IMeshPointsSurfaces : public COleDispatchDriver
{
public:
	IMeshPointsSurfaces() {}		// Calls COleDispatchDriver default constructor
	IMeshPointsSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMeshPointsSurfaces(const IMeshPointsSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetMeshPointsSurface(const VARIANT& Index);
	LPDISPATCH Add();
	LPDISPATCH Load(LPCTSTR FileName);
};
/////////////////////////////////////////////////////////////////////////////
// IMeshPointsSurface wrapper class

class IMeshPointsSurface : public COleDispatchDriver
{
public:
	IMeshPointsSurface() {}		// Calls COleDispatchDriver default constructor
	IMeshPointsSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMeshPointsSurface(const IMeshPointsSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	long GetBuildingType();
	void SetBuildingType(long nNewValue);
	BOOL GetParams(BOOL* ClosedV, BOOL* ClosedU, long* DegreeV, long* DegreeU, long* PointsVCount, long* PointsUCount, VARIANT* Points, VARIANT* Weights);
	BOOL SetParams(BOOL ClosedV, BOOL ClosedU, long DegreeV, long DegreeU, long PointsVCount, long PointsUCount, const VARIANT& Points, const VARIANT& Weights);
	BOOL InitParamByFace(LPDISPATCH Face);
	BOOL GetClosedU();
	void SetClosedU(BOOL bNewValue);
	BOOL GetClosedV();
	void SetClosedV(BOOL bNewValue);
	long GetDegreeU();
	void SetDegreeU(long nNewValue);
	long GetDegreeV();
	void SetDegreeV(long nNewValue);
	BOOL BeginPointsSeries(BOOL UV, long IndexAt);
	LPDISPATCH AddPoint(double X, double Y, double Z, double Weight, long PointType, LPDISPATCH AssociationObject);
	BOOL EndPointsSeries();
	BOOL AddPointsSeries(BOOL UV, long IndexAt, const VARIANT& Points, const VARIANT& Weights);
	BOOL DeletePointsSeries(BOOL UV, long Index);
	BOOL ClearPointsSeries();
	long GetPointsVCount();
	long GetPointsUCount();
	void SetPointType(long UIndex, long VIndex, long nNewValue);
	long GetPointType(long UIndex, long VIndex);
	LPDISPATCH GetPointParameters(long UIndex, long VIndex);
	BOOL GetPoint(long UIndex, long VIndex, double* X, double* Y, double* Z, double* Weight);
	BOOL SetPoint(long UIndex, long VIndex, double X, double Y, double Z, double Weight);
	BOOL GetCheckSelfIntersection();
	void SetCheckSelfIntersection(BOOL bNewValue);
	void SetAssociationObject(long UIndex, long VIndex, LPDISPATCH newValue);
	LPDISPATCH GetAssociationObject(long UIndex, long VIndex);
};
/////////////////////////////////////////////////////////////////////////////
// ICloudPointsSurfaces wrapper class

class ICloudPointsSurfaces : public COleDispatchDriver
{
public:
	ICloudPointsSurfaces() {}		// Calls COleDispatchDriver default constructor
	ICloudPointsSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICloudPointsSurfaces(const ICloudPointsSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetCloudPointsSurface(const VARIANT& Index);
	LPDISPATCH Add();
	LPDISPATCH Load(LPCTSTR FileName);
};
/////////////////////////////////////////////////////////////////////////////
// ICloudPointsSurface wrapper class

class ICloudPointsSurface : public COleDispatchDriver
{
public:
	ICloudPointsSurface() {}		// Calls COleDispatchDriver default constructor
	ICloudPointsSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICloudPointsSurface(const ICloudPointsSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	long GetBuildingType();
	void SetBuildingType(long nNewValue);
	VARIANT GetPoints();
	void SetPoints(const VARIANT& newValue);
	long GetDegree();
	void SetDegree(long nNewValue);
	long GetCloudType();
	void SetCloudType(long nNewValue);
	LPDISPATCH GetCloudLCS();
	void SetCloudLCS(LPDISPATCH newValue);
	BOOL GetFixedPosition();
	void SetFixedPosition(BOOL bNewValue);
	LPDISPATCH AddPoint(double X, double Y, double Z, long PVal, LPDISPATCH AssociationObject);
	long GetPointsCount();
	void SetPointType(long Index, long nNewValue);
	long GetPointType(long Index);
	LPDISPATCH GetPointParameters(long Index);
	void SetAssociationObject(long Index, LPDISPATCH newValue);
	LPDISPATCH GetAssociationObject(long Index);
	BOOL GetCheckSelfIntersection();
	void SetCheckSelfIntersection(BOOL bNewValue);
	BOOL ClearPoints();
	BOOL AddPoints(const VARIANT& Points);
	BOOL GetPoint(long Index, double* X, double* Y, double* Z);
	BOOL SetPoint(long Index, double X, double Y, double Z);
	BOOL DeletePoint(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IImportedSurfaces wrapper class

class IImportedSurfaces : public COleDispatchDriver
{
public:
	IImportedSurfaces() {}		// Calls COleDispatchDriver default constructor
	IImportedSurfaces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IImportedSurfaces(const IImportedSurfaces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetImportedSurface(const VARIANT& Index);
	LPDISPATCH Add();
	VARIANT Load(LPCTSTR FileName, BOOL SewSurfaces);
};
/////////////////////////////////////////////////////////////////////////////
// IImportedSurface wrapper class

class IImportedSurface : public COleDispatchDriver
{
public:
	IImportedSurface() {}		// Calls COleDispatchDriver default constructor
	IImportedSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IImportedSurface(const IImportedSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	VARIANT GetPoints(long* UPCount, long* VPCount);
	BOOL SetPoints(long UPCount, long VPCount, const VARIANT& Points);
	BOOL ClearPointsSeries();
	BOOL BeginPointsSeries(BOOL UV, long IndexAt);
	BOOL AddPoint(double X, double Y, double Z);
	BOOL EndPointsSeries();
	BOOL AddPointsSeries(BOOL UV, long IndexAt, const VARIANT& arr);
	long GetPointsVCount();
	long GetPointsUCount();
	BOOL GetPoint(long UIndex, long VIndex, double* X, double* Y, double* Z);
	BOOL SetPoint(long UIndex, long VIndex, double X, double Y, double Z);
	BOOL DeletePointsSeries(BOOL UV, long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IColorParam7 wrapper class

class IColorParam7 : public COleDispatchDriver
{
public:
	IColorParam7() {}		// Calls COleDispatchDriver default constructor
	IColorParam7(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IColorParam7(const IColorParam7& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetUseColor();
	void SetUseColor(long nNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	double GetAmbient();
	void SetAmbient(double newValue);
	double GetDiffuse();
	void SetDiffuse(double newValue);
	double GetSpecularity();
	void SetSpecularity(double newValue);
	double GetShininess();
	void SetShininess(double newValue);
	double GetTransparency();
	void SetTransparency(double newValue);
	double GetEmission();
	void SetEmission(double newValue);
	BOOL GetAdvancedColor(long* Color, double* Ambient, double* Diffuse, double* Specularity, double* Shininess, double* Transparency, double* Emission);
	BOOL SetAdvancedColor(long Color, double Ambient, double Diffuse, double Specularity, double Shininess, double Transparency, double Emission);
};
/////////////////////////////////////////////////////////////////////////////
// ILinearPattern wrapper class

class ILinearPattern : public COleDispatchDriver
{
public:
	ILinearPattern() {}		// Calls COleDispatchDriver default constructor
	ILinearPattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILinearPattern(const ILinearPattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetAxis1(LPDISPATCH newValue);
	LPDISPATCH GetAxis1();
	LPDISPATCH GetVector1();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetDirection1(BOOL bNewValue);
	BOOL GetDirection1();
	void SetStep1(double newValue);
	double GetStep1();
	void SetBoundaryInstancesStepFactor1(BOOL bNewValue);
	BOOL GetBoundaryInstancesStepFactor1();
	void SetCount1(long nNewValue);
	long GetCount1();
	void SetAxis2(LPDISPATCH newValue);
	LPDISPATCH GetAxis2();
	LPDISPATCH GetVector2();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetDirection2(BOOL bNewValue);
	BOOL GetDirection2();
	void SetStep2(double newValue);
	double GetStep2();
	void SetBoundaryInstancesStepFactor2(BOOL bNewValue);
	BOOL GetBoundaryInstancesStepFactor2();
	void SetCount2(long nNewValue);
	long GetCount2();
	void SetBuildingType(long nNewValue);
	long GetBuildingType();
	BOOL SetBaseExemplarPlacement(long Index1, long Index2);
	BOOL GetBaseExemplarPlacement(long* Index1, long* Index2);
};
/////////////////////////////////////////////////////////////////////////////
// IPointDrivenPattern wrapper class

class IPointDrivenPattern : public COleDispatchDriver
{
public:
	IPointDrivenPattern() {}		// Calls COleDispatchDriver default constructor
	IPointDrivenPattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPointDrivenPattern(const IPointDrivenPattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetDrivenObjects(const VARIANT& newValue);
	VARIANT GetDrivenObjects();
	BOOL IsSuitableDrivenObject(LPDISPATCH Object);
	BOOL ClearDrivenObjects();
	void SetProjectionPoints(BOOL bNewValue);
	BOOL GetProjectionPoints();
};
/////////////////////////////////////////////////////////////////////////////
// ICircularPattern wrapper class

class ICircularPattern : public COleDispatchDriver
{
public:
	ICircularPattern() {}		// Calls COleDispatchDriver default constructor
	ICircularPattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircularPattern(const ICircularPattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetAxis(LPDISPATCH newValue);
	LPDISPATCH GetAxis();
	void SetStep1(double newValue);
	double GetStep1();
	void SetBoundaryInstancesStepFactor1(BOOL bNewValue);
	BOOL GetBoundaryInstancesStepFactor1();
	void SetCount1(long nNewValue);
	long GetCount1();
	void SetStep2(double newValue);
	double GetStep2();
	void SetBoundaryInstancesStepFactor2(BOOL bNewValue);
	BOOL GetBoundaryInstancesStepFactor2();
	void SetCount2(long nNewValue);
	long GetCount2();
	void SetSaveInitialOrientation(BOOL bNewValue);
	BOOL GetSaveInitialOrientation();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetReverseDirection();
	BOOL SetBaseExemplarPlacement(long Index1, long Index2);
	BOOL GetBaseExemplarPlacement(long* Index1, long* Index2);
};
/////////////////////////////////////////////////////////////////////////////
// IPathPattern wrapper class

class IPathPattern : public COleDispatchDriver
{
public:
	IPathPattern() {}		// Calls COleDispatchDriver default constructor
	IPathPattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPathPattern(const IPathPattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetCurves(const VARIANT& newValue);
	VARIANT GetCurves();
	void SetCount(long nNewValue);
	long GetCount();
	void SetStartingPoint(LPDISPATCH newValue);
	LPDISPATCH GetStartingPoint();
	void SetByStep(BOOL bNewValue);
	BOOL GetByStep();
	void SetStep(double newValue);
	double GetStep();
	void SetBoundaryInstancesStepFactor(BOOL bNewValue);
	BOOL GetBoundaryInstancesStepFactor();
	void SetSaveInitialOrientation(BOOL bNewValue);
	BOOL GetSaveInitialOrientation();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetReverseDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IDerivedPattern wrapper class

class IDerivedPattern : public COleDispatchDriver
{
public:
	IDerivedPattern() {}		// Calls COleDispatchDriver default constructor
	IDerivedPattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDerivedPattern(const IDerivedPattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetMasterPattern(LPDISPATCH newValue);
	LPDISPATCH GetMasterPattern();
	void SetOrientBySample(BOOL bNewValue);
	BOOL GetOrientBySample();
	void SetSampleExemplar(LPDISPATCH newValue);
	LPDISPATCH GetSampleExemplar();
	void SetAllowNesting(BOOL bNewValue);
	BOOL GetAllowNesting();
	void SetAllowDeleted(BOOL bNewValue);
	BOOL GetAllowDeleted();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DBy2VertexesParameters wrapper class

class IVector3DBy2VertexesParameters : public COleDispatchDriver
{
public:
	IVector3DBy2VertexesParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DBy2VertexesParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DBy2VertexesParameters(const IVector3DBy2VertexesParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVertex1(LPDISPATCH newValue);
	LPDISPATCH GetVertex1();
	void SetVertex2(LPDISPATCH newValue);
	LPDISPATCH GetVertex2();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IMirrorPattern wrapper class

class IMirrorPattern : public COleDispatchDriver
{
public:
	IMirrorPattern() {}		// Calls COleDispatchDriver default constructor
	IMirrorPattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMirrorPattern(const IMirrorPattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetPlane(LPDISPATCH newValue);
	LPDISPATCH GetPlane();
	void SetSaveInitialObjects(BOOL bNewValue);
	BOOL GetSaveInitialObjects();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DByCoefficientsParameters wrapper class

class IVector3DByCoefficientsParameters : public COleDispatchDriver
{
public:
	IVector3DByCoefficientsParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DByCoefficientsParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DByCoefficientsParameters(const IVector3DByCoefficientsParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetLocalCS(LPDISPATCH newValue);
	LPDISPATCH GetLocalCS();
	void SetCoefficientByX(double newValue);
	double GetCoefficientByX();
	void SetCoefficientByY(double newValue);
	double GetCoefficientByY();
	void SetCoefficientByZ(double newValue);
	double GetCoefficientByZ();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DBy2AnglesParameters wrapper class

class IVector3DBy2AnglesParameters : public COleDispatchDriver
{
public:
	IVector3DBy2AnglesParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DBy2AnglesParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DBy2AnglesParameters(const IVector3DBy2AnglesParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetLocalCS(LPDISPATCH newValue);
	LPDISPATCH GetLocalCS();
	void SetAngleA(double newValue);
	double GetAngleA();
	void SetAngleB(double newValue);
	double GetAngleB();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DByLocalCSParameters wrapper class

class IVector3DByLocalCSParameters : public COleDispatchDriver
{
public:
	IVector3DByLocalCSParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DByLocalCSParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DByLocalCSParameters(const IVector3DByLocalCSParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetLocalCS(LPDISPATCH newValue);
	LPDISPATCH GetLocalCS();
	void SetAxisType(long nNewValue);
	long GetAxisType();
	void SetAngle(double newValue);
	double GetAngle();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DByObjectParameters wrapper class

class IVector3DByObjectParameters : public COleDispatchDriver
{
public:
	IVector3DByObjectParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DByObjectParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DByObjectParameters(const IVector3DByObjectParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetBaseObject(LPDISPATCH newValue);
	LPDISPATCH GetBaseObject();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DAlongSurfaceNormalParameters wrapper class

class IVector3DAlongSurfaceNormalParameters : public COleDispatchDriver
{
public:
	IVector3DAlongSurfaceNormalParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DAlongSurfaceNormalParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DAlongSurfaceNormalParameters(const IVector3DAlongSurfaceNormalParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetBaseObject(LPDISPATCH newValue);
	LPDISPATCH GetBaseObject();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetU(double newValue);
	double GetU();
	void SetV(double newValue);
	double GetV();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DByCurveParameters wrapper class

class IVector3DByCurveParameters : public COleDispatchDriver
{
public:
	IVector3DByCurveParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DByCurveParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DByCurveParameters(const IVector3DByCurveParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetCurve(LPDISPATCH newValue);
	LPDISPATCH GetCurve();
	void SetOffset(double newValue);
	double GetOffset();
	void SetVectorType(long nNewValue);
	long GetVectorType();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IVector3DByScreenNormalParameters wrapper class

class IVector3DByScreenNormalParameters : public COleDispatchDriver
{
public:
	IVector3DByScreenNormalParameters() {}		// Calls COleDispatchDriver default constructor
	IVector3DByScreenNormalParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVector3DByScreenNormalParameters(const IVector3DByScreenNormalParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetFix(BOOL bNewValue);
	BOOL GetFix();
};
/////////////////////////////////////////////////////////////////////////////
// ICutRotated wrapper class

class ICutRotated : public COleDispatchDriver
{
public:
	ICutRotated() {}		// Calls COleDispatchDriver default constructor
	ICutRotated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutRotated(const ICutRotated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetProfile(LPDISPATCH newValue);
	LPDISPATCH GetProfile();
	void SetAxis(LPDISPATCH newValue);
	LPDISPATCH GetAxis();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetToroidShapeType(BOOL bNewValue);
	BOOL GetToroidShapeType();
	void SetRotatedType(BOOL Normal, long nNewValue);
	long GetRotatedType(BOOL Normal);
	void SetAngle(BOOL Normal, double newValue);
	double GetAngle(BOOL Normal);
	void SetAngleObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetAngleObject(BOOL Normal);
	void SetCutOffByPoint(BOOL Normal, BOOL bNewValue);
	BOOL GetCutOffByPoint(BOOL Normal);
	void SetCut(BOOL bNewValue);
	BOOL GetCut();
};
/////////////////////////////////////////////////////////////////////////////
// IRotatedSurface wrapper class

class IRotatedSurface : public COleDispatchDriver
{
public:
	IRotatedSurface() {}		// Calls COleDispatchDriver default constructor
	IRotatedSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRotatedSurface(const IRotatedSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetProfile(LPDISPATCH newValue);
	LPDISPATCH GetProfile();
	void SetAxis(LPDISPATCH newValue);
	LPDISPATCH GetAxis();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetToroidShapeType(BOOL bNewValue);
	BOOL GetToroidShapeType();
	void SetRotatedType(BOOL Normal, long nNewValue);
	long GetRotatedType(BOOL Normal);
	void SetAngle(BOOL Normal, double newValue);
	double GetAngle(BOOL Normal);
	void SetAngleObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetAngleObject(BOOL Normal);
	void SetCutOffByPoint(BOOL Normal, BOOL bNewValue);
	BOOL GetCutOffByPoint(BOOL Normal);
	void SetClosedShell(BOOL bNewValue);
	BOOL GetClosedShell();
};
/////////////////////////////////////////////////////////////////////////////
// IExtrusionSurface wrapper class

class IExtrusionSurface : public COleDispatchDriver
{
public:
	IExtrusionSurface() {}		// Calls COleDispatchDriver default constructor
	IExtrusionSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtrusionSurface(const IExtrusionSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetSketch();
	void SetDirection(long nNewValue);
	long GetDirection();
	void SetExtrusionType(BOOL Normal, long nNewValue);
	long GetExtrusionType(BOOL Normal);
	void SetDepth(BOOL Normal, double newValue);
	double GetDepth(BOOL Normal);
	void SetDraftValue(BOOL Normal, double newValue);
	double GetDraftValue(BOOL Normal);
	void SetDraftOutward(BOOL Normal, BOOL bNewValue);
	BOOL GetDraftOutward(BOOL Normal);
	void SetDepthObject(BOOL Normal, LPDISPATCH newValue);
	LPDISPATCH GetDepthObject(BOOL Normal);
	BOOL GetSideParameters(BOOL Normal, long* ExtrusionType, double* Depth, double* DraftValue, BOOL* DraftOutward, LPDISPATCH* DepthObject);
	BOOL SetSideParameters(BOOL Normal, long ExtrusionType, double Depth, double DraftValue, BOOL DraftOutward, LPDISPATCH DepthObject);
	void SetClosedShell(BOOL bNewValue);
	BOOL GetClosedShell();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamBySphere wrapper class

class IPoint3DParamBySphere : public COleDispatchDriver
{
public:
	IPoint3DParamBySphere() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamBySphere(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamBySphere(const IPoint3DParamBySphere& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetR(double newValue);
	double GetR();
	void SetA(double newValue);
	double GetA();
	void SetB(double newValue);
	double GetB();
	void SetAssociationObject(LPDISPATCH newValue);
	LPDISPATCH GetAssociationObject();
	void SetRadiusObject(LPDISPATCH newValue);
	LPDISPATCH GetRadiusObject();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint3DParamByCylinder wrapper class

class IPoint3DParamByCylinder : public COleDispatchDriver
{
public:
	IPoint3DParamByCylinder() {}		// Calls COleDispatchDriver default constructor
	IPoint3DParamByCylinder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint3DParamByCylinder(const IPoint3DParamByCylinder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetR(double newValue);
	double GetR();
	void SetA(double newValue);
	double GetA();
	void SetZ(double newValue);
	double GetZ();
	void SetAssociationObject(LPDISPATCH newValue);
	LPDISPATCH GetAssociationObject();
	void SetRadiusObject(LPDISPATCH newValue);
	LPDISPATCH GetRadiusObject();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingText wrapper class

class IDrawingText : public COleDispatchDriver
{
public:
	IDrawingText() {}		// Calls COleDispatchDriver default constructor
	IDrawingText(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingText(const IDrawingText& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	void SetAngle(double newValue);
	double GetAngle();
	double GetHeight();
	void SetHeight(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	long GetHFormat();
	void SetHFormat(long nNewValue);
	BOOL GetVFormat();
	void SetVFormat(BOOL bNewValue);
	long GetAllocation();
	void SetAllocation(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingTexts wrapper class

class IDrawingTexts : public COleDispatchDriver
{
public:
	IDrawingTexts() {}		// Calls COleDispatchDriver default constructor
	IDrawingTexts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingTexts(const IDrawingTexts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetDrawingText(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingContainer wrapper class

class IDrawingContainer : public COleDispatchDriver
{
public:
	IDrawingContainer() {}		// Calls COleDispatchDriver default constructor
	IDrawingContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingContainer(const IDrawingContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetObjects(const VARIANT& ObjType);
	LPDISPATCH GetDrawingTexts();
	LPDISPATCH GetLineSegments();
	LPDISPATCH GetArcs();
	LPDISPATCH GetMultilines();
	LPDISPATCH GetDrawingContours();
	LPDISPATCH GetCircles();
	LPDISPATCH GetPoints();
	LPDISPATCH GetBeziers();
	LPDISPATCH GetMacroObjects();
	LPDISPATCH GetLines();
	LPDISPATCH GetPolyLines2D();
	LPDISPATCH GetNurbses();
	LPDISPATCH GetRasters();
	LPDISPATCH GetOleDrawingObjects();
	LPDISPATCH GetEllipses();
	LPDISPATCH GetEllipseArcs();
	LPDISPATCH GetRectangles();
	LPDISPATCH GetRegularPolygons();
	LPDISPATCH GetEquidistants();
	LPDISPATCH GetInsertionObjects();
	LPDISPATCH GetHatches();
	LPDISPATCH GetColourings();
};
/////////////////////////////////////////////////////////////////////////////
// ILineSegments wrapper class

class ILineSegments : public COleDispatchDriver
{
public:
	ILineSegments() {}		// Calls COleDispatchDriver default constructor
	ILineSegments(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILineSegments(const ILineSegments& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLineSegment(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ILineSegment wrapper class

class ILineSegment : public COleDispatchDriver
{
public:
	ILineSegment() {}		// Calls COleDispatchDriver default constructor
	ILineSegment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILineSegment(const ILineSegment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetLength(double newValue);
	double GetLength();
	void SetAngle(double newValue);
	double GetAngle();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IArcs wrapper class

class IArcs : public COleDispatchDriver
{
public:
	IArcs() {}		// Calls COleDispatchDriver default constructor
	IArcs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArcs(const IArcs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetArc(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IArc wrapper class

class IArc : public COleDispatchDriver
{
public:
	IArc() {}		// Calls COleDispatchDriver default constructor
	IArc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArc(const IArc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetRadius(double newValue);
	double GetRadius();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetX3(double newValue);
	double GetX3();
	void SetY3(double newValue);
	double GetY3();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMultilines wrapper class

class IMultilines : public COleDispatchDriver
{
public:
	IMultilines() {}		// Calls COleDispatchDriver default constructor
	IMultilines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMultilines(const IMultilines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetMultiline(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IMultiline wrapper class

class IMultiline : public COleDispatchDriver
{
public:
	IMultiline() {}		// Calls COleDispatchDriver default constructor
	IMultiline(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMultiline(const IMultiline& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	LPDISPATCH GetBaseContour();
	long GetTrackingType(long VertexIndex);
	void SetTrackingType(long VertexIndex, long nNewValue);
	long GetVertexLimiter(long VertexIndex);
	void SetVertexLimiter(long VertexIndex, long nNewValue);
	BOOL GetVertexDirection(long VertexIndex);
	void SetVertexDirection(long VertexIndex, BOOL bNewValue);
	void SetVertexRadius(long VertexIndex, double newValue);
	double GetVertexRadius(long VertexIndex);
	long GetVertexStyle(long VertexIndex);
	void SetVertexStyle(long VertexIndex, long nNewValue);
	long GetVertexCount();
	long GetEndLimiter(BOOL First);
	void SetEndLimiter(BOOL First, long nNewValue);
	void SetEndParameter(BOOL First, double newValue);
	double GetEndParameter(BOOL First);
	long GetEndStyle(BOOL First);
	void SetEndStyle(BOOL First, long nNewValue);
	BOOL AddLine(double Offset, long Style);
	BOOL DeleteLine(long LineIndex);
	long GetLineCount();
	void SetLineOffset(long LineIndex, double newValue);
	double GetLineOffset(long LineIndex);
	long GetLineStyle(long LineIndex);
	void SetLineStyle(long LineIndex, long nNewValue);
	long FindLine(double Offset);
	VARIANT GetLineOffsets();
};
/////////////////////////////////////////////////////////////////////////////
// IContour wrapper class

class IContour : public COleDispatchDriver
{
public:
	IContour() {}		// Calls COleDispatchDriver default constructor
	IContour(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IContour(const IContour& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	LPDISPATCH AddSegment(long Type);
	LPDISPATCH GetSegment(long Index);
	BOOL CopyCurve(LPDISPATCH Curve, BOOL DeleteSource);
	long GetCount();
	VARIANT GetTmpObjects();
	BOOL CopySegments(const VARIANT& Val, BOOL DeleteSource);
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingContours wrapper class

class IDrawingContours : public COleDispatchDriver
{
public:
	IDrawingContours() {}		// Calls COleDispatchDriver default constructor
	IDrawingContours(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingContours(const IDrawingContours& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetDrawingContour(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingContour wrapper class

class IDrawingContour : public COleDispatchDriver
{
public:
	IDrawingContour() {}		// Calls COleDispatchDriver default constructor
	IDrawingContour(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingContour(const IDrawingContour& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICircles wrapper class

class ICircles : public COleDispatchDriver
{
public:
	ICircles() {}		// Calls COleDispatchDriver default constructor
	ICircles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircles(const ICircles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetCircle(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ICircle wrapper class

class ICircle : public COleDispatchDriver
{
public:
	ICircle() {}		// Calls COleDispatchDriver default constructor
	ICircle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircle(const ICircle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetRadius(double newValue);
	double GetRadius();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPoints wrapper class

class IPoints : public COleDispatchDriver
{
public:
	IPoints() {}		// Calls COleDispatchDriver default constructor
	IPoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoints(const IPoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetPoint(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IPoint wrapper class

class IPoint : public COleDispatchDriver
{
public:
	IPoint() {}		// Calls COleDispatchDriver default constructor
	IPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPoint(const IPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetAngle(double newValue);
	double GetAngle();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBeziers wrapper class

class IBeziers : public COleDispatchDriver
{
public:
	IBeziers() {}		// Calls COleDispatchDriver default constructor
	IBeziers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBeziers(const IBeziers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBezier(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBezier wrapper class

class IBezier : public COleDispatchDriver
{
public:
	IBezier() {}		// Calls COleDispatchDriver default constructor
	IBezier(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBezier(const IBezier& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	long GetPointsCount();
	void SetPoints(BOOL AllPoints, const VARIANT& newValue);
	VARIANT GetPoints(BOOL AllPoints);
	BOOL AddPoint(long Index, double XBase, double YBase, double* XLeft, double* YLeft, double* XRight, double* YRight);
	BOOL GetPoint(long Index, double* XBase, double* YBase, double* XLeft, double* YLeft, double* XRight, double* YRight);
	BOOL DeletePoint(long Index);
	BOOL Clear();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMacroObjects wrapper class

class IMacroObjects : public COleDispatchDriver
{
public:
	IMacroObjects() {}		// Calls COleDispatchDriver default constructor
	IMacroObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMacroObjects(const IMacroObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetMacroObject(const VARIANT& Index);
	LPDISPATCH Add(BOOL MultyLayer);
};
/////////////////////////////////////////////////////////////////////////////
// ILines wrapper class

class ILines : public COleDispatchDriver
{
public:
	ILines() {}		// Calls COleDispatchDriver default constructor
	ILines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILines(const ILines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ILine wrapper class

class ILine : public COleDispatchDriver
{
public:
	ILine() {}		// Calls COleDispatchDriver default constructor
	ILine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILine(const ILine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetAngle(double newValue);
	double GetAngle();
};
/////////////////////////////////////////////////////////////////////////////
// IPolyLines2D wrapper class

class IPolyLines2D : public COleDispatchDriver
{
public:
	IPolyLines2D() {}		// Calls COleDispatchDriver default constructor
	IPolyLines2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPolyLines2D(const IPolyLines2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetPolyLine2D(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IPolyLine2D wrapper class

class IPolyLine2D : public COleDispatchDriver
{
public:
	IPolyLine2D() {}		// Calls COleDispatchDriver default constructor
	IPolyLine2D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPolyLine2D(const IPolyLine2D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	long GetPointsCount();
	void SetPoints(const VARIANT& newValue);
	VARIANT GetPoints();
	BOOL AddPoint(long Index, double X, double Y);
	BOOL GetPoint(long Index, double* X, double* Y);
	BOOL DeletePoint(long Index);
	BOOL Clear();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// INurbses wrapper class

class INurbses : public COleDispatchDriver
{
public:
	INurbses() {}		// Calls COleDispatchDriver default constructor
	INurbses(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	INurbses(const INurbses& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetNurbs(const VARIANT& Index);
	LPDISPATCH Add();
	LPDISPATCH Convert(LPDISPATCH Curve);
};
/////////////////////////////////////////////////////////////////////////////
// INurbs wrapper class

class INurbs : public COleDispatchDriver
{
public:
	INurbs() {}		// Calls COleDispatchDriver default constructor
	INurbs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	INurbs(const INurbs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetClosed(BOOL bNewValue);
	BOOL GetClosed();
	void SetDegree(long nNewValue);
	long GetDegree();
	BOOL GetPeriodic();
	long GetPointsCount();
	BOOL SetNurbsParams(const VARIANT& Points, const VARIANT& Weight, const VARIANT& Knots, long Degree, BOOL Closed);
	BOOL GetNurbsParams(VARIANT* Points, VARIANT* Weight, VARIANT* Knots);
	BOOL AddPoint(long Index, double X, double Y, double Weight);
	BOOL GetPoint(long Index, double* X, double* Y, double* Weight);
	BOOL DeletePoint(long Index);
	BOOL Clear();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRasters wrapper class

class IRasters : public COleDispatchDriver
{
public:
	IRasters() {}		// Calls COleDispatchDriver default constructor
	IRasters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRasters(const IRasters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRaster(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRaster wrapper class

class IRaster : public COleDispatchDriver
{
public:
	IRaster() {}		// Calls COleDispatchDriver default constructor
	IRaster(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRaster(const IRaster& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetPlacement(double* X, double* Y, double* Angle, BOOL* MirrorSymmetry);
	BOOL SetPlacement(double X, double Y, double Angle, BOOL MirrorSymmetry);
	void SetScale(double newValue);
	double GetScale();
	void SetFileName(LPCTSTR lpszNewValue);
	CString GetFileName();
	void SetInsertionType(BOOL bNewValue);
	BOOL GetInsertionType();
	void SetResolution(double newValue);
	double GetResolution();
	void SetDisplayModePartial(BOOL bNewValue);
	BOOL GetDisplayModePartial();
	double GetHeight();
	void SetHeight(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	double GetSourceHeight();
	double GetSourceWidth();
	long GetPalette();
	BOOL GetIsEnableChangeResolution();
	BOOL GetIsCutBoundarySet();
};
/////////////////////////////////////////////////////////////////////////////
// IOleDrawingObjects wrapper class

class IOleDrawingObjects : public COleDispatchDriver
{
public:
	IOleDrawingObjects() {}		// Calls COleDispatchDriver default constructor
	IOleDrawingObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IOleDrawingObjects(const IOleDrawingObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetOleDrawingObject(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IOleDrawingObject wrapper class

class IOleDrawingObject : public COleDispatchDriver
{
public:
	IOleDrawingObject() {}		// Calls COleDispatchDriver default constructor
	IOleDrawingObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IOleDrawingObject(const IOleDrawingObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetPlacement(double* X, double* Y, double* Angle, BOOL* MirrorSymmetry);
	BOOL SetPlacement(double X, double Y, double Angle, BOOL MirrorSymmetry);
	void SetScale(double newValue);
	double GetScale();
	void SetClassId(LPCTSTR lpszNewValue);
	CString GetClassId();
	void SetFileName(LPCTSTR lpszNewValue);
	CString GetFileName();
	void SetLink(BOOL bNewValue);
	BOOL GetLink();
	void SetInsertionType(BOOL bNewValue);
	BOOL GetInsertionType();
	LPDISPATCH DoVerb(long iVerb);
	BOOL Close(BOOL Save);
};
/////////////////////////////////////////////////////////////////////////////
// IEllipses wrapper class

class IEllipses : public COleDispatchDriver
{
public:
	IEllipses() {}		// Calls COleDispatchDriver default constructor
	IEllipses(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEllipses(const IEllipses& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetEllipse(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IEllipse wrapper class

class IEllipse : public COleDispatchDriver
{
public:
	IEllipse() {}		// Calls COleDispatchDriver default constructor
	IEllipse(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEllipse(const IEllipse& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetSemiAxisA(double newValue);
	double GetSemiAxisA();
	void SetSemiAxisB(double newValue);
	double GetSemiAxisB();
	void SetAngle(double newValue);
	double GetAngle();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IEllipseArcs wrapper class

class IEllipseArcs : public COleDispatchDriver
{
public:
	IEllipseArcs() {}		// Calls COleDispatchDriver default constructor
	IEllipseArcs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEllipseArcs(const IEllipseArcs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetEllipseArc(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IEllipseArc wrapper class

class IEllipseArc : public COleDispatchDriver
{
public:
	IEllipseArc() {}		// Calls COleDispatchDriver default constructor
	IEllipseArc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEllipseArc(const IEllipseArc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetT1(double newValue);
	double GetT1();
	void SetT2(double newValue);
	double GetT2();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetSemiAxisA(double newValue);
	double GetSemiAxisA();
	void SetSemiAxisB(double newValue);
	double GetSemiAxisB();
	void SetAngle(double newValue);
	double GetAngle();
	BOOL GetDirection();
	void SetDirection(BOOL bNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRectangles wrapper class

class IRectangles : public COleDispatchDriver
{
public:
	IRectangles() {}		// Calls COleDispatchDriver default constructor
	IRectangles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRectangles(const IRectangles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRectangle(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRectangle wrapper class

class IRectangle : public COleDispatchDriver
{
public:
	IRectangle() {}		// Calls COleDispatchDriver default constructor
	IRectangle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRectangle(const IRectangle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetAngle(double newValue);
	double GetAngle();
	void SetHeight(double newValue);
	double GetHeight();
	void SetWidth(double newValue);
	double GetWidth();
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetCorner(long Index, long* Type, double* L1, double* L2);
	BOOL SetCorner(long Index, long Type, double L1, double L2);
};
/////////////////////////////////////////////////////////////////////////////
// IRegularPolygons wrapper class

class IRegularPolygons : public COleDispatchDriver
{
public:
	IRegularPolygons() {}		// Calls COleDispatchDriver default constructor
	IRegularPolygons(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRegularPolygons(const IRegularPolygons& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRegularPolygon(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRegularPolygon wrapper class

class IRegularPolygon : public COleDispatchDriver
{
public:
	IRegularPolygon() {}		// Calls COleDispatchDriver default constructor
	IRegularPolygon(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRegularPolygon(const IRegularPolygon& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetCount(long nNewValue);
	long GetCount();
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetAngle(double newValue);
	double GetAngle();
	void SetRadius(double newValue);
	double GetRadius();
	void SetDescribe(BOOL bNewValue);
	BOOL GetDescribe();
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetCorner(long Index, long* Type, double* L1, double* L2);
	BOOL SetCorner(long Index, long Type, double L1, double L2);
};
/////////////////////////////////////////////////////////////////////////////
// IEquidistants wrapper class

class IEquidistants : public COleDispatchDriver
{
public:
	IEquidistants() {}		// Calls COleDispatchDriver default constructor
	IEquidistants(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquidistants(const IEquidistants& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetEquidistant(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IEquidistant wrapper class

class IEquidistant : public COleDispatchDriver
{
public:
	IEquidistant() {}		// Calls COleDispatchDriver default constructor
	IEquidistant(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquidistant(const IEquidistant& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	void SetSide(long nNewValue);
	long GetSide();
	void SetCutMode(BOOL bNewValue);
	BOOL GetCutMode();
	void SetDegenerateSegment(BOOL bNewValue);
	BOOL GetDegenerateSegment();
	void SetLeftRadius(double newValue);
	double GetLeftRadius();
	void SetRightRadius(double newValue);
	double GetRightRadius();
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionObjects wrapper class

class IInsertionObjects : public COleDispatchDriver
{
public:
	IInsertionObjects() {}		// Calls COleDispatchDriver default constructor
	IInsertionObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionObjects(const IInsertionObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetInsertionObject(const VARIANT& Index);
	LPDISPATCH Add(LPDISPATCH Definition);
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionObject wrapper class

class IInsertionObject : public COleDispatchDriver
{
public:
	IInsertionObject() {}		// Calls COleDispatchDriver default constructor
	IInsertionObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionObject(const IInsertionObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetPlacement(double* X, double* Y, double* Angle, BOOL* MirrorSymmetry);
	BOOL SetPlacement(double X, double Y, double Angle, BOOL MirrorSymmetry);
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	CString GetFileName();
	long GetInsertionType();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	LPDISPATCH GetInsertionDefinition();
	void SetInsertionDefinition(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IHatches wrapper class

class IHatches : public COleDispatchDriver
{
public:
	IHatches() {}		// Calls COleDispatchDriver default constructor
	IHatches(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHatches(const IHatches& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetHatch(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IHatch wrapper class

class IHatch : public COleDispatchDriver
{
public:
	IHatch() {}		// Calls COleDispatchDriver default constructor
	IHatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHatch(const IHatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	BOOL GetSide();
	void SetSide(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IColourings wrapper class

class IColourings : public COleDispatchDriver
{
public:
	IColourings() {}		// Calls COleDispatchDriver default constructor
	IColourings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IColourings(const IColourings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetColouring(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IColouring wrapper class

class IColouring : public COleDispatchDriver
{
public:
	IColouring() {}		// Calls COleDispatchDriver default constructor
	IColouring(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IColouring(const IColouring& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	long GetColouringType();
	void SetColouringType(long nNewValue);
	long GetColor1();
	void SetColor1(long nNewValue);
	long GetColor2();
	void SetColor2(long nNewValue);
	long GetTransparency1();
	void SetTransparency1(long nNewValue);
	long GetTransparency2();
	void SetTransparency2(long nNewValue);
	BOOL GetGradientType();
	void SetGradientType(BOOL bNewValue);
	long GetGradientCount();
	void SetGradientCount(long nNewValue);
	double GetGradientAngle();
	void SetGradientAngle(double newValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	BOOL GetGradations(VARIANT* Positions, VARIANT* Colors, VARIANT* Transparences, VARIANT* Interpolations);
	BOOL SetGradations(const VARIANT& Positions, const VARIANT& Colors, const VARIANT& Transparences, const VARIANT& Interpolations);
	long AddGradation(long Position, long Color, long Transparency, BOOL Interpolation);
	BOOL ClearGradations();
	long GetGradationsCount();
	BOOL GetGradation(long Index, long* Position, long* Color, long* Transparency, BOOL* Interpolation);
	long SetGradation(long Index, long Position, long Color, long Transparency, BOOL Interpolation);
	BOOL DeleteGradation(long Index);
	long FindPosition(long Position);
};
/////////////////////////////////////////////////////////////////////////////
// IMark wrapper class

class IMark : public COleDispatchDriver
{
public:
	IMark() {}		// Calls COleDispatchDriver default constructor
	IMark(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMark(const IMark& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	BOOL GetAutoNumber();
	void SetAutoNumber(BOOL bNewValue);
	LPDISPATCH GetName();
	LPDISPATCH GetNumber();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	LPDISPATCH GetTextUnder();
	CString GetComment();
	void SetComment(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMarks wrapper class

class IMarks : public COleDispatchDriver
{
public:
	IMarks() {}		// Calls COleDispatchDriver default constructor
	IMarks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarks(const IMarks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetMark(const VARIANT& Index);
	LPDISPATCH Add(long MarkType);
};
/////////////////////////////////////////////////////////////////////////////
// IMarkInsideForm wrapper class

class IMarkInsideForm : public COleDispatchDriver
{
public:
	IMarkInsideForm() {}		// Calls COleDispatchDriver default constructor
	IMarkInsideForm(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarkInsideForm(const IMarkInsideForm& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	BOOL GetAutoNumber();
	void SetAutoNumber(BOOL bNewValue);
	LPDISPATCH GetName();
	LPDISPATCH GetNumber();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	LPDISPATCH GetTextUnder();
	CString GetComment();
	void SetComment(LPCTSTR lpszNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	void SetForm(long nNewValue);
	long GetForm();
	void SetFormGabarit(double newValue);
	double GetFormGabarit();
	void SetFormHeight(double newValue);
	double GetFormHeight();
	void SetFormStyle(long nNewValue);
	long GetFormStyle();
};
/////////////////////////////////////////////////////////////////////////////
// IMarkOnLine wrapper class

class IMarkOnLine : public COleDispatchDriver
{
public:
	IMarkOnLine() {}		// Calls COleDispatchDriver default constructor
	IMarkOnLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarkOnLine(const IMarkOnLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	BOOL GetAutoNumber();
	void SetAutoNumber(BOOL bNewValue);
	LPDISPATCH GetName();
	LPDISPATCH GetNumber();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	LPDISPATCH GetTextUnder();
	CString GetComment();
	void SetComment(LPCTSTR lpszNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	LPDISPATCH GetLine();
	void SetLine(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMarkOnLeader wrapper class

class IMarkOnLeader : public COleDispatchDriver
{
public:
	IMarkOnLeader() {}		// Calls COleDispatchDriver default constructor
	IMarkOnLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarkOnLeader(const IMarkOnLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	BOOL GetAutoNumber();
	void SetAutoNumber(BOOL bNewValue);
	LPDISPATCH GetName();
	LPDISPATCH GetNumber();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	LPDISPATCH GetTextUnder();
	CString GetComment();
	void SetComment(LPCTSTR lpszNewValue);
	long GetArrowType();
	void SetArrowType(long nNewValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	BOOL GetParallelBranch();
	void SetParallelBranch(BOOL bNewValue);
	long GetBranchCount();
	void SetBranchPoints(long Index, const VARIANT& newValue);
	VARIANT GetBranchPoints(long Index);
	void SetBranchBegin(long Index, BOOL bNewValue);
	BOOL GetBranchBegin(long Index);
	void SetBranchX(long Index, double newValue);
	double GetBranchX(long Index);
	void SetBranchY(long Index, double newValue);
	double GetBranchY(long Index);
	long GetBranchPointsCount(long Index);
	BOOL AddBranch(long Index, BOOL Begin, const VARIANT& Points);
	BOOL AddBranchByPoint(long Index, BOOL Begin, double X, double Y);
	BOOL DeleteBranch(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IBuildingAxis wrapper class

class IBuildingAxis : public COleDispatchDriver
{
public:
	IBuildingAxis() {}		// Calls COleDispatchDriver default constructor
	IBuildingAxis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBuildingAxis(const IBuildingAxis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetDoubleMark(BOOL bNewValue);
	BOOL GetDoubleMark();
	void SetMarkSize(double newValue);
	double GetMarkSize();
	void SetDottedLength(double newValue);
	double GetDottedLength();
	void SetInterval(double newValue);
	double GetInterval();
	void SetStroke(double newValue);
	double GetStroke();
	LPDISPATCH GetText();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	void SetAutoStroke(BOOL bNewValue);
	BOOL GetAutoStroke();
	BOOL GetInsertionPoints(BOOL First, VARIANT* Points, VARIANT* Directions, VARIANT* Nodes);
	LPDISPATCH GetNodeByPoint(double X, double Y, double Limit);
	LPDISPATCH AddNodeByPoint(long Type, double X, double Y);
};
/////////////////////////////////////////////////////////////////////////////
// IMarkNode wrapper class

class IMarkNode : public COleDispatchDriver
{
public:
	IMarkNode() {}		// Calls COleDispatchDriver default constructor
	IMarkNode(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarkNode(const IMarkNode& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetMarkType(long nNewValue);
	long GetMarkType();
	void SetDoubleMark(BOOL bNewValue);
	BOOL GetDoubleMark();
	void SetRefLength(double newValue);
	double GetRefLength();
	LPDISPATCH GetText();
	LPDISPATCH GetMarkNodes(BOOL Left);
	BOOL Delete();
	BOOL GetInsertionPoints(BOOL LeftJut, VARIANT* Points, VARIANT* Directions);
};
/////////////////////////////////////////////////////////////////////////////
// IMarkNodes wrapper class

class IMarkNodes : public COleDispatchDriver
{
public:
	IMarkNodes() {}		// Calls COleDispatchDriver default constructor
	IMarkNodes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarkNodes(const IMarkNodes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH Add(long Type, const VARIANT& Index);
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// IBuildingAxes wrapper class

class IBuildingAxes : public COleDispatchDriver
{
public:
	IBuildingAxes() {}		// Calls COleDispatchDriver default constructor
	IBuildingAxes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBuildingAxes(const IBuildingAxes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBuildingAxis(const VARIANT& Index);
	LPDISPATCH Add(long AxisType);
};
/////////////////////////////////////////////////////////////////////////////
// IStraightAxis wrapper class

class IStraightAxis : public COleDispatchDriver
{
public:
	IStraightAxis() {}		// Calls COleDispatchDriver default constructor
	IStraightAxis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IStraightAxis(const IStraightAxis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetDoubleMark(BOOL bNewValue);
	BOOL GetDoubleMark();
	void SetMarkSize(double newValue);
	double GetMarkSize();
	void SetDottedLength(double newValue);
	double GetDottedLength();
	void SetInterval(double newValue);
	double GetInterval();
	void SetStroke(double newValue);
	double GetStroke();
	LPDISPATCH GetText();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	void SetAutoStroke(BOOL bNewValue);
	BOOL GetAutoStroke();
	BOOL GetInsertionPoints(BOOL First, VARIANT* Points, VARIANT* Directions, VARIANT* Nodes);
	LPDISPATCH GetNodeByPoint(double X, double Y, double Limit);
	LPDISPATCH AddNodeByPoint(long Type, double X, double Y);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetLength(double newValue);
	double GetLength();
	void SetAngle(double newValue);
	double GetAngle();
	LPDISPATCH GetJut(BOOL First);
	LPDISPATCH GetMarkNodes();
};
/////////////////////////////////////////////////////////////////////////////
// IAxisJut wrapper class

class IAxisJut : public COleDispatchDriver
{
public:
	IAxisJut() {}		// Calls COleDispatchDriver default constructor
	IAxisJut(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAxisJut(const IAxisJut& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetLength(double newValue);
	double GetLength();
	void SetMarkOffset(double newValue);
	double GetMarkOffset();
	void SetBreakOffset(double newValue);
	double GetBreakOffset();
	void SetBreakDirection(BOOL bNewValue);
	BOOL GetBreakDirection();
	void SetMarkOn(BOOL bNewValue);
	BOOL GetMarkOn();
};
/////////////////////////////////////////////////////////////////////////////
// IArcAxis wrapper class

class IArcAxis : public COleDispatchDriver
{
public:
	IArcAxis() {}		// Calls COleDispatchDriver default constructor
	IArcAxis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArcAxis(const IArcAxis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetDoubleMark(BOOL bNewValue);
	BOOL GetDoubleMark();
	void SetMarkSize(double newValue);
	double GetMarkSize();
	void SetDottedLength(double newValue);
	double GetDottedLength();
	void SetInterval(double newValue);
	double GetInterval();
	void SetStroke(double newValue);
	double GetStroke();
	LPDISPATCH GetText();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	void SetAutoStroke(BOOL bNewValue);
	BOOL GetAutoStroke();
	BOOL GetInsertionPoints(BOOL First, VARIANT* Points, VARIANT* Directions, VARIANT* Nodes);
	LPDISPATCH GetNodeByPoint(double X, double Y, double Limit);
	LPDISPATCH AddNodeByPoint(long Type, double X, double Y);
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetRadius(double newValue);
	double GetRadius();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	LPDISPATCH GetJut(BOOL First);
	LPDISPATCH GetMarkNodes();
	void SetX3(double newValue);
	double GetX3();
	void SetY3(double newValue);
	double GetY3();
};
/////////////////////////////////////////////////////////////////////////////
// ICircleAxis wrapper class

class ICircleAxis : public COleDispatchDriver
{
public:
	ICircleAxis() {}		// Calls COleDispatchDriver default constructor
	ICircleAxis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircleAxis(const ICircleAxis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetDoubleMark(BOOL bNewValue);
	BOOL GetDoubleMark();
	void SetMarkSize(double newValue);
	double GetMarkSize();
	void SetDottedLength(double newValue);
	double GetDottedLength();
	void SetInterval(double newValue);
	double GetInterval();
	void SetStroke(double newValue);
	double GetStroke();
	LPDISPATCH GetText();
	LPDISPATCH GetTextBefore();
	LPDISPATCH GetTextAfter();
	void SetAutoStroke(BOOL bNewValue);
	BOOL GetAutoStroke();
	BOOL GetInsertionPoints(BOOL First, VARIANT* Points, VARIANT* Directions, VARIANT* Nodes);
	LPDISPATCH GetNodeByPoint(double X, double Y, double Limit);
	LPDISPATCH AddNodeByPoint(long Type, double X, double Y);
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetMarkAngle(double newValue);
	double GetMarkAngle();
	void SetRadius(double newValue);
	double GetRadius();
	void SetMarkOn(BOOL bNewValue);
	BOOL GetMarkOn();
	LPDISPATCH GetBaseMarkNode();
};
/////////////////////////////////////////////////////////////////////////////
// ICutUnitMarking wrapper class

class ICutUnitMarking : public COleDispatchDriver
{
public:
	ICutUnitMarking() {}		// Calls COleDispatchDriver default constructor
	ICutUnitMarking(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutUnitMarking(const ICutUnitMarking& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	long GetStrokeCount();
	void SetStrokeX(long Index, double newValue);
	double GetStrokeX(long Index);
	void SetStrokeY(long Index, double newValue);
	double GetStrokeY(long Index);
	void SetStroke(long Index, double newValue);
	double GetStroke(long Index);
	double GetAngle();
	void SetAngle(double newValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	LPDISPATCH GetTextUp();
	LPDISPATCH GetTextDown();
	BOOL AddStroke(double X, double Y, double Length);
	BOOL DeleteStroke(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// ICutUnitMarkings wrapper class

class ICutUnitMarkings : public COleDispatchDriver
{
public:
	ICutUnitMarkings() {}		// Calls COleDispatchDriver default constructor
	ICutUnitMarkings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutUnitMarkings(const ICutUnitMarkings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetCutUnitMarking(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IUnitMarking wrapper class

class IUnitMarking : public COleDispatchDriver
{
public:
	IUnitMarking() {}		// Calls COleDispatchDriver default constructor
	IUnitMarking(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUnitMarking(const IUnitMarking& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	double GetRadius();
	void SetRadius(double newValue);
	double GetHeight();
	void SetHeight(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	long GetForm();
	void SetForm(long nNewValue);
	LPDISPATCH GetTextUp();
	LPDISPATCH GetTextDown();
	double GetFilletRadius();
	void SetFilletRadius(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IUnitMarkings wrapper class

class IUnitMarkings : public COleDispatchDriver
{
public:
	IUnitMarkings() {}		// Calls COleDispatchDriver default constructor
	IUnitMarkings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUnitMarkings(const IUnitMarkings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetUnitMarking(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBuildingContainer wrapper class

class IBuildingContainer : public COleDispatchDriver
{
public:
	IBuildingContainer() {}		// Calls COleDispatchDriver default constructor
	IBuildingContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBuildingContainer(const IBuildingContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetBuildingAxes();
	LPDISPATCH GetMarks();
	LPDISPATCH GetCutUnitMarkings();
	LPDISPATCH GetUnitMarkings();
	LPDISPATCH GetMultiTextLeaders();
	LPDISPATCH GetUnitNumbers();
	LPDISPATCH GetBraces();
	LPDISPATCH GetBuildingCutLines();
};
/////////////////////////////////////////////////////////////////////////////
// IMultiTextLeaders wrapper class

class IMultiTextLeaders : public COleDispatchDriver
{
public:
	IMultiTextLeaders() {}		// Calls COleDispatchDriver default constructor
	IMultiTextLeaders(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMultiTextLeaders(const IMultiTextLeaders& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetMultiTextLeader(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IMultiTextLeader wrapper class

class IMultiTextLeader : public COleDispatchDriver
{
public:
	IMultiTextLeader() {}		// Calls COleDispatchDriver default constructor
	IMultiTextLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMultiTextLeader(const IMultiTextLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	long GetArrowType();
	void SetArrowType(long nNewValue);
	long GetBranchCount();
	void SetBranchPoints(long Index, const VARIANT& newValue);
	VARIANT GetBranchPoints(long Index);
	long GetBranchPointsCount(long Index);
	void SetBranchX(long Index, double newValue);
	double GetBranchX(long Index);
	void SetBranchY(long Index, double newValue);
	double GetBranchY(long Index);
	BOOL AddBranch(long Index, const VARIANT& Points);
	BOOL AddBranchByPoint(long Index, double X, double Y);
	BOOL DeleteBranch(long Index);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	BOOL GetTextDirection();
	void SetTextDirection(BOOL bNewValue);
	BOOL GetForm();
	void SetForm(BOOL bNewValue);
	BOOL GetAlign();
	void SetAlign(BOOL bNewValue);
	LPDISPATCH GetText();
};
/////////////////////////////////////////////////////////////////////////////
// IUnitNumbers wrapper class

class IUnitNumbers : public COleDispatchDriver
{
public:
	IUnitNumbers() {}		// Calls COleDispatchDriver default constructor
	IUnitNumbers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUnitNumbers(const IUnitNumbers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetUnitNumber(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IUnitNumber wrapper class

class IUnitNumber : public COleDispatchDriver
{
public:
	IUnitNumber() {}		// Calls COleDispatchDriver default constructor
	IUnitNumber(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUnitNumber(const IUnitNumber& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	LPDISPATCH GetTextUp();
	LPDISPATCH GetTextDown();
};
/////////////////////////////////////////////////////////////////////////////
// IBraces wrapper class

class IBraces : public COleDispatchDriver
{
public:
	IBraces() {}		// Calls COleDispatchDriver default constructor
	IBraces(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBraces(const IBraces& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBrace(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBrace wrapper class

class IBrace : public COleDispatchDriver
{
public:
	IBrace() {}		// Calls COleDispatchDriver default constructor
	IBrace(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBrace(const IBrace& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetLength(double newValue);
	double GetLength();
	void SetAngle(double newValue);
	double GetAngle();
	double GetRadius();
	void SetRadius(double newValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	BOOL GetDirection();
	void SetDirection(BOOL bNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	LPDISPATCH GetText();
	void SetShelfPoints(const VARIANT& newValue);
	VARIANT GetShelfPoints();
};
/////////////////////////////////////////////////////////////////////////////
// ICutLines wrapper class

class ICutLines : public COleDispatchDriver
{
public:
	ICutLines() {}		// Calls COleDispatchDriver default constructor
	ICutLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutLines(const ICutLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetCutLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ICutLine wrapper class

class ICutLine : public COleDispatchDriver
{
public:
	ICutLine() {}		// Calls COleDispatchDriver default constructor
	ICutLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICutLine(const ICutLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetArrowPos();
	void SetArrowPos(BOOL bNewValue);
	double GetX1();
	void SetX1(double newValue);
	double GetY1();
	void SetY1(double newValue);
	double GetX2();
	void SetX2(double newValue);
	double GetY2();
	void SetY2(double newValue);
	void SetPoints(const VARIANT& newValue);
	VARIANT GetPoints();
	BOOL GetAutoSorted();
	void SetAutoSorted(BOOL bNewValue);
	LPDISPATCH GetText();
	LPDISPATCH GetAdditionalText();
	BOOL GetAutoSheet();
	void SetAutoSheet(BOOL bNewValue);
	BOOL GetAutoZone();
	void SetAutoZone(BOOL bNewValue);
	BOOL GetAdditionalTextPos();
	void SetAdditionalTextPos(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISymbols2DContainer wrapper class

class ISymbols2DContainer : public COleDispatchDriver
{
public:
	ISymbols2DContainer() {}		// Calls COleDispatchDriver default constructor
	ISymbols2DContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISymbols2DContainer(const ISymbols2DContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetLineDimensions();
	LPDISPATCH GetRadialDimensions();
	LPDISPATCH GetDiametralDimensions();
	LPDISPATCH GetAngleDimensions();
	LPDISPATCH GetBreakLineDimensions();
	LPDISPATCH GetHeightDimensions();
	LPDISPATCH GetArcDimensions();
	LPDISPATCH GetBreakRadialDimensions();
	LPDISPATCH GetRoughs();
	LPDISPATCH GetLeaders();
	LPDISPATCH GetBases();
	LPDISPATCH GetTolerances();
	LPDISPATCH GetDrawingTables();
	LPDISPATCH GetCutLines();
	LPDISPATCH GetViewPointers();
	LPDISPATCH GetCentreMarkers();
	LPDISPATCH GetRemoteElements();
	LPDISPATCH GetAxisLines();
	LPDISPATCH GetWaveLines();
	LPDISPATCH GetBrokenLines();
};
/////////////////////////////////////////////////////////////////////////////
// ILineDimensions wrapper class

class ILineDimensions : public COleDispatchDriver
{
public:
	ILineDimensions() {}		// Calls COleDispatchDriver default constructor
	ILineDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILineDimensions(const ILineDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetLineDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ILineDimension wrapper class

class ILineDimension : public COleDispatchDriver
{
public:
	ILineDimension() {}		// Calls COleDispatchDriver default constructor
	ILineDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILineDimension(const ILineDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX1();
	void SetX1(double newValue);
	double GetY1();
	void SetY1(double newValue);
	double GetX2();
	void SetX2(double newValue);
	double GetY2();
	void SetY2(double newValue);
	double GetX3();
	void SetX3(double newValue);
	double GetY3();
	void SetY3(double newValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	double GetAngle();
	void SetAngle(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRadialDimensions wrapper class

class IRadialDimensions : public COleDispatchDriver
{
public:
	IRadialDimensions() {}		// Calls COleDispatchDriver default constructor
	IRadialDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRadialDimensions(const IRadialDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRadialDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRadialDimension wrapper class

class IRadialDimension : public COleDispatchDriver
{
public:
	IRadialDimension() {}		// Calls COleDispatchDriver default constructor
	IRadialDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRadialDimension(const IRadialDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	double GetRadius();
	void SetRadius(double newValue);
	BOOL GetDimensionType();
	void SetDimensionType(BOOL bNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL AddBranch(BOOL BranchBegin, LPDISPATCH BranchObject);
	BOOL AddBranchByArcParam(BOOL BranchBegin, double Xc, double Yc, double Radius, double Angle1, double Angle2, BOOL Direction);
	long GetBranchsCount();
	LPDISPATCH GetBranchObject(long Index);
	void SetBranchObject(long Index, LPDISPATCH newValue);
	BOOL DeleteBranch(long Index);
	BOOL GetBranchParam(long Index, double* Xc, double* Yc, double* Angle1, double* Angle2, BOOL* Direction);
	BOOL SetBranchParam(long Index, double Xc, double Yc, double Angle1, double Angle2, BOOL Direction);
	BOOL GetBranchBegin(long Index);
	void SetBranchBegin(long Index, BOOL bNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDiametralDimensions wrapper class

class IDiametralDimensions : public COleDispatchDriver
{
public:
	IDiametralDimensions() {}		// Calls COleDispatchDriver default constructor
	IDiametralDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDiametralDimensions(const IDiametralDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetDiametralDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IDiametralDimension wrapper class

class IDiametralDimension : public COleDispatchDriver
{
public:
	IDiametralDimension() {}		// Calls COleDispatchDriver default constructor
	IDiametralDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDiametralDimension(const IDiametralDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	double GetRadius();
	void SetRadius(double newValue);
	BOOL GetDimensionType();
	void SetDimensionType(BOOL bNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	double GetAngle();
	void SetAngle(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IAngleDimensions wrapper class

class IAngleDimensions : public COleDispatchDriver
{
public:
	IAngleDimensions() {}		// Calls COleDispatchDriver default constructor
	IAngleDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAngleDimensions(const IAngleDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetAngleDimension(const VARIANT& Index);
	LPDISPATCH Add(long DimType);
};
/////////////////////////////////////////////////////////////////////////////
// IAngleDimension wrapper class

class IAngleDimension : public COleDispatchDriver
{
public:
	IAngleDimension() {}		// Calls COleDispatchDriver default constructor
	IAngleDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAngleDimension(const IAngleDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	void SetRadius(double newValue);
	double GetRadius();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	LPDISPATCH GetBaseObject1();
	void SetBaseObject1(LPDISPATCH newValue);
	LPDISPATCH GetBaseObject2();
	void SetBaseObject2(LPDISPATCH newValue);
	long GetDimensionType();
	void SetDimensionType(long nNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetX3(double newValue);
	double GetX3();
	void SetY3(double newValue);
	double GetY3();
};
/////////////////////////////////////////////////////////////////////////////
// IBreakLineDimensions wrapper class

class IBreakLineDimensions : public COleDispatchDriver
{
public:
	IBreakLineDimensions() {}		// Calls COleDispatchDriver default constructor
	IBreakLineDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakLineDimensions(const IBreakLineDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBreakLineDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBreakLineDimension wrapper class

class IBreakLineDimension : public COleDispatchDriver
{
public:
	IBreakLineDimension() {}		// Calls COleDispatchDriver default constructor
	IBreakLineDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakLineDimension(const IBreakLineDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX1();
	void SetX1(double newValue);
	double GetY1();
	void SetY1(double newValue);
	double GetX2();
	void SetX2(double newValue);
	double GetY2();
	void SetY2(double newValue);
	double GetX3();
	void SetX3(double newValue);
	double GetY3();
	void SetY3(double newValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IHeightDimensions wrapper class

class IHeightDimensions : public COleDispatchDriver
{
public:
	IHeightDimensions() {}		// Calls COleDispatchDriver default constructor
	IHeightDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHeightDimensions(const IHeightDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetHeightDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IHeightDimension wrapper class

class IHeightDimension : public COleDispatchDriver
{
public:
	IHeightDimension() {}		// Calls COleDispatchDriver default constructor
	IHeightDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHeightDimension(const IHeightDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	long GetDimensionType();
	void SetDimensionType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	double GetX1();
	void SetX1(double newValue);
	double GetY1();
	void SetY1(double newValue);
	double GetX2();
	void SetX2(double newValue);
	double GetY2();
	void SetY2(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IArcDimensions wrapper class

class IArcDimensions : public COleDispatchDriver
{
public:
	IArcDimensions() {}		// Calls COleDispatchDriver default constructor
	IArcDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArcDimensions(const IArcDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetArcDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IArcDimension wrapper class

class IArcDimension : public COleDispatchDriver
{
public:
	IArcDimension() {}		// Calls COleDispatchDriver default constructor
	IArcDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IArcDimension(const IArcDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	double GetX1();
	void SetX1(double newValue);
	double GetY1();
	void SetY1(double newValue);
	double GetX2();
	void SetX2(double newValue);
	double GetY2();
	void SetY2(double newValue);
	double GetX3();
	void SetX3(double newValue);
	double GetY3();
	void SetY3(double newValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	BOOL GetDimensionType();
	void SetDimensionType(BOOL bNewValue);
	BOOL GetTextPointer();
	void SetTextPointer(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBreakRadialDimensions wrapper class

class IBreakRadialDimensions : public COleDispatchDriver
{
public:
	IBreakRadialDimensions() {}		// Calls COleDispatchDriver default constructor
	IBreakRadialDimensions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakRadialDimensions(const IBreakRadialDimensions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBreakRadialDimension(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBreakRadialDimension wrapper class

class IBreakRadialDimension : public COleDispatchDriver
{
public:
	IBreakRadialDimension() {}		// Calls COleDispatchDriver default constructor
	IBreakRadialDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakRadialDimension(const IBreakRadialDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	double GetRadius();
	void SetRadius(double newValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	double GetAngle();
	void SetAngle(double newValue);
	double GetBreakLength();
	void SetBreakLength(double newValue);
	long GetTextOnLine();
	void SetTextOnLine(long nNewValue);
	double GetBreakAngle();
	void SetBreakAngle(double newValue);
	double GetBreakX1();
	void SetBreakX1(double newValue);
	double GetBreakY1();
	void SetBreakY1(double newValue);
	double GetBreakX2();
	void SetBreakX2(double newValue);
	double GetBreakY2();
	void SetBreakY2(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRoughs wrapper class

class IRoughs : public COleDispatchDriver
{
public:
	IRoughs() {}		// Calls COleDispatchDriver default constructor
	IRoughs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRoughs(const IRoughs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRough(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRough wrapper class

class IRough : public COleDispatchDriver
{
public:
	IRough() {}		// Calls COleDispatchDriver default constructor
	IRough(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRough(const IRough& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	double GetX0();
	void SetX0(double newValue);
	double GetY0();
	void SetY0(double newValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBases wrapper class

class IBases : public COleDispatchDriver
{
public:
	IBases() {}		// Calls COleDispatchDriver default constructor
	IBases(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBases(const IBases& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBase(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBase wrapper class

class IBase : public COleDispatchDriver
{
public:
	IBase() {}		// Calls COleDispatchDriver default constructor
	IBase(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBase(const IBase& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	double GetX0();
	void SetX0(double newValue);
	double GetY0();
	void SetY0(double newValue);
	double GetBranchX();
	void SetBranchX(double newValue);
	double GetBranchY();
	void SetBranchY(double newValue);
	BOOL GetDrawType();
	void SetDrawType(BOOL bNewValue);
	BOOL GetAutoSorted();
	void SetAutoSorted(BOOL bNewValue);
	LPDISPATCH GetText();
};
/////////////////////////////////////////////////////////////////////////////
// ITolerances wrapper class

class ITolerances : public COleDispatchDriver
{
public:
	ITolerances() {}		// Calls COleDispatchDriver default constructor
	ITolerances(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITolerances(const ITolerances& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetTolerance(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ITolerance wrapper class

class ITolerance : public COleDispatchDriver
{
public:
	ITolerance() {}		// Calls COleDispatchDriver default constructor
	ITolerance(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITolerance(const ITolerance& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetArrowType(long Index);
	void SetArrowType(long Index, BOOL bNewValue);
	long GetBranchPos(long Index);
	void SetBranchPos(long Index, long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingTables wrapper class

class IDrawingTables : public COleDispatchDriver
{
public:
	IDrawingTables() {}		// Calls COleDispatchDriver default constructor
	IDrawingTables(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingTables(const IDrawingTables& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetDrawingTable(const VARIANT& Index);
	LPDISPATCH Add(long RowsCount, long ColumnsCount, double RowHeigh, double ColumnsWidth, long TitlePos);
	LPDISPATCH Load(LPCTSTR FileName);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingTable wrapper class

class IDrawingTable : public COleDispatchDriver
{
public:
	IDrawingTable() {}		// Calls COleDispatchDriver default constructor
	IDrawingTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingTable(const IDrawingTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	void SetAngle(double newValue);
	double GetAngle();
	void SetFixedCellsSize(BOOL bNewValue);
	BOOL GetFixedCellsSize();
	void SetFixedRowCount(BOOL bNewValue);
	BOOL GetFixedRowCount();
	void SetFixedColumnCount(BOOL bNewValue);
	BOOL GetFixedColumnCount();
	BOOL Save(LPCTSTR FileName);
};
/////////////////////////////////////////////////////////////////////////////
// IViewPointers wrapper class

class IViewPointers : public COleDispatchDriver
{
public:
	IViewPointers() {}		// Calls COleDispatchDriver default constructor
	IViewPointers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IViewPointers(const IViewPointers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetViewPointer(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IViewPointer wrapper class

class IViewPointer : public COleDispatchDriver
{
public:
	IViewPointer() {}		// Calls COleDispatchDriver default constructor
	IViewPointer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IViewPointer(const IViewPointer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetX1();
	void SetX1(double newValue);
	double GetY1();
	void SetY1(double newValue);
	double GetX2();
	void SetX2(double newValue);
	double GetY2();
	void SetY2(double newValue);
	double GetTextX();
	void SetTextX(double newValue);
	double GetTextY();
	void SetTextY(double newValue);
	BOOL GetAutoSorted();
	void SetAutoSorted(BOOL bNewValue);
	BOOL GetAutoSheet();
	void SetAutoSheet(BOOL bNewValue);
	BOOL GetAutoZone();
	void SetAutoZone(BOOL bNewValue);
	LPDISPATCH GetText();
	LPDISPATCH GetAdditionalText();
};
/////////////////////////////////////////////////////////////////////////////
// ICentreMarkers wrapper class

class ICentreMarkers : public COleDispatchDriver
{
public:
	ICentreMarkers() {}		// Calls COleDispatchDriver default constructor
	ICentreMarkers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICentreMarkers(const ICentreMarkers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetCentreMarker(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// ICentreMarker wrapper class

class ICentreMarker : public COleDispatchDriver
{
public:
	ICentreMarker() {}		// Calls COleDispatchDriver default constructor
	ICentreMarker(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICentreMarker(const ICentreMarker& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	LPDISPATCH GetBaseObject();
	void SetBaseObject(LPDISPATCH newValue);
	void SetX(double newValue);
	double GetX();
	void SetY(double newValue);
	double GetY();
	void SetAngle(double newValue);
	double GetAngle();
	void SetSignType(long nNewValue);
	long GetSignType();
	void SetSemiAxisAutoLength(long AxisType, BOOL bNewValue);
	BOOL GetSemiAxisAutoLength(long AxisType);
	void SetSemiAxisLength(long AxisType, double newValue);
	double GetSemiAxisLength(long AxisType);
	void SetCrosshairSize(double newValue);
	double GetCrosshairSize();
	void SetCrosshairSizeModify(BOOL bNewValue);
	BOOL GetCrosshairSizeModify();
};
/////////////////////////////////////////////////////////////////////////////
// IRemoteElements wrapper class

class IRemoteElements : public COleDispatchDriver
{
public:
	IRemoteElements() {}		// Calls COleDispatchDriver default constructor
	IRemoteElements(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRemoteElements(const IRemoteElements& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetRemoteElement(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IRemoteElement wrapper class

class IRemoteElement : public COleDispatchDriver
{
public:
	IRemoteElement() {}		// Calls COleDispatchDriver default constructor
	IRemoteElement(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRemoteElement(const IRemoteElement& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	double GetRadius();
	void SetRadius(double newValue);
	double GetHeight();
	void SetHeight(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	long GetForm();
	void SetForm(long nNewValue);
	LPDISPATCH GetTextUp();
	LPDISPATCH GetTextDown();
	double GetFilletRadius();
	void SetFilletRadius(double newValue);
	BOOL GetAutoSorted();
	void SetAutoSorted(BOOL bNewValue);
	BOOL GetAutoSheet();
	void SetAutoSheet(BOOL bNewValue);
	BOOL GetAutoZone();
	void SetAutoZone(BOOL bNewValue);
	LPDISPATCH GetAdditionalText();
};
/////////////////////////////////////////////////////////////////////////////
// IAxisLines wrapper class

class IAxisLines : public COleDispatchDriver
{
public:
	IAxisLines() {}		// Calls COleDispatchDriver default constructor
	IAxisLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAxisLines(const IAxisLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetAxisLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IAxisLine wrapper class

class IAxisLine : public COleDispatchDriver
{
public:
	IAxisLine() {}		// Calls COleDispatchDriver default constructor
	IAxisLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAxisLine(const IAxisLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetAngle(double newValue);
	double GetAngle();
	void SetLength(double newValue);
	double GetLength();
};
/////////////////////////////////////////////////////////////////////////////
// IWaveLines wrapper class

class IWaveLines : public COleDispatchDriver
{
public:
	IWaveLines() {}		// Calls COleDispatchDriver default constructor
	IWaveLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWaveLines(const IWaveLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetWaveLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IWaveLine wrapper class

class IWaveLine : public COleDispatchDriver
{
public:
	IWaveLine() {}		// Calls COleDispatchDriver default constructor
	IWaveLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWaveLine(const IWaveLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetAngle(double newValue);
	double GetAngle();
	void SetLength(double newValue);
	double GetLength();
	long GetStyle();
	void SetStyle(long nNewValue);
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetHalfWavesCount(long nNewValue);
	long GetHalfWavesCount();
	void SetWaveLength(double newValue);
	double GetWaveLength();
	BOOL SetWavesAmplitude(BOOL Representation, double NewVal);
	double GetWavesAmplitude();
	BOOL GetWavesAmplitudeRepresentation();
	void SetAutoWavesAmplitude(BOOL bNewValue);
	BOOL GetAutoWavesAmplitude();
};
/////////////////////////////////////////////////////////////////////////////
// IBrokenLines wrapper class

class IBrokenLines : public COleDispatchDriver
{
public:
	IBrokenLines() {}		// Calls COleDispatchDriver default constructor
	IBrokenLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBrokenLines(const IBrokenLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetItem(const VARIANT& Index);
	LPDISPATCH GetBrokenLine(const VARIANT& Index);
	LPDISPATCH Add();
};
/////////////////////////////////////////////////////////////////////////////
// IBrokenLine wrapper class

class IBrokenLine : public COleDispatchDriver
{
public:
	IBrokenLine() {}		// Calls COleDispatchDriver default constructor
	IBrokenLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBrokenLine(const IBrokenLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetLength(double newValue);
	double GetLength();
	void SetAngle(double newValue);
	double GetAngle();
	long GetStyle();
	void SetStyle(long nNewValue);
	void SetJutValue(double newValue);
	double GetJutValue();
	void SetAutoJutValue(BOOL bNewValue);
	BOOL GetAutoJutValue();
	void SetBreaksCount(long nNewValue);
	long GetBreaksCount();
	void SetBreakAmplitude(double newValue);
	double GetBreakAmplitude();
	void SetAutoBreakAmplitude(BOOL bNewValue);
	BOOL GetAutoBreakAmplitude();
	void SetBreakDisplacement(double newValue);
	double GetBreakDisplacement();
	void SetType1(BOOL bNewValue);
	BOOL GetType1();
};
/////////////////////////////////////////////////////////////////////////////
// IBreakAngleDimension wrapper class

class IBreakAngleDimension : public COleDispatchDriver
{
public:
	IBreakAngleDimension() {}		// Calls COleDispatchDriver default constructor
	IBreakAngleDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakAngleDimension(const IBreakAngleDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	double GetXc();
	void SetXc(double newValue);
	double GetYc();
	void SetYc(double newValue);
	void SetRadius(double newValue);
	double GetRadius();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	LPDISPATCH GetBaseObject1();
	void SetBaseObject1(LPDISPATCH newValue);
	LPDISPATCH GetBaseObject2();
	void SetBaseObject2(LPDISPATCH newValue);
	long GetDimensionType();
	void SetDimensionType(long nNewValue);
	double GetShelfX();
	void SetShelfX(double newValue);
	double GetShelfY();
	void SetShelfY(double newValue);
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetX3(double newValue);
	double GetX3();
	void SetY3(double newValue);
	double GetY3();
};
/////////////////////////////////////////////////////////////////////////////
// IBranchs wrapper class

class IBranchs : public COleDispatchDriver
{
public:
	IBranchs() {}		// Calls COleDispatchDriver default constructor
	IBranchs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBranchs(const IBranchs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetX0();
	void SetX0(double newValue);
	double GetY0();
	void SetY0(double newValue);
	long GetBranchCount();
	void SetBranchPoints(long Index, const VARIANT& newValue);
	VARIANT GetBranchPoints(long Index);
	long GetBranchPointsCount(long Index);
	void SetBranchX(long Index, double newValue);
	double GetBranchX(long Index);
	void SetBranchY(long Index, double newValue);
	double GetBranchY(long Index);
	BOOL AddBranch(long Index, const VARIANT& Points);
	BOOL AddBranchByPoint(long Index, double X, double Y);
	BOOL DeleteBranch(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// ILeader wrapper class

class ILeader : public COleDispatchDriver
{
public:
	ILeader() {}		// Calls COleDispatchDriver default constructor
	ILeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILeader(const ILeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	long GetSignType();
	void SetSignType(long nNewValue);
	BOOL GetArround();
	void SetArround(BOOL bNewValue);
	LPDISPATCH GetTextOnShelf();
	LPDISPATCH GetTextUnderShelf();
	LPDISPATCH GetTextOnBranch();
	LPDISPATCH GetTextUnderBranch();
	LPDISPATCH GetTextAfterShelf();
	void SetBranchBegin(long Index, BOOL bNewValue);
	BOOL GetBranchBegin(long Index);
	BOOL GetParallelBranch();
	void SetParallelBranch(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMarkLeader wrapper class

class IMarkLeader : public COleDispatchDriver
{
public:
	IMarkLeader() {}		// Calls COleDispatchDriver default constructor
	IMarkLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMarkLeader(const IMarkLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTextOnBranch();
	LPDISPATCH GetTextUnderBranch();
	LPDISPATCH GetDesignation();
};
/////////////////////////////////////////////////////////////////////////////
// IPositionLeader wrapper class

class IPositionLeader : public COleDispatchDriver
{
public:
	IPositionLeader() {}		// Calls COleDispatchDriver default constructor
	IPositionLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPositionLeader(const IPositionLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetShelfDirection();
	void SetShelfDirection(long nNewValue);
	BOOL GetShelfVisible();
	void SetShelfVisible(BOOL bNewValue);
	BOOL GetTextDirection();
	void SetTextDirection(BOOL bNewValue);
	long GetForm();
	void SetForm(long nNewValue);
	LPDISPATCH GetPositions();
	LPDISPATCH GetUnderPositionText();
	BOOL GetHorizontally();
	void SetHorizontally(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IChangeLeader wrapper class

class IChangeLeader : public COleDispatchDriver
{
public:
	IChangeLeader() {}		// Calls COleDispatchDriver default constructor
	IChangeLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IChangeLeader(const IChangeLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSignType();
	void SetSignType(long nNewValue);
	double GetSignHeight();
	void SetSignHeight(double newValue);
	double GetLeaderLength();
	void SetLeaderLength(double newValue);
	BOOL GetFullLeaderLength();
	void SetFullLeaderLength(BOOL bNewValue);
	LPDISPATCH GetDesignation();
};
/////////////////////////////////////////////////////////////////////////////
// IBrandLeader wrapper class

class IBrandLeader : public COleDispatchDriver
{
public:
	IBrandLeader() {}		// Calls COleDispatchDriver default constructor
	IBrandLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBrandLeader(const IBrandLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetTextOnBranch();
	LPDISPATCH GetTextUnderBranch();
	LPDISPATCH GetDesignation();
	BOOL GetDirection();
	void SetDirection(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IToleranceParam wrapper class

class IToleranceParam : public COleDispatchDriver
{
public:
	IToleranceParam() {}		// Calls COleDispatchDriver default constructor
	IToleranceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IToleranceParam(const IToleranceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetBasePointPos();
	void SetBasePointPos(long nNewValue);
	BOOL GetVertical();
	void SetVertical(BOOL bNewValue);
	LPDISPATCH GetTable();
	long GetSign();
	void SetSign(long nNewValue);
	long GetPrefixSign();
	void SetPrefixSign(long nNewValue);
	CString GetValue();
	void SetValue(LPCTSTR lpszNewValue);
	long GetSuffixSign();
	void SetSuffixSign(long nNewValue);
	LPDISPATCH GetBaseValue1();
	long GetBaseSign1();
	void SetBaseSign1(long nNewValue);
	LPDISPATCH GetBaseValue2();
	long GetBaseSign2();
	void SetBaseSign2(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IContourSegment wrapper class

class IContourSegment : public COleDispatchDriver
{
public:
	IContourSegment() {}		// Calls COleDispatchDriver default constructor
	IContourSegment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IContourSegment(const IContourSegment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetSegmentType();
	LPDISPATCH GetCurve2D();
};
/////////////////////////////////////////////////////////////////////////////
// IContourLineSegment wrapper class

class IContourLineSegment : public COleDispatchDriver
{
public:
	IContourLineSegment() {}		// Calls COleDispatchDriver default constructor
	IContourLineSegment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IContourLineSegment(const IContourLineSegment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetSegmentType();
	LPDISPATCH GetCurve2D();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetLength(double newValue);
	double GetLength();
	void SetAngle(double newValue);
	double GetAngle();
};
/////////////////////////////////////////////////////////////////////////////
// IContourArc wrapper class

class IContourArc : public COleDispatchDriver
{
public:
	IContourArc() {}		// Calls COleDispatchDriver default constructor
	IContourArc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IContourArc(const IContourArc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetSegmentType();
	LPDISPATCH GetCurve2D();
	void SetRadius(double newValue);
	double GetRadius();
	void SetDirection(BOOL bNewValue);
	BOOL GetDirection();
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetX1(double newValue);
	double GetX1();
	void SetY1(double newValue);
	double GetY1();
	void SetX2(double newValue);
	double GetX2();
	void SetY2(double newValue);
	double GetY2();
	void SetX3(double newValue);
	double GetX3();
	void SetY3(double newValue);
	double GetY3();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetAngle2(double newValue);
	double GetAngle2();
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionFragment wrapper class

class IInsertionFragment : public COleDispatchDriver
{
public:
	IInsertionFragment() {}		// Calls COleDispatchDriver default constructor
	IInsertionFragment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionFragment(const IInsertionFragment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetPlacement(double* X, double* Y, double* Angle, BOOL* MirrorSymmetry);
	BOOL SetPlacement(double X, double Y, double Angle, BOOL MirrorSymmetry);
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	CString GetFileName();
	long GetInsertionType();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	LPDISPATCH GetInsertionDefinition();
	void SetInsertionDefinition(LPDISPATCH newValue);
	void SetScale(double newValue);
	double GetScale();
	void SetMultiLayer(BOOL bNewValue);
	BOOL GetMultiLayer();
	VARIANT GetVariables();
	LPDISPATCH GetVariable(const VARIANT& Index);
	long GetVariablesCount();
	LPDISPATCH GetVariableTable();
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionView wrapper class

class IInsertionView : public COleDispatchDriver
{
public:
	IInsertionView() {}		// Calls COleDispatchDriver default constructor
	IInsertionView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionView(const IInsertionView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetDrawingObjectType();
	long GetLayerNumber();
	void SetLayerNumber(long nNewValue);
	BOOL GetTemp();
	BOOL GetValid();
	BOOL Update();
	BOOL Delete();
	long GetDrawingObjectParamType();
	void SetDrawingObjectParamType(long nNewValue);
	BOOL GetPlacement(double* X, double* Y, double* Angle, BOOL* MirrorSymmetry);
	BOOL SetPlacement(double X, double Y, double Angle, BOOL MirrorSymmetry);
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	CString GetFileName();
	long GetInsertionType();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	LPDISPATCH GetInsertionDefinition();
	void SetInsertionDefinition(LPDISPATCH newValue);
	void SetViewNumber(long nNewValue);
	long GetViewNumber();
	CString GetViewName();
	void SetThinLines(BOOL bNewValue);
	BOOL GetThinLines();
	void SetOwnerDocumentParams(BOOL bNewValue);
	BOOL GetOwnerDocumentParams();
};
/////////////////////////////////////////////////////////////////////////////
// IInsertionsManager wrapper class

class IInsertionsManager : public COleDispatchDriver
{
public:
	IInsertionsManager() {}		// Calls COleDispatchDriver default constructor
	IInsertionsManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IInsertionsManager(const IInsertionsManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetInsertionDefinitions(long Type);
	LPDISPATCH GetInsertionDefinition(long Type, const VARIANT& Index);
	LPDISPATCH AddDefinition(long Type, LPCTSTR Name, LPCTSTR FileName);
	long GetDefinitionsCount(long Type);
};
/////////////////////////////////////////////////////////////////////////////
// IAxisLineParam wrapper class

class IAxisLineParam : public COleDispatchDriver
{
public:
	IAxisLineParam() {}		// Calls COleDispatchDriver default constructor
	IAxisLineParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAxisLineParam(const IAxisLineParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetJutLength(double newValue);
	double GetJutLength();
	void SetDottedLength(double newValue);
	double GetDottedLength();
	void SetInterval(double newValue);
	double GetInterval();
	void SetAutoDetectedDash(BOOL bNewValue);
	BOOL GetAutoDetectedDash();
	void SetDashMaxLength(double newValue);
	double GetDashMaxLength();
	void SetJutLengthModify(BOOL bNewValue);
	BOOL GetJutLengthModify();
	void SetDottedLengthModify(BOOL bNewValue);
	BOOL GetDottedLengthModify();
	void SetIntervalModify(BOOL bNewValue);
	BOOL GetIntervalModify();
	void SetAutoDetectedDashModify(BOOL bNewValue);
	BOOL GetAutoDetectedDashModify();
	void SetDashMaxLengthModify(BOOL bNewValue);
	BOOL GetDashMaxLengthModify();
};
/////////////////////////////////////////////////////////////////////////////
// IBoundariesObject wrapper class

class IBoundariesObject : public COleDispatchDriver
{
public:
	IBoundariesObject() {}		// Calls COleDispatchDriver default constructor
	IBoundariesObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBoundariesObject(const IBoundariesObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetBoundaries();
	BOOL AddBoundaries(const VARIANT& Objects, BOOL DeleteSource);
	BOOL Clear();
};
/////////////////////////////////////////////////////////////////////////////
// IAnnotativeObject wrapper class

class IAnnotativeObject : public COleDispatchDriver
{
public:
	IAnnotativeObject() {}		// Calls COleDispatchDriver default constructor
	IAnnotativeObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAnnotativeObject(const IAnnotativeObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSign1();
	void SetSign1(long nNewValue);
	long GetSign2();
	void SetSign2(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IAnnotativeContainer wrapper class

class IAnnotativeContainer : public COleDispatchDriver
{
public:
	IAnnotativeContainer() {}		// Calls COleDispatchDriver default constructor
	IAnnotativeContainer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAnnotativeContainer(const IAnnotativeContainer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetItem(const VARIANT& Index);
	long GetCount();
	LPDISPATCH Add(long Type);
	LPDISPATCH CreateByGeomObject(LPDISPATCH Obj);
};
/////////////////////////////////////////////////////////////////////////////
// ICurveCopyObjectParam wrapper class

class ICurveCopyObjectParam : public COleDispatchDriver
{
public:
	ICurveCopyObjectParam() {}		// Calls COleDispatchDriver default constructor
	ICurveCopyObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICurveCopyObjectParam(const ICurveCopyObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetXOld(double newValue);
	double GetXOld();
	void SetYOld(double newValue);
	double GetYOld();
	void SetXNew(double newValue);
	double GetXNew();
	void SetYNew(double newValue);
	double GetYNew();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	void SetAttributeCopy(BOOL bNewValue);
	BOOL GetAttributeCopy();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	void SetSpecificationObjectCopy(BOOL bNewValue);
	BOOL GetSpecificationObjectCopy();
	void SetBaseCurve(LPDISPATCH newValue);
	LPDISPATCH GetBaseCurve();
	void SetStep(double newValue);
	double GetStep();
	void SetCount(long nNewValue);
	long GetCount();
	void SetTurnToNormal(BOOL bNewValue);
	BOOL GetTurnToNormal();
	void SetPositiveDirection(BOOL bNewValue);
	BOOL GetPositiveDirection();
	void SetStepFactor(BOOL bNewValue);
	BOOL GetStepFactor();
};
/////////////////////////////////////////////////////////////////////////////
// ICircleCopyObjectParam wrapper class

class ICircleCopyObjectParam : public COleDispatchDriver
{
public:
	ICircleCopyObjectParam() {}		// Calls COleDispatchDriver default constructor
	ICircleCopyObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircleCopyObjectParam(const ICircleCopyObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetXOld(double newValue);
	double GetXOld();
	void SetYOld(double newValue);
	double GetYOld();
	void SetXNew(double newValue);
	double GetXNew();
	void SetYNew(double newValue);
	double GetYNew();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	void SetAttributeCopy(BOOL bNewValue);
	BOOL GetAttributeCopy();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	void SetSpecificationObjectCopy(BOOL bNewValue);
	BOOL GetSpecificationObjectCopy();
	void SetXc(double newValue);
	double GetXc();
	void SetYc(double newValue);
	double GetYc();
	void SetStep(double newValue);
	double GetStep();
	void SetCount(long nNewValue);
	long GetCount();
	void SetByStep(BOOL bNewValue);
	BOOL GetByStep();
	void SetPositiveDirection(BOOL bNewValue);
	BOOL GetPositiveDirection();
};
/////////////////////////////////////////////////////////////////////////////
// IExternalTessellationObject wrapper class

class IExternalTessellationObject : public COleDispatchDriver
{
public:
	IExternalTessellationObject() {}		// Calls COleDispatchDriver default constructor
	IExternalTessellationObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExternalTessellationObject(const IExternalTessellationObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetObjectID();
	BOOL SetTessellation(const VARIANT& Points, const VARIANT& Indexes, const VARIANT& Normals, const VARIANT& Colors);
	void SetVisible(LPDISPATCH Frame, BOOL bNewValue);
	BOOL Delete();
	BOOL SetAdvancedColor(long Color, double Ambient, double Diffuse, double Specularity, double Shininess, double Transparency, double Emission);
	BOOL SetEdges(const VARIANT& Points, const VARIANT& Edges, const VARIANT& Colors);
	BOOL SetPlaces(const VARIANT& Places);
	BOOL SetEdgeStyles(const VARIANT& Styles);
	BOOL SetEdgeWidths(const VARIANT& Widths);
	BOOL SetTextureImage(long Width, long Heigh, BOOL RGBA, BOOL WrapMode, BOOL FiltMode, const VARIANT& ImageData);
	BOOL SetTexturePoints(BOOL Image2D, const VARIANT& ImagePoints);
	BOOL SetFacetMode(BOOL SideMode, long CullingMode);
};
/////////////////////////////////////////////////////////////////////////////
// IExternalTessellationManager wrapper class

class IExternalTessellationManager : public COleDispatchDriver
{
public:
	IExternalTessellationManager() {}		// Calls COleDispatchDriver default constructor
	IExternalTessellationManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExternalTessellationManager(const IExternalTessellationManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH Add();
	LPDISPATCH GetTessellationObject(long Id);
	void SetObjectsVisible(const VARIANT& Ids, LPDISPATCH Frame, BOOL bNewValue);
	BOOL DeleteObjects(const VARIANT& Id);
	BOOL Clear();
	LPDISPATCH AddGDIObject();
	LPDISPATCH GetGDIObject(long Id);
};
/////////////////////////////////////////////////////////////////////////////
// IExternalGDIObject wrapper class

class IExternalGDIObject : public COleDispatchDriver
{
public:
	IExternalGDIObject() {}		// Calls COleDispatchDriver default constructor
	IExternalGDIObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExternalGDIObject(const IExternalGDIObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	long GetObjectID();
	BOOL SetTexts(const VARIANT& Points, const VARIANT& Texts, const VARIANT& Colors, const VARIANT& Fonts, BOOL Is3DPoints);
	void SetVisible(LPDISPATCH Frame, BOOL bNewValue);
	BOOL Delete();
};
/////////////////////////////////////////////////////////////////////////////
// IModelCurve3D wrapper class

class IModelCurve3D : public COleDispatchDriver
{
public:
	IModelCurve3D() {}		// Calls COleDispatchDriver default constructor
	IModelCurve3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelCurve3D(const IModelCurve3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVertexVisible();
	void SetVertexVisible(BOOL bNewValue);
	long GetVertexStyle();
	void SetVertexStyle(long nNewValue);
	long GetEdgesStyle();
	void SetEdgesStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICircularCopyObjectParam wrapper class

class ICircularCopyObjectParam : public COleDispatchDriver
{
public:
	ICircularCopyObjectParam() {}		// Calls COleDispatchDriver default constructor
	ICircularCopyObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircularCopyObjectParam(const ICircularCopyObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetXOld(double newValue);
	double GetXOld();
	void SetYOld(double newValue);
	double GetYOld();
	void SetXNew(double newValue);
	double GetXNew();
	void SetYNew(double newValue);
	double GetYNew();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	void SetAttributeCopy(BOOL bNewValue);
	BOOL GetAttributeCopy();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	void SetSpecificationObjectCopy(BOOL bNewValue);
	BOOL GetSpecificationObjectCopy();
	void SetRadius(double newValue);
	double GetRadius();
	void SetStep1(double newValue);
	double GetStep1();
	void SetStepFactor1(BOOL bNewValue);
	BOOL GetStepFactor1();
	void SetCount1(long nNewValue);
	long GetCount1();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetStep2(double newValue);
	double GetStep2();
	void SetStepFactor2(BOOL bNewValue);
	BOOL GetStepFactor2();
	void SetCount2(long nNewValue);
	long GetCount2();
	void SetSaveCentreCopy(BOOL bNewValue);
	BOOL GetSaveCentreCopy();
	void SetTurnObject(BOOL bNewValue);
	BOOL GetTurnObject();
};
/////////////////////////////////////////////////////////////////////////////
// IMeshCopyObjectParam wrapper class

class IMeshCopyObjectParam : public COleDispatchDriver
{
public:
	IMeshCopyObjectParam() {}		// Calls COleDispatchDriver default constructor
	IMeshCopyObjectParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMeshCopyObjectParam(const IMeshCopyObjectParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetXOld(double newValue);
	double GetXOld();
	void SetYOld(double newValue);
	double GetYOld();
	void SetXNew(double newValue);
	double GetXNew();
	void SetYNew(double newValue);
	double GetYNew();
	void SetScale(double newValue);
	double GetScale();
	void SetAngle(double newValue);
	double GetAngle();
	void SetAttributeCopy(BOOL bNewValue);
	BOOL GetAttributeCopy();
	void SetDimensionLineScale(BOOL bNewValue);
	BOOL GetDimensionLineScale();
	void SetSpecificationObjectCopy(BOOL bNewValue);
	BOOL GetSpecificationObjectCopy();
	void SetAngle1(double newValue);
	double GetAngle1();
	void SetStep1(double newValue);
	double GetStep1();
	void SetStepFactor1(BOOL bNewValue);
	BOOL GetStepFactor1();
	void SetCount1(long nNewValue);
	long GetCount1();
	void SetAngle2(double newValue);
	double GetAngle2();
	void SetStep2(double newValue);
	double GetStep2();
	void SetStepFactor2(BOOL bNewValue);
	BOOL GetStepFactor2();
	void SetCount2(long nNewValue);
	long GetCount2();
	void SetSaveCornersCopy(BOOL bNewValue);
	BOOL GetSaveCornersCopy();
	void SetSaveCentreCopy(BOOL bNewValue);
	BOOL GetSaveCentreCopy();
};
/////////////////////////////////////////////////////////////////////////////
// IHypertextReferenceParam wrapper class

class IHypertextReferenceParam : public COleDispatchDriver
{
public:
	IHypertextReferenceParam() {}		// Calls COleDispatchDriver default constructor
	IHypertextReferenceParam(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHypertextReferenceParam(const IHypertextReferenceParam& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetLinkObject(LPDISPATCH newValue);
	LPDISPATCH GetLinkObject();
	void SetHypertextType(long nNewValue);
	long GetHypertextType();
	void SetTextLineIndex(long nNewValue);
	long GetTextLineIndex();
	void SetBrackets(BOOL bNewValue);
	BOOL GetBrackets();
	void SetPrecission(long nNewValue);
	long GetPrecission();
	BOOL Destroy();
	void SetPropertyId(double newValue);
	double GetPropertyId();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyOpticalProps wrapper class

class IPropertyOpticalProps : public COleDispatchDriver
{
public:
	IPropertyOpticalProps() {}		// Calls COleDispatchDriver default constructor
	IPropertyOpticalProps(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyOpticalProps(const IPropertyOpticalProps& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetName(LPCTSTR lpszNewValue);
	CString GetName();
	long GetControlType();
	void SetId(long nNewValue);
	long GetId();
	void SetEnable(BOOL bNewValue);
	BOOL GetEnable();
	void SetValue(const VARIANT& newValue);
	VARIANT GetValue();
	void SetNameVisibility(long nNewValue);
	long GetNameVisibility();
	void SetHint(LPCTSTR lpszNewValue);
	CString GetHint();
	void SetTips(LPCTSTR lpszNewValue);
	CString GetTips();
	LPDISPATCH GetColorParam();
	BOOL Init(LPDISPATCH PVal);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyEditCheckBox wrapper class

class IPropertyEditCheckBox : public COleDispatchDriver
{
public:
	IPropertyEditCheckBox() {}		// Calls COleDispatchDriver default constructor
	IPropertyEditCheckBox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyEditCheckBox(const IPropertyEditCheckBox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetCheckButton();
	void SetCheckButton(BOOL bNewValue);
	BOOL GetEnableCheckButton();
	void SetEnableCheckButton(BOOL bNewValue);
	void SetCustomBitmaps(const VARIANT& IdUnchecked, const VARIANT& IdChecked, const VARIANT& IdIndeterminate, const VARIANT& HInstance);
};
/////////////////////////////////////////////////////////////////////////////
// ITablePattern wrapper class

class ITablePattern : public COleDispatchDriver
{
public:
	ITablePattern() {}		// Calls COleDispatchDriver default constructor
	ITablePattern(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITablePattern(const ITablePattern& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetType();
	long GetReference();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void SetHidden(BOOL bNewValue);
	BOOL GetHidden();
	BOOL Update();
	BOOL GetValid();
	LPDISPATCH GetPart();
	long GetModelObjectType();
	LPDISPATCH GetOwner();
	void SetInitialObjects(const VARIANT& newValue);
	VARIANT GetInitialObjects();
	void SetInstanceDeletedIndexes(const VARIANT& newValue);
	VARIANT GetInstanceDeletedIndexes();
	BOOL Destroy();
	BOOL IsInitialObject(LPDISPATCH Object);
	BOOL AddInitialObjects(const VARIANT& Objects);
	BOOL Clear();
	BOOL IsSuitableObject(LPDISPATCH Object);
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetBasePointType(long nNewValue);
	long GetBasePointType();
	void SetBasePoint(LPDISPATCH newValue);
	LPDISPATCH GetBasePoint();
	LPDISPATCH GetExemplar(long Index1, long Index2);
	BOOL GetExemplarsCounts(long* Count1, long* Count2);
	void SetFileName(LPCTSTR lpszNewValue);
	CString GetFileName();
	void SetPointsType(long nNewValue);
	long GetPointsType();
	void SetSaveInitialOrientation(BOOL bNewValue);
	BOOL GetSaveInitialOrientation();
};
/////////////////////////////////////////////////////////////////////////////
// ICopyObjectParam1 wrapper class

class ICopyObjectParam1 : public COleDispatchDriver
{
public:
	ICopyObjectParam1() {}		// Calls COleDispatchDriver default constructor
	ICopyObjectParam1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICopyObjectParam1(const ICopyObjectParam1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetStoragesCopy(BOOL bNewValue);
	BOOL GetStoragesCopy();
	void SetHyperLinksCopy(BOOL bNewValue);
	BOOL GetHyperLinksCopy();
};

#endif

