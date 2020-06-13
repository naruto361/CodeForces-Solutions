#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int k[31]={0};
        k[2]=2;
        for(int i=4;i<=30;i=i+2 )
        {
            k[i]=2*k[i-2] + 2;
        }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<k[n]<<endl;
    
    }
}
