#include <iostream>
using namespace std;

int main()
{
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int balance{0}, change_amount{0}, dollars{0}, quarters{0}, dimes{0}, nickels{0};

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << balance << endl;

    return 0;
}