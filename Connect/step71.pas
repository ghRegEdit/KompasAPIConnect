unit step71;

interface
  procedure  LIBRARYENTRY( command: WORD  ); Pascal;
  function   LIBRARYID   : Cardinal;      Pascal;
  function   LIBRARYNAME : PChar; pascal;

implementation

uses
  Windows,
  SysUtils,
  LDefin2D,
  ksConstTLB,
  ksAuto,
{$IFDEF __LIGHT_VERSION__}
  klTLB;
{$ELSE}
  ksTLB;
{$ENDIF}

var
  kompas: KompasObject;
  doc: ksDocument2D;

//------------------------------------------------------------------------------
//��������� �������
//---
function UserLightObj( obj: Reference; c: string; count: integer; doc: ksDocument2D ) : WordBool;
begin
  doc.ksLightObj( obj, 1 );
  kompas.ksMessage( Format( c, [count] ) );
  doc.ksLightObj( obj, 0 );
  Result := true;
end;

//------------------------------------------------------------------------------
//�������� �� ����������
//---
procedure WalkFromDoc;
var
  document: ksDocument2D;
	pDoc: Reference;
  docPar: ksDocumentParam;
  sheetPar: ksSheetPar;
  stSheet: ksStandartSheet;
	count: Integer;
  iter: ksIterator;
  viewPar: ksViewParam;
  number: Longint;
begin
  document := ksDocument2D( kompas.Document2D() );
	if document <> nil then
  begin
		docPar := ksDocumentParam( kompas.GetParamStruct(ko_DocumentParam) );
		if docPar = nil then exit;

		docPar.Init();
		docPar.comment := 'create document';
		docPar.author := 'Misha';
		docPar.regime := 0;
		docPar.type_ := 1;

		sheetPar := ksSheetPar( docPar.GetLayoutParam() );
		stSheet := ksStandartSheet( sheetPar.GetSheetParam() );
		if ( sheetPar = nil ) or ( stSheet = nil ) then exit;

		sheetPar.Init();
		stSheet.Init();

		sheetPar.layoutName := '';
		sheetPar.shtType := 1;
		stSheet.format := 3;
		stSheet.multiply := 1;
		stSheet.direct := false;

		docPar.fileName := 'a.cdw';
		document.ksCreateDocument( docPar );
		docPar.fileName := 'b.cdw';
		document.ksCreateDocument( docPar );
		docPar.fileName := 'c.cdw';
		document.ksCreateDocument( docPar );

		count := 0;
		iter := ksIterator( kompas.GetIterator() );
		if iter = nil then
			exit;
		if iter.ksCreateIterator( DOCUMENT_OBJ, 0 ) then //������� �������� ��� �������� �� ����������
    begin
			pDoc := iter.ksMoveIterator( 'F' );
      while pDoc <> 0 do
      begin
        if document.ksSetObjParam( pDoc, nil, DOCUMENT_STATE ) <> 0 then //������������ �������� pDoc
        begin
          count := count + 1;
          viewPar := ksViewParam( kompas.GetParamStruct(ko_ViewParam) );
          if viewPar = nil then
            exit;

          viewPar.Init();

          number := count;
          viewPar.X := 10;
          viewPar.Y := 20;
          viewPar.Scale_ := 1;
          viewPar.Angle := 0;
          viewPar.Color := 1234567890;
          viewPar.State := stACTIVE;
          viewPar.Name := 'user view';

          document.ksCreateSheetView( viewPar, number); //�������� ��� � ���������
          document.ksLayer( count ); // ������� ����
          case count of
            1 : document.ksLineSeg( 20, 10, 40, 10, 1 );            //� ������ ��������� �������� �������
            2 : document.ksCircle ( 50, 50, 20, 1 );                //�� ������ ��������� �������� ����������
            3 : document.ksArcByAngle( 50, 50, 20, 45, 135, 1, 1 ); //� ������� ��������� ��������  ����
          end;
          kompas.ksMessage( Format('�������� %d', [ count ] ) );
        end;
        pDoc := iter.ksMoveIterator( 'N' );
      end;
  		iter.ksDeleteIterator();
		end;
	end;
