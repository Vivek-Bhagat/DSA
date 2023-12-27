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
    cout << getBit(5, 2) << endl;

    return 0;
}