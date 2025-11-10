//                                    Use of if/else statements  
#include<iostream>
using namespace std;

int main ()
{
int finalscore;

 if(finalscore>=90)
 cout<<"You got A:"<<endl;
 else if(finalscore>=80&& finalscore <90)
 cout<<"You got B:"<<endl;
 else if(finalscore>=70&& finalscore <80)
 cout<<"You got C:"<<endl;
 else if (finalscore>=60&& finalscore <70)
 cout<<"You got D:"<<endl;
 else
 cout<<"You got F:"<<endl;

 return 0;
}
