object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1050#1086#1084#1087#1072#1089#1080#1088#1086#1074#1072#1085#1080#1077' 3D V13'
  ClientHeight = 187
  ClientWidth = 557
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object btnConnect: TButton
    Left = 8
    Top = 63
    Width = 541
    Height = 57
    Caption = #1057#1086#1077#1076#1080#1085#1080#1090#1100#1089#1103' '#1089' '#1050#1054#1052#1055#1040#1057'/ '#1054#1090#1082#1088#1099#1090#1100'/'#1057#1086#1079#1076#1072#1090#1100' '#1095#1077#1088#1090#1105#1078
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = btnConnectClick
  end
  object pbrConnect: TProgressBar
    Left = 8
    Top = 126
    Width = 541
    Height = 56
    TabOrder = 1
  end
  object btnBrose: TBitBtn
    Left = 8
    Top = 1
    Width = 541
    Height = 56
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1095#1077#1088#1090#1105#1078
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = btnBroseClick
  end
  object dlgOpen: TOpenDialog
    DefaultExt = '.frw'
    Filter = #1060#1088#1072#1075#1084#1077#1085#1090' '#1050#1086#1084#1087#1072#1089'|*.frw|AutoCAD DXF|*.dxf|'#1050#1086#1084#1087#1072#1089'-'#1095#1077#1088#1090#1077#1078#1080'|*.cdw'
    Left = 16
    Top = 192
  end
end
