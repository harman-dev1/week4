#include<iostream>
using namespace std;
void iseligible(int);
main()
{
  int age;
  cout<<"Enter age of person:";
  cin>>age; 
  iseligible(age);
}
void iseligible(int age)
{
  if(age>=18)
  {
     cout<<"you are eligible:";
  }
  if(age<18)
  {
     cout<<"You are not eligible:";
  }
}