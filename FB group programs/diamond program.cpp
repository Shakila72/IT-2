#include <iostream>
using namespace std;

int main()
{
int i,j,k,n;
cout<<"printing diamond pattern\n";
cout<<"********************\n";
cout<<"Enter half of the rows no :";
cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<=n-i;j++){
cout<<" ";
}
for(k=1;k<=(i*2)-1;k++){
cout<<"*";
}
cout<<"\n";
}
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
cout<<" ";
}
for(k=1;k<=(n-i)*2-1;k++){
cout<<"*";
}
cout<<"\n";
}
return 0;
}
