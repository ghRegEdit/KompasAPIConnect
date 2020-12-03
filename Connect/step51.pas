unit step51;

interface
  procedure LIBRARYENTRY( command: WORD  ); Pascal;
  function  LIBRARYID : Cardinal; Pascal;
  function  LIBRARYNAME : PChar; Pascal;
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
//������������� ������� �� �������
//---
procedure DrawTransform;
var
  ref: Reference;
begin
  //�������������  ������� ������
	doc.ksMtr( -30, -30, 0, 1, 1 );
  ref := doc.ksNewGroup(0);
  doc.ksLineSeg( 30, 30, 60, 30, 1);
  doc.ksLineSeg( 60, 30, 60, 60, 1);
  doc.ksLineSeg( 60, 60, 30, 60, 1);
  doc.ksLineSeg( 30, 60, 30, 30, 1);
  doc.ksHatch( 0, 45, 2, 0, 0, 0 );
    doc.ksLineSeg( 30, 30, 60, 30, 1);
    doc.ksLineSeg( 60, 30, 60, 60, 1);
    doc.ksLineSeg( 60, 60, 30, 60, 1);
    doc.ksLineSeg( 30, 60, 30, 30, 1);
  doc.ksEndObj();
  doc.ksEndGroup();
  doc.ksDeleteMtr();

	kompas.ksMessage('������� ������� 20, 20, 45, 2');

  doc.ksMtr(20, 20, 45, 2, 2 );
  doc.ksTransformObj( ref );
  doc.ksDeleteMtr();

  kompas.ksMessageBoxResult();
  kompas.ksMessage('������ �������');

  doc.ksMtr(-20, -20, 0, 1, 1 );
  doc.ksTransformObj( ref );
  doc.ksDeleteMtr();

  doc.ksMtr(0, 0, 0, 0.5, 0.5 );
  doc.ksTransformObj( ref );
  doc.ksDeleteMtr();

  doc.ksMtr(0, 0, -45, 1, 1 );
  doc.ksTransformObj( ref );
  doc.ksDeleteMtr();

  kompas.ksMessageBoxResult();
end;

//------------------------------------------------------------------------------
//����������� �������
//---
procedure DrawCopy;
var
  par: ksViewParam;
  number: Longint;
  v: Reference;
begin
  par := ksViewParam( kompas.GetParamStruct( ko_ViewParam ) );
  if par <> nil then
  begin
	  par.Init();
    par.x := 20;
	  par.y := 60;
	  par.scale_ :=  1;
		par.state := stACTIVE;
		par.name := 'user view';

    number := 5;
    //������� ���
    v := doc.ksCreateSheetView( par, number);
    //������� ����
    doc.ksLayer( 5 );

		doc.ksLineSeg( 20, 10, 20, 30, 1 );
    doc.ksLineSeg( 20, 30, 40, 30, 1 );
    doc.ksLineSeg( 40, 30, 40, 10, 1 );
    doc.ksLineSeg( 40, 10, 20, 10, 1 );

    //�������� ��� ( ��� ���� ����� �������� � �������� ����������� )
    doc.ksCopyObj( v, 20, 60, 40, 80, 1, 0  );
	end;
end;

//------------------------------------------------------------------------------
//��������� �������
//---
procedure DrawSymmetry;
var
  grp: Reference;
begin
  grp := doc.ksNewGroup( 0 );
    doc.ksLineSeg( 20, 10, 20, 30, 1 );
    doc.ksLineSeg( 20, 30, 40, 30, 1 );
    doc.ksLineSeg( 40, 30, 40, 10, 1 );
    doc.ksLineSeg( 40, 10, 20, 10, 1 );
  doc.ksEndGroup();

  doc.ksSymmetryObj(grp, 40, 10, 40, 20, '1'  );
end;

//------------------------------------------------------------------------------
//�������� ������� �����
//---
procedure EditTolerance;
var
  pObj: Reference;
  info: ksRequestInfo;
  x: double;
  y: double;
  tipe: integer;
  numb: Longint;
  par: ksToleranceParam;
  j: integer;
  par1: ksTextLineParam;
  arrpTextItem: ksDynamicArray;
  item: ksTextItemParam;
  count: integer;
  textItemFont: ksTextItemFont;
