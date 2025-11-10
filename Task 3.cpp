                                                                //Swapping
#include<iostream>
using namespace std;

int main()
{
int a=5,b=15;
cout<<"The value of a before swapping:"<<a<<endl;
cout<<"The value of b after swapping:"<<b<<endl;

a=a+b;
b=a-b;
a=a-b;

cout<<"The value of a after swapping:"<<a<<endl;
cout<<"The value of b after swapping:"<<b<<endl;
return 0;
}