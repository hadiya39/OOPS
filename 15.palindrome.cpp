//to check if the number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
int n, a[100];
int i,j;
cout<<"enter the number of digits in number ";
cin>>n;
cout<<"Enter a number to be checked: ";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++); //for loop without body
 i--;
 j=0;
 while(j<i) // from left ot right is denoted by j , and from right to left is denoted by i
 {
    if(a[j]!=a[i])
    {
        printf("the number is not palindrome");
       return 1;
    }
    j++;
    i--;
 }
 
    printf("the number is a palindrome");
 
return 1;

}