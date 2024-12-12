// Errors so we have to create multiple catch

#include <iostream>
using namespace std;
int main()
{
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Caught";
    }
    cout << "Program end";
    return 0;
}