#include <iostream>
using namespace std;

main()
{
  int marks;
  cout<<"Enter your marks: ";
  cin>>marks;

  if (marks>50)
  {
    cout << "Pass!! "<<endl;
    
  }

  if (marks<50)
  {

    cout<<"Fail!!"<< endl;

  }

  if (marks==50)
  
  {
    cout<< "Try harder!!" <<endl;
   
  }
}