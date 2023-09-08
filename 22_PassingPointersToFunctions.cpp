#include <iostream>

using namespace std;
// Pass by reference with pointers

void double_data(int *int_ptr);
void swap(int *a, int *b);

int main()
{
    int var1{3};
    int var2{5};
    int *int_ptr{&var1};
    int *int_ptr2{&var2};
    cout << "Var1: " << var1 << endl;
    cout << "Var2: " << var2 << endl;
    double_data(int_ptr);
    cout << "Value in var1 after doubling: " << var1 << endl;
    double_data(&var1);
    cout << "Value in var1 after doubling again: " << var1 << endl;
    swap(int_ptr, int_ptr2);
    cout << "Value in var1 after swapping: " << var1 << endl;
    cout << "Value in var2 after swapping: " << var2 << endl;
    return 0;
}

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}