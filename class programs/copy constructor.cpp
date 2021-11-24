#include <iostream>
using namespace std;

// declare a class
class rectangle 
{
   private:
    double length;
    double width;

   public:

    rectangle(double len, double wdt)                   // parameterized constructor
	 {
        
        length = len;
        width = wdt;
    }
    
    rectangle(rectangle &r1)                            // declaring copy contructor
    {
    	length=r1.length;
    	width=r1.width;
	}

    double calculateArea() 
	{
        return length * width;
    }
    
};

int main() 
{

    
    rectangle r1(10.5, 8.6);                      // create an object of Wall class

    
    cout << "\n\tArea of Rectangle 1 : " << r1.calculateArea() << endl;            // print area of wall1

    
    rectangle r2 = r1;                                                       // copy contents of room1 to another object room2
    rectangle r3(r1);               // calling copy constructor
    
    cout << "\tArea of Rectangle 2 : " << r2.calculateArea() << endl;            // print area of wall2
     cout << "\tArea of Rectangle 3 : " << r3.calculateArea() << endl;
    return 0;
}
