//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "BankAccount.h"

// Initialize static member
double BankAccount::interestRate = 0.0;

// Parameterized constructor
BankAccount::BankAccount(char* accNum, double bal) {
    int len = 0;
    while (accNum[len] != '\0') {
        len++;
    }
    accountNumber = new char[len + 1];
    for (int i = 0; i < len; i++) {
        accountNumber[i] = accNum[i];
    }
    accountNumber[len] = '\0';

    balance = bal;
}

// Static function to set interest rate
void BankAccount::setInterestRate(double rate) {
    interestRate = rate;
}

// Display function
void BankAccount::display() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
    cout << "Interest Rate: " << interestRate << "%" << endl;
}

// Destructor
BankAccount::~BankAccount() {
    delete[] accountNumber;
}
