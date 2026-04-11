//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Registracija.h"
#include "DataTypes.h"
#include "Stilovi.h"
#include <registry.hpp>
#include <System.IOUtils.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormRegistracija *FormRegistracija;
//---------------------------------------------------------------------------
__fastcall TFormRegistracija::TFormRegistracija(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormRegistracija::ButtonRegistrirajClick(TObject *Sender)
{
    EditLozinka->PasswordChar = '*';
	Korisnik K_test;

	K_test.setIme(EditIme->Text);
    K_test.setPrezime(EditPrezime->Text);
	K_test.setKorisnickoIme(EditKorIme->Text);
	K_test.setEmail(EditEmail->Text);
	K_test.setLozinka(EditLozinka->Text);

	ShowMessage("Pozdrav, " + K_test.getKorIme() + "!");

}
//---------------------------------------------------------------------------



void __fastcall TFormRegistracija::FormCreate(TObject *Sender)
{
    TDateTime today = TDateTime::CurrentDateTime();

    String path = TPath::Combine(TPath::GetDocumentsPath(), "postavke.ini");

	TIniFile* ini = new TIniFile(path);

	ini->WriteString("Stilovi", "stil1", FormRegistracija->StyleName);
	ini->WriteString("Stilovi", "stil2", GroupBoxRegistracija->StyleName);
    ini->WriteString("Stilovi", "zadnja-pohrana", Date());

	delete ini;

	TRegistry* reg = new TRegistry;
	reg->RootKey = HKEY_LOCAL_MACHINE;
	reg->Access = KEY_READ | KEY_WRITE;

	/*
    if (reg->OpenKey("Software\\IMiniDB", true))
	{
		if (!reg->ValueExists("IMiniDB"))
			reg->WriteString("IMiniDB", FormatDateTime("dd.mm.yyyy", today));
		reg->CloseKey();
	}

	if (reg->OpenKey("Software\\IMiniDB\\Broj_otvaranja_apk", true))
	{
		if (!reg->ValueExists("IMiniDB_korisnika"))
			reg->WriteInteger("IMiniDB_korisnika", 0);
		reg->CloseKey();
	}
	  */

	try
	{
		if (reg->OpenKey("Software\\IMiniDB", true))
		{
			if (!reg->ValueExists("IMiniDB"))
				reg->WriteString("IMiniDB", FormatDateTime("dd.mm.yyyy hh:nn:ss", Now()));

			if (!reg->ValueExists("IMiniDB_korisnika"))
				reg->WriteInteger("IMiniDB_korisnika", 0);

			int trenutni = reg->ReadInteger("IMiniDB_korisnika");
			reg->WriteInteger("IMiniDB_korisnika", trenutni + 1);

			reg->CloseKey();
		}
	}
	__finally
	{
		reg->Free();
	}
}
//---------------------------------------------------------------------------

