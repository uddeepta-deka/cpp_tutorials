#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    // Overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

// Using initialization lists
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "Three-args constructor\n";
}
// Delegating the no-args constuctor
Player::Player()
    : Player{"None", 0, 0}{
        cout << "No-args constructor\n";
}
// Delegating the only-name constructor
Player::Player(string name_val)
    : Player{name_val, 0, 0}{
        cout << "One-arg constructor\n";
}


int main()
{
    Player empty;
    Player frank("Frank");
    Player villain("Villain", 100, 55);
    return 0;
}