begin
 	info := ksRequestInfo( kompas.GetParamStruct(ko_RequestInfo) );
	if info = nil then
		exit;
  info.Prompt := '������� ������ �����';
  j := doc.ksCursor( info, x ,y, nil );
  if j <> 0 then
  begin
    pObj := doc.ksFindObj( x, y, 1000000. );
    if doc.ksExistObj( pObj ) <> 0 then
    begin
      //������ ��� �������
      tipe := doc.ksGetObjParam( pObj,nil,0);   //��������� �� ����������� ������
      if tipe = TOLERANCE_OBJ then
      begin
        //������� ������ ����� ��� ��������������
        doc.ksOpenTolerance( pObj );

        par := ksToleranceParam( kompas.GetParamStruct(ko_ToleranceParam) );
        //��������� ������� �����
        doc.ksGetObjParam(  pObj,   //��������� �� ����������� ������
                    par,  //��������� �� ��������� ����������
                    ALLPARAM ); //��� ���������� ����������

        if par.type_ <> 0 then
          kompas.ksMessage( Format( '������� �����=%d   �����=%d   ������������-%s   x=%5.1f   y=%5.1f  ',
                          [ par.TBase, par.Style, '������������', par.X, par.Y ] ) )
        else
          kompas.ksMessage( Format( '������� �����=%d   �����=%d   ������������-%s   x=%5.1f   y=%5.1f  ',
                          [ par.TBase, par.Style, '��������������', par.X, par.Y ] ) );

        par1 := ksTextLineParam( kompas.GetParamStruct(ko_TextLineParam) );

				if par1 = nil then
					exit;

				par1.Init();

        //� ����� ����� ����� ��� ������������ ������
        while doc.ksGetToleranceColumnText( numb, par1 ) <> 0 do
        begin
          kompas.ksMessage( Format( 'numb =%d   style=%d', [ numb, par1.Style ] ) );

  				arrpTextItem := ksDynamicArray( par1.GetTextItemArr() );
					item := ksTextItemParam( kompas.GetParamStruct(ko_TextItemParam) );

					if ( item = nil ) or ( arrpTextItem = nil ) then
  					exit;

					item.Init();

          count := arrpTextItem.ksGetArrayCount();
					for j := 0 to count - 1 do
          begin
            arrpTextItem.ksGetArrayItem( j, item );
  					textItemFont := ksTextItemFont( item.GetItemFont() );
            if bool(item.type_) then
              kompas.ksMessage( Format( '����������=%d   h=%5.1f   s=%s   fontName=%s   ��������� =%d ', [ j, textItemFont.Height,
    						         item.S, textItemFont.FontName, textItemFont.BitVector ] ) )
            else
              kompas.ksMessage( Format( '����������=%d ��� = %d ����� ���������=%d ', [ j, item.Type_, item.ISNumb ] ) );
						item.s := '������ �����';
          end;
					arrpTextItem.ksClearArray();
					arrpTextItem.ksAddArrayItem( -1, item );
					doc.ksSetToleranceColumnText( numb, par1 );
          arrpTextItem.ksDeleteArray();  //������� ������ ���������
        end;
        //������� ���������
				par.X := par.X+10;
				par.Y := par.Y+10;
        doc.ksSetObjParam(  pObj,   //��������� �� ����������� ������
                      par,  //��������� �� ��������� ����������
                      ALLPARAM ); //��� ���������� ����������
        doc.ksEndObj();//������� ������ "������ �����"
      end else
        kompas.ksError( '��� �� ������ �����' );
    end else
      kompas.ksError( '��� �������' );
  end;
end;

//------------------------------------------------------------------------------
//�������� �������
//---
procedure EditTable;
var
  pObj: Reference;
  info: ksRequestInfo;
  x: double;
  y: double;
  j: integer;
  type_: integer;
  numb: Longint;
  par: ksTextParam;
  arrpLineText: ksDynamicArray;
  itemLineText: ksTextLineParam;
  count: integer;
  arrpTextItem: ksDynamicArray;
  item: ksTextItemParam;
  textItemFont: ksTextItemFont;
  i: integer;
  count2: integer;
