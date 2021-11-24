#include <iostream> 
using namespace std; 
  
class construct 
{  
    int a, b; 
public:  
    construct() 
    { 
        a = 0; 
        b = 0; 
    } 
}; 
  
int main() 
{ 
    construct c; 
    cout<< "a: "<< c.a << endl << "b: "<< c.b; 
    return 0; 
} 
