object Form1: TForm1
  Left = 158
  Top = 141
  Width = 773
  Height = 589
  Caption = 'Train'
  Color = clCream
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Visible = True
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 100
    Top = 0
    Width = 100
    Height = 25
    Caption = '  '#8470' '#1055#1083#1072#1090#1092#1086#1088#1084#1099
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object Label2: TLabel
    Left = 0
    Top = 0
    Width = 100
    Height = 25
    Caption = '     '#8470' '#1055#1086#1077#1079#1076#1072
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object Label3: TLabel
    Left = 200
    Top = 0
    Width = 100
    Height = 25
    Caption = '    '#1042#1088#1077#1084#1103' '#1086#1090#1087#1088'.'
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object Label4: TLabel
    Left = 300
    Top = 0
    Width = 100
    Height = 25
    Caption = '   '#1042#1088#1077#1084#1103' '#1087#1088#1080#1073'.'
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object Label5: TLabel
    Left = 400
    Top = 0
    Width = 100
    Height = 25
    Caption = '    '#1055#1091#1085#1082#1090' '#1086#1090#1087#1088'.'
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object Label6: TLabel
    Left = 500
    Top = 0
    Width = 109
    Height = 25
    Caption = '    '#1055#1091#1085#1082#1090' '#1087#1088#1080#1073'.'
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Layout = tlCenter
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 24
    Width = 609
    Height = 505
    ColCount = 6
    DefaultColWidth = 100
    FixedCols = 0
    RowCount = 20
    FixedRows = 0
    TabOrder = 0
  end
  object Button1: TButton
    Left = 616
    Top = 416
    Width = 137
    Height = 65
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 616
    Top = 0
    Width = 126
    Height = 193
    Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072' '#1087#1086':'
    Color = clCream
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    TabOrder = 2
    object RadioButton1: TRadioButton
      Left = 5
      Top = 25
      Width = 125
      Height = 25
      Caption = #8470' '#1055#1086#1077#1079#1076#1072
      TabOrder = 0
      OnClick = RadioButton1Click
    end
    object RadioButton2: TRadioButton
      Left = 5
      Top = 48
      Width = 125
      Height = 25
      Caption = #8470' '#1055#1083#1072#1090#1092#1086#1088#1084#1099
      TabOrder = 1
      OnClick = RadioButton2Click
    end
    object RadioButton3: TRadioButton
      Left = 5
      Top = 72
      Width = 125
      Height = 25
      Caption = #1042#1088#1077#1084#1077#1085#1080' '#1086#1090#1087#1088'.'
      TabOrder = 2
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 5
      Top = 104
      Width = 125
      Height = 25
      Caption = #1042#1088#1077#1084#1077#1085#1080' '#1087#1088#1080#1073'.'
      TabOrder = 3
      OnClick = RadioButton4Click
    end
    object RadioButton5: TRadioButton
      Left = 5
      Top = 136
      Width = 125
      Height = 25
      Caption = #1055#1091#1085#1082#1090#1072' '#1086#1090#1087#1088'.'
      TabOrder = 4
      OnClick = RadioButton5Click
    end
    object RadioButton6: TRadioButton
      Left = 5
      Top = 168
      Width = 125
      Height = 25
      Caption = #1055#1091#1085#1082#1090#1072' '#1087#1088#1080#1073'.'
      TabOrder = 5
      OnClick = RadioButton6Click
    end
  end
  object MainMenu1: TMainMenu
    Left = 616
    Top = 496
    object N1: TMenuItem
      Caption = #1042#1099#1081#1090#1080
      OnClick = N1Click
    end
  end
end
