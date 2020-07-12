#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin >> t;
    while(t--)
    {
        long n, m;
        cin >> n >> m;
        vector<vector<long> > a(n,vector<long>(m, 0));
        for(long row = 0; row < n; row++)
        {
            for(long col = 0; col < m; col++)
            cin>> a[row][col];
        }
        bool possible(true);
        for(long row = 0; row < n; row++)
        {
            if(!possible) break;
            for(long col = 0; col < m; col++)
            {
                long d = (row > 0) + (col > 0) + (row + 1 < n) + (col + 1 < m);
                if(a[row][col] > d) {possible = false; break;}
                else a[row][col] = d;
            }
        }

        cout << (possible ? "YES" : "NO") << cout<<endl;
        if(possible)
        {
            for(long row = 0; row < n; row++)
            {
            for(long col = 0; col < m; col++)
            {
                cout << a[row][col] << " ";
            }
            cout <<endl;
            }
        }
    }
}
