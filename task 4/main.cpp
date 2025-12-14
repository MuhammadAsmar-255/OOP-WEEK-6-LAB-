//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "BankAccount.h"

int main() {
    char acc1[20] = "ACC001";
    char acc2[20] = "ACC002";

    // Create two accounts with initial balances
    BankAccount b1(acc1, 5000.0);
    BankAccount b2(acc2, 7500.0);

    // Set interest rate using static function
    BankAccount::setInterestRate(5.5);

    cout << "Account Details After Setting Interest Rate:\n";
    b1.display();
    cout << endl;
    b2.display();
    cout << endl;

    // Change interest rate again
    BankAccount::setInterestRate(6.2);
    cout << "After Changing Interest Rate:\n";
    b1.display();
    cout << endl;
    b2.display();

    return 0;
}
