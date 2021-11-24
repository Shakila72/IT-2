#include<iostream>
using namespace std;
int main()
{
     int*p;             
     int array[6]={1,2,3,4,5,6};
     p = array;
    for (int i=0; i<6;i++)
{
	cout<<*p<<endl;
	p++;
}
return 0;
}

