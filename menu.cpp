//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "menu.h"
#include "Add_New.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::AddButtonClick(TObject *Sender)
{
	Form6->Show();
}
//---------------------------------------------------------------------------
