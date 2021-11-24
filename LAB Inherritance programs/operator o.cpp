#include<iostream>
using namespace std;

class test
{ 
 private:
int a,b,c;
public:
void getdata(int x, int y, int z);
void operator-();
void operator+();
void show();
};

void test :: getdata( int x, int y, int z)
{                   
   a=x;
    b=y;
    c=z;
}
void test :: operator-()
{           
    a=-a;
    b=-b;
    c=-c;
}

void test:: show()
{   
cout<<"value of a : "<<a<<endl;
cout<<"value of b : "<<b<<endl;
cout<<"value of c : "<<c<<endl;
}

int main()
{          
     test obj;
obj.getdata(10,20,30);
obj.show();
-obj;
+obj;
obj.show();
}



