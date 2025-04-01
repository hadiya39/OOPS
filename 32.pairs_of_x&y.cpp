// Problem: Write a program to find and print all pairs (x, y) such that:
// x^2 + y^2 = n where n is an input number, and both x and y range from 0 to sqrt(n).
// Use break and continue statements to optimize the solution.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    for (int x = 0; x * x <= n; x++) {
        for (int y = 0; y * y <= n; y++) {
            if (x * x + y * y == n) {
                cout << "(" << x << ", " << y << ")" << endl;
                continue;
            }
        }
    }

    return 0;
}
