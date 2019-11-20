//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include "lampe.h"
#include "lampes.h"
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("..\Forms\LAMPE.cpp", flampe);
USEFORM("..\Forms\LAMPES.cpp", tlampes);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(Tflampe), &flampe);
		Application->CreateForm(__classid(Ttlampes), &tlampes);
		Application->CreateForm(__classid(Tflampe), &flampe);
		Application->CreateForm(__classid(Ttlampes), &tlampes);
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
