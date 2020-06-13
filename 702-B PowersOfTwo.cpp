#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int ans = 0;
	map<int,int>mp;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		for(int j=1;j<31;j++)
		{
			if(mp.find((1<<j) - x)!=mp.end())
				ans += mp[(1<<j) - x];
		}
		mp[x]++;
	}
	cout<<ans<<endl;
}
