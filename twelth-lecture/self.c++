#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    protected:
        double accountNumber;
        string accountHolderName;
        double balance;

    public:
        BankAccount(double accountNumber, string accountHolderName, double balance) {
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;
            this->balance = balance;
        }

        virtual ~BankAccount() {

        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Amount Added Successfully." << endl;
            }
            else {
                cout << "Amount Can't Deposit." << endl;
            }
        }

        virtual void withdraw(double amount) {
            if (amount <= balance && amount > 0) {
                balance -= amount;
                cout << "Amount Credited Successfully." << endl;
            }
            else {
                cout << "No Enough Balance To Credit." << endl;
            }
        }

        virtual void displayAccountInfo() {
            cout << "Account Number      : " << this->accountNumber << endl;
            cout << "Account Holder Name : " << this->accountHolderName << endl;
            cout << "Balance             : " << this->balance << endl;
        }

        virtual void calculateInterest() {
            // No Default
        }

        double getBalance() {
            return balance;
        }
};

class SavingAccount :public BankAccount {
    protected:
        float interestRate;

    public:
        SavingAccount(double accoNo, string name, double bal, float rate)
            : BankAccount(accoNo, name, bal) {
            this->interestRate = rate;
            
        }

        void calculateInterest() {
            double interest = balance * interestRate / 100;
            balance += interest;
            cout << "Interest Added." << interest << endl;
        }

        void displayAccountInfo() {
            cout << " * * * * * Saving Account * * * * * " << endl;
            BankAccount::displayAccountInfo();
            cout << "Interest Rate : " << interestRate << " % " << endl;
        }
};

class CheckingAccount :public BankAccount {
    protected:
        double overdraftLimit;

    public:
        CheckingAccount(double accoNo, string name, double bal, double limit)
            : BankAccount(accoNo, name, bal) {
            this->overdraftLimit = limit;
        }

        void withdraw(double amount) override {
            if(amount > 0 && amount <= balance + overdraftLimit) {
                balance -= amount;
                cout << "Amount Withdrawn." << endl;
            }
            else {
                cout << "Overdraft limit exceeded." << endl;
            }
        }

        void displayAccountInfo() override {
            cout << " * * * * * Checking Account * * * * * " << endl;
            BankAccount::displayAccountInfo();
            cout << "Over Draft Limit : " << overdraftLimit << endl;
        }
};

class FixedDepositAccount :public BankAccount {
    protected:
        int term;

    public:
        FixedDepositAccount(double accoNo, string name, double bal, int t)
            : BankAccount(accoNo, name, bal) {
            this->term = t;
        }

        void calculateInterest() override {
            double rate = 6.5;
            double interest = (balance * rate * term) / (100 * 12);
            balance += interest;
            cout << "Fix Deposite Interest Added." << endl;
        }

        void displayAccountInfo() override {
            cout << " * * * * * Fix Deposite Account * * * * * " << endl;
            BankAccount::displayAccountInfo();
            cout << "Term (Month): " << term << endl;
        }
};

int main() {
    vector<BankAccount*> account;
    int choice;

    do {
        
    cout << endl << " ======= Welcome To Banking System =======" << endl;
    cout << "Press 1 To Open A New Saving Account." << endl;
    cout << "Press 2 To Open A New Checking Account." << endl;
    cout << "Press 3 To Open A New Fix Deposite Account." << endl;
    cout << "Press 4 To Deposite Amount." << endl;
    cout << "Press 5 To Withdraw Amount." << endl;
    cout << "Press 6 To Calculate Interest." << endl;
    cout << "Press 7 To Display Account Data." << endl;
    cout << "Press 0 To Exit." << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;

    double accoNo, balance, amount;
    string name;

    switch (choice) {
        cin.ignore();

        case 1: {
            float rate;
            cout << "Enter Account Number, Name, Balance, Rate : ";
            cin >> accoNo >> name >> balance >> rate;

            account.push_back(new SavingAccount(accoNo, name, balance, rate));
            cout << endl << "Saving Account Open Successfully." << endl;
            break;
        }

        case 2: {
            double limit;
            cout << "Enter Account Number, Name, Balance, Limit : ";
            cin >> accoNo >> name >> balance >> limit;

            account.push_back(new CheckingAccount(accoNo, name, balance, limit));

            cout << endl << "Checking Account Open Successfully." << endl;
            break;
        }

        case 3: {
            int term;
            cout << "Enter Account Number, Name, Balance, Term : ";
            cin >> accoNo >> name >> balance >> term;

            account.push_back(new FixedDepositAccount(accoNo, name, balance, term));

            cout << endl << "Fix Deposite Account Open Successfully." << endl;
            break;
        }

        case 4: {
            int idx;
            cout << "Enter Account Index And Amount : ";
            cin >> idx >> amount;

            if (idx >= 0 && idx < account.size()) {
                account[idx]->deposit(amount);
            }
            break;
        }

        case 5: {
            int idx;
            cout << "Enter Account Index And Amount : ";
            cin >> idx >> amount;

            if (idx >= 0 && idx < account.size()) {
                account[idx]->withdraw(amount);
            }
            break;
        }

        case 6: {
            int idx;
            cout << "Enter Index Number : ";
            cin >> idx;

            if (idx >= 0 && idx < account.size()) {
                account[idx]->calculateInterest();
            }
            break;
        }

        case 7: {
            for (int i = 0; i < account.size(); i++) {
                cout << endl << "Index Number : " << i << endl;
                account[i]->displayAccountInfo();
            }
            break;
        }

        case 0: {
            cout << "Thank You." << endl;
            break;
        }
    }

    } while (choice != 0);

    for (auto acc : account) {
        delete acc;
    }
    
    return 0;
}