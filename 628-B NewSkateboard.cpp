#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int ans=0;
    int r,n;
    for(int i=0;i<s.length();i++)
    {
        r=int(s[i]-'0');
        if(r%4==0) ans++;
        if(i)
        {
            n=int(s[i-1]-'0');
            if((n*10 + r)%4==0)
                ans+=i;
        }    
    }
    cout<<ans;
}
