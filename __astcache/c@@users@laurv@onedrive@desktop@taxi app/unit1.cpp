//---------------------------------------------------------------------------

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
    //automobil
		DataModule2->FDQuery9->Close();
		DataModule2->FDQuery9->Open();

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


	int b = DBGrid2->Columns->Items[0]->Width +
					DBGrid2->Columns->Items[1]->Width;
	DBGrid2->Columns->Items[2]->Width = w - b - 40;//strada
	DBGrid3->Columns->Items[2]->Width = w - b - 40;//localitatea
	DBGrid4->Columns->Items[2]->Width = w - b - 40;//tip taxi
	DBGrid5->Columns->Items[2]->Width = w - b - 40;//caroserie
	DBGrid6->Columns->Items[2]->Width = w - b - 40;//culoare
	DBGrid7->Columns->Items[2]->Width = w - b - 40;//marca
	DBGrid8->Columns->Items[2]->Width = w - b - 40;//model

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
	Edit4->Clear();
	Edit10->Clear();

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

		TabSheet14->TabVisible = false; //inserare
		TabSheet13->TabVisible = true ; //main
		MessageDlg("Inserare cu succes!", mtInformation, TMsgDlgButtons() << mbOK, 0);
	}
	else
	{
		ShowMessage("Nu sunt introduse toate cimpurile");
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton20Click(TObject *Sender)
{
	if( !DataModule2->FDQuery9->IsEmpty() )
	{
		Edit9->Text     = DataModule2->FDQuery9->FieldByName("denumire_1")->AsString;
		Edit10->Text    = DataModule2->FDQuery9->FieldByName("denumire")->AsString;
		Edit11->Text    = DataModule2->FDQuery9->FieldByName("tip_caroserie")->AsString;
		Edit12->Text    = DataModule2->FDQuery9->FieldByName("nume_culoare")->AsString;
		Edit13->Text    = DataModule2->FDQuery9->FieldByName("motor")->AsString;
		ComboBox2->Text = DataModule2->FDQuery9->FieldByName("combustibil")->AsString;
		Edit14->Text    = DataModule2->FDQuery9->FieldByName("nr_auto")->AsString;

		marca_id     = DataModule2->FDQuery9->FieldByName("marca_id")->AsInteger;
		model_id     = DataModule2->FDQuery9->FieldByName("model_id")->AsInteger;
		tip_id       = DataModule2->FDQuery9->FieldByName("tip_id")->AsInteger;
		culoare_id   = DataModule2->FDQuery9->FieldByName("culoare_id")->AsInteger;
		caroserie_id = DataModule2->FDQuery9->FieldByName("caroserie_id")->AsInteger;

		TabSheet15->TabVisible = true;
		TabSheet13->TabVisible = false;
		TabSheet14->TabVisible = false;
	}
	else
	{
		MessageDlg("Nu sunt date de editat", mtError, TMsgDlgButtons() << mbYes, 0);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit9KeyPress(TObject *Sender, System::WideChar &Key)
{
  Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton38Click(TObject *Sender)
{
  if( (Edit9->Text != "") && (Edit10->Text != "") && (Edit11->Text != "") && (Edit12->Text != "") && (Edit13->Text != "") && (Edit14->Text != "") )
	{
		DataModule2->Update_Auto->Close();
		DataModule2->Update_Auto->ParamByName("MODEL_ID")->AsInteger     = model_id;
		DataModule2->Update_Auto->ParamByName("CULOARE_ID")->AsInteger   = culoare_id;
		DataModule2->Update_Auto->ParamByName("CAROSERIE_ID")->AsInteger = caroserie_id;
		DataModule2->Update_Auto->ParamByName("TIP_ID")->AsInteger       = 1;//tip_id;
		DataModule2->Update_Auto->ParamByName("AUTO_ID")->AsInteger      = DataModule2->FDQuery9->FieldByName("AUTO_ID")->AsInteger;
		DataModule2->Update_Auto->ParamByName("NR_AUTO")->AsString       = Edit14->Text;
		DataModule2->Update_Auto->ParamByName("MOTOR")->AsString         = Edit13->Text;
		DataModule2->Update_Auto->ParamByName("COMBUSTIBIL")->AsString   = ComboBox2->Text;
		DataModule2->Update_Auto->ExecSQL();

		DataModule2->FDQuery9->Close();
		DataModule2->FDQuery9->Open();

		Edit9->Text 	  = "";
		Edit10->Text 	  = "";
		Edit11->Text 	  = "";
		Edit12->Text 	  = "";
		Edit13->Text 	  = "";
		Edit14->Text    = "";
		ComboBox2->Text = "";

		TabSheet15->TabVisible = false; //editare
		TabSheet13->TabVisible = true ; //main
		MessageDlg("Editare cu succes!", mtInformation, TMsgDlgButtons() << mbOK, 0);
	}
	else
	{
		ShowMessage("Nu sunt introduse toate cimpurile");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton39Click(TObject *Sender)
{
  TabSheet15->TabVisible = false; //editare
	TabSheet13->TabVisible = true ; //main
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton33Click(TObject *Sender)
{
	Edit3->Text 	  = "";
	Edit4->Text 	  = "";
	Edit5->Text 	  = "";
	Edit6->Text 	  = "";
	Edit7->Text 	  = "";
	Edit8->Text     = "";
	ComboBox1->Text = "";

	TabSheet14->TabVisible = false; //inserare
	TabSheet13->TabVisible = true ; //main
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton19Click(TObject *Sender)
{
	TabSheet15->TabVisible = false;
	TabSheet13->TabVisible = false;
	TabSheet14->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton23Click(TObject *Sender)
{
	try
	{
		if( !DataModule2->FDQuery9->IsEmpty() )
		{
			if (MessageDlg("Dvs doriti sa eliminati informatia?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
			{
				DataModule2->Delete_Auto->Close();
				DataModule2->Delete_Auto->ParamByName("AUTO_ID")->AsInteger = DataModule2->FDQuery9->FieldByName("AUTO_ID")->AsInteger;
				DataModule2->Delete_Auto->ExecSQL();

				DataModule2->FDQuery9->Close();
				DataModule2->FDQuery9->Open();
        MessageDlg("Eliminare cu succes", mtConfirmation, TMsgDlgButtons() << mbYes, 0);
      }
		}
		else
		{
			ShowMessage("Nu sunt date de eliminat");
    }
	}
	catch(...)
	{
		ShowMessage("Ups... eroare de program! Va rugam apelati administratorul");
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet3Show(TObject *Sender)
{
	//TabSheet15->TabVisible = false;
	//TabSheet14->TabVisible = false;

  //PageControl2->ActivePageIndex = 0;
}
//---------------------------------------------------------------------------


