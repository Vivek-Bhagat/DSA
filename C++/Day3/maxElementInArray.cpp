#include <iostream>
using namespace std;

int main()
{
    int mx = 0;
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // finding the max element till the array size
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}