//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PregledFilmova.h"
#include <registry.hpp>
#include <System.IOUtils.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormSviFilmovi *FormSviFilmovi;
//---------------------------------------------------------------------------
__fastcall TFormSviFilmovi::TFormSviFilmovi(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormSviFilmovi::FormCreate(TObject *Sender)
{
	String path = TPath::Combine(TPath::GetDocumentsPath(), "postavke.ini");

	TIniFile* ini = new TIniFile(path);

	FormSviFilmovi->StyleName = ini->ReadString("Stilovi", "stil1", "Obsidian");
	//GroupBoxRecenzija->StyleName = ini->ReadString("Stilovi", "stil2", "Obsidian");

	delete ini;
}
//---------------------------------------------------------------------------

