#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    void show_details(){cout << "Name: " << name << ", XP: " << xp << ", health: "<< health << endl;}
    Player(string name_val="None", int health_val=0, int xp_val=0);
    ~Player(){cout << "Destructor called" << endl;};
};
    
// Using initialization lists
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "Three-args constructor\n";
}

int main()
{
    Player empty;
    empty.show_details();
    Player frank("Frank");
    frank.show_details();
    Player hero("Hero", 100);
    hero.show_details();
    Player villain("Villain", 100, 5);
    Player *villain_ptr{&villain};
    (*villain_ptr).show_details();
    return 0;
}