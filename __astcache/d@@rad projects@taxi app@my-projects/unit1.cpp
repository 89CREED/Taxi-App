﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int marca_id, model_id, tip_id, culoare_id, caroserie_id, automobil_id, operator_id, strada_id;
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


	int b = DBGrid2->Columns->Items[0]->Width +
			DBGrid2->Columns->Items[1]->Width;
	DBGrid3->Columns->Items[2]->Width = w - b - 40;//localitatea
	DBGrid4->Columns->Items[2]->Width = w - b - 40;//tip taxi
	DBGrid5->Columns->Items[2]->Width = w - b - 40;//caroserie
	DBGrid6->Columns->Items[2]->Width = w - b - 40;//culoare
	DBGrid7->Columns->Items[2]->Width = w - b - 40;//marca
	DBGrid8->Columns->Items[2]->Width = w - b - 40;//model

	int c = DBGrid9->Columns->Items[0]->Width +
					DBGrid9->Columns->Items[1]->Width +
					DBGrid9->Columns->Items[2]->Width +
					DBGrid9->Columns->Items[3]->Width +
					DBGrid9->Columns->Items[4]->Width +
					DBGrid9->Columns->Items[5]->Width +
					DBGrid9->Columns->Items[6]->Width +
					DBGrid9->Columns->Items[7]->Width +
					DBGrid9->Columns->Items[8]->Width;
  DBGrid9->Columns->Items[9]->Width = w - c - 40;

  int d = DBGrid2->Columns->Items[0]->Width +
		  DBGrid2->Columns->Items[1]->Width +
		  DBGrid2->Columns->Items[2]->Width;
  DBGrid2->Columns->Items[3]->Width = w - d - 40;//strada

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
	TabSheet11->TabVisible = false;
	TabSheet2->TabVisible = true;
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
	Edit10->Text = DataModule2->FDQuery7->FieldByName("DENUMIRE")->AsString;
	marca_id    = DataModule2->FDQuery7->FieldByName("MARCA_ID")->AsInteger;
	Edit4->Clear();
	Edit11->Clear();

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
	Edit11->Text = DataModule2->FDQuery8->FieldByName("DENUMIRE")->AsString;
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
	Edit12->Text = DataModule2->FDQuery5->FieldByName("TIP_CAROSERIE")->AsString;
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
	Edit13->Text = DataModule2->FDQuery6->FieldByName("NUME_CULOARE")->AsString;
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
	if( (Edit3->Text != "") && (Edit4->Text != "") && (Edit5->Text != "") && (Edit6->Text != "") && (Edit7->Text != "") && (Edit8->Text != "") && (Edit9->Text != "") )
	{
		DataModule2->Insert_Comanda->Close();
		DataModule2->Insert_Comanda->ParamByName("Automobil_ID")->AsInteger = automobil_id;
		DataModule2->Insert_Comanda->ParamByName("LOCALITATE_ID")->AsInteger = strada_id;
		DataModule2->Insert_Comanda->ParamByName("OPERATOR_ID")->AsInteger = operator_id;
		DataModule2->Insert_Comanda->ParamByName("NOTA")->AsString = Edit25->Text;
		DataModule2->Insert_Comanda->ParamByName("ADRESA_DESTINATIE")->AsString = Edit19->Text+", "+Edit20->Text+", "+Edit21->Text;
		DataModule2->Insert_Comanda->ParamByName("PRET")->AsString = Edit24->Text;
		DataModule2->Insert_Comanda->ParamByName("KM")->AsString = Edit22->Text;
		DataModule2->Insert_Comanda->ParamByName("COST_KM")->AsString = Edit23->Text;
		DataModule2->Insert_Comanda->ExecSQL();

		DataModule2->FDQuery9->Close();
		DataModule2->FDQuery9->Open();

		Edit3->Text 	  = "";
		Edit4->Text 	  = "";
		Edit5->Text 	  = "";
		Edit6->Text 	  = "";
		Edit7->Text 	  = "";
		Edit8->Text     = "";
		Edit9->Text     = "";
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
		Edit10->Text    = DataModule2->FDQuery9->FieldByName("denumire_1")->AsString;
		Edit11->Text    = DataModule2->FDQuery9->FieldByName("denumire")->AsString;
		Edit12->Text    = DataModule2->FDQuery9->FieldByName("tip_caroserie")->AsString;
		Edit13->Text    = DataModule2->FDQuery9->FieldByName("nume_culoare")->AsString;
		Edit14->Text    = DataModule2->FDQuery9->FieldByName("tip_taxi")->AsString;
		Edit15->Text    = DataModule2->FDQuery9->FieldByName("motor")->AsString;
		ComboBox2->Text = DataModule2->FDQuery9->FieldByName("combustibil")->AsString;
		Edit16->Text    = DataModule2->FDQuery9->FieldByName("nr_auto")->AsString;

		marca_id     		= DataModule2->FDQuery9->FieldByName("marca_id")->AsInteger;
		model_id     		= DataModule2->FDQuery9->FieldByName("model_id")->AsInteger;
		tip_id       		= DataModule2->FDQuery9->FieldByName("tip_id")->AsInteger;
		culoare_id   		= DataModule2->FDQuery9->FieldByName("culoare_id")->AsInteger;
		caroserie_id 		= DataModule2->FDQuery9->FieldByName("caroserie_id")->AsInteger;

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

void __fastcall TForm1::Edit10KeyPress(TObject *Sender, System::WideChar &Key)
{
  Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton38Click(TObject *Sender)
{
	if( (Edit10->Text != "") && (Edit11->Text != "") && (Edit12->Text != "") && (Edit13->Text != "") && (Edit14->Text != "") && (Edit15->Text != "") && (Edit16->Text != "") )
	{
		DataModule2->Update_Auto->Close();
		DataModule2->Update_Auto->ParamByName("MODEL_ID")->AsInteger     = model_id;
		DataModule2->Update_Auto->ParamByName("CULOARE_ID")->AsInteger   = culoare_id;
		DataModule2->Update_Auto->ParamByName("CAROSERIE_ID")->AsInteger = caroserie_id;
		DataModule2->Update_Auto->ParamByName("TIP_ID")->AsInteger       = tip_id;
		DataModule2->Update_Auto->ParamByName("AUTO_ID")->AsInteger      = DataModule2->FDQuery9->FieldByName("AUTO_ID")->AsInteger;
		DataModule2->Update_Auto->ParamByName("NR_AUTO")->AsString       = Edit16->Text;
		DataModule2->Update_Auto->ParamByName("MOTOR")->AsString         = Edit15->Text;
		DataModule2->Update_Auto->ParamByName("COMBUSTIBIL")->AsString   = ComboBox2->Text;
		DataModule2->Update_Auto->ExecSQL();

		DataModule2->FDQuery9->Close();
		DataModule2->FDQuery9->Open();

		Edit10->Text 	  = "";
		Edit11->Text 	  = "";
		Edit12->Text 	  = "";
		Edit13->Text 	  = "";
		Edit14->Text 	  = "";
		Edit15->Text    = "";
		Edit16->Text    = "";
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
  Edit9->Text     = "";
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





void __fastcall TForm1::SpeedButton43Click(TObject *Sender)
{
	//tip
	DataModule2->FDQuery4->Close();
	DataModule2->FDQuery4->Open();

	TabSheet8->TabVisible=true;
	TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton16Click(TObject *Sender)
{
	TabSheet5->TabVisible = false;
	TabSheet3->TabVisible = true ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
	Edit7->Text  = DataModule2->FDQuery4->FieldByName("TIP_TAXI")->AsString;
	Edit14->Text = DataModule2->FDQuery4->FieldByName("TIP_TAXI")->AsString;
	tip_id       = DataModule2->FDQuery4->FieldByName("TIP_ID")->AsInteger;
	Edit8->Clear();
	Edit15->Clear();

	TabSheet8->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
  TabSheet8->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton41Click(TObject *Sender)
{
	DataModule2->FDQuery9->Close();
	DataModule2->FDQuery9->Open();

	TabSheet2->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton24Click(TObject *Sender)
{
	automobil_id=DataModule2->FDQuery9->FieldByName("auto_id")->AsInteger;

	Memo1->Lines->Add(DataModule2->FDQuery9->FieldByName("DENUMIRE_1")->AsString);
	Memo1->Lines->Add(DataModule2->FDQuery9->FieldByName("DENUMIRE"  )->AsString);
	Memo1->Lines->Add(DataModule2->FDQuery9->FieldByName("NR_AUTO"   )->AsString);

	Memo2->Lines->Add(DataModule2->FDQuery9->FieldByName("DENUMIRE_1")->AsString);
	Memo2->Lines->Add(DataModule2->FDQuery9->FieldByName("DENUMIRE"  )->AsString);
	Memo2->Lines->Add(DataModule2->FDQuery9->FieldByName("NR_AUTO"   )->AsString);

	TabSheet3->TabVisible = false;
	TabSheet2->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton25Click(TObject *Sender)
{
    TabSheet2->TabVisible = false;
	TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton37Click(TObject *Sender)
{
	DataModule2->FDQuery1->Close();
	DataModule2->FDQuery1->Open();

	TabSheet2 ->TabVisible = false;
	TabSheet11->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
	operator_id=DataModule2->FDQuery1->FieldByName("operator_id")->AsInteger;

	Edit18->Text=DataModule2->FDQuery1->FieldByName("NUME")->AsString + " " + DataModule2->FDQuery1->FieldByName("PRENUME")->AsString;
	Edit27->Text=DataModule2->FDQuery1->FieldByName("NUME")->AsString + " " + DataModule2->FDQuery1->FieldByName("PRENUME")->AsString;

	TabSheet11->TabVisible = false;
	TabSheet2->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit17Change(TObject *Sender)
{
	if(Edit17->Text.Length()>2)
	{
		DataModule2->FDQuery2->Close();
		DataModule2->FDQuery2->SQL->Clear();
		DataModule2->FDQuery2->SQL->Add(" SELECT * FROM RAION R INNER JOIN LOCALITATE L ON R.RAION_ID=L.RAION_ID ");
		DataModule2->FDQuery2->SQL->Add(" INNER JOIN STRADA S ON S.LOCALITATE_ID=L.LOCALITATE_ID ");

		if (RadioButton1->Checked) DataModule2->FDQuery2->SQL->Add(" where raion like '%"+Edit17->Text+"%' ");
		if (RadioButton2->Checked) DataModule2->FDQuery2->SQL->Add(" where L.denumire like '%"+Edit17->Text+"%' ");
		if (RadioButton3->Checked) DataModule2->FDQuery2->SQL->Add(" where S.denumire like '%"+Edit17->Text+"%' ");
        DataModule2->FDQuery2->Open();
	}
	else
	{
		DataModule2->FDQuery2->Close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
	try
	{
		if((DataModule2->FDQuery1->Active==true) && (!DataModule2->FDQuery1->IsEmpty()))
		{
			Edit19->Text=DataModule2->FDQuery1->FieldByName("raion")->AsString;
			Edit20->Text=DataModule2->FDQuery1->FieldByName("raion")->AsString;
			Edit21->Text=DataModule2->FDQuery1->FieldByName("raion")->AsString;

			Edit28->Text=DataModule2->FDQuery1->FieldByName("raion")->AsString;
			Edit29->Text=DataModule2->FDQuery1->FieldByName("raion")->AsString;
			Edit30->Text=DataModule2->FDQuery1->FieldByName("raion")->AsString;

			strada_id=DataModule2->FDQuery1->FieldByName("strada_id")->AsInteger;

			TabSheet10->TabVisible = false;
			TabSheet2->TabVisible = true;
		}
		else
		{
		   ShowMessage("Nu aveti date selectate!");
        }
	}
	catch(...)
	{
		ShowMessage("Ups... ceva nu amers bine!!!");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
    TabSheet10->TabVisible = false;
	TabSheet2->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton52Click(TObject *Sender)
{
	DataModule2->FDQuery1->Close();
	RadioButton3->Checked=true;
	TabSheet10->TabVisible = true;
	TabSheet2->TabVisible = false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
	if(RadioButton1->Checked)
	{
		Edit17->Clear();
		Edit17->SetFocus();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
    if(RadioButton2->Checked)
	{
		Edit17->Clear();
		Edit17->SetFocus();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
	if(RadioButton3->Checked)
	{
		Edit17->Clear();
		Edit17->SetFocus();
	}
}
//---------------------------------------------------------------------------

