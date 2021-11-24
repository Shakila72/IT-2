#include <iostream>
using namespace std;
// declare a class
class  Wall
 {

  private:
       double length;

   public:
    // create a constructor
    Wall() 
    
	{

        // initialize private variables
        length = 5.5;

        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }
    ~wall()
    {
    	cout<<"destructor has completed its work ";
	}

};

int main()
 {

    // create an object
    Wall wall1;   // also calling constructor

    return 0;
}
