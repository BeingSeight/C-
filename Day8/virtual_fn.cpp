#include<iostream>
using namespace std;

class BaseClass{
public:
void method1(){
    cout<<"\nBase class method1";
}

virtual void method2(){
    cout<<"\nBase class method2";
}
};

class DerivedClass:public BaseClass
{
public:
void method1(){
    cout<<"\nDerived class method1";
}
void method2(){
    cout<<"\nDerived class method2";
}

};
int main(){
DerivedClass obj;
BaseClass *p0bj;
p0bj=&obj;
p0bj->method1();
p0bj->method2();
return 0;
}