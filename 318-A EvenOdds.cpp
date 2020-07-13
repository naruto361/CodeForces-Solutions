#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
int main()
{ 
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<=n/2)
            cout<<2*k-1;
        else
            cout<< 2*(k-n/2);
    }
    else
    {
        if(k<=n/2 +1)
            cout<<2*k -1;
        else
            cout<<2*(k-n/2-1);
    }
    
}
