#include <vcl.h>
#include <Vcl.Buttons.hpp>
#pragma hdrstop
#include "Stilovi.h"

static void StilizirajLabel(TLabel *c)
{
    c->Font->Name  = "Arial";
    c->Font->Size  = 9;
    c->Font->Color = BOJA_LABEL;
    c->Font->Style = TFontStyles();
}
static void StilizirajEdit(TEdit *c)
{
    c->Color       = BOJA_INPUT;
    c->Font->Name  = "Arial";
    c->Font->Size  = 10;
    c->Font->Color = BOJA_TEKST;
    c->Font->Style = TFontStyles();
}
static void StilizirajMemo(TMemo *c)
{
    c->Color       = BOJA_INPUT;
    c->Font->Name  = "Arial";
    c->Font->Size  = 10;
    c->Font->Color = BOJA_TEKST;
    c->Font->Style = TFontStyles();
    c->BorderStyle = bsSingle;
}
static void StilizirajGroupBox(TGroupBox *c)
{
    c->Color       = BOJA_GRUPBOX;
    c->Font->Name  = "Arial";
    c->Font->Size  = 9;
    c->Font->Color = BOJA_LABEL;
    c->Font->Style = TFontStyles() << fsBold;
}
static void StilizirajSpinEdit(TSpinEdit *c)
{
    c->Color       = BOJA_INPUT;
    c->Font->Name  = "Arial";
    c->Font->Size  = 10;
    c->Font->Color = BOJA_TEKST;
    c->Font->Style = TFontStyles();
}
static void StilizirajDatePicker(TDateTimePicker *c)
{
    c->Color       = BOJA_INPUT;
    c->Font->Name  = "Arial";
    c->Font->Size  = 10;
    c->Font->Color = BOJA_TEKST;
    c->Font->Style = TFontStyles();
}
static void StilizirajButton(TBitBtn *c)
{
    c->Font->Name = "Arial";
    c->Font->Size = 10;
    if (c->Tag == 1)
    {
        c->Font->Color      = BOJA_TEKST;
		c->Font->Style      = TFontStyles() << fsBold;
    }
    else
    {
        c->Font->Color      = BOJA_TEKST;
        c->Font->Style      = TFontStyles();
    }
}

void PrimijeniStil(TForm *forma)
{
    forma->Color       = BOJA_POZADINA;
    forma->Font->Name  = "Arial";
    forma->Font->Size  = 10;
    forma->Font->Color = BOJA_TEKST;

    for (int i = 0; i < forma->ComponentCount; i++)
    {
        TComponent *comp = forma->Components[i];
        if      (TLabel          *c = dynamic_cast<TLabel*>         (comp)) StilizirajLabel(c);
        else if (TEdit           *c = dynamic_cast<TEdit*>          (comp)) StilizirajEdit(c);
        else if (TMemo           *c = dynamic_cast<TMemo*>          (comp)) StilizirajMemo(c);
        else if (TGroupBox       *c = dynamic_cast<TGroupBox*>      (comp)) StilizirajGroupBox(c);
        else if (TSpinEdit       *c = dynamic_cast<TSpinEdit*>      (comp)) StilizirajSpinEdit(c);
        else if (TDateTimePicker *c = dynamic_cast<TDateTimePicker*>(comp)) StilizirajDatePicker(c);
        else if (TBitBtn         *c = dynamic_cast<TBitBtn*>        (comp)) StilizirajButton(c);
    }
}

#pragma package(smart_init)