begin
 	info := ksRequestInfo( kompas.GetParamStruct(ko_RequestInfo) );
	if info = nil then
		exit;
  info.Prompt := '������� �������';
  // ����� ������� �� �������
  j := doc.ksCursor( info, x ,y, nil );
  if j <> 0 then
  begin
    pObj := doc.ksFindObj( x, y, 100000 );
    if doc.ksExistObj( pObj ) <> 0 then
    begin
      //������ ��� �������
      type_ := doc.ksGetObjParam( pObj, nil, 0 );   //��������� �� ����������� ������
      //��������� ���������� ������  - �������
      if type_ = TABLE_OBJ then
      begin
        //������� ������� ��� ��������������
        doc.ksOpenTable( pObj );

        par := ksTextParam( kompas.GetParamStruct(ko_TextParam) );

				if par = nil then
					exit;

				par.Init();

        //� ����� ����� ����� ��� ������������ ������
        while (( doc.ksGetTableColumnText( numb, par ))<> 0) do
        begin
          kompas.ksMessage( Format( 'numb =%d ', [ numb ] ) );

  				arrpLineText := ksDynamicArray( par.GetTextLineArr() );
					itemLineText := ksTextLineParam( kompas.GetParamStruct(ko_TextLineParam) );
		  		if itemLineText = nil then
			  		exit;
					itemLineText.Init();

          count := arrpLineText.ksGetArrayCount();
          for i := 0 to count - 1 do
          begin
						arrpLineText.ksGetArrayItem( i, itemLineText );
            kompas.ksMessage( Format( 'i =%d style=%d', [ i, itemLineText.Style ] ) );

    				arrpTextItem := ksDynamicArray( itemLineText.GetTextItemArr() );
	  				item := ksTextItemParam ( kompas.GetParamStruct(ko_TextItemParam) );

			  		if ( item = nil ) or ( arrpTextItem = nil ) then
  			  		exit;
		  			item.Init();

            count2 := arrpTextItem.ksGetArrayCount();
					  for j := 0 to count2 - 1 do
            begin
              arrpTextItem.ksGetArrayItem( j, item );
    					textItemFont := ksTextItemFont( item.GetItemFont() );

							if item.Type_ = 0 then
                kompas.ksMessage( Format( '����������=%d   h=%5.1f   s=%s   fontName=%s   ��������� =%d', [ j, textItemFont.Height,
								         item.S, textItemFont.FontName, textItemFont.BitVector ] ) )
 							else
                kompas.ksMessage( Format( '����������=%d ��� = %d ����� ���������=%d ', [ j, item.Type_, item.ISNumb ] ) );
            end;
            arrpTextItem.ksDeleteArray();  //������� ������ ���������
          end;
          //������� ������ ��������� �����
          arrpLineText.ksDeleteArray();
        end; // while ((ksGetTableColumnText( &numb, &par ))!=0) {

        //����� ������ 2
        doc.ksColumnNumber( 2 );
        doc.ksText( 0, 0, 0, 5, 1 ,0,'������ ������' );

        doc.ksDivideTableItem( 3, true, 2 );
        doc.ksColumnNumber( 4 );
        doc.ksText( 0, 0, 0, 5, 1 ,0,'4' );

        doc.ksEndObj();//������� ������ "�������"
      end else
        kompas.ksError( '��� �� �������' );
    end else
      kompas.ksError( '��� �������' );
  end;
end;

//------------------------------------------------------------------------------
//����� ������ ���� � ������������� �����
//---
procedure EditStamp;
var
  stamp: ksStamp;
  numb: integer;
  arr: ksDynamicArray;
  arrpLineText: ksDynamicArray;
  itemLineText: ksTextLineParam;
  arrpTextItem: ksDynamicArray;
  item: ksTextItemParam;
  count: integer;
  count2: integer;
  i: integer;
  j: integer;
  textItemFont: ksTextItemFont;
//  item: ksTextItemParam;
  itemFont: ksTextItemFont;
