//?pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cout << "Enter the row :";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}