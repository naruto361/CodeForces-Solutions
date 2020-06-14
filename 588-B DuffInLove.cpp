#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n;
    cin>>n;
    vector <ll> v;
    v.push_back(1);
    v.push_back(n);
    
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
        {v.push_back(i);
        v.push_back(n/i);}
        else
        v.push_back(i);
        }
    }
   
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--)
    {    int k=1;
        for(ll j=2;j*j<=v[i];j++)
        { if(v[i]%(j*j)==0) {k=-1;break;}}
        
        if(k==1) {cout<<v[i];break;}
    }
}
