//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class BankAccount {
private:
    char* accountNumber;
    double balance;
    static double interestRate;   // Shared among all accounts

public:
    BankAccount(char*, double);   // Parameterized constructor
    static void setInterestRate(double);  // Static function to set interest rate
    void display();                        // Display account details
    ~BankAccount();                        // Destructor
};
