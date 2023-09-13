#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack;
    stack.push(10);
    stack.push(11);
    stack.push(12);
    stack.push(13);

    // int num so that we can add the number
    int i, num;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number :";
        cin >> num;
        stack.push(num);
    }
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
}