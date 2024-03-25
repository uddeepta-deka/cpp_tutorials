#include <iostream>
#include "Savings_Account.h"

using namespace std;

int main()
{
    Savings_Account New_Account{4000, 5};
    New_Account.deposit(200);
    cout << "Balance " << New_Account.get_balance() << endl;

    Savings_Account *acc = new Savings_Account{4000, 5};
    acc->withdraw(2000);
    cout << "Balance " << acc->get_balance() << endl;
    delete acc;
    return 0;
}