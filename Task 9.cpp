// write a program that reads five numbers (each between 1 and 30)for each number reads your program should print a line that containing numberof adjacent asterisk 





#include<iostream>
using namespace std;

int main()
{
 int a,b,c,d,e;
 cout<<"Enter five integers(between 1 and 30)";
 cin>>a>>b>>c>>d>>e;

 for(int i=1;i<=a;i++)
{
 cout<<"*";
}
 cout<<endl;

 for(int i=1;i<=b;i++)
{
 cout<<"*";
}
 cout<<endl;

 for(int i=1;i<=c;i++)
 {
  cout<<"*";
}
 cout<<endl;

 for(int i=1;i<=d;i++)
{
 cout<<"*";
}
 cout<<endl;

 for(int i=1;i<=e;i++)
{
 cout<<"*";
}
 cout<<endl;

 //for pause
 system ("PAUSE");

 return 0;
}