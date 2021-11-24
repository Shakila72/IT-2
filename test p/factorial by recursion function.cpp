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
	int f, n=5;
	f=factorial(n);
	cout<<f<<endl;
     cout<<factorial(8);	
}
