#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string part1{"C++"};
    // string part2{" is a powerful "};
    // string sentence;
    // sentence = part1 + part2 + "language"; // Here "language" is a c-style string
    // cout << sentence << endl;

    // string s1{"Uddeepta"};
    // for (int c : s1)
    //     cout << c << endl;

    // string s0;
    // string s1{"Apple"};
    // string s2{"Banana"};
    // string s3{"Kiwi"};
    // string s4{"apple"};
    // string s5{s1};
    // string s6{s1, 0, 3};
    // string s7(10, 'X');

    // cout << "s0 is initialized to : " << s0 << endl; // No garbage
    // cout << "s1 is initialized to : " << s1 << endl; // No garbage
    // cout << "s2 is initialized to : " << s2 << endl; // No garbage
    // cout << "s3 is initialized to : " << s3 << endl; // No garbage
    // cout << "s4 is initialized to : " << s4 << endl; // No garbage
    // cout << "s5 is initialized to : " << s5 << endl; // No garbage
    // cout << "s6 is initialized to : " << s6 << endl; // No garbage
    // cout << "s7 is initialized to : " << s7 << endl; // No garbage
    // cout << "Length of s7 is: " << s7.length() << endl;

    // s1 = "Watermelon";
    // cout << "s1 is now: " << s1 << endl;
    // s5[2] = 'f';
    // cout << "s5 is now: " << s5 << endl;
    // s4.at(0) = 'm';
    // s4.at(1) = 'a';
    // cout << "s4 is now: " << s4 << endl;
    // s3 = s1 + " and " + s2 + " juice.";
    // cout << "s3 is : " << s3 << endl;

    // string s8{"This is a test"};
    // cout << s8.substr(0, 4) << endl;
    // cout << s8.substr(5, 2) << endl;
    // cout << s8.substr(10, 4) << endl;
    // cout << s8.find('a') << endl;
    string full_name{};
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is : " << full_name << endl;
    return 0;
}