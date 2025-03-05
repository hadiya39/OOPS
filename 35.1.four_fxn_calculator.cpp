/*Create the equivalent of a four-function calculator. The program should ask the user to
 enter a number, an operator, and another number. (Use floating point.) It should then
 carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid
ing the two numbers. Use a switch statement to select the operation. Finally, display the
 result.
 When it finishes the calculation, the program should ask whether the user wants to do
 another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the
 program might look like this:
 Enter first number, operator, second number: 10 / 3
 Answer = 3.333333
 Do another (y/n)? y
 Enter first number, operator, second number: 12 + 100
 Answer = 112
 Do another (y/n)? n*/
 #include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op, choice;

    do {
        // Ask the user to enter two numbers and an operator
        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> op >> num2;

        // Perform the calculation based on the operator using a switch statement
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                    continue;  // Skip the result and ask for input again
                }
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
                continue;  // Skip the result and ask for input again
        }

        // Display the result
        cout << "Answer = " << result << endl;

        // Ask if the user wants to perform another calculation
        cout << "Do another (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');  // Repeat if the user answers 'y'

    cout << "Goodbye!" << endl;

    return 0;
}
