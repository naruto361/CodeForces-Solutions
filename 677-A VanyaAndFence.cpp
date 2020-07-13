#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    int n,k;
    cin>>n>>k;
    int ans=0;
    while(n--)
    {
        int x;
        cin>>x;
        ans++;
        if(x>k)
        ans++;
    }
    cout<<ans;
    
}
