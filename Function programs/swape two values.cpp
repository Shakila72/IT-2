#include<iostream>
using namespace std;
void swap(int a, int b)
{ int temp;
temp=a;
a=b;
b=temp;
cout<<"a="<<a<<endl;
cout<<"b="<<b;

}
int main()
{
int a,b;
cout<<"enter a value a=";
cin>>a;
cout<<"enter a value b=";
cin>>b;
swap(a,b);
return 0;
}
