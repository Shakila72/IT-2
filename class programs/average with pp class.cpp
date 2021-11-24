#include <iostream>
using namespace std;


class student
{
    private:
        char  name[30];
        int   rollno;
        float   total;
        float average;
    public:
       void Input();                                   //member function to get student's details
        void Display();                                   //member function to print student's details   
};


void student::Input()                  
{                                                                // function definition, outside of the class
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter total marks outof 500: ";
    cin >> total;
    average= total/500*100;
}


void student::Display()
{                                                                 //member function definition, outside of the class
    cout << "Student details:\n";
    cout << "Name:"<< name << "\nRoll Number:" << rollno << "\nTotal:" << total << "\nAverage:" << average;
}


int main()
{
    student s1[10];                                                 //array of objects creation
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0;i< n; i++)
	{
        cout << "Enter details of student " << i+1 << ":\n";
        s1[i].Input();
    }
     
    
     
    for(i=0;i< n; i++)
	{
        cout << "\nDetails of student " << i+1 << ":\n";
        s1[i].Display();
    }
     
    return 0;
}
