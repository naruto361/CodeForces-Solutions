#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int a1,b1,a2,b2;
      cin>>a1>>b1>>a2>>b2;
      int ans=0;
     if(a1==a2)
     {
         if(b1+b2== a1)
         ans=1;
        
     }
      if(a1==b2)
     {
         if(a2+b1== a1)
         ans=1;
        
     }
      if(b1==a2)
     {
         if(a1+b2 ==b1)
         ans=1;
         
     }
      if(b1==b2)
     {
         if(a1+a2 ==b1)
         ans=1;
        
     }
     
     if(ans==1)
     cout<<"Yes\n";
    else
    cout<<"No\n";
    }
}
