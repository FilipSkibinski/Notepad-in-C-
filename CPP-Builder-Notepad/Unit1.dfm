object Form1: TForm1
  Left = 371
  Top = 0
  Width = 886
  Height = 735
  Caption = 'Notatnik (w'#322'asny)'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Tresc: TMemo
    Left = 0
    Top = 0
    Width = 870
    Height = 676
    Align = alClient
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clMenuText
    Font.Height = -13
    Font.Name = 'Palatino Linotype'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = TrescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 296
    Top = 24
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy    Ctrl + N'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Owt1: TMenuItem
        Caption = '&Otw'#243'rz'
        OnClick = Owt1Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Za&pisz Ctrl+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapi&sz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'&cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object Wytnij1: TMenuItem
        Caption = 'Wytnij    Ctrl+X'
        OnClick = Wytnij1Click
      end
      object Kopiuj1: TMenuItem
        Caption = 'Kopiuj    Ctrl+C'
        OnClick = Kopiuj1Click
      end
      object WklejCtrV1: TMenuItem
        Caption = 'Wklej    Ctr+V'
        OnClick = WklejCtrV1Click
      end
    end
    object Format1: TMenuItem
      Caption = 'Format'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Zawijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = 'Czcionka'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object Informacje1: TMenuItem
        Caption = 'Informacje'
        object Oprogramie1: TMenuItem
          Caption = 'O programie'
          OnClick = Oprogramie1Click
        end
        object Zapraszamnaoficjalnstron1: TMenuItem
          Caption = 'Zapraszam na oficjaln'#261' strone'
          OnClick = Zapraszamnaoficjalnstron1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe TXT |.*txt|Dowolne pliki tekstowe|*.*'
    Left = 360
    Top = 24
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy|.*txt|Dowolny plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 328
    Top = 24
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 360
    Top = 56
  end
end
