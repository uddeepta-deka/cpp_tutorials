#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num{};

    // The following functions are defined within the `cmath` library
    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The square root of " << num << " is: " << sqrt(abs(num)) << endl;
    cout << "The cube root of " << num << " is: " << cbrt(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    double power{};
    cout << "\nEnter a power to raise: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    return 0;
}