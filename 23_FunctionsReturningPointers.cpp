#include <iostream>

using namespace std;

int *largest_int(int *a, int *b);
int *create_array(size_t size, int init_val=0);

int main()
{
    int a{1000};
    int b{200};
    int *largest_ptr{nullptr};
    largest_ptr = largest_int(&a, &b);
    cout << "Larger value: " << *largest_ptr << endl;
    int *my_array;
    int size{10};
    int init_value{20};
    my_array = create_array(size, init_value);
    cout << "\nPrinting the array: " << endl;
    for (size_t i=0; i<size; ++i)
        cout << *(my_array + i) + i << "\t";
    cout << "\n";
    delete [] my_array;
    return 0;
}

int *largest_int(int *a, int *b){
    if (*a > *b)
        return a;
    else
        return b;
}

int *create_array(size_t size, int init_val){
    int *new_storage{nullptr};
    new_storage = new int[size]; // Returning dynamically allocated memory
    for (size_t i{0}; i<size ; ++i){
        *(new_storage + i) = init_val;
    }
    return new_storage;
}