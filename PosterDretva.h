//---------------------------------------------------------------------------
#ifndef PosterDretvaH
#define PosterDretvaH

#include <System.SyncObjs.hpp>
#include <System.Classes.hpp>

class TFormSviFilmovi;   // forward deklaracija

class TPosterDretva : public TThread
{
private:
    TFormSviFilmovi *FForm;
    String  FImdbID;
    String  FUrl;
    int     FUkupno;
    TMemoryStream *FMS;

    void __fastcall SyncUpdateBaze();
    void __fastcall QueueProgres();

protected:
    void __fastcall Execute();

public:
	TCriticalSection *FCS;
	int FBrojacPostera;
    __fastcall TPosterDretva(TFormSviFilmovi *form, const String &id,
                             const String &url, int ukupno);
};

#endif
//---------------------------------------------------------------------------
