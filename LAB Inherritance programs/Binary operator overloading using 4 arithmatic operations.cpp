#include<iostream>
using namespace std;

class Binary
{
        float num;
    public:
        void input()
        {
                cout<<"\n Enter Number  : ";
                cin>>num;
        }
       Binary operator+(Binary &a)
        {
                Binary t;
                t.num=num+a.num;
                return t;
        }
        Binary operator-(Binary &a)
        {
                Binary t;
                t.num=num-a.num;
                return t;
        }
        Binary operator*(Binary &a)
        {
                Binary t;
                t.num=num*a.num;
                return t;
        }
        Binary operator/(Binary &a)
        {
                Binary t;
                t.num=num/a.num;
                return t;
        }
        void display()
        {
                cout<<num;
        }
};
int main()
{
        Binary a1, a2, a3;

        a1.input();
        a2.input();
        a3=a1+a2;
        
        cout<<"\n Addition of Two Numbers        :   ";
        a3.display();

        a3=a1-a2;
        cout<<"\n Subtraction of Two Numbers     :   ";
        a3.display();

        a3=a1*a2;
        cout<<"\n Multiplication of Two Numbers  :   ";
        a3.display();

        a3=a1/a2;
        cout<<"\n Division of Two Numbers        :   ";
        a3.display();
        return 0;
}
