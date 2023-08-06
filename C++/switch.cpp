#include <iostream>
using namespace std;

int main()
{
    int choice;
    bool exit = false;

    while (!exit)
    {
        cout << "\npress 1 to insert the element" << endl;
        cout << "press 2 to delete the element" << endl;
        cout << "press 3 to search the element in the array" << endl;
        cout << "press 4 to print the fibonnaci series" << endl;
        cout << "press 0 to exit the program" << endl;
        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            int array[10];
            cout << "Enter the size of the array:" << endl;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> array[i];
            }
            // inserting the element in the array
            int loc, num;
            cout << "Enter the location and the array:" << endl;
            cin >> loc >> num;

            // inserting the element in the array
            int i;
            for (i = n; i >= loc; i--)
                array[i] = array[i - 1];
            array[i] = num;
            // displaying the new array
            cout << "the new array is :";
            for (i = 0; i < (n + 1); i++)
                cout << array[i] << "";
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