#include <iostream>
#include<string>
 using namespace std;
  
class student
{
	private:
	string name;
	int age;
	public:
 void input() 
{ 
cout << "Enter name and age respectively: "; 
cin >> name;
 cin >> age;
 } 
 student operator + (student& s1) // operator overloading

{

 student temp;
 temp.name =name + s1.name;
 temp.age = age + s1.age; 
return temp;
 } 
void output()
 {
  
cout << "Sum of two objects: " << name << "+" << age; 
} 
};
 int main()
 { 
student s1,s2, result; 
cout << "Enter Information of first student :\n"; 
s1.input();
cout << "Enter Information of second student :\n"; 
s2.input();

 
result = s1 + s2; 
result.output(); 
return 0; 
	
	
}
