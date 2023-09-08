#include <iostream>

using namespace std;

void print(const int *const arr, const size_t size);
int *apply_all(const int *const arr1, const size_t size1, const int *const arr2, const size_t size2);

int main()
{
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};
    const size_t size1 = sizeof(array1) / sizeof(array1[0]);
    const size_t size2 = sizeof(array2) / sizeof(array2[0]);

    cout << "Array 1:";
    print(array1, size1);

    cout << "Array 2:";
    print(array2, size2);

    int *int_ptr{nullptr};
    int_ptr = apply_all(array1, size1, array2, size2);
    constexpr size_t res_size{size1 * size2};
    cout << "Result:";
    print(int_ptr, res_size);

    delete [] int_ptr;
    cout << endl;
    return 0;
}

void print(const int *const arr, const size_t size)
{
    cout << "[";
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int *apply_all(const int *const arr1, const size_t size1, const int *const arr2, const size_t size2)
{
    int *new_arr{nullptr};
    size_t new_size{size1 * size2};
    new_arr = new int[new_size];
    int pos{0};
    for (size_t i{0}; i < size1; ++i)
    {
        for (size_t j{0}; j < size2; ++j)
        {
            new_arr[pos] = arr1[i] * arr2[j];
            ++pos;
        }
    }
    return new_arr;
}