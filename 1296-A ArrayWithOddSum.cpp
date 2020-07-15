#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int odd=0,even=0;
        int s,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            sum+=s;
            if(s%2==1) odd++;
            else even++;
        }
        if(sum&1) YES
        else if(odd>0 && even>0) YES
        else NO
    }    
}
