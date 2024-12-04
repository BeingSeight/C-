// Write a program to find maximum between three numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << "The maximum number is: " << a << endl;
    } else if (b > a && b > c) {
        cout << "The maximum number is: " << b << endl;
    } else {
        cout << "The maximum number is: " << c << endl;
    }
    return 0;
}


// Write a program to check whether a number is negative, positive

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}


// Write a program to check whether a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}




// Write a program to check whether a year is leap year or not

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        cout << "The year is a leap year." << endl;
    } else {
        cout << "The year is not a leap year." << endl;
    }
    return 0;
}




// Write a program to input week number and print week day

#include <iostream>
using namespace std;

int main() {
    int week;
    cout << "Enter a week number: ";
    cin >> week;
    switch (week) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid week number." << endl;
    }






    // Write a program to input month number and print number of days in that month

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a month number: ";
    cin >> month;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 days" << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
    }
    return 0;
}







// Write a program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
// bs = basic salary
// gs = gross salary
// hra = house rent allowance
// da = dearness allowance

#include <iostream>
using namespace std;
int main()
{
    float bs, gs, hra, da;
    cout << "Enter basic salary: ";
    cin >> bs;
    if (bs <= 10000)
    {
        hra = bs * 0.2;
        da = bs * 0.8;
    }
    else if (bs <= 20000)
    {
        hra = bs * 0.25;
        da = bs * 0.9;
    }
    else
    {
        hra = bs * 0.3;
        da = bs * 0.95;
    }
    gs = bs + hra + da;
    cout << "Gross salary: " << gs;
    return 0;
}
