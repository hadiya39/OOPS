// Problem: Reverse a number

#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    // Ask user to input a number
    cout << "Enter a number: ";
    cin >> number;

    // Reverse the number
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    // Output the reversed number
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
