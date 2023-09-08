#include <iostream>
/*
-----------------------ARRAYS----------------------------
- Arrays are fixed in size
- Elements are of the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index
- First element is at index 0
- Declaring and initializing:
    element_type array_name [constant_number_of_elements]{init_list}
- Declaring multidimensional arrays:
    element_type array_name [dim1_size][dim2_size][...]...
-----------------------VECTORS----------------------------
- Vectors are dynamic array
- Vectors are available in the C++ Standard Template Library
- An array that can grow or shrink in size at execution time
- Can provide bounds checking
- Declaring vectors:
    #include <vector>
    using namespace std;
    vector <data_type> name_of_vector (size_of_vector);
*/

#include <vector>
using namespace std;

int main()
{
    // Different ways of initializing arrays
    int array1[5]{0}; // 5 elements with all initialized to zero
    const int size{9};
    int array2[size]{1, 4}; // 9 elements with first two elements = 1, 4 and remaining initialized to 0
    int array3[]{1, 2, 3, 4, 5};
    char vowels[5]{'a', 'e', 'i', 'o', 'u'};
    // Printing out
    cout << "The first vowel is:" << vowels[0] << endl;
    cout << "The last vowel is:" << vowels[4] << endl;

    // Multi dimensional arrays
    const int rows{3};
    const int cols{4};
    int movie_rating[rows][cols]{0};

    // Vectors
    vector<char> Vowels{'a', 'e', 'i', 'o', 'u'};
    vector<int> test_scores{100, 98, 97, 96, 91};
    vector<double> hi_temp(365, 80.0); // 365 elements all initialized to 80.0
    // Printing without bound check:
    cout << "The fourth temp is: " << hi_temp[3] << endl;
    // Printing with bound check:
    cout << "The second test score is: " << test_scores.at(1) << endl;

    // Vectors push_back
    cout << "Initial size of test_scores vector: " << test_scores.size() << endl;
    test_scores.push_back(80); // add an element to the end of the vector
    test_scores.push_back(90);
    cout << "New size of test_scores vector: " << test_scores.size() << endl;

    // updating
    cout << "\nEnter three updated test scores:\n";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];

    cout << "\nThe updated test scores are:\n";
    for (size_t i = 0; i < test_scores.size(); ++i)
    {
        cout << test_scores.at(i) << endl;
    }

    // Example of a 2D vector
    vector<vector<int>> stock_trade
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    cout << "Here are the stock trades on day 1: \n"
         << stock_trade[0][0] << "\t" << stock_trade[0][1] << "\t" << stock_trade[0][2] << endl;
    cout << "Here are the stock trades on day 2: \n"
         << stock_trade.at(1).at(0) << "\t" << stock_trade.at(1).at(1) << "\t" << stock_trade.at(1).at(2) << endl;

    vector<vector<char>> alphabets 
    {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };

    cout<< "\nHere is the vector of alphabets:\n";
    for (size_t i=0; i<alphabets.size(); ++i){
        for (size_t j=0; j<alphabets.at(i).size(); ++j){
            cout<< alphabets.at(i).at(j)<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}