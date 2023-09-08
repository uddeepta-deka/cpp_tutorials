#include <iostream>
#include <cstdlib> // Required for rand()
#include <ctime>   // Required for time()
// Note that a better library to generate random numbers
// is the `random` library
using namespace std;

int main()
{
    int random_number{};
    size_t count{10};
    int min{1}; // lower bound (inclusive)
    int max{6}; // upper bound (inclusive)
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i = 1; i <= count; ++i)
    {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    cout << endl;
    return 0;
}