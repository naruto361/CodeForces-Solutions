#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ans,sum=0;
        ans=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+') sum++;
            else
            {
                sum--;
                if(sum==-1)
                {
                    sum=0;
                    ans+=i+1;
                }
                
            }
            
        }
        cout<<ans<<"\n";
    }
}
