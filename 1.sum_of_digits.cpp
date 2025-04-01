//calculate sum of digits of a number
#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    // Ask user to input a number
    cout << "Enter a number: ";
    cin >> number;

    // Process the number to calculate the sum of digits
    while (number != 0) {
        digit = number % 10;  // Get the last digit
        sum += digit;         // Add the digit to the sum
        number /= 10;         // Remove the last digit
    }

    // Output the result
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
