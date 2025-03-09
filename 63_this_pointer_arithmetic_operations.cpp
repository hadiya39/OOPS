/*9. Using this Pointer in a Class - Basic Arithmetic Operations 
• Define a Calculator class with attributes num1 and num2. 
• Implement a function setValues() . 
• Implement functions add(), subtract(), multiply(), and divide(). */
#include <iostream>
using namespace std;

class Calculator {
public:
    double num1, num2;

    void setValues(double num1, double num2) {
        this->num1 = num1;
        this->num2 = num2;
    }

    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() { return (num2 != 0) ? num1 / num2 : 0; }
};

int main() {
    Calculator calc;
    calc.setValues(10, 5);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
