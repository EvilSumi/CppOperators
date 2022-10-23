#include <iostream>
#include <string>

using namespace std;

int main(){


int num1=6; //your input goes here
int num2=3; //your input goes here

//AO
cout<< num1+num2<<endl; //addition
cout<< num1-num2<<endl;//subtration
cout<< num1*num2<<endl;//multiplication
cout<< num1/num2<<endl;//division
cout<< num1%num2<<endl; //Modulus


//RO
cout<< (num1==num2)<<endl; //Equals to
cout<< (num1!=num2)<<endl; //not equals to
cout<< (num1>=num2)<<endl; //greater than/less than equals to


//Assignment Operators
num1+=2; //your input goes here
cout<<num1<<endl; //Adds number


num1-=2; //your input goes here
cout<<num1<<endl; //subs number


num1/=2; //your input goes here
cout<<num1<<endl; //Divides number

num1%=2; //your input goes here
cout<<num1<<endl; //Modulus number

//Bitwise Operators
int num3=5; //your input goes here
int num4=8; //your input goes here

cout<<(num3<<1)<<endl; //Multiplies by 2^num3
cout<<(num3>>1)<<endl; //Divides by 2^num3

cout<<(num3&num4)<< endl;//AND gate
cout<<(num3|num4)<< endl;//OR gate
cout<<(num3^num4)<< endl;//EXCLUSIVE OR gate




//Misc Operators
int a=4;
 cout<<sizeof(a)<<endl; //sizeOf Operator

char name='abssw'; 
cout<<sizeof(name)<<endl; //SizeOf Operator 


bool flag;
a==name? flag=true: flag= false;
 cout<<flag<<endl;//0 because Int is not equal to char

 cout<<(&a)<<endl; //Finds Memory address of Variable


int b=6;//Unary Operators
 cout<<(b++)<<endl; //Post-Increment Operator
 cout<<(+b)<<endl; //Pre-Increment Operator
 cout<<(b--)<<endl; //Post-Decrement Operator
 cout<<(--b)<<endl; //Pre-Decrement Operator









return 0;
}


