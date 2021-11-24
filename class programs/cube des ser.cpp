#include<iostream>

using namespace std;
class cube
{
 private:
 int i,n;
 public:
 
         cube(int p, int q)
         {
         	i=p;
         	n=q;
 }
 void display()
 {
 cout<<" Enter the number :";
 cin>>n;
 for(i=1; i<=n; i++)
 {
 cout<<" The cube of "<<i<<" is = "<<(i*i*i)<<endl;
 
 }
 }
 ~cube()
 {
 cout<<" Desstructor completed its work "<<endl;
 }
 };
int main()
   {
   int p,q;
 cube obj(p,q);
 obj.display();
 
}
