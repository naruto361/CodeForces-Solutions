#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int best=1;
	int m=1;
	for(int i=0;i<n-1;i++)
	{
	    if(a[i]<a[i+1])
	    m++;
	    else m=1;
	    best=max(best,m);
	}
	cout<<best;
}