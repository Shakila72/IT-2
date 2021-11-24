#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100] ;
    cout<<"Enter your Name :" ;
    cin>>str;
    // you can also use str.length()
    cout << "String Length = " << strlen(str);

    return 0;
}
