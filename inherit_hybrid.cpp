//hybrid inheritance(multiple+multilevel)
#include<iostream>
using namespace std;
class A {
    public:
        void showA() {
            cout << "This is class A\n";
        }
    };
    
    class B : public A {
    public:
        void showB() {
            cout << "This is class B\n";
        }
    };
    
    class C {
    public:
        void showC() {
            cout << "This is class C\n";
        }
    };
    
    class D : public B, public C {  // Hybrid Inheritance
    public:
        void showD() {
            cout << "This is class D\n";
        }
    };
    
    int main() {
        D obj;
        obj.showA();  // From class A (via B)
        obj.showB();  // From class B
        obj.showC();  // From class C
        obj.showD();  // From class D
        return 0;
    }