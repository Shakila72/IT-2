#include <iostream>
using namespace std;
class sum
{
 public:
 sum (int n)
 {
 int k=9;
 int s=0;
 cout<<" Input the number of terms ";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 s=s+k;
 k=k*10+9;
 }
 cout<<" Sum of Series "<<s<<endl;
 }
 ~sum()
 {
 cout<<" Destructor complete its work, FREE MEMORY"<<endl;
 }
 };
 int main()
 {
 sum obj(5);
 }
 
