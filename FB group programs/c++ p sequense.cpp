#include<iostream>

using namespace std;
int main()

{  
int n;
cout<<"Enter a positive Integer: ";
cin>>n

for (int i=1,j=n;i<=n&&j>0;i++,j--)
{
	cout<<","<<j<<","<<i;
	
}
cout<<"\n";
system("pause");
return 0;
	
}
