#include<iostream>
using namespace std;
void amount(string ,float);
main()
{
   string day;
   float purchaseAmount;
  while(true)
   {
       cout<<"Enter day:";
       cin>>day;
       cout<<"Enter purcahse amount:";
       cin>>purchaseAmount;
       amount(day ,purchaseAmount);
   }
}

void amount(string day ,float purchaseAmount)
 {
   if(day=="sunday")
      {
         float discount;
         discount=purchaseAmount-(purchaseAmount/100)*10;
         cout<<"Payable amount:"<<discount<<endl;
      }
   if(day!="sunday")
      {
         cout<<"Payable amount:"<<purchaseAmount<<endl;
      }
 }