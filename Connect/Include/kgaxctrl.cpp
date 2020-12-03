#include "StdAfx.h"
#include "kgaxctrl.h"

static DWORD gKompasObjects = 0;
static BOOL gIsKompasVisible = FALSE;

CKGAXCtrl::CKGAXCtrl() : create ( false )
{
}

void CKGAXCtrl::init()
{
	CKGAXCtrlBase::init();
	create = true;
	kompas = ip->GetKompasObject();

	if (gKompasObjects == 0)
		gIsKompasVisible =  kompas ? kompas->Visible : FALSE;
  gKompasObjects++;
}

void CKGAXCtrl::reset()
{
  CKGAXCtrlBase::reset();
}

CKGAXCtrl::~CKGAXCtrl()
{
  if ( create )
  {
 	  gKompasObjects--;

    if ( ( gKompasObjects == 0 ) && !gIsKompasVisible && (bool)kompas )
    {
      kompas->Quit();
    }
    
  }	
  kompas = 0;
}

