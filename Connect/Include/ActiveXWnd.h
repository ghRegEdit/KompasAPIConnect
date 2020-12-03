#pragma once

//*******************************************************************
// �����: �������
//*******************************************************************
// �����-���������� ��� ��������� CWnd ������ ��� ActiveX �����.
// �� ���� ����������� ������� ������ � ���������, ������� ���������
// ������ � ������
// �������������:
// wndCtrl.method - ������ � ������� CWnd
// wndCtrl->method ��� wndCtrl.ip->method - ������ � ������� ����������
//
// ���� ��� ����������� ������� init � reset - ������ �����������
// ����������� ����� �� �������� ��� ������������� ��� ����������� ���� �����
//*******************************************************************
template <class T_Fabric, class T_Interface, class T_InterfacePtr>
	class CActiveXWnd : public CWnd
{
//	_COM_SMARTPTR_TYPEDEF(T_Interface, __uuidof(T_Interface));	

public:
	T_InterfacePtr ip;
	T_InterfacePtr & operator ->() { return ip; }

protected:
	CLSID m_clsid;
	
public:
	CActiveXWnd() : CWnd() { m_clsid = __uuidof(T_Fabric); }
	virtual ~CActiveXWnd() { ip = 0; }
	
	CLSID const& GetClsid() { return m_clsid; }

	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL)
	{
		BOOL res = CreateControl(m_clsid, lpszWindowName, dwStyle, rect, pParentWnd, nID);
		
		if ( !res )
			return FALSE;
		
		init();
		return TRUE;
	}
	
	virtual BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
		UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ 
		BOOL res = CreateControl(m_clsid, lpszWindowName, dwStyle, rect, pParentWnd, nID,
			pPersist, bStorage, bstrLicKey);
		
		if ( !res )
			return FALSE;
		
		init();
		return TRUE;
	}
	
	virtual void reset()
	{
		ip = 0;
		if ( ::IsWindow(m_hWnd) )
	    CloseWindow();
	}

	virtual void init()
	{
		if (ip != 0) // ��� �������� ���������
			return;
    ip = GetControlUnknown();
	}
};
