/*std::bad_alloc Class in C++
In C++, the std::bad_alloc class is part of the <new> header and is used to represent an error when memory allocation fails,
 typically when using new to allocate memory dynamically.

What is std::bad_alloc?
It is a standard exception class derived from std::exception.
It is thrown by the new operator when it fails to allocate memory.
It indicates a failure in dynamic memory allocation, often due to insufficient system memory.
Syntax:

#include <new> // Required for std::bad_alloc

throw std::bad_alloc();
When the new operator cannot allocate memory, it throws an instance of std::bad_alloc. This exception can be 
caught and handled using a try-catch block.

*/

#include <iostream>
#include <new>  // For std::bad_alloc
using namespace std;

int main() {
    try {
        // Trying to allocate a large amount of memory
        int* arr = new int[10000000];  // Likely to fail
    }
    catch (const bad_alloc&) {
        cout << "Memory allocation failed." << endl;  
    }

    return 0;
}