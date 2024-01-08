//---------------------------------------------------------------------------

#ifndef Add_NewH
#define Add_NewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <cstdlib>
#include <vector>
//---------------------------------------------------------------------------
class Account {
	public:
		std::string Name;
		double amount;
        int num_transactions;
		std::vector<double> transactionAmnts;
		std::vector<std::string> transactionNames;
		std::vector<std::string> transactionDates;

		Account();
		Account(std::string Name_i, double amount_i);
		void out(ofstream & fout);
		bool In(ifstream & fin);
        void transaction(std::string t_Name, double t_amount, std::string t_date);
};



class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TLabel *NameLabel;
	TLabel *AmountLabel;
	TEdit *AccountName;
	TEdit *StartAmnt;
	TButton *Add;
	TLabel *warningLabel;
	void __fastcall AddClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
