#include<iostream>
using namespace std;
void add(int number1,int number2);
main()
{
  int number1,number2;
  cin>>number1>>number2;
  add(number1,number2);
  add(number1,number2);
}

void add(int number1,int number2)
{
  int sum=number1+number2;
  cout<<"Sum is :"<<sum<<endl;
}