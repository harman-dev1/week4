#include<iostream>
using namespace std;
void sum(int a,int b);
void mul(int a,int b);
void sub(int a,int b);
void division(int a,int b);
main()
{
 int a,b;
 char op;
 while(1){
 cout<<"Enter number1:";
 cin>>a;
 cout<<"Enter number2:";
 cin>>b;
 cout<<"Enter operator(+-*/)";
 cin>>op;
 if(op=='+')
  {
    sum(a,b);
  }
 if (op=='*')
  {
    mul(a,b);
  }
 if (op=='-')
  {
    sub(a,b);
  }
 if(op=='/')
  {
    division(a,b);
  }
}
}
 void sum(int a,int b)
{
  cout<<"sum of two numbers:"<<a+b<<endl;
}
 void mul(int a,int b)
{
  cout<<"Multiplication of two numbers:"<<a*b<<endl;
} 
 void sub(int a, int b)
{
  cout<<"Subtraction of two numbers:"<<a-b<<endl;
} 
 void division(int a,int b)
{
  cout<<"division of two numbers:"<<a/b<<endl;
}