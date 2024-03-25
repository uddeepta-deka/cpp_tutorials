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
    Account(const Account &a){// Copy constructor
        balance = a.balance;
        std::cout << "Copy constructor called " << std::endl;
    } 
    Account(double bal):balance{bal}{std::cout<<"Constructor called with bal " << balance << std::endl;}
    Account():Account(0.0){}
    ~Account(){std::cout << "Destructor called with bal "<< balance << std::endl;}
    double get_balance(){return balance;};
};

#endif