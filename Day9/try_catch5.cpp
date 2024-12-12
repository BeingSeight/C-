#include <iostream>
using namespace std;

void test(int x)
{
    try {
        if (x==1) throw x; //int

        else if(x==0) throw 'x'; //char

        else if (x==-1) throw 1.0; //double

        cout<<"end of try- block \n";
    }
    catch(char c)
    {
        cout<<"Caught a character \n";
    }

    catch(int a)
    {
        cout<<"Caught an integer \n";
    }

    catch(double d)
    {
        cout<<"Caught a double \n";
    }

    cout<<"end of try-catch block \n";
}

int main()
{
    test(1);
    test(0);
    test(-1);
    return 0;
}