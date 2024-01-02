// Sieve of Eratosthenes
// -->mark the array of the given range and check if the number is divisible by number , non marked number are prime number of the given range

#include <iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the length of the array :";
    cin >> n;
    cout << "The Prime Number between the length is :";
    primeSieve(n);
    return 0;
}