#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int maxi=max(n,m);
        int mini=min(n,m);
        int ans=max(maxi,2*mini);
        cout<<ans*ans<<endl;
    }
}
