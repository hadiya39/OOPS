// single inheritance
#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is the Parent class\n";
    }
};

class Child : public Parent {  // Single Inheritance
public:
    void display() {
        cout << "This is the Child class\n";
    }
};

int main() {
    Child obj;
    obj.show();   // Inherited function
    obj.display();
    return 0;
}