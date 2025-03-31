/*ssume that a bank maintains two kinds of account for its customers, one called saving account and the other current account. The 
saving account provides compound interest and withdrawal facilities but no cheque book facility. The current account provides 
cheque book facility but no interest. Current account holders should also maintain a minimum balance and if it falls below a 
specified level, a service charge is imposed. Create a class Account that stores customer name, account number, and type of account. 
From this derive the classes Curr-acct and Sav-acct to make them more specific to their requirements. Include the necessary 
methods in order to achieve the following tasks. 
● Accept deposit from a customer and update the balance 
● Display the balance 
● Compute and deposit interest 
● Permit withdrawal and update the balance 
● Check for the minimum balance, impose penalty, if necessary and update the balance. 
Do not use any constructors. Use methods to initialize the class members.*/
#include <iostream>
#include <string>
using namespace std;

// Base class Account
class Account {
protected:
    string customerName;
    int accountNumber;
    float balance;

public:
    // Method to initialize account details
    void init(string name, int accNum, float initialBalance) {
        customerName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Method to display the account balance
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Current Balance: " << balance << endl;
    }

    // Method to deposit money
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Method to withdraw money
    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

// Derived class for Current Account
class CurrAcct : public Account {
private:
    float minBalance;
    float penaltyCharge;

public:
    // Method to initialize current account details
    void initCurrAcct(string name, int accNum, float initialBalance, float minBal, float penalty) {
        init(name, accNum, initialBalance);
        minBalance = minBal;
        penaltyCharge = penalty;
    }

    // Method to check minimum balance and apply penalty if necessary
    void checkMinBalance() {
        if (balance < minBalance) {
            balance -= penaltyCharge;
            cout << "Penalty applied! New balance: " << balance << endl;
        }
    }
};

// Derived class for Saving Account
class SavAcct : public Account {
private:
    float interestRate;

public:
    // Method to initialize saving account details
    void initSavAcct(string name, int accNum, float initialBalance, float interest) {
        init(name, accNum, initialBalance);
        interestRate = interest;
    }

    // Method to add interest to the balance
    void depositInterest() {
        float interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }
};

int main() {
    // Creating objects for Current and Saving Account
    CurrAcct currentAccount;
    SavAcct savingAccount;

    // Initializing and operating on the current account
    currentAccount.initCurrAcct("John Doe", 101, 5000.0, 1000.0, 50.0);
    cout << "Current Account Operations:" << endl;
    currentAccount.deposit(2000.0);
    currentAccount.withdraw(1500.0);
    currentAccount.checkMinBalance();
    currentAccount.displayBalance();

    // Initializing and operating on the saving account
    savingAccount.initSavAcct("Jane Smith", 102, 2000.0, 5.0);
    cout << "\nSaving Account Operations:" << endl;
    savingAccount.deposit(1000.0);
    savingAccount.depositInterest();
    savingAccount.displayBalance();

    return 0;
}
