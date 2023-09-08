#include <iostream>

using namespace std;

class Player
{
public:
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account
{
public:
    // attributes
    string name{"Account"};
    double balance{0.0};

    // methods
    bool deposit(double bal)
    {
        balance += bal;
        cout << "In deposit" << endl;
        return true;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In withdraw" << endl;
        return true;
    }
};

int main()
{
    Player alice;
    alice.name = "Alice";
    alice.health = 98;
    alice.xp = 2;
    alice.talk("Hi there");
    Player bob;
    vector<Player> player_vec{alice, bob};
    Account alice_account;
    alice_account.balance = 5000.0;
    alice_account.deposit(39);
    alice_account.withdraw(209);
    cout << alice_account.balance << endl;
    Account bob_account;

    Player *enemy{nullptr};
    enemy = new Player;
    (*enemy).name = "Enemy";
    enemy->xp = 15;
    enemy->talk("I will destroy you!");
    delete enemy;
    return 0;
}