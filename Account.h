// include guard
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
using namespace std;

class Account
{
private:
    double balance{0.0};

public:
    // attributes
    string name{"Account"};

    // methods
    bool deposit(double amount)
    {
        balance += amount;
        cout << "In deposit" << endl;
        return true;
    }
    bool withdraw(double amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
            cout << "In withdraw" << endl;
            return true;
        }
        else
        {
            cout << "Withdraw not allowed. " << endl;
            return false;
        }
    }
    void set_balance(double bal);
    double get_balance();
};

#endif