#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define YES cout<<"YES";
#define NO cout<<"NO";
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int f[26]={0};
    for(int i=0;i<t;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        f[s[i]-65]++;
        else f[s[i]-65-32]++;
    }
    int ans=1;
    for(int i=0;i<26;i++)
    if(f[i]==0) {ans=0;break;}
    
    if(ans) YES
    else NO
    
}
