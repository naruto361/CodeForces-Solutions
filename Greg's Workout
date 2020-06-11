#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans[3]={0};
    for(int i=0;i<n;i++)
    {
        if(i%3==0)
        ans[0]+=a[i];
        else if(i%3==1)
        ans[1]+=a[i];
        else
        ans[2]+=a[i];
    }
    int maxi=*max_element(ans,ans+3);
    if(ans[0]==maxi)
    cout<<"chest";
    else if(ans[1]==maxi)
    cout<<"biceps";
    else
    cout<<"back";
}
