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
        BankAccount() {
            int accountNumber;
            int balance = 8000.00;
        }
        void deposit() {
            double amount;
            cout<<"Enter the amount to be deposited: ";
            cin>>amount;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Deposit: " << amount << endl;
            balance += amount;
        }
        void withdraw() {
            double amount;
            if (balance >= amount) {
                cout << "Enter the amount to be withdrawn: ";
                cin >> amount;
                cout << "Account Number: " << accountNumber << endl;
                cout << "Withdrawal: " << amount << endl;
                balance -= amount;
            } else {
                cout << "Insufficient balance" << endl;
            }
        }
        void display() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }

        void saveToFile(const string& filename) {
            ofstream file(filename);
            if (file.is_open()) {
                file << accountNumber << endl;
                file << balance << endl;
                file.close();
            } else {
                cout << "Unable to open file" << endl;
            }
        }

        void loadFromFile(const string& filename) {
            ifstream file(filename);
            if (file.is_open()) {
                file >> accountNumber;
                file >> balance;
                file.close();
            } else {
                cout << "Unable to open file" << endl;
            }
        }

        string Start() {
            cout << "Welcome to the Bank Account Management System" << endl;
            cout << "-------------------------------------------" << endl;
            cout<<"Enter your accout number: ";
            cin>>accountNumber;
            if (accountNumber==8888){
                return "Login Success";
            } else {
                return "Login Failed";
            }
        }
};  

int main() {
    BankAccount account;
    while (true) {
        int choice;
        account.Start();

        if (account.Start() == "Login Success") {
            cout<<"Bank Account"<<endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display" << endl;
        cout << "4. Save to file" << endl;
        cout << "5. Load from file" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                account.deposit();
                break;
            case 2:
                account.withdraw();
                break;
            case 3:
                account.display();
                break;
            case 4:
                account.saveToFile("account.txt");
                break;
            case 5:
                account.loadFromFile("account.txt");
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
        } else {
            break;
        }
        
        
    }

}
