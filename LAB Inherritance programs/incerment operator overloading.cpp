#include <iostream>
using namespace std; 
  
class number { 
private: 
    int i; 
  
public: 
     
    number(int num ) 
    { 
        num = i; 
    } 
  
    
    number operator++()                 // Overloading the prefix operator  
    { 
        number temp; 
        temp.i = ++i; 
        return temp; 
    } 
  
     
    void display() 
    { 
        cout<< "i = " << i << "\n"; 
    } 
}; 
  
    int main() 
{ 
    number i1(3); 
  
    cout << "Before increment: "; 
    i1.display(); 
  
    // Using the pre-increment operator 
    number i2 = ++i1; 
  
    cout << "After pre increment: "; 
    i2.display(); 
} 
