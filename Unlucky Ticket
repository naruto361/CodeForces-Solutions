#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans1=1,ans2=1;
    string s1,s2;
    s1=s.substr(0,n);
    s2=s.substr(n,n);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<n;i++)
    {
        if(s1[i]<=s2[i])
        ans1=0;
        if(s1[i]>=s2[i])
        ans2=0;
    }
    if(ans1 || ans2)
    cout<<"YES";
    else
    cout<<"NO";
}
