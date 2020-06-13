#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       int ans=0;
       if(a==1 || b==1)
       ans=1;
       else if(a==2 && b==2)
       ans=1;
       else
       ans=0;
       if(ans) cout<<"YES";
       else
       cout<<"NO";
       cout<<endl;
    }
}
