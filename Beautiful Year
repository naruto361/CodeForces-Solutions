#include <bits/stdc++.h>

using namespace std;
bool check(int x)
{
    int f[10]={0};
    while(x>0)
    {   f[x%10]++;
        if(f[x%10]>1)
        return false;
        x=x/10;
    }
    return true;
}
int main()
{
int n;
cin>>n;

while(true)
    {
        n++;
        if(check(n))
        {cout<<n;break;}
    }
    
}
