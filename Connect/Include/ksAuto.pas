////////////////////////////////////////////////////////////////////////////////
//  System: Kомпас-График API
//  Module: ksAuto
////////////////////////////////////////////////////////////////////////////////
unit ksAuto;

{$ALIGN OFF}

interface

uses
  Windows, LibTool;

const
{$IFDEF __LIGHT_VERSION__}
  APPAUTODLL = 'klAPI5.DLL';
  KSAPI7DLL  = 'klAPI7.DLL';
{$ELSE}
  APPAUTODLL = 'kAPI5.dll';
  KSAPI7DLL  = 'kAPI7.DLL';
{$ENDIF}

type
  PIDispatch = ^IDispatch;

//------------------------------------------------------------------------------
// Получить Компас-интерфейс
//------------------------------------------------------------------------------
function CreateKompasObject: PIDispatch; pascal;

function CreateKompasApplication: PIDispatch; pascal;

implementation

function CreateKompasObject;      external APPAUTODLL Name 'CreateKompasObject';
function CreateKompasApplication; external KSAPI7DLL  Name 'CreateKompasApplication';

end.

