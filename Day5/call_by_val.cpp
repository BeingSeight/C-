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

    return 0;
}