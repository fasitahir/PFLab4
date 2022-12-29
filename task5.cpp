#include <iostream>
using namespace std;
void calculateBill(string day, int amount);

main()
{
  int totalamount;
  string day;

  while(true)
  {
    cout<<"Enter day: ";
    cin >> day;

    cout<<"Enter Total Amount:";
    cin >> totalamount;

    calculateBill(day , totalamount);
  }
}

void calculateBill(string day , int totalamount)
{

  if(day=="sunday")
  {
    cout<<"Payable amount after 10% disscount is: "<<totalamount-0.1*totalamount<<endl;
  }
  if(day=="monday")
  {
    cout<<"Payableamount is: " << totalamount-0.05*totalamount << endl;
  }

  if(day=="tuesday")
  {
    cout<<"Payableamount is: " << totalamount-0.05*totalamount << endl;
  }

  if(day=="wednesday")
  {
    cout<<"Payableamount is: " << totalamount-0.05*totalamount << endl;
  }

  if(day=="thursday")
  {
    cout<<"Payableamount is: " << totalamount-0.05*totalamount << endl;
  }

  if(day=="friday")
  {
    cout<<"Payableamount is: " << totalamount-0.05*totalamount << endl;
  }

  if(day=="saturday")
  {
    cout<<"Payableamount is: " << totalamount-0.05*totalamount << endl;
  }

}
    
    
  