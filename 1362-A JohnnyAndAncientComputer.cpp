#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   while(t--)
   {
       long long int a,b;
       cin>>a>>b;
       int ans=0;
       if(a>b)
       swap(a,b);
       if(a==b)
       ans=0;
       if(b/a<1)
       ans=-1;
       else
       {    while(a!=b)
            {
           
           if(a*8 <= b)
           {a=a*8;ans++;}
           else if(a*4 <=b )
           {
               a=a*4;ans++;
           }
           else if(a*2 <=b)
           {
               a=a*2;ans++;
           }
           
           else
           {
               if(a==b) break;
            else
           {ans=-1;break;}
           
           }
           //else {
             //  if(ans==0) ans=-1;
           //break;}
           }
       }
       cout<<ans<<endl;
   }
}
