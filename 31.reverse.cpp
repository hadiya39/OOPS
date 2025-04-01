// Problem: Write a program that repeatedly asks the user to input a positive integer and then reverses the digits 
//of the number. For example, input 1234 should output 4321. Stop the program when the user enters 0.

#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> num;

        if (num != 0) {
            int reversed = 0;
            while (num > 0) {
                reversed = reversed * 10 + num % 10;
                num /= 10;
            }
            cout << "Reversed number: " << reversed << endl;
        }

    } while (num != 0);

    cout << "Program stopped." << endl;

    return 0;
}
