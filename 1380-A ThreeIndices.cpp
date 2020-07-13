#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],r[n],l[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        bool flag=true;
        for(ll i=1;i<n-1;i++)
        {
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
            {
            cout<<"YES\n"<<i<<" "<<i+1<<" "<<i+2<<endl;
            flag=false;
            break;
            }
        }
        if(flag)
        cout<<"NO"<<endl;
    }
}
 
