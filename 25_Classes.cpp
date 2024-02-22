#include <iostream>
#include "Account.h"

using namespace std;

class Player
{
private:
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};

public:
    // methods
    // Implementing member method inside the class
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    void set_name(string n);
    void view_health_xp() { cout << name << " has " << health << " health and " << xp << " xp remaining." << endl; }
    bool is_dead();
};

// Implementing member method outside the class
void Player::set_name(string n) { name = n; }
void Account::set_balance(double bal) { balance = bal; }
double Account::get_balance(){ return balance; }

int main()
{
    Player alice;
    // alice.name = "Alice";
    alice.set_name("Alice");
    alice.view_health_xp();
    alice.talk("Hi there");
    Player bob;
    vector<Player> player_vec{alice, bob};
    Account alice_account;
    alice_account.set_balance(5000.0);
    alice_account.deposit(39);
    alice_account.withdraw(209);
    cout << alice_account.get_balance() << endl;
    Account bob_account;

    Player *enemy{nullptr};
    enemy = new Player;
    (*enemy).set_name("Enemy");
    enemy->talk("I will destroy you!");
    delete enemy;
    return 0;
}