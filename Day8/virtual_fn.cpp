#include<iostream>
using namespace std;

class BaseClass{
public:
void method1(){
    cout<<"Base class\n";
}
};

class DerivedClass:public BaseClass{
public:
void method1(){
    cout<<"Derived class\n";
}
};

int main(){
DerivedClass obj;
obj.method1();
}