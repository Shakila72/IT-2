#include<iostream>
using namespace std;
int main ()
{
	int var= 5;
	int *pointvar;
	pointvar = &var;
	cout<<"*var = "<<var<<endl;
	cout<<"*pointvar = "<<*pointvar<<endl;
	cout<<"change value of *pointvar to 7 :"<<endl;
	*pointvar = 7;
	cout<<"*pointvar = "<<*pointvar<<endl;
	cout<<"change value of *pointvar to 16 :"<<endl;
    *pointvar= 16;
	cout<<"*pointvar = "<<*pointvar<<endl;
    return 0;
}
