#include <bits/stdc++.h>
using namespace std;
int check(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    if(a[i]>a[i+1])
    return 0;
    return 1;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       for(int j=0;j<n;j++)
       cin>>b[j];
       int ones=0,zeros=0;
       for(int i=0;i<n;i++)
       {
           if(b[i]==1) ones++;
           else zeros++;
       }
        if(check(a,n)==1)
        cout<<"Yes\n";
        else
        if(ones>0 && zeros>0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
       
   }
}
