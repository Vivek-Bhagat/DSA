
// Write a program to create a sparse matrix and then perform addition of two sparse matrix. Also compare the size of the sparse matrix with original matrix.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, j, row, col;
    int arr[100][100];
    cout << "Enter the size of the row:";
    cin >> row;
    cout << "Enter the size of the col:";
    cin >> col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "\n arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // storing the non-zero element in the new array
    // for (i = 0; i < row; i++)
    // {
    //     for (j = 0; j < col; j++)
    //     {
    //         if (arr[i][j] > 0)
    //         {
    //             sparse[i][j] = arr[i][j];
    //         }
    //     }
    // }

    // printing the sparse matrix
    // int newLen = sizeof(sparse) / sizeof(sparse[0]);
    // int newbd = sizeof(sparse) / sizeof(sparse[0]);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "\t" << arr[i][j];
        }
    }

    return 0;
}