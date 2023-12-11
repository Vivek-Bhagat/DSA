#include <iostream>
using namespace std;

int main()
{
    int pocketMoney = 3000;
    for (int date = 0; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue; // skipping the date when it is even with the help of the continue statement
        }
        if (pocketMoney == 0)
        {
            break;
        }
        cout << "You can go for the party" << endl;
        pocketMoney = pocketMoney - 300;
    }

    return 0;
}

// Continue -- it is used to skik the current iteration to the next iteration
// Break -- it is used to terminate the loop