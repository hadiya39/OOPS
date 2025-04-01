// Problem: Swap two numbers without using any 3rd variable

#include <iostream>
using namespace std;

int main() {
    float a, b;

    // Ask user to input the numbers
    cout << "Enter the numbers to be swapped: ";
    cin >> a >> b;

    cout << "The numbers before swapping are " << a << " and " << b << endl;

    // Swapping logic without using a third variable
    a = a + b;  // Sum of a and b is stored in a
    b = a - b;  // Difference of the sum and b gives the original a
    a = a - b;  // Difference of the sum and the new b gives the original b

    // Output the swapped numbers
    cout << "The numbers after swapping are " << a << " and " << b << endl;

    return 0;
}
