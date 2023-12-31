//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	if( (Edit1->Text == "1") && (Edit2->Text == "1") )
	{
		//operator
		DataModule2->FDQuery1->Close();
		DataModule2->FDQuery1->Open();

		//strada
		DataModule2->FDQuery2->Close();
		DataModule2->FDQuery2->Open();

		//localitate
		DataModule2->FDQuery3->Close();
		DataModule2->FDQuery3->Open();

		//tip
		DataModule2->FDQuery4->Close();
		DataModule2->FDQuery4->Open();

    //caroserie
		DataModule2->FDQuery5->Close();
		DataModule2->FDQuery5->Open();

		//culoare
		DataModule2->FDQuery6->Close();
		DataModule2->FDQuery6->Open();

		//marca
		DataModule2->FDQuery7->Close();
		DataModule2->FDQuery7->Open();

		//model
		DataModule2->FDQuery8->Close();
		DataModule2->FDQuery8->Open();

		//automobil
		DataModule2->FDQuery9->Close();
		DataModule2->FDQuery9->Open();

		//comanda
		DataModule2->FDQuery10->Close();
		DataModule2->FDQuery10->Open();

		TabSheet1->TabVisible=false;//autentificare
		TabSheet2->TabVisible=true;
	}
	else
	{
		Edit2->Clear();
		ShowMessage("Autentificare Esuata");
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	TabSheet2->TabVisible=false;
	TabSheet3->TabVisible=false;
	TabSheet4->TabVisible=false;
	TabSheet5->TabVisible=false;
	TabSheet6->TabVisible=false;
	TabSheet7->TabVisible=false;
	TabSheet8->TabVisible=false;
	TabSheet9->TabVisible=false;
	TabSheet10->TabVisible=false;
	TabSheet11->TabVisible=false;
	TabSheet12->TabVisible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6Resize(TObject *Sender)
{
	int w = Panel6->Width;

	//operator
	int a = DBGrid1->Columns->Items[0]->Width +
					DBGrid1->Columns->Items[1]->Width +
					DBGrid1->Columns->Items[2]->Width;
	DBGrid1->Columns->Items[3]->Width = w - a - 40;

	//strada
	int b = DBGrid2->Columns->Items[0]->Width +
					DBGrid2->Columns->Items[1]->Width;
	DBGrid2->Columns->Items[2]->Width = w - b - 40;

	//localitatea
	int c = DBGrid3->Columns->Items[0]->Width +
					DBGrid3->Columns->Items[1]->Width;
	DBGrid3->Columns->Items[2]->Width = w - c - 40;

	//tip taxi
	int d = DBGrid4->Columns->Items[0]->Width +
					DBGrid4->Columns->Items[1]->Width;
	DBGrid4->Columns->Items[2]->Width = w - d - 40;

	//caroserie
	int e = DBGrid5->Columns->Items[0]->Width +
					DBGrid5->Columns->Items[1]->Width;
	DBGrid5->Columns->Items[2]->Width = w - e - 40;

	//culoare
	int f = DBGrid6->Columns->Items[0]->Width +
					DBGrid6->Columns->Items[1]->Width;
	DBGrid6->Columns->Items[2]->Width = w - f - 40;

	//marca
	int g = DBGrid7->Columns->Items[0]->Width +
					DBGrid7->Columns->Items[1]->Width;
	DBGrid7->Columns->Items[2]->Width = w - g - 40;

	//model
	int h = DBGrid8->Columns->Items[0]->Width +
					DBGrid8->Columns->Items[1]->Width;
	DBGrid8->Columns->Items[2]->Width = w - h - 40;

	//automobil
	int i = DBGrid9->Columns->Items[0]->Width +
					DBGrid9->Columns->Items[1]->Width;
	DBGrid9->Columns->Items[2]->Width = w - i - 40;

	//comanda
	int j = DBGrid10->Columns->Items[0]->Width +
					DBGrid10->Columns->Items[1]->Width +
					DBGrid10->Columns->Items[2]->Width +
					DBGrid10->Columns->Items[3]->Width ;
	DBGrid10->Columns->Items[4]->Width = w - j - 40;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
  DataModule2->FDQuery1->Close();
	DataModule2->FDQuery1->Open();
}
//---------------------------------------------------------------------------
