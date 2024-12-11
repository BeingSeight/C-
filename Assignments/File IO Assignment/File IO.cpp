/*
Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account. 

All the details of account holder(account number and balance) should be available in file
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// This class represents a bank account with private member variables for account number and balance.
// It includes member functions to deposit and withdraw money from the account.
class BankAccount {
    private:
        int accountNumber; // Private member variable for account number
        double balance; // Private member variable for balance
    public:
        // Constructor to initialize account number and balance
        BankAccount(int accNo, double bal) {
            accountNumber = accNo;
            balance = bal;
        }
        // Function to deposit money into the account
        void deposit(double amount) {
            balance += amount; // Add the deposit amount to the balance
        }
        // Function to withdraw money from the account
        void withdraw(double amount) {
            if (balance >= amount) { // Check if there is enough balance
                balance -= amount; // Subtract the withdrawal amount from the balance
                cout << "Withdrawal successful. New balance: $" << balance << endl; // Print the new balance
            } else {
                cout << "Insufficient balance." << endl; // Print an error message if there's not enough balance
            }
        }
        // Function to display the account details
        void display() {
            cout << "Account Number: " << accountNumber << endl; // Print the account number
            cout << "Balance: $" << balance << endl; // Print the balance
        }
        // Function to write the account details to a file
        void writeToFile(const string& filename) {
            ofstream file(filename); // Open the file for writing
            if (file.is_open()) { // Check if the file was opened successfully
                file << "Account Number: " << accountNumber << endl; // Write the account number to the file
                file << "Balance: $" << balance << endl; // Write the balance to the file
                file.close(); // Close the file
                cout << "Account details written to " << filename << endl; // Print a success message
            } else {
                cout << "Unable to open file" << endl; // Print an error message if the file couldn't be opened
            }
        }
        // Function to read the account details from a file
        void readFromFile(const string& filename) {
            ifstream file(filename); // Open the file for reading
            if (file.is_open()) { // Check if the file was opened successfully
                string line;
                while (getline(file, line)) { // Read each line from the file
                    cout << line << endl; // Print the line
                }
                file.close(); // Close the file
            } else {
                cout << "Unable to open file" << endl; // Print an error message if the file couldn't be opened
            }
        }
};

int main() {
    string line;
    fstream file;

    file.open("abc.txt", ios::out);
    file << "Hello Btech Students";
    file.close();

    file.open("abc.txt", ios::in);
    while (getline(file, line)) {
        cout << line << '\n';
    }
    file.close();

    BankAccount account(123456, 1000.0); // Create a BankAccount object with account number 123456 and initial balance of $1000.0
    account.display(); // Display the account details
    account.deposit(500.0); // Deposit $500.0 into the account
    account.withdraw(200.0); // Withdraw $200.0 from the account
    account.display(); // Display the updated account details
    account.writeToFile("account_details.txt"); // Write the account details to a file named "account_details.txt"
    account.readFromFile("account_details.txt"); // Read the account details from the file and display them

    return 0;
}