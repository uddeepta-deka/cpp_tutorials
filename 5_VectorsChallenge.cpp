#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declare two empty vectors of integers named vector1 and vector2
    vector<int> vector1;
    vector<int> vector2;

    // Add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);
    // Display the elements in vector1 using the at() method as well as its size using the size() method
    cout << "vector1 is:\n";
    for (size_t i = 0; i < vector1.size(); ++i)
    {
        cout << vector1.at(i) << "\t";
    }
    cout << "\nSize of vector1: " << vector1.size() << endl;

    // Add 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);
    // Display the elements in vector2 using the at() method as well as its size using the size() method
    cout << "vector2 is:\n";
    for (size_t i = 0; i < vector2.size(); ++i)
    {
        cout << vector2.at(i) << "\t";
    }
    cout << "\nSize of vector2: " << vector2.size() << endl;

    // Declare an empty 2D vector called vector_2d
    // Add vector1 and vector2 to vector_2d using push_back
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display the elements of vector_2d using at() method
    cout << "vector_2d is: \n";
    for (size_t i = 0; i < vector_2d.size(); ++i)
    {
        for (size_t j = 0; j < vector_2d.at(i).size(); ++j)
        {
            cout << vector_2d.at(i).at(j) << "\t";
        }
        cout << "\n";
    }
    vector1.at(0) = 1000;
    cout << "After modification, vector_2d is: \n";
    for (size_t i = 0; i < vector_2d.size(); ++i)
    {
        for (size_t j = 0; j < vector_2d.at(i).size(); ++j)
        {
            cout << vector_2d.at(i).at(j) << "\t";
        }
        cout << "\n";
    }
    return 0;
}