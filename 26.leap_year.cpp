/*Write a program that checks if a given year is a leap year. 
• Use nested if-else for the logic: 
o A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400. 
• Add logic to print the next 5 leap years if the input year is not a leap year. */
#include <iostream>
using namespace std;

int main() 
{
    int year;
    
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) 
    {
        if (year % 100 == 0)
         {
          if (year % 400 == 0) 
            {
                cout << year << " is a leap year." << endl;
            } 
             else
             {
                cout << year << " is not a leap year." << endl;
                // Print next 5 leap years
                int count = 0;
                year++; // Move to next year
                while (count < 5)
                   {
                      if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                       {
                         cout << "Next leap year: " << year << endl;
                         count++;
                       }
                      year++;
                   }
            }
         } 
         else
         {
            cout << year << " is a leap year." << endl;
         }
     } else
     {
        cout << year << " is not a leap year." << endl;
        // Print next 5 leap years
        int count = 0;
        year++; // Move to next year
        while (count < 5)
         {
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
             {
                cout << "Next leap year: " << year << endl;
                count++;
             }
            year++;
         }
    }

    return 0;
}
