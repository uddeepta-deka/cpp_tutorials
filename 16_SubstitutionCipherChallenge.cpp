#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_msg{};
    string encrypt_msg{};
    string decrypt_msg{};
    cout << "Enter your secret message: ";
    getline(cin, input_msg);

    int val{}, new_val{};
    int key{3};
    for (auto ch : input_msg)
    {
        val = static_cast<int>(ch);
        new_val = val + key;
        encrypt_msg += static_cast<char>(new_val);
    }
    cout << "The encrypted message is: " << encrypt_msg << endl;

    for (auto ch : encrypt_msg)
    {
        val = static_cast<int>(ch);
        new_val = val - key;
        decrypt_msg += static_cast<char>(new_val);
    }
    cout << "The decrypted message is: " << decrypt_msg << endl;
    return 0;
}