#include <iostream>
#include <string>

using namespace std;

int main(){
 int a=4;
 cout<<sizeof(a)<<endl; //sizeOf Operator

char name='abssw'; 
cout<<sizeof(name)<<endl; //SizeOf Operator 


bool flag;
a==name? flag=true: flag= false;
 cout<<flag<<endl;//0 because Int is not equal to char

 cout<<(&a)<<endl; //Finds Memory address of Variable

//Unary Operators
int b=6;
 cout<<(b++)<<endl; //Post-Increment Operator
 cout<<(+b)<<endl; //Pre-Increment Operator
 cout<<(b--)<<endl; //Post-Decrement Operator
 cout<<(--b)<<endl; //Pre-Decrement Operator







    return 0;
}