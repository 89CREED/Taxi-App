﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int marca_id, model_id, tip_id, culoare_id, caroserie_id;
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
		TabSheet3->TabVisible=true;
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

void __fastcall TForm1::SpeedButton26Click(TObject *Sender)
{
  //marca
	DataModule2->FDQuery7->Close();
	DataModule2->FDQuery7->Open();

	TabSheet5->TabVisible=true;
	TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{
	Edit3->Text = DataModule2->FDQuery7->FieldByName("DENUMIRE")->AsString;
	Edit9->Text = DataModule2->FDQuery7->FieldByName("DENUMIRE")->AsString;
	marca_id    = DataModule2->FDQuery7->FieldByName("MARCA_ID")->AsInteger;

	TabSheet5->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton27Click(TObject *Sender)
{
	//model
	DataModule2->FDQuery8->Close();
	DataModule2->FDQuery8->ParamByName("MARCA_ID")->AsInteger = marca_id;
	DataModule2->FDQuery8->Open();

	TabSheet4->TabVisible=true;
	TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton17Click(TObject *Sender)
{
	Edit4->Text  = DataModule2->FDQuery8->FieldByName("DENUMIRE")->AsString;
	Edit10->Text = DataModule2->FDQuery8->FieldByName("DENUMIRE")->AsString;
	model_id     = DataModule2->FDQuery8->FieldByName("MODEL_ID")->AsInteger;

	TabSheet4->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton18Click(TObject *Sender)
{
  TabSheet4->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton28Click(TObject *Sender)
{
	//caroserie
	DataModule2->FDQuery5->Close();
	DataModule2->FDQuery5->Open();

	TabSheet7->TabVisible=true;
	TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
	Edit5->Text  = DataModule2->FDQuery5->FieldByName("TIP_CAROSERIE")->AsString;
	Edit11->Text = DataModule2->FDQuery5->FieldByName("TIP_CAROSERIE")->AsString;
	caroserie_id = DataModule2->FDQuery5->FieldByName("CAROSERIE_ID")->AsInteger;

	TabSheet7->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton12Click(TObject *Sender)
{
  TabSheet7->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton29Click(TObject *Sender)
{
	//culoare
	DataModule2->FDQuery6->Close();
	DataModule2->FDQuery6->Open();

	TabSheet6->TabVisible=true;
	TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
	Edit6->Text  = DataModule2->FDQuery6->FieldByName("NUME_CULOARE")->AsString;
	Edit12->Text = DataModule2->FDQuery6->FieldByName("NUME_CULOARE")->AsString;
	culoare_id   = DataModule2->FDQuery6->FieldByName("CULOARE_ID")->AsInteger;

	TabSheet6->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
  TabSheet6->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton32Click(TObject *Sender)
{
	if( (Edit3->Text != "") && (Edit4->Text != "") && (Edit5->Text != "") && (Edit6->Text != "") && (Edit7->Text != "") && (Edit8->Text != "") )
	{
		DataModule2->Inserare_Auto->Close();
		DataModule2->Inserare_Auto->ParamByName("MODEL_ID")->AsInteger     = model_id;
		DataModule2->Inserare_Auto->ParamByName("CULOARE_ID")->AsInteger   = culoare_id;
		DataModule2->Inserare_Auto->ParamByName("CAROSERIE_ID")->AsInteger = caroserie_id;
		DataModule2->Inserare_Auto->ParamByName("TIP_ID")->AsInteger       = 1;//tip_id;
		DataModule2->Inserare_Auto->ParamByName("NR_AUTO")->AsString       = Edit8->Text;
		DataModule2->Inserare_Auto->ParamByName("MOTOR")->AsString         = Edit7->Text;
		DataModule2->Inserare_Auto->ParamByName("COMBUSTIBIL")->AsString   = ComboBox1->Text;
		DataModule2->Inserare_Auto->ExecSQL();

		DataModule2->FDQuery9->Close();
		DataModule2->FDQuery9->Open();

		Edit3->Text 	  = "";
		Edit4->Text 	  = "";
		Edit5->Text 	  = "";
		Edit6->Text 	  = "";
		Edit7->Text 	  = "";
		Edit8->Text     = "";
		ComboBox1->Text = "";
	}
	else
	{
		ShowMessage("Nu sunt introduse toate cimpurile");
  }
}
//---------------------------------------------------------------------------

