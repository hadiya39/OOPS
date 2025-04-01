/*Write a program that accepts a student’s marks in 5 subjects. 
• Use nested if-else to assign grades (A, B, C, D, F) based on the percentage. 
• If the student fails in more than one subject, print "Repeat Year" regardless of percentage. */
#include <iostream>
using namespace std;

int main() {
    double marks1, marks2, marks3, marks4, marks5;
    int failCount = 0;
    double totalMarks = 0;

    cout << "Enter the marks for 5 subjects: \n";
    cout << "Subject 1: ";
    cin >> marks1;
    cout << "Subject 2: ";
    cin >> marks2;
    cout << "Subject 3: ";
    cin >> marks3;
    cout << "Subject 4: ";
    cin >> marks4;
    cout << "Subject 5: ";
    cin >> marks5;

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    if (marks1 < 40)
     failCount++;
    if (marks2 < 40)
     failCount++;
    if (marks3 < 40)
     failCount++;
    if (marks4 < 40)
     failCount++;
    if (marks5 < 40) 
    failCount++;

    if (failCount > 1) {
        cout << "Repeat Year\n";
    } else {
        // Calculate the percentage
        double percentage = (totalMarks / 500) * 100;


        if (percentage >= 90) 
        {
            cout << "Grade: A\n";
        }
         else if (percentage >= 80 && percentage <90)
         {
            cout << "Grade: B\n";
        } 
        else if (percentage >= 60 && percentage <80) 
        {
            cout << "Grade: C\n";
        } 
        else if (percentage >= 40 && percentage <60) 
        {
            cout << "Grade: D\n";
        } 
        else
         {
            cout << "Grade: F\n";
        }
    }

    return 0;
}
