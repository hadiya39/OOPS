/*Create a calculator program that takes two operands and an operator (+, -, *, /, %). 
• Use the conditional operator to implement the operations. 
• Display an error message if the operator is invalid or if a division by zero is attempted.*/
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    if (op == '+') 
    {
        cout << "Result: " << num1 + num2 << endl;
    } 
      else if (op == '-') 
    {
        cout << "Result: " << num1 - num2 << endl;
    } 
      else if (op == '*')
     {
        cout << "Result: " << num1 * num2 << endl;
    } 
    else if (op == '/')
     {
        if (num2 != 0)
         {
            cout << "Result: " << num1 / num2 << endl;
        }
         else 
        {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else if (op == '%')
     {
        // Modulus operation only works with integers, so we ensure num1 and num2 are integers
        if (num2 != 0 && num1 == int(num1) && num2 == int(num2))
         {
            cout << "Result: " << int(num1) % int(num2) << endl;
        } 
          else 
        {
            cout << "Error: Invalid operation or Division by zero!" << endl;
        }
    }
     else
      {
        cout << "Error: Invalid operator!" << endl;
      }

    return 0;
}
