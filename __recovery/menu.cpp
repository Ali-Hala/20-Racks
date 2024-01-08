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
	return System::UnicodeString(ansiString);
}

void loadAccounts(TListBox *List)
{
	ifstream fileIn("List.txt");
	if (!fileIn.is_open())
	{
		ShowMessage("Failed to open file 'List.txt'");
		return;
	}
	Account currentAcc;
	while (currentAcc.In(fileIn))
		{
			List->Items->Add(StrToUnicode(currentAcc.Name));
		}
	fileIn.close();
}

__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
	loadAccounts(AccountList);
}

//---------------------------------------------------------------------------
void __fastcall TForm5::AddButtonClick(TObject *Sender)
{
	Form6->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm5::ClickAccount(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	Form7->Show();
}
//---------------------------------------------------------------------------

