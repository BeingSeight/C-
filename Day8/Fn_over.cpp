#include<iostream>
using namespace std;
class number
{
protected:
    int n;
public:
    void getdata(int x)
    {
    cout<<"Base class\n";
        n=x;
    }
    void display()
    {
        cout<<n;
    }
};
class sq:public number
{
public:
    void getsqdata(int y)
    {
    cout<<"Derived class\n";
        number::getdata(y);
    }
};
int main()
{
    sq s;
    s.getsqdata(5);
    s.display();
}