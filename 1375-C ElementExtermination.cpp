#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        int y;
        for(int p = 1; p < n; p++)
            cin>>y;
        if(y>x) cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }

    return 0;
}
