// Explicit type-casting - static_cast <type>
#include <iostream>
using namespace std;

int main()
{
    int total_amount{100}, total_number{8};
    double average{0.0};

    average = total_amount / total_number;
    cout << average << endl;
    average = static_cast<double>(total_amount) / total_number;

    cout << average << endl;
}
