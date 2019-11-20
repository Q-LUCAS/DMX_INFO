//---------------------------------------------------------------------------

#ifndef LAMPEH
#define LAMPEH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class PACKAGE Tflampe : public TForm
{
__published:	// Composants gérés par l'EDI
	TTrackBar *RED;
	TEdit *Edit1;
	TTrackBar *GREEN;
	TEdit *Edit2;
	TTrackBar *BLUE;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	void __fastcall REDChange(TObject *Sender);
	void __fastcall GREENChange(TObject *Sender);
	void __fastcall BLUEChange(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall Tflampe(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tflampe *flampe;
//---------------------------------------------------------------------------
#endif
