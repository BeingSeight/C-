// Mark Checker
#include <iostream>
using namespace std;
int main() {
    float mark;
    cout << "Enter the mark: ";
    cin >> mark;
    if (mark >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}