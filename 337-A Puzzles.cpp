#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n,m;
        cin>>n>>m;
        int a[m];
        for(int i=0;i<m;i++)
            cin>>a[i];
        int maxi,mini;
        int diff;
        int least=INT_MAX;
        sort(a,a+m);
        for(int i=0;i<=m-n;i++)
        {
            maxi=a[n+i-1];
            mini=a[i];
            diff=maxi-mini;
            least=min(diff,least);
        }
        cout<<least;
}
