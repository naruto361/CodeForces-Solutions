#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int ans;
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int mini=min(a,b);
        int maxi=max(a,b);
        while(x--)
        {
            if(mini>1)
            mini--;
            else if(maxi<n)
            maxi++;
            else break;
            
        }
        ans=maxi-mini;
        cout<<ans<<endl;
    }
}
