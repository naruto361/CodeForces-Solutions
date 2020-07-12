#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n+1];
        for(int i = 1;i <= n;i++) 
        {
            cin>>a[i];
            a[i] = abs(a[i]);
        }
        for(int i = 1;i <= n;i++) 
        {
            if(i & 1) 
                cout<<-a[i]<<" ";
             else 
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
