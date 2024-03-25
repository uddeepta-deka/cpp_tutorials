#ifndef _BANK_ACCOUNT_H_
#define _BANK_ACCOUNT_H_
#include <iostream>
// using namespace std;

class Bank_Account{
private:
    double balance;
public:
    Bank_Account();
    Bank_Account(double balance);
    void deposit(double amount); 
    void withdraw(double amount);
    double get_balance();
};

Bank_Account::Bank_Account():Bank_Account(0.0){}

Bank_Account::Bank_Account(double balance):balance(balance){}

void Bank_Account::deposit(double amount){
    balance += amount;
}

void Bank_Account::withdraw(double amount){
    if (balance-amount >= 0)
        balance-=amount;
    else    
        std::cout << "Insufficient funds" << std::endl;
}

double Bank_Account::get_balance(){
    return balance;
}

#endif