//single inheritance
#include<iostream>
using namespace std;

class human{
    protected:
    string name;
    int age;
     
    public:
    void work(){
        cout<<"i am working";
    }
    human()// default constructor
{
    cout<<"hello human"<<endl; //just to check which constructor is called first
}
};

 class student: public human{

int roll_no, fees;
public:
student(string name,int age, int roll_no,int fees)//constructor
{
 this->  name=name;
 this->age=age;
 this->roll_no=roll_no;
 this->fees=fees;
}
/*student()// default constructor
{
    cout<<"hello student"<<endl; //just to check which constructor is alled first
}*/
 };

int main()
{
 student A1("rohit",26,39,99);
 A1.work(); // A1 is object of student class but work is function of the human class but we inheritsd it so we can access it usig the object of the student
}
//parent class constructor is called first,destructor is called reverse