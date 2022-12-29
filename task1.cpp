#include <iostream>
using namespace std;
 
void add(int number1, int number2);
void product(int num1 , int num2);
void subtraction(int num1, int num2);
void division(int num1, int num2);

main()
{ 
  int num1;
  int num2;
  char operation;
  
  while(true)
  {
    cout<<"Enter Number: ";
    cin>> num1;
 
    cout<< "Enter Number: ";
    cin>> num2;
  
    cout<<"Enter the operator(+,-,*,/): ";
    cin>> operation;

    if(operation=='+')
    {
      add(num1,num2);
    }

    if(operation=='-')
    {
      subtraction(num1,num2);
    }

    if(operation=='*')
    {
      product(num1,num2);
    }

    if(operation=='/')
    {
      division(num1,num2);
    }

  }

}

void add(int num1,int num2)
{
 
  int sum;
  sum=num1+num2;
  cout<< "Sum: "<< sum<< endl;
}

void product(int num1, int num2)
{
 
  int product;
  product= num1*num2;
  cout<<"Prduct: "<<product<<endl;
}

void subtraction(int num1, int num2)
{
  int subtraction;
  subtraction=num1-num2;
  cout<<"Subtraction: "<< subtraction<<endl;
}

void division(int num1, int num2)
{
  int division;
  division=num1/num2;
  cout<<"Division: "<< division << endl;
}