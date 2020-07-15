#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int left=0,right=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L') left++;
        else right++;
    }
    cout<<1+left+right;
}
