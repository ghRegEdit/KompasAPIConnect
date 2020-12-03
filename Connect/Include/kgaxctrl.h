#pragma once
#include "ActiveXWnd.h"

//*******************************************************************
// �����: �������
//*******************************************************************
// �������� ���������� ��������� ������� �� ����. ���������� �������������
// � ������� � ����� bcgptabwnd2.h
//*******************************************************************
interface IKGAXEvents
{
	virtual void OnKgCreateKompasCtrl(long index) = 0;
	virtual void OnKgMouseDownKompasCtrl(short nButton, short nShiftState, long x, long y, BOOL* proceed) = 0;
	virtual void OnKgMouseDblClickKompasCtrl(short nButton, short nShiftState, long x, long y, BOOL* proceed) = 0;
	virtual void OnKgMouseUpKompasCtrl(short nButton, short nShiftState, long x, long y, BOOL* proceed) = 0;
	virtual void OnKgStopCurrentProcessKompasCtrl() = 0;
};

// ������������� ���������� ������ ��� ������ � ActiveX �������.
typedef CActiveXWnd<KGAX, _DKGAX, _DKGAXPtr> CKGAXCtrlBase;

//*******************************************************************
// �����: �������
//*******************************************************************
// ��������������� ������� init � reset ��� ����������� ��������
// ���������� ���������� ���� � ���������� � ���������� �����������
// �������� ������� ��� ������������ ���� ����.
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
