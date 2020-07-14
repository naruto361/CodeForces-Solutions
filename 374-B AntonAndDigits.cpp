#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    cin>>a[i];
    int mini,ans=0;
    mini=min(a[0],min(a[2],a[3]));
    //cout<<mini<<" ";
    ans+=mini*256;
    //cout<<ans<<" ";
    if(a[0]>=mini) a[0]=a[0]-mini;
    mini=min(a[0],a[1]);
    //cout<<mini<<" ";
    ans+=32*mini;
    cout<<ans;
    
    
}
