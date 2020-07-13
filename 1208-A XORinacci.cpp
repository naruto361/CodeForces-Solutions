#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
ll solve(ll n,ll a,ll b) 
{ 
    if (n == 0) 
        return a; 
    if (n == 1) 
        return b; 
    if (n == 2) 
        return (a ^ b); 
  
    return solve(n % 3, a, b); 
}
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        cout<<solve(n,a,b)<<endl;
    }
}
