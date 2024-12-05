#include <iostream>
using namespace std;

void SI(float p, float r, int n = 1)
{
    cout << "\nPrincipal Amount: " << p << endl;
    cout << "Rate of Interest: " << r << endl;
    n = n + 1;
    cout << "\nSimple Interest: " << (p * r * n / 100) << endl;
}

int main()
{
    SI(10000, 8, 5);
    SI(15000, 9);
}