#include<iostream>

using namespace std;
class cube

{
 private:
 int n;
 public:

         cube(int p)
         {
         	n=p;
         	
 }
 void display()
 {
 cout<<" Enter the number : ";
 cin>>n;
 
 {
 cout<<" The cube of "<<n<<" is = "<<(n*n*n)<<endl;
 
 }
 }
 ~cube()
 {
 cout<<" DDESTRUCTOR HAS DESTROYED OBJECT "<<endl;
 }
 };
int main()
   {
   int p;
 cube obj(p);
 obj.display();
 
}
