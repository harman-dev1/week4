#include<iostream>
using namespace std;
void displayDetailed(string name,int marks,char section,float aggregate);
main()
{ 
   string name;
   cout<<"Enter name:";
   cin>>name;
   int marks;
   cout<<"Enter your marks:";
   cin>>marks;
   char section;
   cout<<"Enter your section:";
   cin>>section;
   int aggregate;
   cout<<"Enter aggregate:";
   cin>>aggregate;
   displayDetailed(name,marks,section,aggregate);    //displaydetailed("harmain",50)
   }

void displayDetailed(string name,int marks,char section,float aggregate)        
{
   cout<<"Your name is:"<<name<<endl;
   cout<<"Your marks is:"<<marks<<endl;
   cout<<"Your section is:"<<section<<endl;
   cout<<"Your aggregate is:"<<aggregate<<endl;
}