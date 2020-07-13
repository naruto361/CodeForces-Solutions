#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int main()
{
    ll a,b;
    cin>>a>>b;
    ll mini=min(a,b);
    ll ans=1;
    for(int i=2;i<=mini;i++)
    {
        ans=ans*i;
    }
    cout<<ans;
}
 
