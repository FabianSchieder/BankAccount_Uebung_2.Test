#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
    BankAccount Fabian("Fabian", 01);
    BankAccount Max("Max", 02);

    Fabian.deposit(100.0f);
    Fabian.withdraw(50.0f);

    cout << "Betrag: " << Fabian.calcBalance() << " Euro" << endl;

    Fabian.transfer(25.0f, Max);

    cout << "Max Betrag: " << Max.calcBalance() << " Euro" << endl;
    cout << "Fabian Betrag: " << Max.calcBalance() << " Euro" << endl;

    return 0;
}