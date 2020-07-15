#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int mini=x;
    int maxi=x;
    int ans=0;
    n=n-1;
    while(n--)
    {
        int k;cin>>k;
        if(k<mini)
        {ans++;mini=k;}
        if(k>maxi)
        {ans++;maxi=k;}
    }
    cout<<ans;
}
