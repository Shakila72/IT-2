#include <iostream>                 // In this program we are finding product of three numbers using mutilevel inheritance in C++.
using namespace std;
class base                             //single base class
{
 	public:
 	int x;
 	void getdata()
 	{
    	cout << "\tEnter value of x= "; 
		cin >> x;
 	}
};
class derive1 : public base                         // derived class from base class
{
 	public:
 	int y;
 	void readdata()
 	{
 	    cout << "\n\tEnter value of y= "; 
		 cin >> y;
 	}
};
class derive2 : public derive1                        // derived from class derive1
{
 	private:
 	int z;
 	public:
 	void indata()
 	{
    	cout << "\n\tEnter value of z= "; 
		cin >> z;
 	}
 	void product()
 	{
 	    cout << "\n\tProduct= " << x * y * z;
 	}
};
int main()
{
     derive2 a;          //object of derived class2 Inherited with all the properties of base classes
     a.getdata();
     a.readdata();
     a.indata();
     a.product();
     return 0;
}            
