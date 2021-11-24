#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    struct book
    {
        char title[100],author[25],publication[25];
        float price;
    };
    struct book b[100];
    int i;
    for(i=0;i<100;i++)
    {
    	
        cout<<"Enter Data of Book "<<i+1<<endl;
        cout<<"Title: ";
        gets(b[i].title);
        cout<<"Author: ";
        gets(b[i].author);
        cout<<"Publication: ";
        gets(b[i].publication);
        cout<<"Price: ";
        cin>>b[i].price;
        
        // storing data in file
        ofstream outfile("E:\\ file.text",ios::out);  // using ofstream for writing into the file
		outfile<< b[i].title<<endl;
		outfile<< b[i].author<<endl;
		outfile<< b[i].publication<<endl;
		outfile<< b[i].price <<endl;
		
		outfile.close();
		
    }
    for(i=0;i<100;i++)
    {
    	// reading data from file
    	ifstream infile("E:\\ file.text",ios::in);  // using ifstream for reading info from the file
		infile>> b[i].title;
		infile>> b[i].author;
		infile>> b[i].publication ;
		infile>> b[i].price;
		
		infile.close();
	
        cout<<"\t\t\t\tBook "<<i+1<<endl;
        cout<<"Title: "<<b[i].title;
        cout<<"\nAuthor: "<<b[i].author;
        cout<<"\nPublication: "<<b[i].publication;
        cout<<"\nPrice: "<<b[i].price;
    }
    return 0;
}
