/*Assignment 2: Overloading the Unary - Operator 
Create a class Vector with two integer attributes (x, y). Overload the unary - operator to negate 
both coordinates and print the result. */
#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    // Constructor 
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    void display() {
        cout << "Vector: (" << x << ", " << y << ")\n";
    }

    // Overload unary - operator to negate both x and y
    Vector operator-() {
        return Vector(-x, -y);  // Negating both coordinates
    }
};

int main() {
    // Create a Vector object
    Vector v(3, 4);

    // Display the original vector
    cout << "Original ";
    v.display();

    // Negate the vector using the overloaded unary - operator
    Vector negatedVector = -v;

    // Display the negated vector
    cout << "Negated ";
    negatedVector.display();

    return 0;
}
