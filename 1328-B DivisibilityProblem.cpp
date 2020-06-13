
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
       int k=0;
       if(a<b)
       k=b-a;
       else
       {
           if(a%b==0)
           k=0;
           else
           {
               int z=a%b;
               k=b-z;
           }
           
       }
       cout<<k<<"\n";
   }
}
