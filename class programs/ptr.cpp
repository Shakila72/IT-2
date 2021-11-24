#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	a=2;
	b=3;
	cout<<&a<<endl;
	int *ptr=&a;
	
	cout<<a<<endl;
	*ptr=2;
	cout<< b;
}
