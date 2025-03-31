/*create a class by name date with the member data as day, month and year. 
Perform the following: 
● Overload all relational operators <,<=,>,>=,==,= 
● Overload ++ operator to increment a date by one day 
● Overload + to add given number of days to find the next date 
● Provide the necessary function to use the statement like days=dt; where days is an int variable and dt is an object of date class. 
The statement is intended to assign the number of days elapsed in the current year of the date to the variable days. Note that 
this is a case of conversion from derived type to basic type. */
#include <iostream>
using namespace std;

class Date {
public:
    int day, month, year;

    // Constructor to initialize the date
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to get the number of days in a month
    int daysInMonth() {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            return 31;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        else if (month == 2) {
            // Leap year check
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                return 29;
            else
                return 28;
        }
        return 0;  // Invalid month
    }

    // Overload relational operators
    bool operator<(Date &dt) {
        if (year < dt.year) return true;
        if (year == dt.year && month < dt.month) return true;
        if (year == dt.year && month == dt.month && day < dt.day) return true;
        return false;
    }

    bool operator<=(Date &dt) {
        return (*this < dt) || (*this == dt);
    }

    bool operator>(Date &dt) {
        return !(*this <= dt);
    }

    bool operator>=(Date &dt) {
        return !(*this < dt);
    }

    bool operator==(Date &dt) {
        return (day == dt.day) && (month == dt.month) && (year == dt.year);
    }

    // Overload assignment operator
    void operator=(Date &dt) {
        day = dt.day;
        month = dt.month;
        year = dt.year;
    }

    // Overload ++ operator to increment date by 1 day
    void operator++() {
        day++;
        if (day > daysInMonth()) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Overload + operator to add a given number of days to the date
    Date operator+(int n) {
        Date newDate = *this;
        newDate.day += n;  // Directly add days
        while (newDate.day > newDate.daysInMonth()) {  // Handle month overflow
            newDate.day -= newDate.daysInMonth();
            newDate.month++;
            if (newDate.month > 12) {
                newDate.month = 1;
                newDate.year++;
            }
        }
        return newDate;
    }

    // Type conversion operator to convert date to number of days in the year
    operator int() {
        int totalDays = 0;
        for (int m = 1; m < month; m++) {
            Date temp(day, m, year);
            totalDays += temp.daysInMonth();
        }
        totalDays += day;
        return totalDays;
    }

    // Function to display the date
    void display() {
        cout << day << "-" << month << "-" << year << endl;
    }
};

int main() {
    // Create a Date object
    Date dt(25, 3, 2025);

    // Display the initial date
    cout << "Initial Date: ";
    dt.display();

    // Increment the date by one day
    ++dt;
    cout << "After incrementing by one day: ";
    dt.display();

    // Add 10 days to the current date
    Date newDate = dt + 10;
    cout << "After adding 10 days: ";
    newDate.display();

    // Convert date to number of days in the current year
    int daysElapsed = dt;
    cout << "Days elapsed in the year: " << daysElapsed << endl;

    // Compare two dates using relational operators
    Date dt2(5, 4, 2025);
    cout << "Is dt < dt2? " << (dt < dt2 ? "Yes" : "No") << endl;
    cout << "Is dt == dt2? " << (dt == dt2 ? "Yes" : "No") << endl;

    return 0;
}
