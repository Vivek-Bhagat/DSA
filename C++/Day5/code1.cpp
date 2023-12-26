#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array :";
    cin >> n;

    // Dynamic memory allocation for the array
    int *a = new int[n];

    cout << "Enter the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e6 + 2;
    int *idx = new int[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minIdx = min(minIdx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minIdx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIdx + 1 << endl;
    }

    // Deallocate dynamic memory
    delete[] a;
    delete[] idx;

    return 0;
}
