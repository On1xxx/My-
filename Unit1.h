//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include "Train.hpp"
#include "Train.cpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>

//---------------------------------------------------------------------------

class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *StringGrid1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TRadioButton *RadioButton5;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TRadioButton *RadioButton6;
        TButton *Button1;
        TGroupBox *GroupBox1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall RadioButton6Click(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);

        



private:
public:
           Train T;  
        __fastcall TForm1(TComponent* Owner);

};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
