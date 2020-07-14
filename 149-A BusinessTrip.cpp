#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[12];
    for(int i=0;i<12;i++)
    cin>>a[i];
    sort(a,a+12,greater <int>());
    if(n==0)
    {cout<<0;exit(0);}
    int sum=0;
    int i;
    for( i=0;i<12;i++)
    {
        sum+=a[i];
        if(sum>=n)
        {cout<<i+1;exit(0);}
    }
    cout<<-1;
}
