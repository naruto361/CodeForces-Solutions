#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        int ans=0;
        int small=min(a,b);
        while(a<=n && b<=n)
        {
            if(a<b)
            a+=b;
            else b+=a;
            ans++;
        }
        cout<<ans<<endl;
    }
}
