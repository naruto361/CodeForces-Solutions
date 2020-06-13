#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    long long n,k,ans=1;
     cin>>n>>k;
     if(k>=2) ans+=n*(n-1)/2;
     if(k>=3) ans+=n*(n-1)*(n-2)/3;
     if(k>=4) ans+=n*(n-1)*(n-2)*(n-3)*3/8;
    cout<<ans;
    
}
