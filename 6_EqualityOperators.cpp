#include <iostream>
using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};

    cout << boolalpha; // will display true/false instead of 1/0 for booleans
    // cout << "Enter two integers separated by a space: " << endl;
    // cin >> num1 >> num2;
    // equal_result = (num1 == num2);
    // not_equal_result = (num1 != num2);
    // cout << "Comparison result (equals): " << equal_result << endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

    // char char1{}, char2{};
    // cout << "Enter two characters separated by a space: " << endl;
    // cin >> char1 >> char2;
    // equal_result = (char1 == char2);
    // not_equal_result = (char1 != char2);
    // cout << "Comparison result (equals): " << equal_result << endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

    double doub{};
    cout << "Enter a double and an integer separated by a space: ";
    cin >> doub >> num1;
    equal_result = (doub == num1);
    not_equal_result = (doub != num1);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
}