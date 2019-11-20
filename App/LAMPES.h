//---------------------------------------------------------------------------

#ifndef LAMPESH
#define LAMPESH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class PACKAGE Ttlampes : public TForm
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
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TTrackBar *RED1;
	TEdit *Edit4;
	TTrackBar *GREEN1;
	TEdit *Edit5;
	TTrackBar *BLUE1;
	TEdit *Edit6;
	TTrackBar *GREEN2;
	TEdit *Edit7;
	TTrackBar *BLUE2;
	TEdit *Edit8;
	TEdit *Edit9;
	TTrackBar *RED2;
	void __fastcall REDChange(TObject *Sender);
	void __fastcall RED1Change(TObject *Sender);
	void __fastcall RED2Change(TObject *Sender);
	void __fastcall GREEN2Change(TObject *Sender);
	void __fastcall GREENChange(TObject *Sender);
	void __fastcall BLUEChange(TObject *Sender);
	void __fastcall GREEN1Change(TObject *Sender);
	void __fastcall BLUE1Change(TObject *Sender);
	void __fastcall BLUE2Change(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall Ttlampes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Ttlampes *tlampes;
//---------------------------------------------------------------------------
#endif
