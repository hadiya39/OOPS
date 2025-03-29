#include <iostream>
using namespace std;

class Test {
public:
    Test(int x) {
        if (x < 0)
            throw "Negative value not allowed!"; // Exception in constructor
        cout << "Constructor executed successfully." << endl;
    }
};

int main() {
    try {
        Test obj(-5); // Will throw an exception
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}