#include <iostream>
using namespace std;
void isEven(int number);

main()
{ 
  int number;
  int remainder;
  
  while(true)
  {
    cout<<"Enter a number: ";
    cin>> number;
  
    remainder= number%2;
    isEven(remainder);
  }
}

void isEven(int remainder)
{
  if(remainder==0)
  {
    cout<<"The number is even!"<<endl;
  }
  
  if(remainder!=0)
  {
    cout<<"The number is odd! "<< endl;
  }
}  