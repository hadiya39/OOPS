//class template.
/*a class template in c++ allows you to defie a class that can operate on any datatype . istead of writing 
different classes for different data type, a class template lets u to create a generic blueprint that can be used with any data type*/
#include <iostream>
using namespace std;

template <typename T>   // Template declaration
class Box {
    T value;
public:
    Box(T v) : value(v) {}  // Constructor
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> b1(10);      // Box for int
    Box<double> b2(5.5);  // Box for double

    b1.show();  // Output: Value: 10
    b2.show();  // Output: Value: 5.5

    return 0;
}