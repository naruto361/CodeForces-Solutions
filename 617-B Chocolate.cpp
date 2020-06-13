#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ones=0;

    for(int i=0;i<n;i++)
    if(a[i]==1) ones++;
    
    if(ones==1 || ones==n) {cout<<1;exit(0);}
    else if(ones==0) {cout<<0;exit(0);}
    long long int ans=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            for(int j=i+1;j<n;j++)
            if(a[j]==1) {ans*=j-i;break;}
        }
    }
    cout<<ans;
}    
