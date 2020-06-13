#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unsigned long long int sum;
       unsigned long long int k=n/2;
       sum=(8*k*(k+1)*(2*k+1))/6;
        cout<<sum<<endl;
    }
}
