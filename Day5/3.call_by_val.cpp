#include <iostream>
using namespace std;

int main()
{
    int a,b;
    void swap(int x,int y);

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"\nBefore Swapping: "<<a<<"\t"<<b;

    swap(a,b);

    cout<<"\nAfter Swapping: "<<a<<"\t"<<b;
}

void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"\nAfter Swapping: "<<x<<"\t"<<y;
}