
#include <iostream>
 using namespace std; 
class Matrix
 { 
 private:
 int feet;
 int inches; 
 public:  

Matrix(int f, int i)
 { 
 feet = f; 
   inches = i; 
   } 
   
~Matrix()
{
	cout<<"destructor has completed its work"<<endl;
}
void displayDistance() 

{ 
cout << " F : " << feet <<"\n"<< " I :" << inches <<endl;
 } 

   // overloaded minus (-) operator 

Matrix operator- () 
{ 
feet = -feet; 
inches = -inches; 
return Matrix(feet, inches); 
}
 };
  
int main()

 { 
 Matrix  D1(-5, 11); 
-D1; // apply negation 

D1.displayDistance(); // display D1 


 return 0; } 

