#include <iostream>
using namespace std;

class shallow
{
	int a,b;        // by default private
	public:
		shallow(int x,int y)
		
		{
			a=x;
			b=y;
				
		}
		void update()
		{
			a=a+2;
			b=b+2;
		}
		void show()
		{
			cout<<"\tvalue of a "<<a<<"\n\tvalue of b "<<b<<endl;
		}
		
};
int main ()
{
	shallow B1 (3,4);
	shallow B2=B1;
	shallow B3(B1);   // copy constructor called which is default in compiler
	B1.show();
	B2.show();
	B3.show();
	
	B1.update();   // updating B1 object
	B1.show();
	
	B2.show();    // prints the old value do not copy updated value of B1
	B3.show();
	
}
