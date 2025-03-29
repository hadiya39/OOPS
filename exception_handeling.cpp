#include<iostream>
using namespace std;

class customer{
    string name;
    int balance, acc_num;


    public:
     customer(string name,int balance,int acc_num){
        this->name=name;
        this->balance=balance;
        this->acc_num=acc_num;
     }
     void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<" rs is successfully credited\n";
            
        }
        else{
            throw "amount should be greater than zero";
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<" rs debited successfully";
    
        }
        else if(amount<=0){
            throw "amount should be greater than zero";
    
        }
        else{
            throw " your balance is low";
        }
    }
};


int main(){
    
    customer c1("rohit",5000,10);
try{ 
    c1.deposit(100);
    c1.withdraw(6000);
    c1.deposit(50);//this will not work bcz exception occured above
}
catch(const char *e){
    cout<<"exception occured:"<<e<<endl;
}
   
}