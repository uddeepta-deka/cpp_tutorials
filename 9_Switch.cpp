#include <iostream>
using namespace std;

int main()
{
    enum Color
    {
        red,
        green,
        blue
    };
    Color screen_color{green};
    
    switch (screen_color)
    {
    case red:
        cout << "Red\n";
        break;
    case green:
        cout << "Green\n";
        break;
    case blue:
        cout << "Blue\n";
        break;
    default:
        cout << "Should never execute\n";
    }
    return 0;
}