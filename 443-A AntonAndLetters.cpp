#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    string s;
    getline(cin,s);
    int ans=0;
    int f[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z') f[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++)
    {if(f[i]==1) ans++;}
    cout<<ans;
}
