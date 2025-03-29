/*Here’s another example, where the exception carries an integer argument to indicate error codes or invalid values*/
#include <iostream>
using namespace std;

class MyException {
private:
    int errorCode;  // Store error code

public:
    // Constructor to initialize the exception with an error code
    MyException(int code) : errorCode(code) {}

    // Getter to return the error code
    int getErrorCode() const {
        return errorCode;
    }
};

class Validator {
public:
    void validateAge(int age) {
        if (age < 0 || age > 150) {
            throw MyException(age); // Throwing exception with age as an argument
        }
        cout << "Valid age: " << age << endl;
    }
};

int main() {
    Validator v;

    try {
        v.validateAge(200); // Invalid age
    } catch (MyException& e) {
        cout << "Error: Invalid age " << e.getErrorCode() << endl;  // Catching and displaying the error code
    }

    return 0;
}