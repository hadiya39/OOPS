/*Assignment 7: Conversion Between Two Classes (Celsius & Fahrenheit) 
Define two classes Celsius and Fahrenheit and implement conversion functions to convert 
temperature between them using overloaded type conversion operators.*/
#include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
public:
    float temp;

    Celsius(float t = 0) { temp = t; }

    // Convert Celsius to Fahrenheit
    operator Fahrenheit();

    void display() { cout << "Temperature: " << temp << "°C" << endl; }
};

class Fahrenheit {
public:
    float temp;

    Fahrenheit(float t = 0) { temp = t; }

    // Convert Fahrenheit to Celsius
    operator Celsius() { return Celsius((temp - 32) * 5 / 9); }

    void display() { cout << "Temperature: " << temp << "°F" << endl; }
};

// Define conversion outside class
Celsius::operator Fahrenheit() { return Fahrenheit((temp * 9 / 5) + 32); }

int main() {
    Celsius c(25);
    Fahrenheit f = c; // Celsius to Fahrenheit
    f.display();

    Celsius c2 = f; // Fahrenheit to Celsius
    c2.display();

    return 0;
}
