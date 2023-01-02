#include<iostream>
using namespace std;

void even(int);
void odd(int);
main()
{
  int number;
  cout<<"Enter number:";
  cin>>number;
  if(number%2==0)
   {
      void even(int number);
   }
  if(number%2!=0)
  {
      void odd(int number);
  }
  }
     void even(int number)
{
   cout<<"Number is even:"<<number;
}
    void odd(int number)
{
   cout<<"Number is odd:"<<number;
}
