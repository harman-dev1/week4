#include<iostream>
using namespace std;
void maximum(int,int);
void minimum(int,int);
void equal(int,int);
main() 
{
   int number1,number2,choice;
   while(1)
      {
          cout<<"Enter choice(1-3):";
          cin>>choice;
          cout<<"Enter number1:";
          cin>>number1;
          cout<<"Enter number2:";
          cin>>number2;
          if(choice==1)
            {
              maximum(number1,number2);
            } 
          if(choice==2)   
            {
              minimum(number1,number2);
            }
          if(choice==3)
            {         
              equal(number1,number2);
            }
       }
}
void minimum(int number1,int number2)
{
    if(number1>number2)
       {
           cout<<"Number2 is minimum"<<endl;
       }
    if(number1<number2)
       {
           cout<<"Number1 is minimum"<<endl;
       }
}
void maximum(int number1,int number2)
{
    if(number1>number2)
       {
           cout<<"Number1 is greater"<<endl;
       }
    if(number1<number2)
       {
           cout<<"Number2 is greater"<<endl;
       }
}
void equal(int number1,int number2)
{
    if(number1==number2)
       {
           cout<<"Number1 is equal to number2"<<endl;
       }
    if(number1!=number2)
       {
           cout<<"Number1 is not equal to number2"<<endl;
       }
}