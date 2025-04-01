// Problem: Calculate income tax based on given slabs using nested if-else with range checking

#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0;

    cout << "Enter your annual income: ₹";
    cin >> income;

    if (income <= 250000) {
        tax = 0;
    }
    else {
        if (income <= 500000) {
            tax = (income - 250000) * 0.05;
        }
        else {
            if (income <= 1000000) {
                tax = (500000 - 250000) * 0.05 + (income - 500000) * 0.20;
            }
            else {
                tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.20 + (income - 1000000) * 0.30;
            }
        }
    }

    cout << "Your tax amount is: ₹" << tax << endl;

    return 0;
}
