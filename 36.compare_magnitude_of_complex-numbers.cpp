/*Write a program that accepts two complex numbers (real and imaginary parts) and compares 
them. 
• Use if-else to determine which complex number has a higher magnitude. 
• Print "Equal" if they have the same magnitude.*/
#include <iostream>
#include <cmath>  // For sqrt and pow functions

using namespace std;

int main() {
    double r1, i1, r2, i2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;

   
    double magnitude1 = sqrt(r1 * r1 + i1 * i1); // magnitude=sqrt(real part^2 + imaginary part^2)

    double magnitude2 = sqrt(r2 * r2 + i2 * i2);

    if (magnitude1 > magnitude2) 
    {
        cout << "The first complex number has a higher magnitude." << endl;
    } else if (magnitude1 < magnitude2) 
    {
        cout << "The second complex number has a higher magnitude." << endl;
    } else 
    {
        cout << "Equal" << endl;  // Magnitudes are equal
    }

    return 0;
}
