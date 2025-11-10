                                                  //Checking whether integer is positive, Negative or zero
#include<iostream>
#define MAX 100
using namespace std;

int main()
{
  int number;

 cout<<"Enter the integer";
 cin>>number;

 if(number>0){
 cout<<"you entered the positive number:"<<number<<endl;
}
 
 else if(number<0){
 cout<<"you entered the negative number:"<<number<<endl;
}

 else{

 cout<<"you entered 0 number:"<<endl;
}
 return 0;

}
 