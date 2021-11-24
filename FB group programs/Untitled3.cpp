#include <iostream>
using namespace std;
int main()
{
   string str;
   int digitCounter = 0, spaceCounter = 0;
   cout << "Enter any string: ";
   getline(cin, str); 
   //'\0 represent end of string
  for(int i = 0; str[i]!='\0'; i++) 
  {
     if(str[i]>='0' && str[i]<='9') 
	 {
        digitCounter++;
     }
     else if(str[i]==' ') 
	 {
        spaceCounter++;
     }
  }
  cout << "Digits in String: " << digitCounter << endl;
  cout << "White Spaces in String: " << spaceCounter << endl;
  return 0;
}
