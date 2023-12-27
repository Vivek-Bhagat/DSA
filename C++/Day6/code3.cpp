#include <bits/stdc++.h>
using namespace std;

// To count the number of one in the binary representation of a number
// * (n & n-1) has the same bits as n except the rightmost set bit
int numberOfOne(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    cout << numberOfOne(19) << endl;
    return 0;
}