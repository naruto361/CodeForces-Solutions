#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       if(n&1)
          cout<<n/2 +1;
       else cout<<n/2;
       cout<<endl;
    }
}
