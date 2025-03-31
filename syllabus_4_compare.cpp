/*design a generic function for finding the largest of three numbers. */
#include <iostream>
using namespace std;

// Generic function to find the largest of three numbers
template <typename T>
T findLargest(T a, T b, T c) {
    T largest = a;

    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    return largest;
}

int main() {
    // Test with integers
    int int1 = 5, int2 = 10, int3 = 8;
    cout << "Largest integer: " << findLargest(int1, int2, int3) << endl;

    // Test with floats
    float float1 = 5.5f, float2 = 10.3f, float3 = 8.9f;
    cout << "Largest float: " << findLargest(float1, float2, float3) << endl;

    // Test with doubles
    double double1 = 12.75, double2 = 10.5, double3 = 11.2;
    cout << "Largest double: " << findLargest(double1, double2, double3) << endl;

    return 0;
}
