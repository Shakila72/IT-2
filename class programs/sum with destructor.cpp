#include<iostream>
using namespace std;
class sum
{ int a,b;
public:
sum(int n1, int n2)
{ 
a=n1;
b=n2;
cout<<"\tSum of numbers is = "<<a+b<<endl;
}
~sum()
{
cout<<"\tDestructor Completed its Work to Free Memory"<<endl;
}
};
int main()
{
sum s1(2,4);
}
