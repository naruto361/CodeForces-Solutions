#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    char f[10];
    f[0]='c';f[1]='o';f[2]='d';f[3]='e';f[4]='f';f[5]='o';f[6]='r';f[7]='c';f[8]='e';f[9]='s';
    int c[10];
    for(int i=0;i<10;i++) c[i]=1;
    int i=0;
    ll ans=1;
    while(1)
    {   if(ans>=n)
        break;
        c[i]++;
        ans=ans/(c[i]-1);
        ans=ans*c[i];
        i++;
        if(i==10)
        i=0;
        
    }
    
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<c[i];j++)
        cout<<f[i];
    }
    
    
}
