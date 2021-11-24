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

	std::cout<<std::<<swap(7,9);
}
