#include <iostream>
using namespace std;
class student
{
        public:
		double m1,m2,m3;
		int sum=0;
		double average;

		
			
};
int main ()
{
	student s1;
	cout<<"Enter marks of subjects "<<endl;
	cin>>s1.m1>>s1.m2>>s1.m3;
	s1.sum=s1.m1+s1.m2+s1.m3;
	s1.average= s1.sum/3;
	cout<<"Average = "<<s1.average;
			    
	
	return 0;
}

