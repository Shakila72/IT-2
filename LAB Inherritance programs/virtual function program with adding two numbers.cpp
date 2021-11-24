#include<iostream>
using namespace std;

class Function
{
public:
   virtual void input() = 0;
   virtual void add() = 0;
};

class Addition : public Function 
{
public:
   int a, b, c;

   void input() 
   {
       cout << "Enter two numbers : ";
       cin >> a>>b;
   }

   void add() 
   {
       c = a + b;
       cout << "Sum is : " << c;
   }
};

int main()
 {
   Function *f;
   Addition a;
   f = &a;
   f->input();
   f->add();

   return 0;
}
