#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A') a++;
        else b++;
    }
    if(a>b) cout<<"Anton";
    else if(b>a) cout<<"Danik";
    else cout<<"Friendship";
}
