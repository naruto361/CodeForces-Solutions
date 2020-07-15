#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
int main()
{
    int n,m;
    cin>>n>>m;
    string s1[n+1],s2[m+1];
    for(int i=1;i<=n;i++)
    cin>>s1[i];
    for(int i=1;i<=m;i++)
    cin>>s2[i];
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int r1=s%n;
        int r2=s%m;
        if(r1==0)
        r1=n;
        if(r2==0)
        r2=m;
        cout<<s1[r1]<<s2[r2]<<"\n";
    }
    
}
