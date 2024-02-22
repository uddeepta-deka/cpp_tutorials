#include <iostream>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val)
    {
        name = name_val;
    }
    // Overloaded constructors
    Player()
    {
        cout << "No args constructor called" << endl;
        name = "None";
        health = 0;
        xp = 0;
    }; // No args constructor
    Player(string name_val)
    {
        cout << "String arg constructor called" << endl;
        name = name_val;
        health = 0;
        xp = 0;
    };
    Player(string name_val, int health_val, int xp_val)
    {
        cout << "Three args constructor called" << endl;
        name = name_val;
        health = health_val;
        xp = xp_val;
    };
    void view_details()
    {
        cout << "Name: " << name << " xp: " << xp << " health: " << health << endl;
    }
    // Destructor
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    };
};

// The following will be an example of constructor initialization list
class Car
{
private:
    string name;
    string make;

public:
    void set_name(string n) { name = n; }
    void set_make(string m) { make = m; }
    void view_info() { cout << "Name: " << name << ", make: " << make << endl; }
    Car();
    Car(string name_val);
    Car(string name_val, string make_val);
    ~Car()
    {
        cout << "Destructor called for " << name << endl;
    };
};
Car::Car() : name{"None"}, make{"None"} { cout << "No args constructor called" << endl; };
Car::Car(string name_val) : name{name_val}, make{"None"} { cout << "One arg constructor called" << endl; };
Car::Car(string name_val, string make_val) : name{name_val}, make{make_val} { cout << "Two args constructor called" << endl; };


int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank{"Frank", 100, 4};
        frank.view_details();
        Player hero{"Hero"};
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);

    delete enemy;
    delete level_boss;

    {
        Car camry;
        camry.view_info();
    }
    {
        Car gallardo("Gallardo");
        gallardo.view_info();
    }
    {
        Car zen("Zen", "Maruti-Suzuki");
        zen.view_info();
    }

    return 0;
}