#include <iostream>

using namespace std;

const int MAX = 100;

class SparseMatrix
{
private:
    int row, col, num;
    int data[MAX][3]; // data[i][0] = row, data[i][1] = column, data[i][2] = value

public:
    void readMatrix();
    void displayMatrix();
    void addMatrices(SparseMatrix &a, SparseMatrix &b);
    void compareSize(int rows, int cols);
};

void SparseMatrix::readMatrix()
{
    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    cout << "Enter number of non-zero elements: ";
    cin >> num;

    cout << "Enter non-zero elements (row column value): " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> data[i][0] >> data[i][1] >> data[i][2];
    }
}

void SparseMatrix::displayMatrix()
{
    cout << "Sparse Matrix:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << data[i][0] << " " << data[i][1] << " " << data[i][2] << endl;
    }
}

void SparseMatrix::addMatrices(SparseMatrix &a, SparseMatrix &b)
{
    // Assuming a and b have the same dimensions
    row = a.row;
    col = a.col;

    int i = 0, j = 0, k = 0;
    while (i < a.num && j < b.num)
    {
        if (a.data[i][0] < b.data[j][0] || (a.data[i][0] == b.data[j][0] && a.data[i][1] < b.data[j][1]))
        {
            data[k][0] = a.data[i][0];
            data[k][1] = a.data[i][1];
            data[k][2] = a.data[i][2];
            i++;
        }
        else if (a.data[i][0] > b.data[j][0] || (a.data[i][0] == b.data[j][0] && a.data[i][1] > b.data[j][1]))
        {
            data[k][0] = b.data[j][0];
            data[k][1] = b.data[j][1];
            data[k][2] = b.data[j][2];
            j++;
        }
        else
        {
            data[k][0] = a.data[i][0];
            data[k][1] = a.data[i][1];
            data[k][2] = a.data[i][2] + b.data[j][2];
            i++;
            j++;
        }
        k++;
    }

    while (i < a.num)
    {
        data[k][0] = a.data[i][0];
        data[k][1] = a.data[i][1];
        data[k][2] = a.data[i][2];
        i++;
        k++;
    }

    while (j < b.num)
    {
        data[k][0] = b.data[j][0];
        data[k][1] = b.data[j][1];
        data[k][2] = b.data[j][2];
        j++;
        k++;
    }

    num = k;
}

void SparseMatrix::compareSize(int rows, int cols)
{
    if (row == rows && col == cols)
    {
        cout << "Sparse matrix size is same as original matrix size." << endl;
    }
    else
    {
        cout << "Sparse matrix size is different from original matrix size." << endl;
    }
}

int main()
{
    SparseMatrix matA, matB, matC;
    matA.readMatrix();
    matB.readMatrix();

    matC.addMatrices(matA, matB);

    cout << "Matrix A:" << endl;
    matA.displayMatrix();

    cout << "Matrix B:" << endl;
    matB.displayMatrix();

    cout << "Matrix C (Sum of A and B):" << endl;
    matC.displayMatrix();

    // matC.compareSize(matA.rows, matA.cols);

    return 0;
}
