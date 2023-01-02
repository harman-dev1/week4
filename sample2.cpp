#include<iostream>
using namespace std;
main()
{
         int purchaseAmount=10;
         float discount;
         discount=purchaseAmount-(purchaseAmount/100)*10;
         cout<<"Payable amount:"<<discount;
}