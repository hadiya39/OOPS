// Problem: Write a program that takes an integer from the user representing the month (1 for January, 2 for February, etc.)
// and uses a switch statement to print the number of days in that month. Consider leap year (assume it is a leap year if February
// is chosen) and handle it with an additional check.

#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter the month number (1 for January, 2 for February, etc.): ";
    cin >> month;

    switch (month) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            cout << "31 days" << endl;
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "29 days (Leap Year)" << endl;  // Assuming leap year for February
            break;
        default:
            cout << "Invalid month number" << endl;
            break;
    }

    return 0;
}
