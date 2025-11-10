// Taking Input from user and storing in array
#include<iostream>
using namespace std;

int main()
{
 int numbers[5];
 cout<<"Enter 5 numbers:"<<endl;
 //store input from users to array
 for(int i=0;i<5;i++)
{
 cin>>numbers[i];
}
 cout<<"The numbers are";
 //print array elements
 for(int i=0; i<5; i++)
{
 cout<<numbers[i];
}

 return 0;

}
 