begin
	stamp := ksStamp( doc.GetStamp() );
	if ( stamp <> nil ) and ( stamp.ksOpenStamp() <> 0 ) then
  begin
    //� ����� ����� ����� ��� ������������ �����
		arr := ksDynamicArray( stamp.ksGetStampColumnText( numb ) );
		while ( numb <> 0 ) and ( arr <> nil ) do
    begin
      kompas.ksMessage( Format( 'numb =%d', [ numb ] ) );

 		  arrpLineText := ksDynamicArray( kompas.GetDynamicArray(TEXT_LINE_ARR) );
			itemLineText := ksTextLineParam( kompas.GetParamStruct(ko_TextLineParam) );
		  if itemLineText = nil then
			 	exit;
			itemLineText.Init();

      count := arr.ksGetArrayCount(); 
      for i := 0 to count - 1 do
      begin
			  arr.ksGetArrayItem( i, itemLineText );
        kompas.ksMessage( Format( 'i =%d style=%d', [ i, itemLineText.Style ] ) );

				arrpTextItem := ksDynamicArray( itemLineText.GetTextItemArr() );
	  		item := ksTextItemParam( kompas.GetParamStruct(ko_TextItemParam) );

				if ( item = nil ) or ( arrpTextItem = nil ) then
  			  exit;
		  	item.Init();

        count2 := arrpTextItem.ksGetArrayCount();
				for j := 0 to count2 - 1 do
        begin
          arrpTextItem.ksGetArrayItem( j, item );
					textItemFont := ksTextItemFont( item.GetItemFont() );
          kompas.ksMessage( Format( '����������=%d   h=%5.1f   s=%s   fontName=%s', [ j, textItemFont.Height, item.S,
						         textItemFont.FontName ] ) );
        end;
        arrpTextItem.ksDeleteArray();  //������� ������ ���������
      end;
      //������� ������ ��������� �����
      arrpLineText.ksDeleteArray();

		  arr.ksDeleteArray();
			arr := ksDynamicArray(stamp.ksGetStampColumnText( numb ));
    end;
    //�������  ����� 2
    doc.ksColumnNumber( 2 );
		item := ksTextItemParam( kompas.GetParamStruct(ko_TextItemParam) );
		if item = nil then
    begin
			stamp.ksCloseStamp();
			exit;
		end;
		item.Init();
		itemFont := ksTextItemFont( item.GetItemFont() );
		if ( item <> nil ) and ( itemFont <> nil ) then
    begin
		 	itemFont.bitVector := NEW_LINE;
			item.S := '����� 2';
			doc.ksTextLine( item );
		end;
    stamp.ksCloseStamp();
  end else
    kompas.ksError ( '����� �� ������' );
end;

//------------------------------------------------------------------------------
//�������� ����� ��
//---
procedure GetTextTT;
var
  pTT: Reference;
  technicalDemandParam: ksTechnicalDemandParam;
  pGab: ksDynamicArray;
  pTextLine: ksDynamicArray;
  i: integer;
  itemLineText: ksTextLineParam;
  count: integer;
  count1: integer;
  count2: integer;
  arrpTextItem: ksDynamicArray;
  item: ksTextItemParam;
  textItemFont: ksTextItemFont;
  i1: integer;
  j: integer;
begin
  //������� ��������� �� ����������� ���������
  pTT := doc.ksGetReferenceDocumentPart( 1 );
	technicalDemandParam := ksTechnicalDemandParam( kompas.GetParamStruct(ko_TechnicalDemandParam) );
  if ( pTT <> 0 ) and ( technicalDemandParam <> nil ) then
  begin
  	technicalDemandParam.Init();
    //������� ��������� �������� ��
    doc.ksGetObjParam( pTT, technicalDemandParam, TECHNICAL_DEMAND_PAR );
	  pGab := ksDynamicArray( technicalDemandParam.GetPGab() );
    count := pGab.ksGetArrayCount();
    kompas.ksMessage( Format( '����� =%d ����� �������  TT =%d', [ technicalDemandParam.Style, count ] ) );

    // �������� ������ ��������� �����
	  pTextLine := ksDynamicArray( kompas.GetDynamicArray(TEXT_LINE_ARR) );
    //��������� �� ������ �� � ������� �����
    for i := 0 to count - 1 do
    begin
      doc.ksGetObjParam( pTT, pTextLine, i );
			itemLineText := ksTextLineParam( kompas.GetParamStruct(ko_TextLineParam) );
      if itemLineText = nil then
				exit;
			itemLineText.Init();

      count1 := pTextLine.ksGetArrayCount();
      for i1 := 0 to count1 - 1 do
      begin
				pTextLine.ksGetArrayItem( i1, itemLineText );
        kompas.ksMessage( Format( '���������� =%d style=%d', [ i1, itemLineText.Style ] ) );

				arrpTextItem := ksDynamicArray( itemLineText.GetTextItemArr() );
	  		item := ksTextItemParam( kompas.GetParamStruct(ko_TextItemParam) );

				if ( item = nil ) or ( arrpTextItem = nil ) then
  			  exit;
		  	item.Init();

        count2 := arrpTextItem.ksGetArrayCount();
        for j := 0 to count2 - 1 do
        begin
					arrpTextItem.ksGetArrayItem( j, item );
					textItemFont := ksTextItemFont( item.GetItemFont() );
          kompas.ksMessage( Format( '����������=%d h=%5.1f s=%s fontName=%s', [ j, textItemFont.Height,
						         item.S, textItemFont.FontName ] ) );
        end;
        arrpTextItem.ksDeleteArray(); //������� ������ ���������
      end;
    end;
    pTextLine.ksDeleteArray(); //������� ������ ��������� �����
  end;
