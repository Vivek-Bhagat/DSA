#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // make the greater number from the string

    string str;
    cin >> str;

    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
    return 0;
}