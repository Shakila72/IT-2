#include <iostream>
using namespace std;

class number
{
	
    int a, b, i;
public:

    number(int x) 
	{
        a = x;
    }

    

    void prime()
	 {
       
        {
            for (i = 2; i <= a / 2; i++)
            {
			
                if (a % i == 0) 
				{
                    b = 0;
                    break;
                }
				 else 
				{
                    b = 1;
					}
				}
        }
    }

    void show() {
        if (b == 1)
            cout << "\n" << a << " is Prime Number.";
        else
            cout << "\n" << a << " is Not Prime Numbers.";
    }
};

//Main Function

int main() {
    int a;
    cout << "Enter positive Number:";
    cin>>a;

    // Object Creation For Class
    number obj(a);

    // Call Member Functions
    obj.prime();
    obj.show();
    
    return 0;
}
