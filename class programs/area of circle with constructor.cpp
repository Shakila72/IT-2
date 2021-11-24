#include <iostream>

using namespace std;

class Circle
{
  private:
    float area;

  public:
    Circle(float radius)
    {
        area =3.14 * radius * radius;
    }
    void display()
    {
        cout << "\tArea :" << area << endl;
    }
};

int main()
{
    cout << "Enter value of radius:\t";
    int radius;
    cin >> radius;
    Circle area(radius);
    area.display();
    return 0;
}
