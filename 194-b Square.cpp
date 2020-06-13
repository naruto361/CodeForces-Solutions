#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int t;
        cin>>t;
        if(t%2==0)
        cout<<4*t + 1<<endl;
        else if(t%4==3)
        cout<<t+1<<endl;
        else cout<<2*t +1<<endl;
    }
    
}
