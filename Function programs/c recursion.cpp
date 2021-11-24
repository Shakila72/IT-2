#include<iostream>
using namespace std;
int factorial (int n)
{
	if (n>1)
	return n*factorial(n-1);
	else
	return 1;
}
int main ()
{
	cout<<factorial(5)<<endl;
	cout<<factorial(6)<<endl;
	cout<<factorial(8);
	
	
}
