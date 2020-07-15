#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int z=n;int s=0;
       while(z)
       {
           if(z%10!=0)
           s++;
           z=z/10;
       }
       cout<<s<<endl;
       int a=0;
       while(n>0)
       {    if(n%10!=0)
       cout<<(n%10)*pow(10,a)<<" ";
           n=n/10;
           a++;
       }
       cout<<endl;
        
    }
}
