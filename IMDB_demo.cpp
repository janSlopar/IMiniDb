//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include "DataTypes.h"

#include "Registracija.h"
#include "Prijava.h"
#include "Recenzija.h"
//#include "SviFilmovi.h"

#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Registracija.dfm", FormRegistracija);
USEFORM("Prijava.dfm", FormPrijava);
USEFORM("Recenzija.dfm", FormRecenzija);
USEFORM("SviFilmovi.dfm", FormSviFilmovi);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Obsidian");
		Application->CreateForm(__classid(TFormRegistracija), &FormRegistracija);
		Application->CreateForm(__classid(TFormPrijava), &FormPrijava);
		Application->CreateForm(__classid(TFormRecenzija), &FormRecenzija);
		Application->CreateForm(__classid(TFormSviFilmovi), &FormSviFilmovi);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
