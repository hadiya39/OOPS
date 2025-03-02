//input users age and determine if he is a child(age<12),teenager(age between 12 and 18),adult(age bw 18 and 60),or senior(age>60) using if else
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age of person\n";
    cin>>age;
    if(age<=0)
    {
        cout<<"invalid age!";
        return 0;
    }
    else 
    {
      if(age<=12)
      {
        cout<<"person is a child\n";
      }
      else if(age>12 && age<=18)
      {
        cout<<"person is a teenager\n";
      }
      else if(age>18 && age<=60)
      {
        cout<<"person is adult\n";

      }
      else if(age>60)
      {
        cout<<"person is senior\n";
      }
    

    }
   return 0;
}