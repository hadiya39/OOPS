//grading system using if else statements
//write a program that takes a students score ot of 1oo as input and displays  the grade based on criteria:
// A:90 TO 100
//B: 80 TO 89
// C: 70 TO 79
//D:60 TO 69
//F: BELOW 60
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    if (score >= 90 && score <= 100)
        cout << "Grade: A\n";
    else if (score >= 80)
        cout << "Grade: B\n";
    else if (score >= 70)
        cout << "Grade: C\n";
    else if (score >= 60)
        cout << "Grade: D\n";
    else if (score < 60)
        cout << "Grade: F\n";
    else
        cout << "Invalid score.\n";

    return 0;
}