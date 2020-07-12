#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ll n,ans=0;
    cin>>n;
    for (int i = 1; i <= n; i++) 
        ans += pow(2, i);
    cout<<ans;
}
