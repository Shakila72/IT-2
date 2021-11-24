#include<iostream>
using namespace std;
int main()
{
     int*p; 
	 int *p1;            
     int array[6]={1,2,3,4,5,6};
     int array1[6]= {1,2,3,4,5,6};
     p = array;
     p1 = array1;
    for (int i=0; i<6;i++)
{
	cout<<*p+*p1<<endl;
	p++;
	p1++;
}
return 0;
}

