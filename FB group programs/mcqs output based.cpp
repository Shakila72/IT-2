#include <iostream>
using namespace std;

int main()
{
  int *p = new int;
  delete p;
  delete p;
  cout<<"Done";
  return 0;
}
