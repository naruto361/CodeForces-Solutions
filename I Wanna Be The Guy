#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ans=1;
    int a[m];
    int f[n+1]={0};
    for(int i=0;i<m;i++)
    {cin>>a[i];
    f[a[i]]=1;}
    int q;
    cin>>q;
    
    int b[q];
    for(int i=0;i<q;i++)
    {cin>>b[i];
    f[b[i]]=1;}
  
    for(int i=1;i<=n;i++)
    {
        if(f[i]!=1) {ans=0;break;}
    }
    
    if(ans==1)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}
