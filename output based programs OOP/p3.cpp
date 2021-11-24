#include<iostream>
using namespace std; 
  
class construct 
{  
  
public: 
    float area;   
          
    construct() 
    { 
        area = 0; 
    } 
      
    construct(int a, int b) 
    { 
        area = a * b; 
    } 
      
    void disp() 
    { 
        cout<< area<< endl; 
    } 
}; 
  
int main() 
{ 
    construct c1; 
    construct c2( 10, 20); 
    c1.disp(); 
    c2.disp(); 
    return 0; 
} 
