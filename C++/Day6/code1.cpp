#include <iostream>
using namespace std;

// checking the bit number
int getBit(int x, int pos)
{
    return ((x & (1 << pos)) != 0);
}

// setting the bit at the position
int setBit(int x, int pos)
{
    return (x | (1 << pos));
}
int main()
{
    cout << getBit(5, 2) << endl; // here 101 -> at pos 2 the number is 1
    cout << setBit(5, 1) << endl; // here 101 + 10 = 111 => 7
    return 0;
}