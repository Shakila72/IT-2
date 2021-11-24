#include<iostream>
using namespace std;
class Add
{
	public:
		int x,y;
		int sum;
};
int main()
{
	Add dist;
	dist.x=5;
	dist.y=7;
	 dist.sum =dist.x+dist.y;
	 cout<<"Distance = "<<dist.sum;
}
