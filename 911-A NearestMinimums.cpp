#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k=*min_element(a,a+n);
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        v.push_back(i+1);
    }
    int mini=INT_MAX;
    for(int i=1;i<v.size();i++)
    {
        mini=min(mini,v[i]-v[i-1]);
    }
    cout<<mini;
    
}
