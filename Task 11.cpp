//                                      Area of square with Parameters
#include <iostream>
using namespace std;

class Square
 {
 	private:
 	
	 	int sidelength,area;
 		
    public:
    	
         Square(int sidelength)
	 {
	 	
          cout<<"enter the sidelength of square";
          cin>>sidelength;
      
    }

    //function to calculate area
    
    int calculateArea(int sidelength)
	 {
          cout<<"the area of square is="<<sidelength*sidelength<<endl;
    }


       };

int main() 
  {
    Square square1(12);
    square1.calculateArea(11);
    return 0;
      }
