#include <iostream>
using namespace std;
class student
{
	private:
		double m1,m2,m3;
		int sum=0;
		double average;
		public:
			void getmarks()
			{
				cout<<"Enter marks of subject 1 "<<endl;
			    cin>>m1;
			    	cout<<"Enter marks of subject 2 "<<endl;
			    cin>>m2;
			    	cout<<"Enter marks of subject 3 "<<endl;
			    cin>>m3;
			    
		
			}
			
			void student::getmarks(void)
			{
			
				average=(m1+m2+m3)/3;
	
			cout<<"average"	<<average;
			}
		
			
};
int main ()
{
	student s1;
	s1.getmarks();
	s1.average();
	return 0;
}

