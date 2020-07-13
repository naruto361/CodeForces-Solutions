#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    if(n%2==1)
    cout<<0;
    else if(n%4==0)
    cout<<n/4-1;
    else cout<<n/4;
}
