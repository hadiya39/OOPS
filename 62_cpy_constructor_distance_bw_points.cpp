/*8. Copy Constructor Implementation - Distance between Two Points 
• Create a Point class with attributes x and y. 
• Implement a copy constructor to initialize an object from another object. 
• Implement a function calculateDistance(Point p2) using the formula: distance = root of {(x2-x1)^2 +(y2-y1)^2 */
#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    double x, y;

    // Constructor
    Point(double x1, double y1) {
        x = x1;
        y = y1;
    }

    // Copy Constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    // Function to calculate distance
    double calculateDistance(Point p2) {
        return sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
    }
};

int main() {
    Point p1(2.0, 3.0); // Original object
    Point p2 = p1; // Using copy constructor

    cout << "Distance: " << p1.calculateDistance(Point(5.0, 7.0)) << endl;
    return 0;
}
