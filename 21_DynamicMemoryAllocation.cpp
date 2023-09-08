#include <iostream>
using namespace std;

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int; // Allocate memory from Heap or free storage
    cout << int_ptr << endl;
    delete int_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};
    cout << "How many temps? ";
    cin >> size;
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    cout << *temp_ptr << endl;
    delete[] temp_ptr;
    cout << temp_ptr << endl;
    return 0;
}