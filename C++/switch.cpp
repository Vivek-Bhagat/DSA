#include <iostream>
using namespace std;

int *insertElement(int array[], int n, int num, int loc)
{

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

int *deleteElement(int array1[], int size, int delNum)
{
    int found = 0;
    int i, j;
    for (i = 0; i < size; i++)
    {
        if (array1[i] == delNum)
        {
            for (j = i; j < size - 1; j++)
            {
                array1[j] = array1[j + 1];
            }
            found++;
            break;
        }
    }
    if (found == 0)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element is deleted Successfully" << endl;
        cout << "New array is:";
        for (i = 0; i < (size - 1); i++)
        {
            cout << array1[i];
        }
    }
    return array1;
}

void *searchingElement(int array2[], int n1, int searchElement)
{
    int i, search = 0, pos;
    for (int i = 0; i < n1; i++)
    {
        if (array2[i] == searchElement)
        {
            search++;
            pos = i ;
        }
    }
    if (search!= 0)
    {
        cout << "The element is present at the index : " << pos << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }
}

int fibonacci(int number){
    if ((number == 1) || (number == 0))
    {
        return (number);
    }
    else
    {
        return (fibonacci(number - 1) + fibonacci(number - 2));
    }
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

            int size, array1[10], delNum, i;
            cout << "Enter the size of the array:";
            cin >> size;
            for (i = 0; i < size; i++)
            {
                cin >> array1[i];
            }
            cout << "Enter the Number to be deleted:";
            cin >> delNum;
            deleteElement(array1, size, delNum);

            break;

        case 3:
            cout << "Searching the element in the array" << endl;
            int searchElement, n1, array2[50];
            cout << "Enter the size of the array:";
            cin >> n1;
            for (i = 0; i < n1; i++)
            {
                cin >> array2[i];
            }
            cout << "Enter the element to be searched:";
            cin >> searchElement;
            searchingElement(array2, n1, searchElement);
        case 4:
            cout << "Printing the Fabonacci series" << endl;
            int number;
            cout<<"Enter the number:";
            cin>>number;
            cout << "The series is: ";
            for (i = 0; i < number; i++){
                cout << fibonacci(i) << " ";
            }

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