end;

//------------------------------------------------------------------------------
//�������������� TT
//---
procedure ChangeTechnicalDemand;
var
  ref: Longint;
  par: ksTechnicalDemandParam;
  parLine: ksTextLineParam;
  i: integer;
  parItem: ksTextItemParam;
  arr: ksDynamicArray;
  count: integer;
  count1: integer;
  j: integer;
begin
  ref := doc.ksGetReferenceDocumentPart( 1 );
  par := ksTechnicalDemandParam( kompas.GetParamStruct(ko_TechnicalDemandParam) );
	if doc.ksGetObjParam( ref, par, TECHNICAL_DEMAND_PAR ) <> 0 then
  begin
    kompas.ksMessage( Format( '����� ����� TT =%d', [ par.StrCount ] ) );

		doc.ksOpenTechnicalDemand( par.GetPGab(), par.Style );

		parLine := ksTextLineParam( kompas.GetParamStruct(ko_TextLineParam) );
		if parLine <> nil then
    begin
  		parLine.Init();
      count := par.StrCount;
	    for i := 0 to count - 1 do
      begin
	      doc.ksGetObjParam( ref, parLine, TT_FIRST_STR+i );
		    parItem := ksTextItemParam( kompas.GetParamStruct(ko_TextItemParam) );
				arr := ksDynamicArray( parLine.GetTextItemArr() );
				if ( parItem <> nil ) and ( arr <> nil ) then
        begin
  				parItem.Init();
          count1 := arr.ksGetArrayCount(); 
					for j := 0 to count1 - 1 do
          begin
	  				arr.ksGetArrayItem( j, parItem );
						parItem.S := parItem.S + '!!!';
						arr.ksSetArrayItem( j, parItem );
						kompas.ksMessage( parItem.S );
					end;
        end;
  		  doc.ksSetObjParam( ref, parLine, TT_FIRST_STR+i );
			end;
		end;
		doc.ksCloseTechnicalDemand();
	end;
end;

//------------------------------------------------------------------------------
//������� ���������
//---
procedure ShowInsertFragment;
var
  libName: string;
  buf: string;
  res: Longint;
  frLib: ksFragmentLibrary;
  fr: ksFragment;
  x: double;
  y: double;
  rub: ksPhantom;
  type1: ksType1;
  pDefFrg: Reference;
  par: ksPlacementParam;
  p: Reference;
  j: integer;
  ang: double;
