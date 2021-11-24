//What is the output of the program ?I need with explanation
#include<iostream>
using namespace std;
int main()
{
unsigned s[10]={0}, *p=s+10;
while(p!=s)
{
p-=2;
*p=p-s;
}
for(unsigned i=0; i<10;i++)
cout<<s[i]<<endl;
return 0;
}




// explanation needed