end;

//------------------------------------------------------------------------------
//�������� �� ����
//---
procedure WalkFromView;
var
  obj: Reference;
  count: integer;
  iter: ksIterator;
begin
  //� ������� ��������� � ���� �������� �������� ��� �������� �� ���� ���������
  count := 0;
  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateIterator( ALL_OBJ, 0 ) then
  begin
    obj := iter.ksMoveIterator( 'F' );
    while doc.ksExistObj( obj ) <> 0 do
    begin
      count := count + 1;
      UserLightObj( obj, '����� = %d', count, doc );
      obj := iter.ksMoveIterator( 'N' );
    end;
		iter.ksDeleteIterator;
  end;
end;

//------------------------------------------------------------------------------
//�������� �� �������������
//---
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
    while doc.ksExistObj( macro ) <> 0 do
    begin
      count := count + 1;
      UserLightObj( macro, s, count, doc ); // ��������� ������������
      iter2 := ksIterator( kompas.GetIterator() ); // ������� �������� ��� �������� �� �������������
      if iter2.ksCreateIterator( ALL_OBJ, macro ) then
      begin
        obj := iter2.ksMoveIterator( 'F' );
        while doc.ksExistObj( obj ) <> 0 do
        begin
          count1 := count1 + 1;
          UserLightObj( obj, s1, count1, doc ); //��������� ������ � �����
          obj := iter2.ksMoveIterator( 'N' );
        end;
      end;
      macro := iter.ksMoveIterator( 'N' );
    end;
		iter.ksDeleteIterator;
  end;
  if count = 0 then
    kompas.ksError( '������������� � ��������� �����������' );
end;

//------------------------------------------------------------------------------
//�������� �� �����
//---
procedure WalkViewDoc;
var
  docPar: ksDocumentParam;
  sheetPar: ksSheetPar;
  stSheet: ksStandartSheet;
  i: integer;
  viewPar: ksViewParam;
  number: Integer;
  pView: Reference;
  count: Integer;
  iter: ksIterator;
  ltvar: ksLtVariant;
begin
	docPar := ksDocumentParam( kompas.GetParamStruct(ko_DocumentParam) );
	if docPar = nil then exit;

	docPar.Init();
	docPar.comment := 'create document';
	docPar.author  := 'Misha';
	docPar.regime  := 0;
	docPar.type_   := 1;

	sheetPar := ksSheetPar( docPar.GetLayoutParam() );
	stSheet  := ksStandartSheet( sheetPar.GetSheetParam() );
	if ( sheetPar = nil ) or ( stSheet = nil ) then exit;

	sheetPar.Init();
  stSheet.Init();

	sheetPar.layoutName := '';
	sheetPar.shtType    := 1;
	stSheet.format      := 3;
	stSheet.multiply    := 1;
	stSheet.direct      := false;

  docPar.fileName := 'a.cdw';
  doc.ksCreateDocument( docPar );

  //�������� 5 �����
  for i := 0 to 5 do
  begin
		viewPar := ksViewParam( kompas.GetParamStruct(ko_ViewParam) );
		if viewPar = nil then
			exit;

    viewPar.Init();

    number := 0;
		viewPar.x := 10;
		viewPar.y := 20;
		viewPar.scale_ := 1;
		viewPar.Angle := 0;
		viewPar.state := stACTIVE;
    viewPar.name := 'user view';

    doc.ksCreateSheetView( viewPar, number); //�������� ��� � ���������
  end;

	count := 0;
  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateIterator( VIEW_OBJ, 0 ) then //�������� �������� ��� ��������� �� ����� � ���������
  begin
    pView := iter.ksMoveIterator( 'F' );
    while pView <> 0 do
    begin
      ltvar := ksLtVariant( kompas.GetParamStruct(ko_LtVariant) );
      if ltvar = nil then
        exit;

      ltvar.Init();

      ltvar.intVal := stCURRENT;
      if doc.ksSetObjParam( pView, ltvar, VIEW_LAYER_STATE ) <> 0 then
      begin
        case count of
          1 : doc.ksLineSeg( 20, 20, 40, 20, 1 );
          2 : doc.ksCircle( 40, 20, 30, 1 );
          3 : doc.ksArcByAngle( 50, 50, 20, 45, 135, 1, 1 );
          4 : begin
            doc.ksMtr(40,0,0,1,1);
            doc.ksLineSeg( 10, 10, 30, 30, 1 );
            doc.ksLineSeg( 30, 30, 60, 10, 1 );
            doc.ksLineSeg( 60, 10, 10, 10, 1 );
            doc.ksDeleteMtr();
          end;
          5 : begin
            doc.ksCircle( 30, 30, 20, 1 );
            doc.ksCircle( 30, 30, 10, 1 );
            doc.ksHatch( 0, 45, 2, 0, 0, 0);
              doc.ksCircle( 30, 30, 20, 1 );
              doc.ksCircle( 30, 30, 10, 1 );
            doc.ksEndObj();
          end;
        end;
      end;
      count := count + 1;
      pView := iter.ksMoveIterator ( 'N' );
    end;
		iter.ksDeleteIterator();
  end;
