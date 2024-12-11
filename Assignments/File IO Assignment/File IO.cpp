/*
Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account. 

All the details of account holder(account number and balance) should be available in file
*/

#include <iostream>
#include <fstream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;
    public:
        BankAccount(int accNo, double bal) {
            accountNumber = accNo;
            balance = bal;
        }
        void deposit(double amount) {
            balance += amount;
        }
        void withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }
        void display() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: $" << balance << endl;
        }
};

int main() {
    BankAccount account(123456, 80000.0);
    account.deposit(8000.0);
    account.withdraw(800.0);
    account.display();
    return 0;
}