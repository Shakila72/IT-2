#include<iostream>        /*single inheritance program to display properties of typist*/

using namespace std;

class staff
{
    private:
        char name[50];
        int code;
    public:
        void getdata();
        void display();
};

class typist: public staff
{
    private:
        int speed;
    public:
        void getdata();
        void display();
};

void staff::getdata()
{
    cout<<"Name:";
    cin.get(name,50);
    cout<<"Code:";
    cin>>code;
}

void staff::display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Code:"<<code<<endl;
}

void typist::getdata()
{
    cout<<"Speed:";
    cin>>speed;
}

void typist::display()
{
    cout<<"Speed:"<<speed<<endl;
}

int main()
{
    typist t;
    cout<<"Enter data"<<endl;
    t.staff::getdata();       // getting data of staff class calling with child object
    t.getdata();              // getting data of typist class calling with child class object t
    
    cout<<endl<<"Display data"<<endl;
    t.staff::display();                // displayong data of staff class calling with child class object with scope of resolution operator
    t.display();                       // displaying data of typist class
    
    return 0;
}
