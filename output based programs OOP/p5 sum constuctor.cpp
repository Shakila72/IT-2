
#include<iostream>
using namespace std;

class Add
{
public:
	int a,b,sum;
   Add(int num1, int num2) 
   {
	a= num1;
     b=num2;
   }
   void display()
   {
   	cout<<a+b<<endl;
   }
};
int main()
{
   
   Add obj1(10, 20);
   Add obj2(20,50);

   obj1.display();
   obj2.display();
   return 0;
}
