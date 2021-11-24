#include <iostream>
#include<conio.h>

using namespace std;

// Addition Class Declaration
class AdditionClass {
private://Access - Specifier
   //Member Variable Declaration
   int num1, num2, result;

public://Access - Specifier
   //Member Functions read(),sum() and print() Declaration

   void read() {
      //Get Input Values For Object Variables using cin
      cout << "Enter Number 1 :";
      cin >> num1;

      cout << "Enter Number 2 :";
      cin >> num2;
   }

   void sum() {
      // Calculating sum value and assign in 'result'
      result = num1 + num2;
   }

   void print() {
      //Print the Output using cout
      cout << "Result :" << num1 << " + " << num2 << " = " << result << endl;
   }
};

int main() {
   // Object Creation For Class
   AdditionClass obj1, obj2;

   cout << "Simple Class Addition : Add Two Integers In C++\n";

   cout << "\nAdditionClass : obj1 Usage" << endl;
   obj1.read();
   obj1.sum();
   obj1.print();

   cout << "\nAdditionClass : obj2 Usage" << endl;
   obj2.read();
   obj2.sum();
   obj2.print();

   getch();
   return 0;
}
