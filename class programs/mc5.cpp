#include <iostream>
    using namespace std;
    int main ()
    {
        int arr[] = {10, 12, 40, 16, 70, 15, 30};
        int k, res = 0;
        for (k = 0; k < 5; k++) {
            res += arr[k];
        }
        cout << res;
        return 0;
    }
