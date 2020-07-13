#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
int main()
{ 
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    cin>>a[i];
    sort(a,a+t);
    int ans=1;
    for(int i=1;i<t;i++)
    {
        if(a[i]%a[0] !=0) {ans=0;break;}
    }
    if(ans==0)
    cout<<-1;
    else cout<<a[0];
}
