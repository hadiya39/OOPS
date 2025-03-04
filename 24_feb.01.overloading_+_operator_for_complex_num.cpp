
/*Assignment 1: Overloading the + Operator for Complex Numbers 
Write a C++ program that defines a class Complex with two integer attributes (real, imag). 
Overload the + operator to add two complex numbers and display the result.*/
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex sum = c1 + c2;
    
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    
    return 0;
}