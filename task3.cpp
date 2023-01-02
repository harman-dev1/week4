#include<iostream>
using namespace std;
void fail(int marks);
void pass(int marks);
main(){
  int marks;
  cout<<"Enter marks:";
  cin >> marks;
  if(marks>=50)
  {
     pass(marks);  
  }
  if(marks<50)
  {   
    fail(marks);
  }
}
void pass(int marks)
{
  cout<<"Pass";
}
void fail(int marks)
{
  cout<<"Fail";
}