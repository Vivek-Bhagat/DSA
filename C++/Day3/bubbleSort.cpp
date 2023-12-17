// Key points to remember in the bubble sort
//  ---> Reapetedly swap two adjacent element if they are in wrong order

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the  size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
    }

    // printing the array
    cout << "The sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}