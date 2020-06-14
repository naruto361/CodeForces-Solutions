#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll s(ll a)
{
    ll sum=0;
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main()
{
    ll n;
    cin>>n;
    if(n<10)
    cout<<n;
    else 
    {   ll x=0;
        while(x*10+9<=n)
        x = x*10+9;
        cout<<s(x)+s(n-x);
    }
    
}    

