#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout<<"NO"<<endl;
#define YES cout<<"YES"<<endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n,m;
        cin>>n>>m;
        if(n==1 && m!=1)
        NO
        else if(m==1 || m==2 || m==3)
        YES
        else if(n>=4)
        YES
        else 
        NO
    }
}
