#include <iostream>
using namespace std;

class marks
{
	private:
        char  name[30];
        int   rollno;
        float   total_marks;
        float average;
    public:
    		
       void Input()                                                       //member function to get student's detail
	   {                                                               
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter total marks outof 300: ";
    cin >> total_marks;
    average= total_marks/300*100;
}                                                                          
	 void Display()                                                       //member function to print student's details
		{                                                                
    cout << "Student details:\n";
    cout << "Name:"<< name << "\nRoll Number:" << rollno << "\nTotal:" << total_marks << "\nAverage:" << average;
}   
};

class physics :public marks
{
	int m1;
public:
	
void getdata ()
{
	cout<<"Enter marks of Physics : "<<endl;
	cin>>m1;
	}	
};

class chemistry : public marks
{
	int m2;
	public:
		void getdata ()
		{
			cout<<"Enter marks of Chemistry : "<<endl;
			cin>>m2;
		}
	
};

class mathematics : public marks
{
	int m3;
	public:
		void getdata ()
		{
			
			cout<<"Enter marks of Mathematics : "<<endl;
			cin>>m3;
		}
		
};

int main ()
{
	marks s1[10];
	physics n0;                   //array of objects creation
	chemistry n1;
	mathematics n2;
	                   
	                                               
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
    n0.getdata() ;
    n1.getdata() ;
    n2.getdata() ;
     
    for(i=0;i< n; i++)
	{
        cout << "Enter details of student " << i+1 << ":\n";
        s1[i].Input();
        n0.getdata() ;
    n1.getdata() ;
    n2.getdata() ;
     
    }
     
    
     
    for(i=0;i< n; i++)
	{
        cout << "\nDetails of student " << i+1 << ":\n";
        s1[i].Display();
    }
     
    return 0;
}
