//---------------------------------------------------------------------------

#ifndef DobrodosliH
#define DobrodosliH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormDobrodosli : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelDobrodosli;
	TButton *ButtonRegistracijaForm;
	TButton *ButtonPrijavaForm;
private:	// User declarations
public:		// User declarations
	__fastcall TFormDobrodosli(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormDobrodosli *FormDobrodosli;
//---------------------------------------------------------------------------
#endif
