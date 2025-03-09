/*7. Class with Function Returning Object - Adding Two Complex Numbers 
• Define a Complex class with attributes real and imaginary. 
• Implement a function addComplex() that takes another Complex object and returns a 
new Complex object with the sum of two complex numbers. 
• Display the result. */

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imaginary;

    // Constructor to initialize real and imaginary parts
    Complex(int r, int i) : real(r), imaginary(i) {}

    // Function to add two complex numbers and return a new Complex object
    Complex addComplex(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Create two Complex objects
    Complex c1(3, 4);
    Complex c2(1, 2);

    // Add the complex numbers
    Complex result = c1.addComplex(c2);

    // Display the result
    result.display();

    return 0;
}
