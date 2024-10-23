#include<iostream>
#include <stdio.h>
#include "Math.cpp"
using namespace std;
int operationNum , x,y ;
float result=0;
int main(){
cout<<"\nWelcome to Our Calculator .... \n\n\n";
cout<<"------------------------------------------";
cout<<"Select your Operation.... \n";
cout<<"1- Addition\n2- Substraction\n3- Multiblication\n4- Division\n5- Absolute\n6- Power";
cout << "\n7- exponential \n8- factorial\n9- ln\n10- Square Root\n11-Root\nAC";
cin>>operationNum;

switch (operationNum)
{
case 1:    
    result = ;
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