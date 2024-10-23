#include<iostream>
#include <stdio.h>
#include "Math.cpp"
using namespace std;
int operationNum , x,y ;
float result=0;
int main(){

cout<<"\nWelcome to Our Calculator .... \n\n\n";

cout<<"Please your Operation Symbol.... \n";
cout<<"1 To Addition\n2 To Substract\n3 To Power\n4 Factorial\n5 Exponintial\n6 Absluate\n7 Reminder\n8 Log\n9 Ln\n";
cin>>operationNum;
cout<<"Please First Number.... \n";
cin>>x;
cout<<"Please Secound Number.... \n";
cin>>y;
switch (operationNum)
{
case 1:    
    result=add(x,y);
    cout<<"Result = "<<result;
    break;
case 2:
    result=sub(x,y);
    cout<<"Result = "<<result;
    break;
case 3:
    result=pow(x,y);
    cout<<"Result = "<<result;
    break;
case 4:
   
    break;
case 5:

    break;
case 6:

    break;
case 7:
    result=remind(x,y);
    cout<<"Result = "<<result;
    break;
case 8:

    break;
case 9:

    break;
default:
    break;
}


}