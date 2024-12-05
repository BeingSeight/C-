// 1. Write a program to print multiplication table of any number

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}







// 2. Write a program to calculate sum of digits of a number

#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}





// 3. Write a program to find power of a number using for loop

#include <iostream>
using namespace std;
int main() {
    int num, power, result = 1;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> power;
    for (int i = 1; i <= power; i++) {
        result *= num;
    }
    cout << "Result: " << result << endl;
    return 0;
}




// 4. Enter a number & print it's reverse

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}