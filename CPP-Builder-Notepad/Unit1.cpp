//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwapliku="";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}

void __fastcall TForm1::Owt1Click(TObject *Sender)
{
     if (OpenDialog1->Execute())
     {
        try {
                Tresc->Lines->LoadFromFile(OpenDialog1->FileName);
                nazwapliku = OpenDialog1 -> FileName;
            }

        catch(...)
        {
                ShowMessage("B³¹d otwarcia pliku. Upewnij siê, ¿e plik istnieje na dysku");
        }
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
        if (OpenDialog1->Execute())
     {
        try {
                Tresc->Lines->SaveToFile(SaveDialog1->FileName);
                nazwapliku = SaveDialog1 -> FileName;
            }

        catch(...)
        {
                ShowMessage("Zapis zakoñczy³ siê niepowodzeniem");
        }
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
        if(nazwapliku!="")
        {
               Tresc->Lines->SaveToFile(nazwapliku);
        }
        else
        {
                Form1->Zapiszjako1Click(MainMenu1);
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
        if(Application->MessageBoxA("Czy napewno utworzyc nowy plik?", "PotwierdŸ", MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
        {
                Tresc->Lines->Clear();
                nazwapliku="";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Shift.Contains(ssCtrl))
        {
                if(Key == 's' || Key == 'S')
                {
                        Form1->Zapisz1Click(MainMenu1);
                }
        }
        if(Shift.Contains(ssCtrl))
        {
                if(Key == 'n' || Key == 'N')
                {
                        Form1->Nowy1Click(MainMenu1);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
        if(Application->MessageBoxA("Czy napewno zamkn¹c otwarty plik?", "PotwierdŸ", MB_YESNO | MB_ICONQUESTION) == IDYES)
        {
              Application->Terminate();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        if(Application->MessageBoxA("Czy napewno zamkn¹c otwarty plik?", "PotwierdŸ", MB_YESNO | MB_ICONQUESTION) == IDNO)
        {
              Action=caNone;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Wytnij1Click(TObject *Sender)
{
        Tresc->CutToClipboard();     
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Kopiuj1Click(TObject *Sender)
{
        Tresc->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WklejCtrV1Click(TObject *Sender)
{
        Tresc->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
        if(Zawijaniewierszy1->Checked==true)
        {
                Zawijaniewierszy1->Checked = false;
                Tresc->WordWrap = false;
                Tresc->ScrollBars = ssBoth;
        }
        else
        {
                Zawijaniewierszy1->Checked = true;
                Tresc->WordWrap = true;
                Tresc->ScrollBars = ssVertical;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
        if(FontDialog1->Execute())
        {
                //kroj
                Tresc->Font->Name = FontDialog1->Font->Name;
                //kolor
                Tresc->Font->Color = FontDialog1->Font->Color;
                //rozmiar
                Tresc->Font->Size = FontDialog1->Font->Size;
                //styl
                Tresc->Font->Style = FontDialog1->Font->Style;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
        Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zapraszamnaoficjalnstron1Click(TObject *Sender)
{
        ShellExecute(NULL, "open", "file:///C:/Users/cp24/Desktop/All%20HTML%20Projects/INNE%20(1)%20Strona%20do%20mojego%20Notepada/index.html", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

