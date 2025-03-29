//multiple inheritance
#include<iostream>
using namespace std;
class Parent1 {
    public:
        void show1() {
            cout << "This is Parent1\n";
        }
    };
    
    class Parent2 {
    public:
        void show2() {
            cout << "This is Parent2\n";
        }
    };
    
    class Child : public Parent1, public Parent2 {  // Multiple Inheritance
    public:
        void display() {
            cout << "This is the Child class\n";
        }
    };
    
    int main() {
        Child obj;
        obj.show1();
        obj.show2();
        obj.display();
        return 0;
    }