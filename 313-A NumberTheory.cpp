#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t>=0) cout<<t;
    else
    {   
        string s = to_string(t);
        int l=s.length();
        int k1=(s[l-1]-48)%10;
        int k2=((s[l-2]-48)%100)%10;
        if(k1>k2)
        s.erase(l-1);
        else s.erase(l-2,1);
        if(s.length()==2 && s[1]=='0')
        cout<<0;
        else{
        for(int i=0;i<s.length();i++)
        cout<<s[i];}
    }
    
}
