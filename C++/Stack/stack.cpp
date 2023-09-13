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

    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
}