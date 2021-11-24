#include <iostream>
using namespace std;
class Car 
{
  public:
    string brand;   
    string model;
    int year;
};

int main()
 {
  // Create an object of Car
  Car Obj1;
  Obj1.brand = "BMW";
  Obj1.model = "X5";
  Obj1.year = 1999;

  // Create another object of Car
  Car Obj2;
  Obj2.brand = "Ford";
  Obj2.model = "Mustang";
  Obj2.year = 1969;

  // Print attribute values
  cout << Obj1.brand << " " << Obj1.model << " " << Obj1.year << "\n";
  cout << Obj2.brand << " " << Obj2.model << " " << Obj2.year << "\n";
  return 0;
}
