#include <iostream>
using namespace std;

class Rectangle
 {
	private:
    int width, height;
  public:
    Rectangle (int wdt,int hgt) // constructor to initialize members
    {
	
    width=wdt;
    height=hgt;
   }
    int area() {return width*height;}
    ~Rectangle()       // destructor
    {
    	cout<<"destructor has completed its work ";
	}

};


int main () {
  Rectangle r1(3,4);

  cout << "Area of rectangle r1: " << r1.area()<<endl;
  return 0;
}


