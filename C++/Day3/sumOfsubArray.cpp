// Q .> Given an array[] of n size. Outpu sum of each subarray of the given array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // finding the sum fo the subarrays
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            cout << currentSum << endl;
        }
    }

    return 0;
}