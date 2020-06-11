#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        cin>>a[i][j];
    }
    int ans=0;
    for(int i = 1; i <=n; i++) 
    {
  		for(int j = 1; j <=m; j++) 
  		{
  			if (a[i][j] == 1) 
  			{
				if (i == 1 || i ==n)
					{ans= 1;break;}
				if (j == 1 || j ==m)
					{ans = 1;break;}	  			 	
  			}
		}		
	}
	
   if(ans==1)
   cout<<2;
   else
   cout<<4;
}
