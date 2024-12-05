#include <iostream>
using namespace std;
int main() {
    int n,f=1;
    int fact(int x);
    cout<<"Enter a number: ";
    cin>>n;
    f=fact(n);
    cout<<"Factorial of "<<n<<"="<<f;
}

int fact(int x) {
    int f=1;
    if (x==1)
    {
        return 1;
    
    }
    else {
        return x * fact(x-1);
}
}