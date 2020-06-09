#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,m;
        cin >> n >> m;
        int a[n+1][m+1];
		set< int > r, c;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
					r.insert(i), c.insert(j);
			}
		}
		int mn = min(n - r.size(), m - c.size());
		if(mn % 2)
			cout << "Ashish" << endl;
		else
			cout << "Vivek" << endl;
      }
}
