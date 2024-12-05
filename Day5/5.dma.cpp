#include <iostream>
using namespace std;
int main() {
    // Pointer initialized to null
    int *p = NULL;

    // Request memory for the variable
    // using new operator
    p = new int;
    if (!p)
        cout << "allocation of memory failed\n";
    else {
        // Store value at allocated addresss
        *p = 29;
        cout << "Value of p: " << *p << endl;

    }
}