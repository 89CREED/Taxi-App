﻿//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TTabSheet *TabSheet5;
	TTabSheet *TabSheet6;
	TTabSheet *TabSheet7;
	TTabSheet *TabSheet8;
	TTabSheet *TabSheet9;
	TTabSheet *TabSheet10;
	TTabSheet *TabSheet11;
	TTabSheet *TabSheet12;
	TPanel *Panel4;
	TImage *Image1;
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit2;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TPanel *Panel5;
	TPanel *Panel6;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TDBGrid *DBGrid1;
	TPanel *Panel7;
	TPanel *Panel8;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TPanel *Panel9;
	TPanel *Panel10;
	TPanel *Panel11;
	TPanel *Panel12;
	TPanel *Panel13;
	TPanel *Panel14;
	TPanel *Panel15;
	TPanel *Panel16;
	TPanel *Panel17;
	TPanel *Panel18;
	TPanel *Panel19;
	TPanel *Panel20;
	TPanel *Panel21;
	TPanel *Panel22;
	TPanel *Panel24;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton14;
	TSpeedButton *SpeedButton15;
	TSpeedButton *SpeedButton16;
	TSpeedButton *SpeedButton17;
	TSpeedButton *SpeedButton18;
	TDBGrid *DBGrid2;
	TDBGrid *DBGrid3;
	TDBGrid *DBGrid4;
	TDBGrid *DBGrid5;
	TDBGrid *DBGrid6;
	TDBGrid *DBGrid7;
	TDBGrid *DBGrid8;
	TPageControl *PageControl2;
	TTabSheet *TabSheet13;
	TTabSheet *TabSheet14;
	TTabSheet *TabSheet15;
	TSpeedButton *SpeedButton19;
	TSpeedButton *SpeedButton20;
	TSpeedButton *SpeedButton23;
	TSpeedButton *SpeedButton24;
	TSpeedButton *SpeedButton25;
	TEdit *Edit3;
	TSpeedButton *SpeedButton26;
	TSpeedButton *SpeedButton27;
	TEdit *Edit4;
	TSpeedButton *SpeedButton28;
	TEdit *Edit5;
	TSpeedButton *SpeedButton29;
	TEdit *Edit6;
	TEdit *Edit8;
	TEdit *Edit9;
	TComboBox *ComboBox1;
	TSpeedButton *SpeedButton32;
	TSpeedButton *SpeedButton33;
	TEdit *Edit10;
	TSpeedButton *SpeedButton31;
	TEdit *Edit11;
	TSpeedButton *SpeedButton34;
	TEdit *Edit12;
	TSpeedButton *SpeedButton35;
	TEdit *Edit13;
	TSpeedButton *SpeedButton36;
	TEdit *Edit15;
	TComboBox *ComboBox2;
	TEdit *Edit16;
	TSpeedButton *SpeedButton38;
	TSpeedButton *SpeedButton39;
	TDBGrid *DBGrid9;
	TPanel *Panel23;
	TPageControl *PageControl3;
	TTabSheet *TabSheet16;
	TSpeedButton *SpeedButton21;
	TSpeedButton *SpeedButton22;
	TSpeedButton *SpeedButton30;
	TSpeedButton *SpeedButton40;
	TTabSheet *TabSheet17;
	TSpeedButton *SpeedButton41;
	TSpeedButton *SpeedButton45;
	TSpeedButton *SpeedButton46;
	TEdit *Edit18;
	TEdit *Edit19;
	TEdit *Edit20;
	TEdit *Edit21;
	TTabSheet *TabSheet18;
	TPanel *Panel25;
	TDBGrid *DBGrid10;
	TSpeedButton *SpeedButton42;
	TSpeedButton *SpeedButton37;
	TEdit *Edit22;
	TEdit *Edit23;
	TEdit *Edit24;
	TEdit *Edit25;
	TEdit *Edit7;
	TSpeedButton *SpeedButton43;
	TEdit *Edit14;
	TSpeedButton *SpeedButton44;
	TSpeedButton *SpeedButton47;
	TSpeedButton *SpeedButton48;
	TSpeedButton *SpeedButton49;
	TSpeedButton *SpeedButton50;
	TEdit *Edit27;
	TSpeedButton *SpeedButton51;
	TEdit *Edit28;
	TEdit *Edit29;
	TEdit *Edit30;
	TSpeedButton *SpeedButton52;
	TEdit *Edit31;
	TEdit *Edit32;
	TEdit *Edit33;
	TEdit *Edit34;
	TSpeedButton *SpeedButton53;
	TSpeedButton *SpeedButton54;
	TMemo *Memo1;
	TMemo *Memo2;
	TGroupBox *GroupBox1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TEdit *Edit17;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Panel6Resize(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton26Click(TObject *Sender);
	void __fastcall SpeedButton15Click(TObject *Sender);
	void __fastcall SpeedButton27Click(TObject *Sender);
	void __fastcall SpeedButton17Click(TObject *Sender);
	void __fastcall SpeedButton18Click(TObject *Sender);
	void __fastcall SpeedButton28Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton12Click(TObject *Sender);
	void __fastcall SpeedButton29Click(TObject *Sender);
	void __fastcall SpeedButton13Click(TObject *Sender);
	void __fastcall SpeedButton14Click(TObject *Sender);
	void __fastcall SpeedButton32Click(TObject *Sender);
	void __fastcall SpeedButton20Click(TObject *Sender);
	void __fastcall Edit10KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall SpeedButton38Click(TObject *Sender);
	void __fastcall SpeedButton39Click(TObject *Sender);
	void __fastcall SpeedButton33Click(TObject *Sender);
	void __fastcall SpeedButton19Click(TObject *Sender);
	void __fastcall SpeedButton23Click(TObject *Sender);
	void __fastcall TabSheet3Show(TObject *Sender);
	void __fastcall SpeedButton43Click(TObject *Sender);
	void __fastcall SpeedButton16Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
	void __fastcall SpeedButton41Click(TObject *Sender);
	void __fastcall SpeedButton24Click(TObject *Sender);
	void __fastcall SpeedButton25Click(TObject *Sender);
	void __fastcall SpeedButton37Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall Edit17Change(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton52Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
