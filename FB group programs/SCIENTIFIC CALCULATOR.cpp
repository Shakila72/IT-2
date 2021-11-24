#include <iostream>
#include <math.h>
using namespace std;
//  Scientific Calculator in C++
int main()
{

   string more;
   do
   {
   	
   	
   	
   	// main Minu
cout<<"press 1 for Roundings functions"<<endl;
cout<<"press 2 PI value"<<endl;
cout<<"press 3 for Powers, roots, logarithms"<<endl;
cout<<"press 4 for Min/max"<<endl;
cout<<"press 5 for Trigonometric functions"<<endl;
cout<<"press 6 Exit Calculator"<<endl;	
cout<<endl;
cout<<endl;
int choice,subminu;
cout<<"Get here choice about minu: ";
cin>>choice;
cout<<endl;
// this is section for Roundings functions
if(choice==1)
{
cout<<"Welcome to Roundings functions\n\n";
int number;

cout<<"press 1 for Round\n";
cout<<"press 2 for Ceiling\n";
cout<<"press 3 for Floor\n";
cout<<"press 4 for Abs\n";
cout<<"Get here Round function choice about list:";
cin>>subminu;
cout<<endl;
if(subminu==1)
{
	cout<<"welcome to round function\n";
	cout<<"Get here number now: ";
    cin>>number;
    cout<<endl;
    cout << "Round: " << round(number) << endl;
}

if(subminu==2)
{
	cout<<"welcome to Ceiling function\n";
	cout<<"Get here number now: ";
    cin>>number;
    cout<<endl;
    cout << "Ceiling: " << ceil(number) << endl;
}

if(subminu==3)
{
	cout<<"welcome to floor function\n";
	cout<<"Get here number now: ";
    cin>>number;
    cout<<endl;
    cout << "Floor: " << floor(number) << endl;
}

if(subminu==4)
{
	cout<<"welcome to abs function\n";
	cout<<"Get here number now: ";
    cin>>number;
    cout<<endl;
    cout << "Abs: " << abs(number) << endl;
}
	
}

// this is section for PI
else if(choice==2)
{
	
cout<<"Welcome to PI functions\n\n";
cout<<"press 1 PI \n";
cout<<"press 2 e value\n";
cout<<endl;
cout<<"Get here PI function choice about list:";
cin>>subminu;
float pi;
cout<<"Get here number of pi: ";
cin>>pi;
cout<<endl;
if(subminu==1)
{
cout << "Pi: " << M_PI*pi << endl;	
}

if(subminu==2)
{
cout << "e: " << M_E*pi << endl;	
}

}

//this section  for Powers, roots, logarithms
else if(choice==3)
{	
cout<<"Welcome to  Powers, roots, logarithms\n\n";
cout<<"press 1 for pow\n";
cout<<"press 2 for Sqrt\n";
cout<<"press 3 for Exp\n";
cout<<"press 4 for Log\n";
cout<<"press 5 for Log10\n";

cout<<"Get here power root logarithms choice  about list:";
cin>>subminu;
cout<<endl;
if(subminu==1)
{
	int base,power;
	cout<<"Get here base value: ";
	cin>>base;
	cout<<endl;
	cout<<"Get here power value: ";
	cin>>power;
     cout << "Pow: " << pow(base,power) << endl;	
}
if(subminu==2)
{
	int singlevalue;
	cout<<"Get her value for square root: ";
	cin>>singlevalue;
	cout<<endl;
    cout << "Sqrt: " << sqrt(singlevalue) << endl;	
}

if(subminu==3)
{
	int value;
	cout<<"Get here value of exp: ";
	cin>>value;
	cout<<endl;
    cout << "Exp: " << exp(value) << endl;	
}

if(subminu==4)
{
  int value2;
  cout<<"Get here value for log: ";
  cin>>value2;
  cout<<endl;
  cout << "Log: " << log(value2) << endl;	
}

if(subminu==5)
{
	int Log10;
	cout<<"Get here log10 value: ";
	cin>>Log10;
	cout<<endl;
cout << "Log10: " << log10(Log10) << endl;	
	
}

}
// this section for min and max numbers finding
else if(choice==4)
{
cout<<"Welcome to  Min/Max fucntion\n\n";
int number1,number2;
cout<<"Get here number1: ";
cin>>number1;
cout<<endl;
cout<<"Get here number2: ";
cin>>number2;
cout<<endl;
cout << "Min: " << fmin(number1,number2) << endl;
cout << "Max: " << fmax(number1,number2) << endl;	
}

// this section for  Trigonometric functions
else if(choice==5)
{
cout<<"Welcome to Trigonometric functions\n\n";
cout<<"press 1 for sin \n";
cout<<"press 2 for Cos \n";
cout<<"press 3 for Tan \n";
cout<<"press 4 for Acos \n";
cout<<"press 5 for Asin \n";
cout<<"press 6 for Atan \n";
cout<<"Get here Trigonometric functions  about list:";
cin>>subminu;
cout<<endl;
int numbers;
if(subminu==1)
{	cout<<"Get here value for sin: ";
	cin>>numbers;
	cout<<endl;
	cout << "Sin: " << sin(numbers) << endl; 	
}
if(subminu==2)
{	cout<<"Get here value for cos: ";
	cin>>numbers;
	cout<<endl;
	cout << "Cos: " << cos(numbers) << endl;	
}

if(subminu==3)
{	cout<<"Get here value for tan: ";
	cin>>numbers;
	cout<<endl;
    cout << "Tan: " << tan(numbers) << endl; 

}

if(subminu==4)
{
    cout<<"Get here value for Acos: ";
	cin>>numbers;
	cout<<endl;
    cout << "Acos: " << acos(numbers) << endl;
	
}

if(subminu==5)
{
    cout<<"Get here value for Asin: ";
	cin>>numbers;
	cout<<endl;
    cout << "Asin: " << asin(numbers) << endl;
	
}

if(subminu==6)
{
    cout<<"Get here value for Atan: ";
	cin>>numbers;
	cout<<endl;
    cout << "Atan: " << atan(numbers) << endl;	
	
}

}


else if(choice==6)
{
	cout<<"not want some thing more ";
	exit(0);
}



   	
   	
   	cout<<"do you want more continue yes or no: ";
   	cin>>more;
   	cout<<endl;
   	
   }while(more=="Yes" or more=="yes" or more=="y" or more=="Y");







}
