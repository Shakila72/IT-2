#include <iostream>
using namespace std;

class shallow
{
	int a,*p;
	public:
		
		shallow(int x,int y)
		
		{
			a=x;
			p=new int;
			*p=y;	
		}
		void update()
		{
			a=a+1;
			*p=*p+1;
		}
	void show()
		{
			cout<<"\tvalue of a "<<a<<"\n\tvalue of b "<<*p<<endl;
		}
	
			
};
int main ()
{
	shallow B1 (4,1);
	shallow B2(B1);
	B1.update();
	B1.show();
	
	B2.show();

	
}
