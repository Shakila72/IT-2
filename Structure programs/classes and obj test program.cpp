#include <iostream>
using namespace std;

class A
{
    private:
    int x;
    public:
    void printdata()
    {
       cout<<"x="<<x<<endl; 
    }
};

class B:public A
{
};

int main() 
{
    B obj;
    obj.B::printdata();

    return 0;
}
