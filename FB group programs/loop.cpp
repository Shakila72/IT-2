#include<iostream>
using namespace std;
int main(){

	int choice, number;

	while (true)
	{
		cout << "Enter number : ";
		cin >> number;
		cout << "1.Factoral \n2.Prime or Not.\n3.Odd or Even.\n4.Exit\n";
		cin >> choice;
		if (choice == 1)
		{
			int fact = 1;
			for (int i = number; i >= 1; i--)
				fact *= i;
			cout << "Factorail : " << fact << endl;

		}
		else if (choice == 2)
		{
			int divisors = 1;
			for (int i= 1; i <= number / 2; i++)
			{
				if (number%i == 0)
					divisors++;
			}
			if (divisors == 2)
				cout << "prime " << endl;
			else
				cout << "Not prime " << endl;
	
		}
		else if (choice == 3)
		{
			if (number % 2 == 0)
				cout << "Even\n ";
			else
				cout << "Odd \n";
	
		}
		else if (choice == 4)
			break;
		else
			cout << "Valid choices are 1,2,3, and 4\n";
	}
	return 0;
}
