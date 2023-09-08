#include <iostream>
using namespace std;

int main()
{
    bool quit{false};
    vector<int> lst{};
    while (!quit)
    {
        cout << "\nPress any of the following keys:" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your choice: ";
        char choice{'P'};
        cin >> choice;
        int num{};
        switch (choice)
        {
        case ('P'):
        case ('p'):
            if (lst.size() != 0)
            {
                cout << "[";
                for (size_t i = 0; i < lst.size(); ++i)
                    cout << lst.at(i) << " ";
                cout << "]";
                cout << endl;
            }
            else
                cout << "[] - The list is empty" << endl;

            break;

        case ('A'):
        case ('a'):

            cout << "Enter a number: ";
            cin >> num;
            lst.push_back(num);
            cout << num << " has been added." << endl;
            break;

        case ('M'):
        case ('m'):
            if (lst.size() == 0)
                cout << "Unable to calculate the mean - no data. " << endl;
            else
            {
                int total{};
                for (size_t i = 0; i < lst.size(); ++i)
                    total += lst.at(i);
                cout << "Mean of the elements: " << static_cast<double>(total) / lst.size() << endl;
            }
            break;

        case ('S'):
        case ('s'):
            if (lst.size() == 0)
                cout << "Unable to find the smallest number - no data. " << endl;
            else
            {
                num = lst.at(0);
                for (auto item : lst)
                    if (item < num)
                        num = item;
                cout << "The smallest number in the list is: " << num << endl;
            }
            break;

        case ('L'):
        case ('l'):
            if (lst.size() == 0)
                cout << "Unable to find the largest number - no data. " << endl;
            else
            {
                num = lst.at(0);
                for (auto item : lst)
                    if (item > num)
                        num = item;
                cout << "The largest number in the list is: " << num << endl;
            }
            break;

        case ('Q'):
        case ('q'):
            cout << "GoodBye!!!" << endl;
            quit = true;
            break;

        default:
            cout << "Unknown selection, please try again!" << endl;
        }
    }
    return 0;
}