#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n==1 || n==2)
    cout<<-1;
    else if(n==4)
    cout<<3<<" "<<5;
    else
    {
        if(n&1)
        {
            long long int a;
            a=(n*n - 1)/2;
            cout<<a<<" "<<a+1;
        }
        else
        {
             long long int a;
             a=(n/2 * n/2) -1;
             cout<<a<<" "<<a+2;
        }
    }
    
  
}
