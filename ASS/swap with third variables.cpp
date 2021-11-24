#include <iostream>
using namespace std;
void swap (int a , int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<" a= "<<b;
	cout<<"b= "<<a;
}
int main ()
{
	cout<<swap(4,6);
	cout<<swap(7,9);
}
