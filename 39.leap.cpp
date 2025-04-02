#include <iostream>
using namespace std;

/* Advanced Leap Year Checker
Write a program that checks if a given year is a leap year.
Use nested if-else for the logic: A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400.
Add logic to print the next 5 leap years if the input year is not a leap year.
*/

int main() {
    int x;
    cout << "Enter the year: ";
    cin >> x;

    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) {
        cout << x << " is a leap year\n";
    } else {
        cout << x << " is not a leap year\n";

        int count = 0;
        int nextYear = x + 1;
        cout << "The next 5 leap years are: ";
        while (count < 5) {
            if (nextYear % 4 == 0 && nextYear % 100 != 0 || nextYear % 400 == 0) {
                cout << nextYear << " ";
                count++;
            }
            nextYear++;
        }
        cout << endl;
    }

    return 0;
}
