#include<iostream>           //user defined function
using namespace std;
int product (int a, int b)  // function declaration
{   // function body/ definition
	int c;
	c=a*b;
	return c;
	
}
int main ()
{
	int d=product (2,3);    // calling function
	cout<<d<<endl;          // displaying result
	cout<<product(2,3)<<endl;  
	cout<<product(4,5)<<endl;   // also calling function 
	return 0;
}    // call function as many times as you want
