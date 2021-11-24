#include<iostream>

using namespace std;
 
class odd
{
public:
 
    int i;
    int input;
    int sum = 0;
};
class series: public odd
{
public:
    void process()
    {
    cout << " Input number of terms : ";
    cin >> input;
    cout << "The odd numbers are : ";
 
    for (i = 1; i <= input; i++)
    {
        cout << "\t" << 2 * i - 1;      // displaying odd numbers
        sum += 2 * i - 1;               // sum of odd numbers, sum=0+2*i-1 (sum=0+sum)
    } 
    
    cout << "\nThe Sum of odd Natural Number upto " << input << " are : "<<sum;
    // displaying sum
    }
 
};
int main()
{
    series a;
    a.process();
 
 
 
}
