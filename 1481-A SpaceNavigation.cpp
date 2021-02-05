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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
bool isprime(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int u=0,d=0,l=0,r=0;
        loop1(s.length())
        {
            if(s[i]=='U') u++;
            else if(s[i]=='D') d++;
            else if(s[i]=='L') l++;
            else if(s[i]=='R') r++;
        }
        int ans1=0,ans2=0;
        if(x>=0)
        {
            if(r>=x) ans1=1;
            //else ans=0;
        }
        else
        {
            if(l>=abs(x)) ans1=1;
            //else ans=0;
        }
        
        if(y>=0)
        {
            if(u>=y) ans2=1;
            //else ans=0;
        }
        else
        {
            if(d>=abs(y)) ans2=1;
            //else ans=0;
        }
        //cout<<l<<r<<u<<d<<endl;
        if(ans1==1 && ans2==1) YES
        else NO
    }
}
