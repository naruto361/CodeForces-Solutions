#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {    int x;cin>>x;a.push_back(x);}
    int diff;
    int mini=*min_element(a.begin(),a.end());
    int maxi=*max_element(a.begin(),a.end());
    diff=maxi-mini;
    cout<<diff<<" ";
    ll countmini=0,countmaxi=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==mini) countmini++;
        if(a[i]==maxi) countmaxi++;
    }
    if(mini==maxi) cout<<(n*(n-1))/2;
    else{
    cout<<countmini*countmaxi;}
}