begin
  //�������  ���������� ����������
	libName := kompas.ksChoiceFile( '*.lfr','��������� ����������(*.lfr)|*.lfr|��� ����� (*.*)|*.*|', true );
  if libName <> '' then
  begin
    res := 1;
    while res <> 0 do
    begin
      //������� �������� � ���������� ����������
			frLib := ksFragmentLibrary( kompas.GetFragmentLibrary() );
			fr    := ksFragment( doc.GetFragment() );
			if  ( fr = nil ) or ( frLib = nil ) then
				exit;
			buf := frLib.ksChoiceFragmentFromLib( libName, res );
      if ( buf <> '' ) and ( res <> 0 ) then
      begin
        //���������� ��������� ������ � �������� ��� Placement
        rub := ksPhantom( kompas.GetParamStruct( ko_Phantom ) );
        type1 := ksType1( rub.GetPhantomParam() );
        if ( rub = nil ) or ( type1 = nil ) then
          exit;

        type1.Init(); rub.Init();

        type1.Scale_ := 1;
        rub.phantom := 1;

        // �������� ��������  ������ ����������
        pDefFrg := fr.ksFragmentDefinition( buf,       //��� ����� ���������
                                            '�������', //��� �������
                                            1 );       //��� ������� -������������ ��� �������� ��������� 0- ����� � ��������, 1-������� �������
        if pDefFrg <> 0 then
        begin
          //�� ��������� ������ ������� ������� ���������, ������ �� ���������� ����������
          type1.Gr := doc.ksNewGroup(1) ;
            par := ksPlacementParam( kompas.GetParamStruct( ko_PlacementParam ) );
            if par = nil then
              exit;
            par.Init();
            par.Scale_ := 1;
            p := fr.ksInsertFragment( pDefFrg, // ��������� �����������  ���������
                                      false,   //��� ���������� �� ����� 0 - �� ���� ���� 1- � ������� ����
                                      par );   //��������� ��������
          doc.ksEndGroup();
          j := 1;
          while j <> 0 do
          begin
            type1.Angle := 0;
            ang := type1.Angle;
            j := doc.ksPlacement( nil, x, y, ang, rub );
            if j <> 0 then
              doc.ksCopyObj( p,                // ��������� �� ����������� ������
                             0,0,              // ������� ����� �������
                             x, y,             // ����� ���� ����������
                             1, type1.Angle ); // ������� � ���� �������� � ��������
          end;
          //doc.ksDeleteObj( type1.Gr );
        end else
          kompas.ksError ( '������ �������� �������� ������� ���������' );
      end;
    end;
  end;
end;

//------------------------------------------------------------------------------
//������ � ����������� ����������
//---
procedure EditFragmentLibrary;
var
  libName: string;
  buf: string;
  info: ksRequestInfo;
  fr: ksFragmentLibrary;
  j: integer;
  typeEdit: integer;
  nameFrg: string;
  res: Longint;
begin
  //�������  ���������� ����������
	libName := kompas.ksChoiceFile( '*.lfr','��������� ����������(*.lfr)|*.lfr|��� ����� (*.*)|*.*|', true );
  if libName <> '' then
  begin
    info := ksRequestInfo( kompas.GetParamStruct( ko_RequestInfo ) );
		fr   := ksFragmentLibrary( kompas.GetFragmentLibrary() );
		if ( info = nil ) or ( fr = nil ) then
			exit;
		info.Init();

		info.commandsString := '!�����_�������� !�������������_�������� !�������_��������';
    j := 1;
    while j <> -1 do
    begin
      j := doc.ksCommandWindow( info );
      if j = 1 then
      begin // �����_��������
        buf := kompas.ksReadString( '������� ��� ������ ���������', '' );
        if buf <> '' then
        begin
          nameFrg := libName + '|' + buf;
          typeEdit := 2; //��������� �� ��������������
        end else
          typeEdit := 0;
      end else
      begin  // �������������_�������� ��� �������_��������
        //������� ��� ����� ���������
        buf := fr.ksChoiceFragmentFromLib( libName, res );
        if ( res <> 0 ) and ( buf <> '' ) then
        begin
          nameFrg := buf;
          typeEdit := j; // 2- ��������� �� ��������������, 3-������� ;
        end else
          typeEdit := 0;
      end;

      if ( j > 0 ) and ( typeEdit <> 0 ) then
        if ( fr.ksFragmentLibraryOperation( PChar(nameFrg), typeEdit ) <> 0 ) and ( typeEdit = 2 ) then
        begin
          fr.ksFragmentLibraryOperation( nameFrg, 4  );
          //����������� �������� �� ����������
          doc.ksText( 0, 100,     //����� �������� ������
                0,            //���� ������� ������
                5,            //������ ������
                1,            //������� ������
                0,	          //�������� ������, ������� �������� ���.-����.
                '����������� �������� �� ����������'      );   //������ ��������

          doc.ksLineSeg ( 0, 100, 110, 100, 1 );
          //����������� �������� � ������������� ������
          //����� ������ � ���� "������" ������� "��������� �������������� ���������",
          //������������ � ����������
          kompas.ksSystemControlStop();
