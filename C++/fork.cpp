#include<iostream>
#include<unistd.h>

using namespace std;

int main()
{
    int a ,i;
    for ( i = 0; i < 5; i++)
    {
        fork();
        cout<<"1"<<endl;
    }
    
    return 0;
}