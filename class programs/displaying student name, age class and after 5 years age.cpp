#include <iostream>
using namespace std;


class student
{
    private:
        char  name[30];
        int rollno;
        
        char Branch;
        int Markspercentage;
        
    public:
    		
       void Input()                                                       //member function to get student's detail
	   {   
	                                                        
    cout << "Roll no: " ;
    cin >> name;                                                          
    cout << "Enter name: " ;
    cin >> name;
    
    cout << "Enter Branch: ";
    cin >> Branch;
                                                
    cout << "Marks Percentage: " ;
    cin >> Markspercentage;
    
    
}                                                                          
	 void Display()                                                       //member function to print student's details
		{                                                                
    cout << "\nStudent details:\n";
    cout <<"Roll no:"<<rollno<< "\nName:"<< name  << "\nBranch:" << Branch<<"Marks Percentage:"<<Markspercentage;
}   

                                  
};


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
