#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "aaadsadhuhueekw";
    // conver it to upper case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32; // subtraction the string with 32
        }
    }
    cout << " upper case conv.  :" << str << endl;

    // converting the string to the lower case
    string str1 = "ADAHDAHADNCSEH";
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32; // Adding the string with 32
    }
    cout << "lower case  :" << str1;

    return 0;
}
