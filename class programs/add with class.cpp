#include<iostream>
using namespace std;
class Add
{
	double x,y;
	public:
	void input()
	{
		cout<<"enter values = ";
		cin>>x>>y;
		}
		void add ()
		{
			cout<<"Result = "<<x+y<<endl;
			}	
		
};
int main()
{
	Add dist;
	 dist.input();
	 dist.add();	 	 
	 
}
