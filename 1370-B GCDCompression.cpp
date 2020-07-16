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
        ll n;
        cin>>n;
        vector< int > even, odd;
        ll a[2*n +1];
		for(int i = 1; i <= 2 * n; i++)
		{
			cin >> a[i];
			if(a[i] % 2)
				odd.push_back(i);
			else
				even.push_back(i);
		}
		vector< pair< int, int > > ans;
		for(int i = 0; i + 1 < odd.size(); i += 2)
			ans.push_back({odd[i], odd[i + 1]});
		for(int i = 0; i + 1 < even.size(); i += 2)
			ans.push_back({even[i], even[i + 1]});
		for(int i = 0; i < n - 1; i++)
			cout << ans[i].ff << " " << ans[i].ss<<endl;
	}
}
