//                                      Inline Function
#include<iostream>
using namespace std;

inline int fun(int a,int b)
{
 return(a>b)?a:b; //single line instruction 

}
 int main()
{
 fun(50,20); //calling the function 
 cout<<"Maximum"<<fun(50,20);
 
}