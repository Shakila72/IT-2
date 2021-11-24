#include <iostream>
using namespace std;

struct employee
{
	char name[50];
	int age;
	double salary;
	
};

int main ()
 
 {
 	employee e1;
 	cout<<"\tEnter the Name : " ;
 	cin.get(e1.name,50);
 	cout<<"\tEnter age : " ;
 	cin>>e1.age;
 	cout<<"\tEnter salary : " ;
 	cin>>e1.salary;
 	cout<<"\t"<<e1.name<<endl;
 	cout<<"\t"<<e1.age<<endl;
 	cout<<"\t"<<e1.salary<<endl;
 	return 0;
 	
 }
