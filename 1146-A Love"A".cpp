#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        a++;
    }
    if(a>s.length()/2) cout<<s.length();
    else cout<<2*a-1;
}