//          kompas.ksSystemControlStart( '��������� �������������� ���������' );
          fr.ksFragmentLibraryOperation( nameFrg, 0  );
        end;
    end;
  end;
end;

//------------------------------------------------------------------------------
//������� ��������� ��������
//---
procedure ShowInsertFragment1;
var
  frwName: string;
  fr: ksFragment;
  x: double;
  y: double;
  rub: ksPhantom;
  type1: ksType1;
  par: ksPlacementParam;
  j: integer;
  ang: double;
  gr: Reference;
begin
	fr := ksFragment ( doc.GetFragment() );
	if fr = nil then
		exit;
  //�������  ��������
  frwName := kompas.ksChoiceFile( '*.frw','���������(*.frw)|*.frw|��� ����� (*.*)|*.*|', true );
  if frwName <> '' then
  begin
    //���������� ��������� ������ � �������� ��� Placement
		rub := ksPhantom( kompas.GetParamStruct( ko_Phantom ) );
		if rub = nil then
			exit;

    rub.Init();
		rub.phantom := 1;

		type1 := ksType1( rub.GetPhantomParam() );
		if type1= nil then
			exit;

		type1.Init();
		type1.Scale_ := 1;

		//�� ��������� ������ ������� ������� ���������, ������ �� ���������� ����������
    par := ksPlacementParam( kompas.GetParamStruct( ko_PlacementParam ) );
    if par = nil then
      exit;
    par.Init();
    par.Scale_ := 1;

    j := 1;
    while j <> 0 do
    begin
      //���� ����� �������� ��������� ����������, ������ ����� ��������� �����,
      //��� ��� ������ � ���������� ����� ������ ��������, ������� ������������, �����,
      //������� ������� � ����������. ��� ������� ����������� ������ ��� ����� �����
      //��������.
      type1.Gr := fr.ksReadFragmentToGroup( frwName,        // ��� ���������
                                             false,          //��� ���������� �� ����� 0 - �� ���� ���� 1- � ������� ����
                                             par );     //��������� ��������
      gr := fr.ksReadFragmentToGroup( frwName,        // ��� ���������
                                             false,          //��� ���������� �� ����� 0 - �� ���� ���� 1- � ������� ����
                                             par );     //��������� ��������
      if ( gr <> 0 ) and ( type1.Gr <> 0 ) then
      begin
  			ang := type1.Angle;
        j := doc.ksPlacement( nil, x, y, ang, rub );
  			if j <> 0 then
        begin
          //�������� ������
          doc.ksMoveObj( gr(*type1.Gr*), x, y );
          //������ ������ � ������
          doc.ksStoreTmpGroup( gr );//type1.Gr );
          doc.ksClearGroup( gr(*type1.Gr*), true );
          doc.ksDeleteObj( gr );//type1.Gr );
        end;
      end else
      begin
        if type1.Gr <> 0 then
          doc.ksDeleteObj( type1.Gr );
        j := 0;
      end;
    end;
  end;
end;

//------------------------------------------------------------------------------
// LibraryName
//---
function LIBRARYNAME: PChar; pascal;
begin
  Result := 'P�������������';
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
    doc := ksDocument2D(kompas.ActiveDocument2D);
      if doc <> nil then
      begin
        case command of
          1  : DrawTransform;         //������������� ������� �� �������
          2  : DrawCopy;              //����������� �������
          3  : DrawSymmetry;          //��������� �������
          4  : EditTolerance;         //�������� ������� �����
          5  : EditTable;             //�������� �������
          6  : EditStamp;             //����� ������ ���� � ������������� �����
          7  : GetTextTT;             //�������� ����� ��
          8  : ChangeTechnicalDemand; //�������������� TT
          9  : ShowInsertFragment;    //������� ���������
          10 : EditFragmentLibrary;   //������ � ����������� ����������
          11 : ShowInsertFragment1;   //������� ��������� ��������
        end;
        doc := nil;
      end else
  			kompas.ksError( '�������� �� ������������� ��� �� �������� ������/����������' );
    kompas := nil;
  end;
end;

end.
