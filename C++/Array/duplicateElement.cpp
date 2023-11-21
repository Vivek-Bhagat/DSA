#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, n, i, j, k, val;
    int arr[size];

    cout << "Enter the size of the array :";
    cin >> size;
    cout << "Enter the elements :";
    for (i = 0; i < size; i++)
    {
        cin >> val;
        arr[i] = val;
    }

    // duplicate count in the array
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }

    cout << "Elemet after the deletion of the duplicate :";
    for (i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}