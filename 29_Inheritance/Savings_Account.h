#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include <iostream>
#include "Bank_Account.h"
using namespace std;

class Savings_Account: public Bank_Account{
private:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
};

Savings_Account::Savings_Account(double balance, double int_rate)
    : Bank_Account(balance), int_rate{int_rate} {
    }

Savings_Account::Savings_Account() 
    : Savings_Account{0.0, 0.0} {
    }
    
void Savings_Account::deposit(double amount) {
    amount = amount + (amount * int_rate/100);
    Bank_Account::deposit(amount);
}

#endif