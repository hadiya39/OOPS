// Problem: Find out how many days and weeks have passed between 01/01/92 and 31/05/92
// Also, find out how many days could not get evened out into weeks.

#include <iostream>
using namespace std;

int main() {
    // Define the number of days in each month for the year 1992
    int daysInMonth[] = {31, 29, 31, 30, 31};  // For January to May 1992 (Leap year)
    int totalDays = 0;

    // Calculate the total number of days from 01/01/92 to 31/05/92
    for (int i = 0; i < 5; i++) {
        totalDays += daysInMonth[i];
    }

    // Calculate how many complete weeks are there
    int weeks = totalDays / 7;

    // Calculate how many days are left after even division by weeks
    int leftoverDays = totalDays % 7;

    // Output the results
    cout << "Total days between 01/01/92 and 31/05/92: " << totalDays << endl;
    cout << "Total weeks: " << weeks << endl;
    cout << "Remaining days: " << leftoverDays << endl;

    return 0;
}
