#include <iostream>
using namespace std;
 
int main()  {
    int t=0;
    cin >> t;
    while (t--)    {
        int n=0, k=0;
        cin >> n >> k;
        if (n > k)  {
            if (n % 2 == 0 && k % 2 == 0)   {
                cout << "0" << endl;
            }   else if (n % 2 == 1 && k % 2 == 1)  {
                cout << "0" << endl;
            }   else {
                cout << "1" << endl;
            }
        }   else {
            cout << (k-n) << endl;
        }
    }
    return 0;
}
