/*c++ allows us to throw multiple exceptions by using multiple catch blocks for different type of exceptions*/
#include <iostream>
using namespace std;

void test(int num) {
    try {
        if (num == 0)
            throw "Division by zero error";  // String exception
        else if (num < 0)
            throw num;  // Integer exception
        else
            throw 3.14;  // Double exception
    } 
    catch (const char* msg) {  
        cout << "Caught string exception: " << msg << endl;
    }
    catch (int e) {  
        cout << "Caught integer exception: " << e << endl;
    }
    catch (double e) {  
        cout << "Caught double exception: " << e << endl;
    }
}

int main() {
    test(0);   // String exception
    test(-5);  // Integer exception
    test(10);  // Double exception
    return 0;
}