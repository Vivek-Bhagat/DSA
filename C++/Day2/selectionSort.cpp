#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Runnin the loop from the i to n-1 for the first loop
    // From i+1 to n for the second loop of the array
    // dono loop se ek ek element for check karro ki wo bada h ya nhi fir swap karr do
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}