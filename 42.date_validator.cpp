#include <iostream>
using namespace std;

/* Date Validator and Day Counter
Write a program to validate a date entered in DD-MM-YYYY format.
Use if-else to check for validity of the day, month, and year, including leap years.
Add logic to calculate the day of the week for the given date using a switch-case statement.
*/

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) return false;

    if (month == 2) {
        if (isLeapYear(year)) {
            return (day >= 1 && day <= 29);
        } else {
            return (day >= 1 && day <= 28);
        }
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return (day >= 1 && day <= 30);
    }

    return (day >= 1 && day <= 31);
}

int calculateDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    // Zeller's Congruence Algorithm for calculating the day of the week
    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    return dayOfWeek;
}

void printDayOfWeek(int dayOfWeek) {
    switch (dayOfWeek) {
        case 0:
            cout << "Saturday" << endl;
            break;
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        default:
            cout << "Error in calculating day of the week." << endl;
            break;
    }
}

int main() {
    int day, month, year;

    cout << "Enter date (DD-MM-YYYY): ";
    cin >> day >> month >> year;

    if (isValidDate(day, month, year)) {
        cout << "The date is valid." << endl;

        int dayOfWeek = calculateDayOfWeek(day, month, year);
        cout << "The day of the week is: ";
        printDayOfWeek(dayOfWeek);
    } else {
        cout << "The date is invalid." << endl;
    }

    return 0;
}
