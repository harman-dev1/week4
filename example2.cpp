#include<iostream>
using namespace std;
void displayMarks(int marks);
main()
{
  int marks;
  cout<<"Enter obtained Marks:";
  cin>>marks;
  cout<<"Your marks are :"<<marks;
  displayMarks(marks);
}
void displayMarks(int marks)
{ 
  cout<<"Your marks are:"<<marks;
}