#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int f[d+1]={0};
    int ans=0;
    for(int i=1;i<=d;i++)
    {   
        if(i%k==0) f[i]=1;
        else if(i%l==0) f[i]=1;
        else if(i%m==0) f[i]=1;
        else if(i%n==0) f[i]=1;
    }
    for(int i=1;i<=d;i++)
    {
        if(f[i]==1) ans++;
    }
    cout<<ans;
}
