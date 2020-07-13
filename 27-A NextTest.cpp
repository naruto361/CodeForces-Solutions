#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int f[3001]={0};
    for(int i=0;i<n;i++)
    {
        f[a[i]]=1;
    }
    int i;
    for(i=1;i<=3000;i++)
    {
        if(f[i]==0) break;
    }
    cout<<i;
}