end;

//------------------------------------------------------------------------------
//�������� �� ������������ � ������� �������
//---
procedure WalkGroup;
var
  pNameGrp: Reference;
  count: Integer;
  iter: ksIterator;
  pWorkGrp: Reference;
begin
	count := 0;
  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateIterator( NAME_GROUP_OBJ, 0 ) then //�������� �������� ��� �������� �� ������������ ������� � ���������
  begin
    pNameGrp := iter.ksMoveIterator( 'F' );
    while pNameGrp <> 0 do
    begin
      count := count + 1;
      UserLightObj( pNameGrp, '����� = %d', count, doc );
      pNameGrp := iter.ksMoveIterator( 'N' );
    end;
		iter.ksDeleteIterator();
  end;
  //��� ������������ ������ ������� � ������ ������� �����
  doc.ksNewGroup(0);
    doc.ksCircle( 30, 30, 20, 1 );
    doc.ksCircle( 30, 30, 10, 1 );
    doc.ksHatch( 0, 45, 2, 0, 0, 0);
      doc.ksCircle( 30, 30, 20, 1 );
      doc.ksCircle( 30, 30, 10, 1 );
    doc.ksEndObj();
  doc.ksEndGroup();

  //������� �������� �� ������� �������
  count := 0;
	if iter.ksCreateIterator( WORK_GROUP_OBJ, 0 ) then //�������� �������� ��� �������� �� ������������ ������� � ���������
  begin
    pWorkGrp := iter.ksMoveIterator( 'F' );
    while pWorkGrp <> 0 do
    begin
      count := count + 1;
      UserLightObj( pWorkGrp, '����� = %d', count, doc ); //��������� ������ � �����
      pWorkGrp := iter.ksMoveIterator( 'N' );
    end;
		iter.ksDeleteIterator();
  end;
end;

//------------------------------------------------------------------------------
//�������� �� �����
//---
procedure WalkLayer;
var
  docPar: ksDocumentParam;
  sheetPar: ksSheetPar;
  stSheet: ksStandartSheet;
  i: Integer;
  pLayer: Reference;
  iter: ksIterator;
  count: Integer;
