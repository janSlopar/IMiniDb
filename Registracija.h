//---------------------------------------------------------------------------

#ifndef RegistracijaH
#define RegistracijaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Phys.SQLiteVDataSet.hpp>
//---------------------------------------------------------------------------
class TFormRegistracija : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBoxRegistracija;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *EditIme;
	TEdit *EditPrezime;
	TLabel *Label3;
	TEdit *EditKorIme;
	TLabel *Label4;
	TEdit *EditEmail;
	TLabel *Label5;
	TEdit *EditLozinka;
	TButton *ButtonRegistriraj;
	TButton *ButtonKonf;
	TButton *ButtonHRV;
	TButton *ButtonENG;
	TFDConnection *FDConnectionIMiniDB;
	TFDPhysMySQLDriverLink *FDPhysMySQLDriverLink1;
	void __fastcall ButtonRegistrirajClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ButtonKonfClick(TObject *Sender);
	void __fastcall ButtonHRVClick(TObject *Sender);
	void __fastcall ButtonENGClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFormRegistracija(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormRegistracija *FormRegistracija;
//---------------------------------------------------------------------------
#endif
