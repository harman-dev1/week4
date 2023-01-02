#include<iostream>
using namespace std;
void add(int number1,int number2);
void multiply(int number1,int number2);
void divide(int number1,int number2);
void subtract(int number1,int number2);
main()
{
   char operator;
   int number1;
   int number2;
   cout<<"Enter  number1:";
   cin>>number1;
   cout<<"Enter numbe2:";
   cin>>number2;
  
  
   
   
   cout<<"enter operator:";
   cin>>operator;
} 
   if(operator=='+')
{
      add(number1,number2);  
}
void add(int number1,int number2)
{ 
   int sum =number1+number2;
   cout<<"Sum:"<<sum<<endl;
}
   if(operator=='*')
{
    multiply( number1, number2);
}
void multiply(int number1,int number2)
{
    
   int mul=number1*number2;
   cout<<"Multiplication:"<<mul<<endl;
}
if(operator=='/')
{
divide( number1, number2);
}
void divide(int number1,int number2)
{
    
   int div=number1/number2;
   cout<<"Division:"<<div<<endl;
}
if(operator=='-')
{
  subtract(number1,number2);
}
void subtract(int number1,int number2)
{
      
     int sub=number1-number2;
   cout<<"subtraction:"<<sub<<endl;
}
   

