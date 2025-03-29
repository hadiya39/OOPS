/*A class template in C++ is a blueprint for creating classes or functions to work with generic types.
 It allows a class or function to operate with any data type without being explicitly written for a specific type. 
 Templates enable code reuse and flexibility.

Here’s a C++ program to implement a stack using a class template that can store data of any basic type and perform
 push and pop operations:
*/
#include <iostream>
using namespace std;

// Class Template for Stack
template <typename T>
class Stack {
private:
    T* arr;           // Array to store stack elements
    int top;          // Index of the top element in the stack
    int size;     // Maximum size of the stack

public:
    // Constructor to initialize the stack
    Stack(int size) {
        size = size;
        arr = new T[size];
        top = -1;
    }

    // Destructor to free memory allocated for the stack
    ~Stack() {
        delete[] arr;
    }

    // Push function to add an element to the stack
    void push(T value) {
        if (top == size - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack" << endl;
    }

    // Pop function to remove an element from the stack
    T pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return T();  // Return default value of T
        }
        T value = arr[top--];
        return value;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to peek the top element of the stack
    T peek() {
        if (top == -1) {
            cout << "Stack is Empty!" << endl;
            return T();  // Return default value of T
        }
        return arr[top];
    }
};

int main() {
    // Create a stack for integers
    Stack<int> stack1(5);
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    cout << "Popped element: " << stack1.pop() << endl;
    
    // Create a stack for floating-point numbers
    Stack<float> stack2(5);
    stack2.push(10.5);
    stack2.push(20.5);
    cout << "Popped element: " << stack2.pop() << endl;

    return 0;
}

/*Explanation:

Stack Class Template: This class template can store elements of any data type (like int, float, char, etc.).

push() Method: Adds an element to the stack.

pop() Method: Removes and returns the top element of the stack.

peek() Method: Returns the top element without removing it.

isEmpty() Method: Checks if the stack is empty.

Constructor and Destructor: The constructor initializes the stack, while the destructor frees the allocated memory.


This program demonstrates using the stack with both int and float types. You can extend it to support other data types as needed.*/