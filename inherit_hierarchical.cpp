//hierarchical inheritance
#include<iostream>
using namespace std;
class Parent {
    public:
        void show() {
            cout << "This is the Parent class\n";
        }
    };
    
    class Child1 : public Parent {
    public:
        void display1() {
            cout << "This is Child1 class\n";
        }
    };
    
    class Child2 : public Parent {
    public:
        void display2() {
            cout << "This is Child2 class\n";
        }
    };
    
    int main() {
        Child1 obj1;
        Child2 obj2;
    
        obj1.show();
        obj1.display1();
    
        obj2.show();
        obj2.display2();
    
        return 0;
    }