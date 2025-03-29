//function template
/**/
#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;  // Return the larger of the two values
}

int main() {
    // Calling the function with different data types

    int x = 10, y = 20;
    cout << "Maximum of " << x << " and " << y << " is " << maximum(x, y) << endl;

    float a = 3.5, b = 2.5;
    cout << "Maximum of " << a << " and " << b << " is " << maximum(a, b) << endl;

    double p = 7.5, q = 9.5;
    cout << "Maximum of " << p << " and " << q << " is " << maximum(p, q) << endl;

    return 0;
}