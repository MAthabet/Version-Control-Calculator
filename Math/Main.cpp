#include<iostream>
#include "Math.cpp"
using namespace std;
int operationNum , x,y ;
int result;
void takeTwo();
void takeOne();
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
    takeTwo();
    result = x+y;
    break;
case 2:
    takeTwo();
    result=x-y;
    break;
case 3:
    takeTwo();
    result = x*y;
    break;
case 4:
   takeTwo();
   result = x/y;
    break;
case 5:
    takeOne();
    result = abs(x);
    break;
case 6:
    takeTwo();
    result = pow(x,y);
    break;
case 7:
    result=remind(x,y);
    break;
case 8:
    takeOne();
    result=factorial(x);
    break;
case 9:
    takeOne();
    result=ln(x);
    break;
case 10:
    takeOne();
    result=root(x,2);
    break;
case 11:
    takeTwo();
    result=root(x,y);
    break;
default:
    break;
}
cout<<"Result = "<<result;
}

void takeTwo(){
    cout<<"Enter first Number";
    cin>>x;
    cout<<"Enter Second Number";
    cin>>y;
}

void takeOne(){
    cout<<"Enter A Number";
    cin>>x;
}
