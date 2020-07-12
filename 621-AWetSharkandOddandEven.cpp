#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    ll sum=0;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+t);
    for(int i=0;i<t;i++)
    {
        if(sum%2==0) break;
        sum=sum-a[i];
        if(sum%2==0) break;
        else sum+=a[i];
    }
    cout<<sum;
}
