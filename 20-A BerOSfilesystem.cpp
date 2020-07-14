#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='/')
        continue;
        else
        {
            if(s[i-1]=='/') {k=1;cout<<'/';}
            {cout<<s[i];k=1;}
        }
    }
    if(k==0)
    if(s[0]=='/') cout<<'/';
    
}
