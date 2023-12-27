#include <bits/stdc++.h>
using namespace std;

// to check whether the number is power of 2 or not using bit manupulation
int isPowerOfTwo(int n)
{
    return (n && !(n & n - 1));
}
int main()
{
    cout << isPowerOfTwo(15) << endl; // return  true or false
    return 0;
}