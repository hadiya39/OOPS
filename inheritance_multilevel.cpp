// understanding multilevel inheritance
#include<iostream>
using namespace std;
class person{
    protected:
    string name;

    public:
     void introduce(){
        cout<<"hello my name is:"<<name<<endl;
     }
    
};

class employee:public person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"my monthly salary is:"<<salary<<endl;
    }
};

class manager: public employee{
    public:
    string department;

    manager(string name, int salary, string department){
        this-> name=name;
        this->salary=salary;
        this->department=department;
    }

void work(){
    cout<<"i am leading the deptt"<<endl;
}

};
int main(){
 manager a1("Hadiya",50000,"cse");
 a1.work();
 a1.monthly_salary();
 a1.introduce();
}