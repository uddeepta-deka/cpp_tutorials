#include <iostream>
using namespace std;

class Player{
private:
    static int num_players; // Belongs to the class and not the object
    string name;
    int health;
    int xp;
public:
    static int get_num_players();
    string get_name() const {return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    // Constructor
    Player(string name_val="None", int health_val=0, int xp_val=0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
};

int Player::num_players{0};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        ++num_players;
        // cout << "Three-args constructor for " + name << endl;
}

Player::Player(const Player &source)
    : name{source.name}, health{source.health}, xp{source.xp}{
        ++num_players;
        cout << "Copy constructor - made copy of:" << source.name << endl;
}

Player::~Player(){
    cout << "Destructor called " << endl;
    --num_players;
}
int Player::get_num_players(){
    return num_players;
}


void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

void display_active_players(){
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main(){
    display_active_players();
    const Player my_obj{"XXXX", 100, 50};
    {
        Player new_obj(my_obj);
        display_player(new_obj);
        display_active_players();
    }
    display_active_players();
    cout << my_obj.get_name() << endl;
    
    return 0;
}