#include<iostream>
using namespace std;
void print(string name);
main()
{
  string name;
  while(1)
{
  cout<<"Enter name:";
  cin>>name;
  if(name=="Irzam")
  {
    print(name);
  }
}
}
void print(string name)
 { 
   cout<<"Name:"<<name<<endl;
 }