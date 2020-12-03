unit KOMPAS;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs,ComObj,KsTLB,ksConstTLB,LDefin2D,LtDefine,ksAPI7,ksAuto,ks2DCOM_TLB,
  Vcl.StdCtrls, Vcl.ComCtrls, Vcl.Buttons;

type
  TForm1 = class(TForm)
    btnConnect: TButton;
    pbrConnect: TProgressBar;
    btnBrose: TBitBtn;
    dlgOpen: TOpenDialog;
    procedure btnConnectClick(Sender: TObject);
    procedure btnBroseClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);

  private
    { Private declarations }
  public

    { Public declarations }
  end;
var
  Form1: TForm1;

  Path:String;

implementation

{$R *.dfm}

procedure TForm1.btnBroseClick(Sender: TObject);
var
i:integer;
begin

  if dlgOpen.Execute()
    then
      begin
        Path:=dlgOpen.FileName;
        //Showmessage(Pchar(Path));
      end;
  //ksOpenDocument(Path;false);
end;
procedure Quit;//����� �� ���������
var
  Result:Byte;
  i:Byte;
begin
  Result:=Application.MessageBox('�� ������������� ������ ��������� ������ � ����������?',
  PChar(Form1.Caption),52);
  if Result=6
   then
      begin
       //�������� ��������� ����������������
       Form1.AlphaBlend:=True;
       for i:=255 DownTo 0 do
            begin
              Form1.AlphaBlendValue:=i;
              Sleep(5);
            end;
       Application.Terminate
      end
    else
      Application.Run;
end;
{��������� ��������� ���������� � ������}
procedure Connect2Kompas;
var
  kompas:KsTLB.KompasObject;
  Result:Byte;
  i:Integer;
  Document2D: ksDocument2D;
  DocumentParam: ksDocumentParam;
  //Kompas: KompasObject;//���������� � ��������� ������� ������
  Hand:string;
  function UserLightObj( obj: Reference; c: string; count: integer; doc: ksDocument2D ) : WordBool;
  begin
    doc.ksLightObj( obj, 1 );
    kompas.ksMessage( Format( c, [count] ) );
    doc.ksLightObj( obj, 0 );
    Result := true;
  end;
procedure WalkFromMacro;
var
  obj, macro: Reference;
  s, s1: string;
  count, count1: integer;
  iter: ksIterator;
  iter2: ksIterator;
begin
  //� ������� ��������� � ���� �������� �������� ��� �������� �� ��������������
  count := 0;
  count1 := 0;
  s := '����� ����� = %d';
  s1 := '����� ������� = %d';
  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateIterator( MACRO_OBJ, 0 ) then
  begin
    macro := iter.ksMoveIterator( 'F' );
    while Document2D.ksExistObj( macro ) <> 0 do
    begin
      count := count + 1;
      UserLightObj( macro, s, count, Document2D ); // ��������� ������������
      iter2 := ksIterator( kompas.GetIterator() ); // ������� �������� ��� �������� �� �������������
      if iter2.ksCreateIterator( ALL_OBJ, macro ) then
      begin
        {obj := iter2.ksMoveIterator( 'F' );
        while Document2D.ksExistObj( obj ) <> 0 do
        begin
          count1 := count1 + 1;
          UserLightObj( obj, s1, count1, Document2D ); //��������� ������ � �����
          obj := iter2.ksMoveIterator( 'N' );

        end;}

      end;
      macro := iter.ksMoveIterator( 'N' );
       if (count mod 2 = 0)
        then
         begin
           Result:=Application.MessageBox('׸���� ������������',
           PChar(Application.Title),MB_OK+MB_ICONINFORMATION);
           //�������� ������� �������������
           Showmessage(IntToStr(count));
           Document2D.ksDeleteObj(macro-1);
           Showmessage(IntToStr(count));
         end;
    end;
		  iter.ksDeleteIterator;
  end;
  if count = 0
    then
      kompas.ksError( '������������� � ��������� �����������' );
end;
  function CreateOpenDocumentKompas():boolean;//������� ��������/�������� ���������
    begin
      //�������� � ��������� ��������� ���������� ���������
      DocumentParam:=ksDocumentParam(kompas.GetParamStruct(ko_DocumentParam));
      DocumentParam.Init();
      DocumentParam.type_:=ksDocumentDrawing;

      //�������� ��������� ���������
      Document2D:=ksDocument2D(kompas.Document2D);
      //Document2D.ksOpenView(2);
      if Path<>null
       then
        begin
          Document2D.ksOpenDocument(Path,false);//������� ����� �� ���� Path
          DocumentParam:=ksDocumentParam(kompas.GetParamStruct(ko_DocumentParam));
          //WalkFromDocWithAttr;
          kompas.Visible:=true;
          WalkFromMacro;//�������� �� ��������������
        end
       else
        begin
         //������� ����� ������
         Document2D.ksCreateDocument(DocumentParam);
         kompas.Visible:=true;
        end;



    end;
begin
Form1.pbrConnect.Min := 0; // �� ������ ������ ������ �������
Form1.pbrConnect.Max := 100; // ��� ������������ �������� ��������� (��-�� Position)
Form1.pbrConnect.Position := 0; // �������� ������� ���������
for i:= 0 to 100 do
  begin
    Form1.pbrConnect.Position:=i;
    Sleep(2);
  end;
//�������� ������������ ������
  try
    begin
      if KompasObject(GetActiveOleObject('Kompas.Application.5'))<>nil
        then
          begin
            kompas:=KompasObject(GetActiveOleObject('Kompas.Application.5'));
            Result:=Application.MessageBox('����������� � ���������� ������� �������',
            PChar(Application.Title),MB_OK+MB_ICONINFORMATION);
            CreateOpenDocumentKompas();
          end
    end;//try
  except
    on EOleSysError
        do
          begin
            Result:=Application.MessageBox('[EOleSysError] ����������� � ������� ��������. ���������� �� �������� ��� ���� �������� ���������',
    PChar(Form1.Caption),MB_OK+MB_ICONWARNING);
          kompas:=KompasObject(CreateOleObject('Kompas.Application.5'));
          CreateOpenDocumentKompas();
          end;
end;
//
end;

procedure TForm1.btnConnectClick(Sender: TObject);
begin
  Connect2Kompas;
end;
procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  Quit;
end;
//-----------------------------/

end.
