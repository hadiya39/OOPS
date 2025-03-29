#include <iostream>
using namespace std;

void checkNumber(int num) {
    try {
        if (num < 0)
            throw "Negative number not allowed"; // Throw an exception
    }
    catch (...) { // Catch all exceptions
        cout << "Exception caught in checkNumber function." << endl;
        throw; // Re-throw the exception
    }
}

int main() {
    try {
        checkNumber(-5);
    }
    catch (...) {
        cout << "Exception handled in main function." << endl;
    }
    return 0;
}