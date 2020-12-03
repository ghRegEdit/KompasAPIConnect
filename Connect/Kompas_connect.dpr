program Kompas_connect;

uses
  Vcl.Forms,
  KOMPAS in 'KOMPAS.pas' {Form1},
  step51 in 'step51.pas',
  step71 in 'step71.pas',
  ks2DCOM_TLB in 'Include\ks2DCOM_TLB.pas',
  ksAPI7 in 'Include\ksAPI7.pas',
  ksAuto in 'Include\ksAuto.pas',
  ksConstTLB in 'Include\ksConstTLB.pas',
  KsTLB in 'Include\KsTLB.pas',
  LDefin2D in 'Include\LDefin2D.pas',
  LDefin3D in 'Include\LDefin3D.pas',
  LIBdb in 'Include\LIBdb.pas',
  libhppar in 'Include\libhppar.pas',
  LibTool in 'Include\LibTool.pas',
  LtDefine in 'Include\LtDefine.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
