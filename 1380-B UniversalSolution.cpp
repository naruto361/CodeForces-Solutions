/* .............
   S A K S H A M
   .............
*/   
#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
#define pb push_back
#define mod 1000000007
#define nl cout<<"\n";
#define ff first
#define ss second
#define loop1(m) for(int i=0;i<m;i++) 
#define vl vector<ll> 
#define vll vector<ll,ll>
#define vc vector<char>
#define msi map<string,int>
#define loop2(n,m) for(auto i=n;i<=m;i++)
#define count1s(n) __builtin_popcount(n)
bool psqrt(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
}
bool ifodd(ll n)
{
    return (n&1);
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int r=0,p=0,s=0;
        loop1(str.length())
        {
            if(str[i]=='R') r++;
            else if(str[i]=='P') p++;
            else s++;
        }
        int maxi=max(r,max(p,s));
        if(maxi==r)
        {
            loop1(str.length())
            cout<<"P";
        }
        else if(maxi==p)
        {
            loop1(str.length())
            cout<<"S";
        }
        else 
        {
            loop1(str.length()) 
            cout<<"R";
        }
        nl
    }
}
