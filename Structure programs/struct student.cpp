#include<iostream>
using namespace std;

struct student

{
	char name[30];
	int rollno;
	int clss;
	
};

 int main ()
 {
 	student s1;
 	cout<<"\tEnter name : " ;
 	cin.get(s1.name,30);
 	cout<<"\tEnter Rollno : ";
 	cin>>s1.rollno;
 	cout<<"\tEnter class : ";
 	cin>>s1.clss;
 	return 0;
 }
