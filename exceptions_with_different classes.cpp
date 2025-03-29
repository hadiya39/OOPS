/*c++ exeptions can be thrown from one class and caught in another. this is useful when dealing with complex applications where
exception handeling is managed separately.       */
#include <iostream>
using namespace std;

class MyException {};  // Custom exception class without what()

class Number {
public:
    void check(int num) {
        if (num < 0)
            throw MyException(); // Throwing exception without what()
        cout << "Number is valid: " << num << endl;
    }
};

int main() {
    Number obj;
    
    try {
        obj.check(-5); // Passing a negative number
    } catch (MyException) { // Handling exception
        cout << "Error: Number cannot be negative!" << endl;
    }

    return 0;
}