//take number b/w 1 and 7 from the user and use switch statement to print corresponding days of week
#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter any number between 1 and 7:\n";
    cin>>day;
    switch(day)
    {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"Something went wrong, please check everything";


    }
return 0;
}