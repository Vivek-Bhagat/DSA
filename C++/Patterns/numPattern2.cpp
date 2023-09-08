//?pattern
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cout << "Enter the row :";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}