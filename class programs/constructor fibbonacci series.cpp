#include<iostream>
using namespace std;
class series
{
public:
series(int num)
{
int a=0,b=1,t,j;
cout<<"enter the number :";
cin>>num;
cout<<"the fibonacci series is :"<<a<<b;
for(j=1;j<=num;j++)
{
t=a+b;
cout<<t;
a=b;
b=t;
}
cout<<"\n";
}
};
int main()
{
series obj(5);
}
