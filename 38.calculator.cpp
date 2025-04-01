// Problem: Create a calculator program that takes two operands and an operator (+, -, *, /, %).
// Use the conditional operator to implement the operations.
// Display an error message if the operator is invalid or if a division by zero is attempted.

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first operand: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second operand: ";
    cin >> num2;

    double result = (op == '+') ? (num1 + num2) :
                    (op == '-') ? (num1 - num2) :
                    (op == '*') ? (num1 * num2) :
                    (op == '/') ? ((num2 != 0) ? (num1 / num2) : 0) :
                    (op == '%') ? ((num2 != 0) ? ((int)num1 % (int)num2) : 0) :
                    0;

    if (op == '/' && num2 == 0) {
        cout << "Error: Division by zero!" << endl;
    } else if (op == '%' && num2 == 0) {
        cout << "Error: Division by zero!" << endl;
    } else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
        cout << "Result: " << result << endl;
    } else {
        cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
