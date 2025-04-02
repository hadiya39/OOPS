#include <iostream>
#include <cmath>
using namespace std;

/* Program for finding roots of quadratic equation. Coefficients entered by user. All cases included. */

int main() {
    float a, b, c, r1, r2, d;
    float realPart, imaginaryPart;

    cout << "Enter the values of a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "You have not entered a quadratic equation, please check again.\n";
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "The roots of the given quadratic equation are real and distinct: r1 = " << r1 << " and r2 = " << r2 << endl;
    } else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        cout << "The given quadratic equation has two real and equal roots: r1 = r2 = " << r1 << endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);
        cout << "The roots of the given quadratic equation are imaginary: r1 = " << realPart << " + " << imaginaryPart << "i and r2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}