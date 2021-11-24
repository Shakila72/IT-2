#include <iostream>
using namespace std;

class Room
 {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
   void Data(double len, double brth, double hgt) 
	{
        length = len;
        breadth = brth;
        height = hgt;
    }


    double calculateArea() 
	{
        return length * breadth;
    }

    double calculateVolume() 
	{
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room r1;

    // pass the values of private variables as arguments
   r1.Data(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << r1.calculateArea() << endl;
    cout << "Volume of Room =  " << r1.calculateVolume() << endl;

    return 0;
}
