#pragma once
#include "ActiveXWnd.h"

//*******************************************************************
// Автор: Поршнев
//*******************************************************************
// Описание интерфейса получения эвентов от КГАХ. Дальнейшее использование
// в описано в файле bcgptabwnd2.h
//*******************************************************************
interface IKGAXEvents
{
	virtual void OnKgCreateKompasCtrl(long index) = 0;
	virtual void OnKgMouseDownKompasCtrl(short nButton, short nShiftState, long x, long y, BOOL* proceed) = 0;
	virtual void OnKgMouseDblClickKompasCtrl(short nButton, short nShiftState, long x, long y, BOOL* proceed) = 0;
	virtual void OnKgMouseUpKompasCtrl(short nButton, short nShiftState, long x, long y, BOOL* proceed) = 0;
	virtual void OnKgStopCurrentProcessKompasCtrl() = 0;
};

// Конкретизация шаблонного класса для работы с ActiveX формами.
typedef CActiveXWnd<KGAX, _DKGAX, _DKGAXPtr> CKGAXCtrlBase;

//*******************************************************************
// Автор: Поршнев
//*******************************************************************
// переопределение функций init и reset для возможности подсчета
// количества запущенных КГАХ в приложении и реализации возможности
// закрытия КОМПАСа при освобождении всех КГАХ.
//*******************************************************************
class CKGAXCtrl : public CKGAXCtrlBase
{
protected:
  KompasObjectPtr kompas; 
  bool       create;
public:
	         CKGAXCtrl();
	virtual ~CKGAXCtrl();
	virtual void init();
	virtual void reset();
};
