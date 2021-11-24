#include<iostream>

using namespace std;

class staff
{
    private:
        char name[50];
        int code;
    public:
        void getdata()
        {
        cout<<"\tName:";
    cin.get(name,50);
    cout<<"\tCode:";
    cin>>code;
        	
		}
        void display()
        {
    cout<<"\tName:"<<name<<endl;
    cout<<"\tCode:"<<code<<endl;
}
};

class typist: public staff
{
    private:
        int speed;
    public:
        void getdata()
        {
    cout<<"\tSpeed:";
    cin>>speed;
}
        void display()
        {
    cout<<"\tSpeed:"<<speed<<endl;
}
};



int main()
{
    typist t;
    cout<<"\tEnter data"<<endl;
    t.staff::getdata();       // getting data of staff class calling with child object
    t.getdata();              // getting data of typist class calling with child class object t
    
    cout<<endl<<"\tDisplay data"<<endl;
    t.staff::display();                // displaying data of staff class calling with child class object with scope of resolution operator
    t.display();                       // displaying data of typist class
    
    return 0;
}
