#include <iostream>

using namespace std;

void inputMatrix(int mat[][100], int rows, int cols) {
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

void addMatrices(int matA[][100], int matB[][100], int matSum[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matSum[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void displayMatrix(int mat[][100], int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


void sparseMatrix(int matrixSum,int rows, int cols){
    int i,j;

    int  zero = 0, nonZero = 0 ;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrixSum[i][j] == 0)
            {
                zero++;
            }
            else
            {
                nonZero++;
            }
        }
    }
    if(nonZero>zero){
        cout<<"After Sum of the Sparse matrix is not the Sparse Matrix"<<endl;
    }
    else{
        int s[nonZero][zero], k = 0; // creating a new matrix od size of zero and non-zero element and k is the used for storing the value
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (matrixSum[i][j] != 0)
                {
                    s[k][0] = i;       // putting the value of i in the new matrix
                    s[k][1] = j;       // putting the value of j in the new matrix
                    s[k][2] = matrixSum[i][j]; // storing the non-zero value of the sparse matrix in the new matrix
                    k++;
                }
            }
        }
        cout << "\nThe Sparse Matrix Representation is :" << endl;
        for (i = 0; i < nonzZero; i++)
        {
            cout << "\n";
            for (size_t j = 0; j < zero; j++)
            {
                cout << matrixSum[i][j] << "\t";
            }
        }
    }

   
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int matrixA[100][100], matrixB[100][100], matrixSum[100][100];

    cout << "For Matrix A:" << endl;
    inputMatrix(matrixA, n, m);

    cout << "For Matrix B:" << endl;
    inputMatrix(matrixB, n, m);

    addMatrices(matrixA, matrixB, matrixSum, n, m);

    cout << "Matrix A:" << endl;
    displayMatrix(matrixA, n, m);

    cout << "Matrix B:" << endl;
    displayMatrix(matrixB, n, m);

    cout << "Matrix Sum (A + B):" << endl;
    displayMatrix(matrixSum, n, m);

    cout << "The representation of the sparse Matrix is:" << endl;
    sparseMatrix(matrixSum, n, m);

    return 0;
}
