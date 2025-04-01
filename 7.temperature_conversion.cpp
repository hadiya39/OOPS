//give user option to convert temperature to celcius or fehrenheit
#include <iostream>
using namespace std;

int main() {
    float temperature, convertedTemp;
    int choice;

    // Ask the user for the temperature
    cout << "Enter the temperature: ";
    cin >> temperature;

    // Ask the user if they want to convert the temperature to Celsius or Fahrenheit
    cout << "Choose the conversion type:\n";
    cout << "1. Convert to Celsius\n";
    cout << "2. Convert to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Perform the conversion based on the user's choice
    if (choice == 1) {
        // Convert to Celsius (Fahrenheit to Celsius formula: (F - 32) * 5/9)
        convertedTemp = (temperature - 32) * 5 / 9;
        cout << "The temperature in Celsius is: " << convertedTemp << " C" << endl;
    }
    else if (choice == 2) {
        // Convert to Fahrenheit (Celsius to Fahrenheit formula: (C * 9/5) + 32)
        convertedTemp = (temperature * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is: " << convertedTemp << " F" << endl;
    }
    else {
        // If the user provides an invalid option
        cout << "Invalid choice! Please enter either 1 or 2." << endl;
    }

    return 0;
}


