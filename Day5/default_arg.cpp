#include<iostream>
using namespace std;

int main()
{
    void SI(float p, float r, int n=1);

    SI(10000, 8, 5, 2);
    SI(15000, 9);
}

void SI(float p, float r, int n)
{
    cout<<"Simple Interest: "<<(p*r*n/100)<<endl;
}