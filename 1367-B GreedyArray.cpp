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
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            if(i%2!=a[i]%2)
            {
                if(i%2==0) even++;
                else odd++;
            }
        }
        if(n==1)
        {
            if(a[0]%2==0)
            cout<<0;
            else
            cout<<-1;
        }
        else
        {
            
            if(even==0 && odd==0)
            cout<<0;
            else if(odd!=even)
            {
                cout<<-1;
            }
            else cout<<min(odd,even);
        }
        cout<<endl;
    }
}
