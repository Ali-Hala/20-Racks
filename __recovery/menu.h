//---------------------------------------------------------------------------

#ifndef menuH
#define menuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
System::UnicodeString StrToUnicode(std::string stdString);
void loadAccounts(TListBox *List);
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TLabel *AccountLabel;
	TListBox *AccountList;
	TButton *AddButton;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall ClickAccount(TCustomListBox * const Sender, TListBoxItem * const Item);


private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
