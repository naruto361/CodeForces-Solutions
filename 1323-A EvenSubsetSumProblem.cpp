#include <bits/stdc++.h>
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
        vector <int> odd;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {cout<<1<<endl<<i+1<<endl;ans=1;break;}
            else
            {
                odd.push_back(i+1);
            }
        }
        if(ans==0)
        {
            if(odd.size()>=2)
            {cout<<2<<endl;
            cout<<odd[0]<<" "<<odd[1]<<endl;}
            else cout<<-1<<endl;
        }
    }
}
