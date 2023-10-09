#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, i, val;
    cout << "Enter the size of the queue :";
    cin >> size;
    queue<int> q;
    stack<int> s;
    for (i = 0; i < size; i++)
    {
        cin >> val;
        q.push(val);
    }
    for (i = 0; i < size; i++)
    {

        s.push(q.front());
        q.pop();
    }

    for (i = 0; i < size; i++)
    {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }

    return 0;
}