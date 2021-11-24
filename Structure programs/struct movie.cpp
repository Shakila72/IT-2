#include<iostream>
using namespace std;

struct movie
{
	char title[50];
	int year;
	float rating;
	
};

int main ()

{
	movie m1;
	cout<<"\tEnter title : ";
	cin>>m1.title;
	cout<<"\tEnter year : ";
	cin>>m1.year;
	cout<<"\tEnter rating : ";
	cin>>m1.rating;
	cout<<"\t"<<m1.title<<endl;
	cout<<"\t"<<m1.year<<endl;
	cout<<"\t"<<m1.rating<<endl;
	return 0;
}
