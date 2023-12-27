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
// clearing the bit at the position
int clearBit(int x, int pos)
{
    int mask = ~(1 << pos);
    return (x & mask);
}

// updating the it at the position
int updateBit(int x, int pos, int val)
{
    int mask = ~(1 << pos);
    x = x & mask;
    return (x | (val << pos));
}
int main()
{
    cout << getBit(5, 2) << endl;       // here 101 -> at pos 2 the number is 1
    cout << setBit(5, 1) << endl;       // here 101 + 10 = 111 => 7
    cout << clearBit(5, 2) << endl;     // making the numbers complement so that we can clear the bit at the position
    cout << updateBit(5, 1, 1) << endl; // updating the bit at the particular position
    return 0;
}