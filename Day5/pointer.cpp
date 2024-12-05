#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int *p;

    p=&n;

cout<<"\nAddress of n : "<<&n;
cout<<"\nAddress of p : "<<&p;
cout<<"\nValue of n : "<<n;
cout<<"\nValue of p : "<<p;
cout<<"\nValue of *p : "<<*p;

return 0;
}