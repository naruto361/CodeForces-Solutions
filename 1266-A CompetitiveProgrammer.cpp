#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int even=0,zero=0;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            sum+=s[i]-48;
            if((s[i]-48) % 2==0) even++;
            if(s[i]==48) zero++;
        }
        if(sum %3==0 && zero>0 && even>1)
            cout<<"red\n";
        else cout<<"cyan\n";
    }
}