begin
	docPar := ksDocumentParam( kompas.GetParamStruct(ko_DocumentParam) );
	if docPar = nil then exit;

	docPar.Init();
	docPar.comment := 'create document';
	docPar.author  := 'Misha';
	docPar.regime  := 0;
	docPar.type_   := 1;

	sheetPar := ksSheetPar( docPar.GetLayoutParam() );
	stSheet  := ksStandartSheet( sheetPar.GetSheetParam() );
	if ( sheetPar = nil ) or ( stSheet = nil ) then	exit;

	sheetPar.Init();
  stSheet.Init();

	sheetPar.layoutName := '';
	sheetPar.shtType := 1;
	stSheet.format := 3;
	stSheet.multiply := 1;
	stSheet.direct := false;

  docPar.fileName := 'a.cdw';
  doc.ksCreateDocument( docPar );

  //�������� 5 �����

  for i := 0 to 5 do
  begin
    doc.ksLayer( i );
    doc.ksCircle( 30, 30, 5 + i * 10, 1 );
  end;

  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateIterator( LAYER_OBJ, 0 ) then //������� �������� �� �����
  begin
    pLayer := iter.ksMoveIterator( 'F' );
		count := 0;
    while pLayer <> 0 do
    begin
      count := count + 1;
      UserLightObj( pLayer, '���� = %d', count, doc ); //��������� ������ � �����
      pLayer := iter.ksMoveIterator ( 'N' );
    end;
		iter.ksDeleteIterator();
  end;
end;

//------------------------------------------------------------------------------
//�������� �� ������
//---
procedure WalkFromGroup;
var
  pGrp: Reference;
  obj: Reference;
  iter: ksIterator;
  count: Integer;
begin
  doc.ksMtr( 20, 10, 0, 1, 1 );
  pGrp := doc.ksNewGroup(0);
    doc.ksLineSeg( 10, 50, 50, 50, 1 );
    doc.ksLineSeg( 10, 10, 50, 10, 1 );
    doc.ksLineSeg( 10, 10, 10, 50, 1 );
    doc.ksLineSeg( 50, 10, 50, 50, 1 );
    doc.ksCircle( 30, 30, 20, 1 );
    doc.ksCircle( 30, 30, 10, 1 );
    doc.ksHatch( 0, 45, 2, 0, 0, 0);
      doc.ksCircle( 30, 30, 20, 1 );
      doc.ksCircle( 30, 30, 10, 1 );
    doc.ksEndObj();
  doc.ksEndGroup();
  doc.ksDeleteMtr();

  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateIterator( ALL_OBJ, pGrp ) then //������� �������� ��� �������� �� ������
  begin
    obj := iter.ksMoveIterator( 'F' );
		count := 0;
    while doc.ksExistObj(obj) <> 0 do
    begin
      count := count + 1;
      UserLightObj( obj, '����� = %d', count, doc ); //��������� ������ � �����
      obj := iter.ksMoveIterator( 'N' );
    end;
		iter.ksDeleteIterator();
  end;
end;

//------------------------------------------------------------------------------
//�������� �� ��������� ��������� � ������������ ���������
//---
procedure WalkFromDocWithAttr;
var
  attr: ksAttributeObject;
  pObj, pAttr: Reference;
  iter: ksIterator;
  count: Integer;
  rowsCount, columnsCount: Longint;

begin
	attr := ksAttributeObject( kompas.GetAttributeObject() );
	if attr = nil then
		exit;

  iter := ksIterator( kompas.GetIterator() );
	if iter = nil then
		exit;
	if iter.ksCreateAttrIterator( 0, 10, 0,0,0,0 ) then //�������� �������� ��� ������ �������� �� ����� 10
  begin
    pAttr := iter.ksMoveAttrIterator( 'F', pObj );
		count := 0;
    while ( pAttr <> 0 ) and ( doc.ksExistObj(pObj) <> 0 ) do
    begin
      doc.ksLightObj( pObj, 1 );
      count := count + 1;
      //������ ���������� ����� � �������
      if attr.ksGetAttrTabInfo( pAttr, rowsCount, columnsCount ) <> 0 then
        kompas.ksMessage( Format( '����� = %d rowsCount=%d columnsCount=%d', [ count, rowsCount, columnsCount ] ) )
      else
        kompas.ksMessageBoxResult();  // ��������� ���������� - ������� ��������� ������ ����� �������

      doc.ksLightObj( pObj, 0 );

      pAttr := iter.ksMoveAttrIterator( 'N', pObj );
    end;
		iter.ksDeleteIterator();
  end;
