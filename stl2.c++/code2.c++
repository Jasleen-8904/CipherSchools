#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> a;

    a.push(5);
    a.push(6);
    a.push(7);

    cout<<a.front()<<endl;

    a.pop();
    cout<<a.front()<<endl;

    if(a.empty()==0)
    {
        cout<<"the stack is currently not empty ";
    }
    else
    {
        cout<<"the stack is currently empty";
    }
    a.pop();
    a.pop();

    if(a.empty()==0)
    {
        cout<<"the stack is currently not empty ";
    }
    else
    {
        cout<<"the stack is currently empty";
    }
}