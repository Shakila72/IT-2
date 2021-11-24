#include <iostream>
#include <fstream>
	#include <string>
	
	using namespace std;
	int main()
	{
		
//**********************************************************************************************
//                   FILE HAMDLING (CREATING AND READING FROM FILE )
//**********************************************************************************************		
		
		   
		string greetings = "Hello ";
	   
	    string location  = "Pakistan";
	    
		ofstream outfile("E:\\ character.text",ios::out);  // using ofstream for writing into the file
		outfile<< greetings<<endl;
	
		outfile<< location<<endl;
		outfile.close();



        ifstream infile("E:\\ character.text",ios::in);  // using ifstream for reading info from the file
		infile>> greetings;
	
		infile>> location ;
		infile.close();
		
		cout<<"\n\n\t GREETINGS :"<<greetings<<"\n\n";
	    
	        
	        cout<<"\t location is :"<<location<<"\n\n";
	        
	        return 0;
	    
	}
