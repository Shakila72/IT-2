

#include<iostream>             // single inheritance
using namespace std;

class series                   // Base class
{
 protected:
 int n;
};

class child : private series     // Derived class
{
 public:
 int cube()
 {
 cout<<"\n\t\tEnter the Number : ";
 cin>>n;
 for(int i=1; i<=n; i++)
 {
 cout<<"\n\t\tCube of "<<i<<" is "<<" = "<<(i*i*i)<<endl;
 }
 }
};

int main()
{
    child obj;
    obj.cube();
    
}





