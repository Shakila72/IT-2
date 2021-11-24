#include <iostream>
using namespace std;

class shallow
{
	int a,b;
	public:
		shallow(int x,int y)
		
		{
			a=x;
			b=y;
				
		}
		void show()
		{
			cout<<"\tvalue of a "<<a<<"\n\tvalue of b "<<b<<endl;
		}
		shallow(shallow &B1)
		{
		
		a=B1.a;
		b=B1.b;	
		}
		
};
int main ()
{
	shallow B1 (3,4);
	shallow B2=B1;
	shallow B3(B1);
	B1.show();
	B2.show();
	B3.show();
}
