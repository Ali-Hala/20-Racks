//---------------------------------------------------------------------------

#include <fmx.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <fstream>

#pragma hdrstop

#include "menu.h"
#include "Add_New.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm5 *Form5;
//---------------------------------------------------------------------------

System::UnicodeString StrToUnicode(std::string stdString)
{
	AnsiString ansiString(stdString.c_str());
	return AnsiStringToUnicodeString(ansiString);
}

__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
	ifstream fileIn("List.txt");
	Account currentAcc;
	while (currentAcc.In(fileIn))
		{
			AccountList->Items->Add(StrToUnicode(currentAcc.Name));
		}

}
//---------------------------------------------------------------------------
void __fastcall TForm5::AddButtonClick(TObject *Sender)
{
	Form6->Show();
}
//---------------------------------------------------------------------------

