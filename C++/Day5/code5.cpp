#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // Maximum occurance frequency of the smallest characters

    string str;
    cin >> str;
    int freq[26]; // total no of the alphabets

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
        freq[str[i] - 'a']++; // har ek index m jaa k charcter ko update karr dega

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << "The max frequency is :" << maxF << " " << ans << endl;

    return 0;
}