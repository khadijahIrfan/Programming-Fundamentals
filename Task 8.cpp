//                                              Factorial
#include<iostream>
using namespace std;

int factorial(int a)
{
   int fact=1;
   while(a>=1)
 {
  fact=fact*a;
  a--;
 }
 return fact;
}

  int main()

{
 int n,f;
 cout<<"Enter the number:"<<endl;
 cin>>n;
 f=factorial(n); //calling the function 
 cout<<"The factorial is:"<<f<<endl;
 
 return 0;
}