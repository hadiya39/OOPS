/*Assignment 6: Overloading + and - for Custom Currency Class 
Write a class Currency with integer attributes rupees and paise. Overload + and - operators to 
perform addition and subtraction of two Currency objects. */
#include <iostream>
using namespace std;

class Currency {
public:
    int rupees, paise;

    // Constructor
    Currency(int r = 0, int p = 0) {
        rupees = r + p / 100;
        paise = p % 100;
    }

    // Overload + operator
    Currency operator+(const Currency &c) {
        return Currency(rupees + c.rupees, paise + c.paise);
    }

    // Overload - operator
    Currency operator-(const Currency &c) {
        int total1 = rupees * 100 + paise;
        int total2 = c.rupees * 100 + c.paise;
        int diff = total1 - total2;
        return Currency(diff / 100, diff % 100);
    }

    void display() {
        cout << "Currency: " << rupees << " Rupees and " << paise << " Paise" << endl;
    }
};

int main() {
    Currency c1(5, 150), c2(2, 75);

    Currency sum = c1 + c2;
    Currency diff = c1 - c2;

    sum.display();
    diff.display();

    return 0;
}
