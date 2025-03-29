#include <iostream>
using namespace std;
class Test {
    public:
        ~Test() {
            try {
                throw "Destructor error!";
            }
            catch (...) {
                cout << "Exception handled inside destructor." << endl;
            }
        }
    };
    
    int main() {
        Test obj;
        return 0;
    }