#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, z = 0, nz = 0;
    int a[10][10]; int b[10][10];
    int c[10][10];
    cout << "Enter the number of the row and column :";
    cin >> n >> m;
    // input of the matrix
    cout<<"\n The First Matrix is :"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Enter the elemment [" << i << "] and [" << j << "] :";
            cin >> a[i][j];
        }
    }
    cout<<"\n The Second Matrix is :"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Enter the elemment [" << i << "] and [" << j << "] :";
            cin >> b[i][j];
        }
    }

   
    // Displaying the entered matrix
    cout << "Entered Matrix is" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    cout << "Entered Matrix is" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout<<endl;
    }
     //Sum of the Sparse Matrix
    //  cout<<"the summ of the Sparse Matrix is : \n"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
     //Sum of the Sparse Matrix
      cout<<"\nthe sum  is : \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    // checking if the matrix is sparse or not
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (c[i][j] == 0)
            {
                z++;
            }
            else
            {
                nz++;
            }
        }
    }

    if (nz > z)
    {
        cout << "\nThe entered matrix is not the Sparse Matrix";
    }
    else
    {
        int s[nz][z], k = 0; // creating a new matrix od size of zero and non-zero element and k is the used for storing the value
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (c[i][j] != 0)
                {
                    s[k][0] = i;       // putting the value of i in the new matrix
                    s[k][1] = j;       // putting the value of j in the new matrix
                    s[k][2] = c[i][j]; // storing the non-zero value of the sparse matrix in the new matrix
                    k++;
                }
            }
        }
        cout << "\nThe Sparse Matrix Representation is :";
        cout<<"\n\tRow\tCol\tValue\n";
        for (i = 0; i < nz; i++)
        {
            cout << "\n";
            for ( j = 0; j < m; j++)
            {
                cout << s[i][j] << "\t";
            }
            cout<<endl;
        }
    }

    return 0;
}