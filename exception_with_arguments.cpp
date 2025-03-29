/*Exceptions with Arguments in C++

In C++, you can pass arguments to exceptions, which allows you to provide more detailed error information when an exception is thrown. 
This is particularly useful when you want to pass additional data such as error codes, invalid values, or context for debugging.

How to Throw Exceptions with Arguments:

You can throw exceptions with arguments by creating custom exception classes that accept parameters (e.g., integers, strings)
 and then use those parameters inside the exception handler.
 */

#include <iostream>
using namespace std;

// Custom Exception Class that accepts an argument
class MyException {
private:
    string message;  // Store error message

public:
    // Constructor to initialize the exception with a message
    MyException(const string& msg) : message(msg) {}

    // Getter to return the message
    const string& getMessage() const {
        return message;
    }
};

class Calculator {
public:
    void divide(int a, int b) {
        if (b == 0) {
            throw MyException("Error: Division by zero is not allowed!"); // Throwing exception with message
        }
        cout << "Result: " << a / b << endl;
    }
};

int main() {
    Calculator calc;

    try {
        calc.divide(10, 0); // Attempting division by zero
    } catch (MyException& e) {
        cout << e.getMessage() << endl;  // Catching and displaying the exception message
    }

    return 0;
}
/*Explanation:
1.Custom Exception Class (MyException):

a..This class has a private member message that stores the error message.
b..The constructor accepts a string parameter that initializes the message attribute.
c..The getMessage() function returns the error message.

2.Calculator Class:

The divide() function throws a MyException if the divisor is zero, passing a relevant error message as an argument.

3.main():
A try-catch block is used to catch the exception, and the getMessage() function is called to display the error message*/