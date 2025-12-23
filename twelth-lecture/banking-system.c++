#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    protected:
        int accountNumber;
        string accountHolderName;
        double balance;

    public:
        BankAccount(int accountNumber, string accountHolderName, double balance) {
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;
            this->balance = balance;
        }

        void Deposit(double amount) {
            if (amount > 0) {
                balance += amount;
            }
            cout << "Amount Added Successfully." << endl;
        }

        void Withdraw(double amount) {
            if (amount < balance) {
                balance = balance - amount;
            }
            else {
                cout << "Not Enough Balance." << endl;
            }
        }   

        double GetBalance() {
            return balance;
        }

        void DisplayAccountInfo() {
            cout << " ************** Printing Banking System Data ************** " << endl;
            cout << "Account Number      : " << this->accountNumber;
            cout << "Account Holder Name : " << this->accountHolderName;
            cout << "Balance             : " << this->balance;
        }
        
};

class SavingsAccount :public BankAccount {
    protected:
        float interestRate;
    
    public:
        void setSavingData(int accNo, string name, double bal, double rate) {
            BankAccount(accountNumber, accountHolderName, balance);
            interestRate = rate;
        }

        void getSavingData() {
            DisplayAccountInfo();
        }

        void calculateInterest() {
            double interest =  balance * interestRate / 100;
            balance += interest;
            cout << "Interest Added Successfuly....." << interest << endl;
        }
};

class CurrentAccount :public BankAccount {
    protected:
        double overdraftLimit;

    public:
        double checkOverdraft() {
            if (balance <= 20000) {
                cout << "Over Draft Amount : " << endl;
            }
        }
};

class FixedDepositAccount :public BankAccount {
    protected:
        int term;

    public:
        float calculateInterest() {
            return balance * 7.6;
        }
};


int main () {
    vector<BankAccount*> account;
    int choice;

    cout << "Welcome To Banking System Menu." << endl;
    cout << "Press 1 To Saving Account." << endl;
    cout << "Press 2 To Current Account." << endl;
    cout << "Press 3 To Fix Deposit Account." << endl;
    cout << "Press 4 To Deposit Amount." << endl;
    cout << "Press 5 To Withdraw Amount." << endl;
    cout << "Press 6 To Calculate Interest." << endl;
    cout << "Press 7 To Display All Account." << endl;
    cout << "Press 0 To Exit." << endl;

    cout << "Enter Your Choice.";
    cin >> choice;

    int accNo;
    string name;
    double bal, amt;

    switch (choice) {
        case 1: {
            double rate;
            cout << "Enter Account Number, Name, Balance, Interest Rate : ";
            cin >> accNo >> name >> bal >> rate;
            account.push_back(new SavingsAccount(accNo, name, bal, rate));
            break;
        }

        case 2: {
            break;
        }

        case 3: {
            break;
        }

        case 4: {
            break;
        }

        case 5: {
            break;
        }

        case 6: {
            break;
        }

        case 7: {
            for (int i = 0; i < account.size(); i++) {
                account[i]->DisplayAccountInfo();
            }
            break;  
        }

        case 0: {
            cout << "Thank You!!!" << endl;
            break;
        }

        default:
            cout << "Enter A Valid Choice." << endl;
    }
    return 0;
}