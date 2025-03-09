/*10. Function Overloading in a Class - Finding Maximum Number 
• Define a MaxFinder class with overloaded functions: 
o findMax(int, int) for two integers. 
o findMax(double, double) for two floating-point numbers. 
o findMax(int, int, int) for three integers. 
• Display the maximum of given numbers. */
#include <iostream>
using namespace std;

class MaxFinder {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }

    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }

    int findMax(int a, int b, int c) {
        return (a > b && a > c) ? a : (b > c ? b : c);
    }
};

int main() {
    MaxFinder mf;
    cout << "Max of 5 and 10: " << mf.findMax(5, 10) << endl;
    cout << "Max of 3.5 and 7.2: " << mf.findMax(3.5, 7.2) << endl;
    cout << "Max of 4, 9, and 2: " << mf.findMax(4, 9, 2) << endl;
    return 0;
}