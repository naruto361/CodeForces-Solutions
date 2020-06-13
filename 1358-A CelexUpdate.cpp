#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,x,y;
        cin>>a>>b>>x>>y;
        long long int ans;
        if(x==a && y==b)
        ans=1;
        else if(x==a ||y==b)
        ans=1;
        else
        {
            ans=((x-a) * (y-b)) +1;
        }
        cout<<ans<<endl;
        
    }
    
}
