#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        
        if(a[0]!=b[0])
        {cout<<"NO\n";continue;}
        
        int plus1[n]={0},minus1[n]={0};
        if(a[0]==1)
        plus1[0]=1;
        if(a[0]==-1)
        minus1[0]=1;
        
        int ans=1;
        for(int i=1;i<n;i++)
        {   plus1[i]=plus1[i-1];
            minus1[i]=minus1[i-1];
            if(a[i]==1)
            plus1[i]=plus1[i-1]+1;
            else if(a[i]==-1)
            minus1[i]=minus1[i-1]+1;
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]>b[i])
            {
                if(minus1[i-1]<1)
                {ans=-1;break;}
                    
            }
            else if(a[i]<b[i])
            {
                if(plus1[i-1]<1)
                {ans=-1;break;}
            }
            //cout<<plus1[i]<<" "<<minus1[i]<<endl;
        }
        if(ans==-1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}
