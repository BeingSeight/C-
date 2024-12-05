// reversing number using recursion by mod 10 and divide 10 with making function
#include <iostream>
using namespace std;
int rev(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + rev(n / 10) * 10;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << rev(n);
}