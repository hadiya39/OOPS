//concept of static data member
//they are attributes of classes or class
#include<iostream>
using namespace std;
class customer 
{
    string name;
    int account_number,balance;
    static int total_customer;  //all objects will share it commonly

    public:
    customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;  //every time constructor is called by different objects, total customer is incremented commonly
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
  

};
int customer::total_customer=0; //initialize value of static data member
 int main(){
    customer A1("rohit",1,1000);
    customer A2("mohit",2,3000);
    customer A3("pohit",3,4000);
    A1.display();
    A2.display();
    A3.display();
    customer A4("abdul",4,5000);
    A4.display();
 }