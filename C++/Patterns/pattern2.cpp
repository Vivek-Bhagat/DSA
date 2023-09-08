//?pattern
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cout << "Enter the row :";
    cin >> row;
    for (i = 0; i < row; i++)
    {
        for (j = row; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}