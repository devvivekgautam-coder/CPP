// Define a class named BankAccount with private attributes accountNumber, balance, and ownerName.
// Encapsulate these attributes using appropriate access specifiers. Implement public member functions
// to credit, debit, and display the balance. Demonstrate encapsulation by interacting with the class 
// through its member functions.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    // Constructor
    BankAccount(string accNo, string name, double initialBalance) {
        accountNumber = accNo;
        ownerName = name;
        balance = initialBalance;
    }

    // Credit (deposit) amount
    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount credited: " << amount << endl;
        } else {
            cout << "Invalid credit amount!" << endl;
        }
    }

    // Debit (withdraw) amount
    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount debited: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Display account balance
    void displayBalance() const {
        cout << "Account Holder: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("ACC12345", "John Doe", 1000.0);

    // Interact with the object through public methods
    account.displayBalance();
    cout << "----------------------" << endl;

    account.credit(500.0);
    account.displayBalance();
    cout << "----------------------" << endl;

    account.debit(300.0);
    account.displayBalance();

    return 0;
}