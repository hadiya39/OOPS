/*Design a class to represent a bank account. Include the following. 
Data Members 
● Name of the depositor 
● Account number 
● Type of account 
● Balance amount in the account 
Methods 
● To assign initial values 
● To deposit an amount 
● To withdraw an amount after checking balance 
● To display the name and balance 
Incorporate a constructor to provide initial values. */
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
    // Constructor to initialize data members
    BankAccount(string name, int accNumber, string accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to deposit an amount
    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    // Method to withdraw an amount after checking balance
    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance to withdraw " << amount << endl;
        }
    }

    // Method to display the name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object with initial values
    BankAccount account("John Doe", 12345, "Savings", 500.0);

    // Displaying account details
    account.display();

    // Depositing money
    account.deposit(200.0);
    account.display();

    // Withdrawing money
    account.withdraw(100.0);
    account.display();

    // Trying to withdraw more than balance
    account.withdraw(700.0);

    return 0;
}
