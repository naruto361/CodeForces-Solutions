
#include <bits/stdc++.h>

using namespace std;
bool prime(unsigned int x)
{
    for(int i=2;i*i<=x;i++)
    if(x%i==0) return false;
    return true;
}

int main()
{
    unsigned int n;
    cin>>n;
    int ans;
    if(n==1 || n==2)
    ans=1;
    else if(n%2==0)
    ans=2;
    else if(prime(n))
    ans=1;
    else if(prime(n-2))
    ans=2;
    else
    ans=3;
    
    cout<<ans;
}
