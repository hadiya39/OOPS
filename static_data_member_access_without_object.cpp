//concept of static data member access without objecct
#include<iostream>
using namespace std;
class customer 
{
    string name;
    int account_number,balance;
     

    public:
    static int total_customer; //write it in public to access it without object
    customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;  //every time constructor is called by different objects, total customer is incremented commonly
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
   void display_total(){
    cout<<total_customer<<endl;
   }

};
int customer::total_customer=0; //initialize value of static data member
 int main(){
    customer A1("rohit",1,1000);
    customer A2("mohit",2,3000);
    customer A3("pohit",3,4000);
   
    customer::total_customer=5; 
    A1.display_total();
 }