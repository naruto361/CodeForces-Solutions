#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int ans=n;
      for(int i=2;i*i<=n;i++)
      {
         if(n%i==0)
         {ans=i;break;}
      }
      cout<<n/ans<<" "<<n-(n/ans)<<"\n";
    
    }
}