end;

//------------------------------------------------------------------------------
//�������� �� ��������� �������
//---
procedure WalkFromObjWithAttr;
var
  x, y: Double;
  pObj: Reference;
  info: ksRequestInfo;
  attr: ksAttributeObject;
  count: Integer;
  rowsCount, columnsCount: Longint;
  pAttr: Reference;
  iter: ksIterator;
  variable: Integer;
begin
 	info := ksRequestInfo( kompas.GetParamStruct(ko_RequestInfo) );
	attr := ksAttributeObject( kompas.GetAttributeObject() );
	if ( info = nil ) or ( attr = nil ) then
		exit;

	info.Init();

	info.prompt := '������� ������';
//  j := 1;
  while doc.ksCursor( info, x , y, nil ) <> 0 do
  begin
    pObj := doc.ksFindObj( x, y, 1000000 );
    if doc.ksExistObj( pObj ) <> 0 then
    begin
      count := 0;
      doc.ksLightObj( pObj, 1 );

      iter := ksIterator( kompas.GetIterator() );
      if iter = nil then
        exit;
      if iter.ksCreateAttrIterator( pObj, 10, 0,0,0,0 ) then //�������� �������� ��� ������ �������� �� ����� 10
      begin
        variable := 0;
        pAttr := iter.ksMoveAttrIterator( 'F', variable );
        while pAttr <> 0 do
        begin
          count := count + 1;
          //������ ���������� ����� � �������
          if attr.ksGetAttrTabInfo ( pAttr, rowsCount, columnsCount ) <> 0 then
            kompas.ksMessage( Format( '����� = %d rowsCount=%d columnsCount=%d', [ count,rowsCount,columnsCount ] ) )
          else
            kompas.ksMessageBoxResult();  // ��������� ���������� - ������� ��������� ������ ����� �������
          pAttr := iter.ksMoveAttrIterator( 'N', variable );
        end;
        iter.ksDeleteIterator();
      end;
      doc.ksLightObj( pObj, 0 );
    end;
  end;
end;

//------------------------------------------------------------------------------
// LibraryName
//---
function LIBRARYNAME: PChar; pascal;
begin
  Result := 'H�������� �� ������';
end;

//------------------------------------------------------------------------------
// LibraryId
//---
function LIBRARYID: UINT; pascal;
begin
  Result := 100;
end;

//------------------------------------------------------------------------------
// LibraryEntry
//---
procedure LIBRARYENTRY( command: WORD ); pascal;
begin
  kompas := KompasObject(CreateKompasObject);

  if kompas <> nil then
  begin
		if command = 3 then
			WalkFromDoc //�������� �� ����������
    else
    begin
      doc := ksDocument2D(kompas.ActiveDocument2D);
        if doc <> nil then
        begin
          case command of
            1  : WalkFromView;        //�������� �� ����
            2  : WalkFromMacro;       //�������� �� �������������
            4  : WalkViewDoc;         //�������� �� �����
            5  : WalkGroup;           //�������� �� ������������ � ������� �������
            6  : WalkLayer;           //�������� �� �����
            7  : WalkFromGroup;       //�������� �� ������
            8  : WalkFromDocWithAttr; //�������� �� ��������� ��������� � ������������ ���������
            9  : WalkFromObjWithAttr; //�������� �� ��������� �������
          end;
          doc := nil;
        end else
          kompas.ksError( '�������� �� ������������� ��� �� �������� ������/����������' );
      kompas := nil;
    end;
  end;
end;

end.
