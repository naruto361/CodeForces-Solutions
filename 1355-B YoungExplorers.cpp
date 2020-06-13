#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int grps=0,size=0;
	for(int i=0;i<n;i++)
	{
		size++;
		if(a[i]<=size)
		{
			grps++;
			size=0;
		}
		
	}
	cout<<grps<<"\n";
}

return 0;
}
