#include <iostream>
using namespace std;

class Wall                      // class declaration
{
   private:
    double length;
    double height;

   public:

    Wall(double a, double b)                       //  ctreating paramerterized constructor
	{
    
        length = a;                       //  initialize private variables
        height = b;
    }
    

    double calculateArea() 
	{
        return length * height;
    }
    
};

int main() 
{
    // creating object and initialize data members
    Wall w1(12.5, 14.6);
    Wall w2(18.5, 16.3);

    cout << "Area of Wall 1: " << w1.calculateArea() << endl;
    cout << "Area of Wall 2: " << w2.calculateArea() << endl;

    return 0;
}
