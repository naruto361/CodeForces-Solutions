#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    int a[5];
    for(int i=1;i<5;i++)
    cin>>a[i];
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1') sum+=a[1];
        else if(s[i]=='2') sum +=a[2];
        else if(s[i]=='3') sum+=a[3];
        else if(s[i]=='4') sum+=a[4];
    }
    cout<<sum;
}
