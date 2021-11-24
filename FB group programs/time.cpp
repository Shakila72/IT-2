#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;
int main()
{
 time_t t = time(NULL);
  tm* tPtr = localtime(&t);
   cout << "\n\n Display the Current Date and Time :\n";
    cout << "----------------------------------------\n";
            cout << endl;
                    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
                            cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
                                       cout << endl;
                                           return 0;
                                           }
