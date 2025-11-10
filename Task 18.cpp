//                                     Using of for loop
#include<iostream>
using namespace std;
int main()
{
int i;
float n,sum=0,avg;
for(i=1;i<10;++i)
{
 cout<<"Enter the number:"<<i<<endl;
 cin>>n;
 sum=sum+n;
}
 avg=sum/10;
 cout<<"sum of number:"<<sum;
 cout<<"avg of 10 number:"<<avg;
 return 0;
}