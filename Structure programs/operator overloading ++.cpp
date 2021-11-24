#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    
    Count()  
	{
	  cout<<"Enter value : ";
	  cin>>value;
	}

    
    void operator ++ () {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() 
{
    Count c1;

    
    ++c1;

    c1.display();
    return 0;
}
