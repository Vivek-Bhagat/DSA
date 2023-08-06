#include <iostream>
using namespace std;

int *insertElement(int array[], int n, int num, int loc){
    

    // inserting the element in the array
    int i;
    for (i = n; i >= loc; i--)
        array[i] = array[i - 1];
    array[i] = num;
    // displaying the new array
    cout << "the new array is :";
    for (i = 0; i < (n + 1); i++)
        cout << array[i] << "";

    return array;
}

int main()
{
    int choice;
     int exit = false;

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
            int loc, num;
            cout << "Enter the location and the array:" << endl;
            cin >> loc >> num;
            // inserting the element in the array
            insertElement(array, n, num, loc);

            break;
        case 2:

            // int n, array[10], num,i,j;
            // cout << "Enter the size of the array:";
            // cin >> n;
            cout << "Enter the Number to be deleted:";
            // cin >> num;
            // int found = 0;
            // for (i = 0; i < n;i++){
            //     if(array[i]==num){
            //         for (j = i; j < n - 1;j++){
            //             array[j] = array[j + 1];
            //         }
            //         // found++;
            //         break;
            //     }
            // }
            // if(found==0){
            //     cout << "Element not found" << endl;
            // }
            // else{
            //     cout << "Element is deleted Successfully" << endl;
            //     cout << "New array is:";
            //     for (i = 0; i < (n - 1); i++){
            //         cout << array[i];
            //     }
            // }
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