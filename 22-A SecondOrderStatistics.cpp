#include <bits/stdc++.h>
using namespace std;
int main() 
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ans=a[0];
    for(int i=1;i<n;i++)
    if(a[i]>ans) {cout<<a[i];break;}
    if(n==1) cout<<"NO";
    else if(a[0]==a[n-1]) cout<<"NO";
        
}
