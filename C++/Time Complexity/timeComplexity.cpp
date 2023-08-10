//* WAP to find the time complexity of the bubble sort, selection sort and insertion sort?

#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

void bubbleSort(long int a[], long int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void selectionSort(long int a[], long int n)
{
    int i, j, min_idx;
    // one by one one move the boudary of the array
    for (i = 0; i < n - 1; i++)
    {
        // find the minimum element in the unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx]) // check whether the number is greater than the min_index number i.e increasing i++
            {
                min_idx = j; // assigning the minimum number to the min_idx
            }
        }
        // swap the found minimu element with first index
        if (min_idx != i) // if both are not equal then swap the number
        {
            swap(a[min_idx], a[i]);
        }
    }
}

void insertionSort(long int a[], long int n)
{
    int i, j, key;
    for (i = 1; i < n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        // move the position of the a[0,1,2,...]
        // that are greater than the key
        //  to  one position ahead of the curret position
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main()
{
    // cout << "Hello world" << endl;
    // int a[] = {1, 4, 6, 3, 7, 9};
    // int size = sizeof(a) / sizeof(a[0]);
    // insetionSort(a, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // fstream Myfile("Times.txt");
    // Myfile.open("Times.txt", ios::out);
    long int n = 10000;
    long int x = 10;
    long int count = 0;
    cout << "S.no\tBubble Sort\tSelection Sort\tInsertion Sort" << endl;
    // Myfile << "S.no\tBubble Sort\tSelection Sort\tInsertion Sort" << endl;
    while (x--)
    {

        long int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            long int r = rand() % n + 1; // generating the random element for the array by using rand() function
            a[i] = r;
            b[i] = r;
            c[i] = r;
        }

        cout << count << "\t";
        // Myfile << count << "\t";
        clock_t first, last;
        double time_used = 0;
        // calculating the time complexity for the bubble sort
        first = clock();
        bubbleSort(a, n);
        last = clock();
        time_used = ((double)(last - first)) / CLOCKS_PER_SEC;
        cout << (time_used) << "\t\t";
        // Myfile << (time_used) << "\t\t";

        // calculating the time complexity for the Selection Sort
        first = clock();
        selectionSort(b, n);
        last = clock();
        time_used = ((double)(last - first)) / CLOCKS_PER_SEC;
        cout << (time_used) << "\t\t";
        // Myfile << (time_used) << "\t\t";

        // calculating the time complexity for the Inserion Sort
        first = clock();
        insertionSort(c, n);
        last = clock();
        time_used = ((double)(last - first)) / CLOCKS_PER_SEC;
        cout << (time_used) << endl;
        // Myfile << (time_used) << endl;

        count++;
        n += 10000;
    }
    // Myfile.close();
    return 0;
}