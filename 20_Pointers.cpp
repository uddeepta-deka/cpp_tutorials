#include <iostream>

/*
A pointer is a variable whose value is an address

We can allocate memory dynamically on the heap or free store.
This memory doesn't even have a variable name.
The only way to get to it is via a pointer.
*/

using namespace std;

int main()
{
    int num{10};
    cout << "Value of num is: " << num << endl;
    cout << "Address of num is: " << &num << endl;

    int *p;                                   // Declaring pointer variables
    cout << "\nValue of p is: " << p << endl; // garbage
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p << endl;
    p = nullptr;
    cout << "Value of p is: " << p << endl;

    double *double_ptr{nullptr}; // Initializing pointer variables
    char *char_ptr{nullptr};

    cout << "\nValue of double_ptr is: " << double_ptr << endl;
    cout << "Size of double_ptr is: " << sizeof(double_ptr) << endl;
    cout << "The address of double_ptr is: " << &double_ptr << endl;

    double temp{100.324};
    double_ptr = &temp;
    cout << "\nValue of temp: " << temp << endl;
    cout << "Value stored in the location pointed by double_ptr is: " << *double_ptr << endl;
    cout << "Address of temp is: " << &temp << endl;
    cout << "Value of double_ptr is: " << double_ptr << endl;

    string name{"Uddeepta"};
    string *string_ptr{&name};
    cout << "\nName is: " << *string_ptr << endl;
    name = "Deka";
    cout << "Changed name is: " << *string_ptr << endl;
    *string_ptr = "Uddeepta Deka";
    cout << "Changed again to: " << name << endl;

    vector<string> *vec_ptr{nullptr};
    vector<string> stooges{"Amar", "Akbar", "Anthony"};
    vec_ptr = &stooges;
    cout << "\nFirst stooge: " << (*vec_ptr).at(0) << endl;
    stooges.push_back("Mariam");
    cout << "Stooges: ";
    for (auto stooge : *vec_ptr)
        cout << stooge << " ";
    cout << endl;

    // Relationship between arrays and pointers
    int scores[]{100, 99, 95};
    int *score_ptr{scores};
    cout << "\nValue of score pointer: " << score_ptr << endl;

    cout << "Array subscript notation-----------------" << endl;
    cout << scores[0] << endl
         << scores[1] << endl
         << scores[2] << endl;
    cout << "Pointer subscript notation---------------" << endl;
    cout << score_ptr[0] << endl
         << score_ptr[1] << endl
         << score_ptr[2] << endl;
    cout << "Pointer offset notation -----------------" << endl;
    cout << *score_ptr << endl
         << *(score_ptr + 1) << endl
         << *(score_ptr + 2) << endl;
    cout << "Array offset notation -------------------" << endl;
    cout << *scores << endl
         << *(scores + 1) << endl
         << *(scores + 2) << endl;
    return 0;
}
