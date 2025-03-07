/*6. Overloading Constructor in a Class - Area of Circle and Rectangle 
• Define a Shape class with a default constructor and an overloaded constructor. 
• If radius is given, calculate the area of a circle. 
• If length and breadth are given, calculate the area of a rectangle. */
#include <iostream>
using namespace std;

class Shape {
public:
    Shape(double rad) {
        double area = 3.14 * rad* rad; 
        cout << "Area of the Circle: " << area << endl;
    }

    // Overloaded constructor for Rectangle (length and breadth given)
    Shape(double l, double b) {
        double area = l* b;  
        cout << "Area of the Rectangle: " << area << endl;
    }
};

int main() {

    Shape circle(5);
    Shape rectangle(4, 6);

    return 0;
}
