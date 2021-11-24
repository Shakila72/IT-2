
#include<iostream> 
using namespace std; 
  
class shape 
{ 
public: 
  void print()  
  {
   cout << "This is a shape " << endl; 
   } 
}; 

class polygon : public shape 
{ 
public: 
  void print()  
  {
   cout << "This is a polygon " << endl; 
   } 
}; 

class Rectangle :public polygon
{ 
public: 
  void print()  
  {
   cout << "Rectangle is a polygon " << endl; 
   } 
}; 

class  Triangle : public polygon
{ 
public: 
  void print()  
  {
   cout << "Triangle is a polygon " << endl; 
   } 
}; 

class square : public Rectangle
{ 
public: 
  void print()  
  {
   cout << "Square is a rectangle  " << endl; 
   } 
}; 

int main ()
{ 
polygon p;
Rectangle r;
Triangle t;
square s;
p.shape::print();
p.print();
r.print();
t.print();
s.print();

	
}
