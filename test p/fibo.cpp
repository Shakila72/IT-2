#include <iostream>
using namespace std;

int series (int n)
{
   int n3,n1=0,n2=1,i;
   cout<<n1<<" "<<n2<<" " ;
   for (i=0;i<=n;i++)
{
   cout<<n3=n1+n2;
   n1=n2;
   n2=n3;
   }
  int main( )
 { 
   int n;
   cout<<"Enter the number"<<endl;
   cin>>n;
   cout<<series(n);
   return 0;
  }
   }
