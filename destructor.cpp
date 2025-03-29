//program to understand the concept of destructor
#include<iostream>
using namespace std;
class customer
{
    string name;
    int *data;
    public:
    customer()
    {
        name="rohit";
        data=new int; //allocate memory dynamically
        *data=10;
        cout<<"constructor is called"<<endl;
    }
    //destructor is called only once
    ~customer(){
        delete data; //releases the new int memory that we allocated dynamically
        cout<<"destructor is called"<<endl;
    }
};
int main(){
    customer A1;

}