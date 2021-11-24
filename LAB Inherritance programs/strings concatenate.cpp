#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void input_string()
                {
                        cout<<"\n Enter String              :   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)  //Concatenating String
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;

        str1.input_string();
        str2.input_string();

        
        cout<<"\n\n First String is           :  ";
        str1.display_string();  

        cout<<"\n\n Second String is          :  ";
        str2.display_string();  

        
        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
        cout<<"\n\n Concatenated String is    :  ";
        str3.display_string();

        return 0;
}
