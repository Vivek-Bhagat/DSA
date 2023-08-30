//? Q. Write a program to implement the stack operation and check the stack is palindrome or not
//* i.)where you have take input from the user ,element entered should be (0,1) only
//* ii.) 'c' is mid of the stack size and enter the value of the c.

//! Source code --->

#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(stack<int> &s, int mid)
{
    stack<int> tempStack;
    int size = s.size(); // getting the size of the stack1

    // pushing the half element in the temp stack
    for (int i = 0; i < (size - 1) / 2; i++)
    {
        tempStack.push(s.top()); // s.top() is where the passing stack as argument from the main function where we are pushing the top element
        s.pop();                 // removing the top element of the stack1 one by one
    }

    // If the size is odd, skip the middle element 'c'
    if (size % 2 == 1)
    {
        s.pop();
    }

    // comparing the remaining stack element from the tempStack
    while (!s.empty() && !tempStack.empty())
    {
        if (s.top() != tempStack.top()) // one by one checking and comparing the top element of the  both stack
        {
            return false;
        }
        // removing the element one by one until the stacks becomes empty form both stack
        s.pop();
        tempStack.pop();
    }

    // if both the stacks are empty the it is palindrome
    return s.empty() && tempStack.empty();
}

int main()
{
    stack<int> myStack; // creating a my stack file
    int mid;
    int size;
    cout << "Enter the size of the stack element :";
    cin >> size;

    cout << "Enter the number of the stack element(0,1)" << endl;
    for (int i = 0; i < size; i++)
    {
        int num; // defining the integer value
        cin >> num;
        myStack.push(num); // pushing the number in the stack
    }
    cout << "Enter the mid element of the stack :";
    cin >> mid;

    // calling the fuction with the conditions
    if (isPalindrome(myStack, mid))
    {
        cout << "The stack is Palindrome" << endl;
    }
    else
    {
        cout << "The stack is not palindrome" << endl;
    }
    return 0;
}