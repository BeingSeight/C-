// Password checker
#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;
    if (password.length() < 8) {
        cout << "Password must be at least 8 characters long." << endl;
    } else if (password.find(' ') != string::npos) {
        cout << "Password cannot contain spaces." << endl;
    } else {
        cout << "Password is valid." << endl;
    }
    return 0;
}