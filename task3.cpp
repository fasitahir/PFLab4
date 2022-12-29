#include <iostream>
using namespace std;
void eligible(int age);

main()
{
  int age;
  
  while(true)
  {
    cout<<"What is your age: ";
    cin>> age;
  
    eligible(age);
  }
}

void eligible(int age)
{
  if(age>=18)
  {
    cout<<"You are eligible for vote. "<<endl;
  }

  if(age< 18)
  {
    cout<<"You are not eligible for vote. "<<endl;
  }
}