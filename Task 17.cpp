// program to check whether it is positive and negative integer using nested if 

#include<iostream>
using namespace std;

int main()
{
  int number;
 cout<<"Enter the number:"<<endl;
 cin>>number;

if(number!=0)
{
 if(number >0)
{
 cout <<"You enter positive number:"<<endl;
 }
else 
 {
  cout<<"You enter negative number:"<<endl;
 }
}
  else
   {
    cout<<"You entered 0 which is neither positive or negative:"<<endl;
    
}

 return 0;

}
