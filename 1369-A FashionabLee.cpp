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
        int ans;
        if(n<=3)
        ans=0;
        
        if(n%4==0)
        ans=1;
        else 
        ans=0;
        
        if(ans==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
