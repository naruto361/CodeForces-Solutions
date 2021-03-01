#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    int x;
    for(int i=0;i<n;i++) cin>>a[i];
    int ones=0;
    for(int i=0;i<n;i++) if(a[i]) ones++;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1)
        {
            if(a[m-1] ) ones--;
            a[m-1]=1-a[m-1];
            if(a[m-1]) ones++;
        }
        else{
            if(m<=ones) cout<<1;
            else cout<<0;
            cout<<endl;
        }

    }
}
