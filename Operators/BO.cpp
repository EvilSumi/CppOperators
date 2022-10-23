#include <iostream>
#include <string>

using namespace std;

int main(){
//Bitwise Operators
int num3=5; //your input goes here
int num4=8; //your input goes here

cout<<(num3<<1)<<endl; //Multiplies by 2^num3
cout<<(num3>>1)<<endl; //Divides by 2^num3

cout<<(num3&num4)<< endl;//AND gate
cout<<(num3|num4)<< endl;//OR gate
cout<<(num3^num4)<< endl;//EXCLUSIVE OR gate

return 0;
}