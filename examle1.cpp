#include <iostream>
using namespace std;
 
void add();
void mul();

main(){

 add();
 add();
 mul();

}



void add()
{
 
 int num1;
 int num2;
 int sum;

 cout<<"Enter Number to add: ";
 cin>> num1;
 
 cout<< "Enter Number to add: ";
 cin>> num2;
 
 sum=num1+num2;
 cout<< "Sum: "<< sum<< endl;
}

void mul()
{
 
 int num1;
 int num2;
 int mul;
 
 cout<<"Enter number to multiplye: ";
 cin>> num1;

 cout<<"Enter number to multiplye: ";
 cin>> num2;

 mul= num1*num2;
 cout<<"Prduct: "<<mul<<endl;
}