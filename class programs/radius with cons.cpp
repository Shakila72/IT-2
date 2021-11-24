#include <iostream>

using namespace std;

class Circle
{
  private:
    float circumference;

  public:
    Circle(float x)
    {
        circumference=x;
    }
    double calculateradius()
    {
    	
    	return circumference/(2*3.14);
	}
    
};

int main()
{
	Circle c1(34.56);

    cout<<c1.calculateradius();
    return 0;
}
