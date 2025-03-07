/*4. Parameterized Constructor and Default Constructor - Perimeter of a 
Rectangle 
• Create a Rectangle class with attributes length and width. 
• Implement a default constructor that initializes values to zero. 
• Implement a parameterized constructor to accept values. 
• Calculate and display the perimeter using calculatePerimeter(). */
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor initializing length to 5 and width to 8
    Rectangle() {
        length = 5;
        width = 8;
    }

    // Parameterized constructor to accept length and width
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Using default constructor
    Rectangle r1;
    cout << "Perimeter of rectangle (using default constructor): " << r1.calculatePerimeter() << endl;

    // Using parameterized constructor
    Rectangle r2(5, 3);
    cout << "Perimeter of rectangle (using parameterized constructor): " << r2.calculatePerimeter() << endl;

    return 0;
}
