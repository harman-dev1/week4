#include<iostream>
using namespace std;
void checkresult(int marks);

main(){
  int marks;
  cout<<"Enter marks:";
  cin >> marks;
  checkresult(marks);
  
}
void checkresult(int marks)
{
  if(marks>=50)
   {
    cout<<"Pass";
   }
   if(marks<50)
   {
   cout<<"Fail";
   }
}