/*3. Constructor and Destructor in a Class - Triangle Area Calculation 
• Define a Triangle class with a constructor to initialize base and height. 
• Implement a function calculateArea() using the formula:  
• Implement a destructor to display a message when an object is destroyed. */
#include <iostream>
using namespace std;

class Triangle {
public:
    double base, height;

    // Constructor
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }

    // Destructor to display a message
    ~Triangle() {
        cout << "Triangle object destroyed." << endl;
    }
};

int main() {
    // Triangle object
    Triangle tri(5, 3);

    // Calculating and displaying the area
    cout << "Area of the triangle: " << tri.calculateArea() << endl;

    return 0;
}
