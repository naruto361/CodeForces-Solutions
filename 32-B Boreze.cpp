#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        cout<<0;
        else if(s[i]=='-' && s[i+1]=='.')
        {cout<<1;i++;continue;}
        else if(s[i]=='-' && s[i+1]=='-')
        {cout<<2;i++;continue;}
    }
    
}
