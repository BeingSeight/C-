// Factorial with multiple catches
#include <iostream>
using namespace std;
int main() {
    int n, f = 1;
    cout << "Enter a number: ";
    cin >> n;
    try {
        if (n < 0) {
            throw n;
        } else {
            for (int i = 1; i <= n; i++) {
                f *= i;
            }
            cout << "Factorial of " << n << " = " << f;
        }
    } catch (int x) {
        cout << "Factorial of " << x << " is not defined";
    }
    return 0;
}