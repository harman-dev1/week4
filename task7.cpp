#include<iostream>
using namespace std;
void printName(string);
main()
{
  string userName;
  while(true){
  cout<<"Enter your name:";
  cin>>userName;
  printName(userName);}
}
  
 void printName(string userName)
{
   cout<<userName<<endl;
}