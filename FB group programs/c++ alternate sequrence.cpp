#include<iostream>

using namespace std;
int main()
{
int n;
cout<<"Enter a positive integer: ";
cin>>n;
for (int i=1,j=n;i<=n&&j>0;i++,j--)
cout<<j<<","<<i<<",";
return 0;
}
