#include<iostream>
using namespace std;
class product
{ 
int a,b;

public:
product(int n1, int n2)               // constructor declaration
{ 
a=n1;
b=n2;

cout<<"\t Enter value of a = ";
cin>>a;
cout<<"\t Enter value of b = ";
cin>>b;

cout<<"\tProduct of numbers is = "<<a*b<<endl;
}

~product()                       // destructor declaration
{
cout<<"\tDestructor Completed its Work to Free Memory"<<endl;
}
};

int main()
{
	int a,b;
product p1(a,b);
}
