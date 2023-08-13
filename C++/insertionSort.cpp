#include<iostream>
using namespace std;

int main()
{
    int a[] = {9, 3, 5, 6, 2, 1, 8,12,16,19,10};
    int n, i, j, key;
    // cout << "Enter the value of n:";

    // cin >> n;

    n = sizeof(a) / sizeof(a[0]);

    for (i = 1; i < n ;i++){
        key = a[i];
        j = i - 1;
       
       while(j>=0 && a[j]>key){
           a[j+1] = a[j];
           j = j - 1;
       }
       a[j + 1] = key;
    }
    for (i = 0; i < n;i++){
       cout << a[i] << " ";
    }

       return 0;
}