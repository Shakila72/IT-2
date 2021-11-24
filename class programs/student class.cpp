#include <iostream>
using namespace std;


class student
{
    private:
        char  name[30];
        int age; 
        int clss;
        public:
        	void getdata ()
        	{
        		cout<<"Name:";
        		cin>>name;
        		cout<<"Age ";
				cin>>age;
				cout<<"class ";
				cin>>clss;
			}
			void display ()
			{
				cout<<"Name  "<<name<<"\nAge  "<<age<<"\nclss  "<<clss;
			}
};
int main ()
{
	student details;
	details.getdata();
	details.display();
}
