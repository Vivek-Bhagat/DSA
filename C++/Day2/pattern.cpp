// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// Print the following pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the row :";
    cin >> n;
    for (int i = 1; i < n + 1; i++) // running this loop for the rows
    {
        for (int j = 1; j <= n + 1 - i; j++) // running this loop for the column
        {
            cout << j << " "; // finally printing the column
        }
        cout << endl;
    }

    return 0;
}