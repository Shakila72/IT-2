#include <iostream>
 using namespace std;
  
class Complex 
{
 private: 
float real; 
float imag; 
public: 

  void input() 
{ 
cout << "Enter real and imaginary parts respectively: "; 
cin >> real;
 cin >> imag;
 } 
 Complex operator + (const Complex& obj)

{

 Complex temp;
 temp.real = real + obj.real;
 temp.imag = imag + obj.imag; 
return temp;
 } 
void output()
 {
 if (imag < 0) 
cout << "Output Complex number: " << real << imag << "i"; 
else 
cout << "Output Complex number: " << real << "+" << imag << "i"; } };
 int main()
 { 
Complex Complex1, Complex2, result; 
cout << "Enter first complex number:\n"; 
Complex1.input();
 cout << "Enter second complex number:\n"; 
Complex2.input(); // complex1 calls the operator function // complex2 is passed as an argument to the function 
result = Complex1 + Complex2; 
result.output(); 
return 0; 
} 


