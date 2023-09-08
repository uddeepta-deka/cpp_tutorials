// Primitive C++ types
// Global variables are automatically initialized to 0
// It's preferable to do a list type initialization

#include <iostream>
// #include <string>
#include <climits>
using namespace std;

// int main()
// {
//     cout << "Enter the width of the room: ";
//     size_t room_width{0};
//     cin >> room_width;

//     cout << "Enter the length of the room: ";
//     size_t room_length{0};
//     cin >> room_length;

//     cout << "The area of the room is: " << room_length * room_width << "\n";
//     return 0;
// }

// int main(){
//     include string
//     string name;
//     cout<< "Type your name: ";
//     cin >> name;
//     cout << "Name: " << name <<"\n";
//     return 0;
// }

int main()
{
    cout << "===================================" << endl;
    cout << "Primitive data types information" << endl;
    cout << "===================================" << endl;
    
    /* Character type */
    char middle_initial{'J'};
    cout << "My middle initial is " << middle_initial << endl;

    /* Integer types*/
    unsigned short int exam_score{55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented(65);
    cout << "There were " << countries_represented << " countries represented in my meeting." << endl;

    long people_in_bangalore{13'000'000};
    cout << "There are about " << people_in_bangalore << " people in Bangalore." << endl;

    long long distance_to_alpha_centauri{9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers." << endl;

    /* Floating point types */
    float car_payment{401.23};
    cout << "My car payment is: " << car_payment << endl;

    double pi{3.14159};
    cout << "Pi is " << pi << endl;

    long double avogadro_const(6.022e23);
    cout << "Avogadro number is " << avogadro_const << endl;

    /*Boolean type*/
    bool game_over{false};
    cout << "The value of game_over is " << game_over << endl;

    /* Overflow example */
    // short int value1{20000};
    // short int value2{2999};
    // short int product{value1 * value2};

    // cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;

    /* sizeof*/
    // include climits or cfloat
    cout << "===================================" << endl;
    cout << "sizeof information" << endl;
    cout << "===================================" << endl;
    
    cout << "char: " << sizeof(char) << " bytes. " << endl;
    cout << "int: " << sizeof(int) << " bytes. " << endl;
    cout << "long: " << sizeof(long) << " bytes. " << endl;
    cout << "double: " << sizeof(double) << " bytes. " << endl;
    cout << "boolean: " << sizeof(game_over) << " bytes. " << endl;
    /* const */
    cout << "===================================" << endl;
    cout << "Declare Constants" << endl;
    cout << "===================================" << endl;
    
    const double price_per_room{400.2};
    const int estimate_expiry{30};
    cout << "The price per room is: " << price_per_room << " INR." << endl;
    cout << "Valid for: " << estimate_expiry << " days." << endl;

    return 0;
}