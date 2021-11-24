#include<iostream> 
    using namespace std;
    int main()
    {
        int p = 15, q = 11, r = 12;
        int array[3] = {&p, &q, &r};
        cout << *array[*array[1] - 8];
        return 0;
    }
