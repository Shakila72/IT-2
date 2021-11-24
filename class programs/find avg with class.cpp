#include <iostream>
using namespace std;
class student
{
	public:
		int marks [5];
		int sum =0;
		float average;
};
int main ()
{
	student s1;
	s1.marks [5]={29,30,45,56,55};
	s1.sum=29+30+45+56+55;
	s1.average=s1.sum/5;
	cout<<s1.average;
	return 0;
}

