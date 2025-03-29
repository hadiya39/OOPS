//single inheritance
#include<iostream>
using namespace std;

class human{
    protected:
    string name;
    int age;
     
    public:
    human(string name,int age){
        this->name=name;
        this->age=age;
    }
    void work(){
        cout<<"i am working"<<endl;
    }
 
};

 class student: public human{

int roll_no, fees;
public:
student(string name,int age, int roll_no,int fees):human(name,age)
{

 this->roll_no=roll_no;
 this->fees=fees;
}
void display(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
}

 };

int main()
{
 student A1("rohit",26,39,99);
 A1.work(); 
A1.display();
}