/*5. Class with Multiple Objects - Volume Calculation of Cubes 
• Define a Cube class with an attribute side. 
• Implement a function calculateVolume() using the formula:  
Volume=side3 
• Create multiple objects with different side values and display their volumes.*/
#include <iostream>
using namespace std;

class Cube {
public:
    double side;

    // Constructor to initialize side
    Cube(double s) {
        side = s;
    }

    double calculateVolume() {
        return side * side * side;  // Volume = side^3
    }
};

int main() {
    Cube cube1(3);  
    Cube cube2(4); 
    Cube cube3(5);  
    cout << "Volume of cube1: " << cube1.calculateVolume() << endl;
    cout << "Volume of cube2: " << cube2.calculateVolume() << endl;
    cout << "Volume of cube3: " << cube3.calculateVolume() << endl;

    return 0;
}
