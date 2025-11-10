//                                          Pointers and Arrays
#include<iostream>
using namespace std;

int main()
{
  float arr[3];
  // declare point variable
  float*ptr;
  cout<<"Display address using arrays"<<endl;
  //use for loop to print address of array
  for(int i=0;i<3;i++)
  {
   cout<<"&arr["<<i<<"]="<<&arr[i]<<endl;
   }
  ptr=arr;

  cout<<"\nDisplaying address using pointers:"<<endl;
  //use for loop to print address of all array elements
  //using pointet notation
  for(int i=0;i<3;i++)
  {
    cout<<"ptr+"<<i<<"="<<ptr+i<<endl;
    }
     return 0;
  }
