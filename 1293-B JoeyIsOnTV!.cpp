#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	cin>>n;
    double ans=0.0;
    double i=n;
	while(i>0)
	{
	    ans+=1/i;
	    i--;
	}
	cout<<ans;     
}
