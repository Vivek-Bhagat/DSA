#include <iostream>
using namespace std;

int main()
{
    int choice;
    bool exit = false;

    while (!exit)
    {
        cout << "press 1 to print the message" << endl;
        cout << "press 2 to print the message" << endl;
        cout << "press 0 to exit the program" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "hello world" << endl;
            break;
        case 2:
            cout << "Went to the down side" << endl;
            break;
        case 0:
            exit = true;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    }
    return 0;
}