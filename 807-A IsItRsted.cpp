#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,l,z=0;
    cin>>n;
    int A[n],B[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i]>>B[i];
        if(A[i]!=B[i])
            z=1;
    }
    if(z==1)
        cout<<"rated";
    else
    {
        for(i=1;i<n;i++)
            if(A[i]>A[i-1]) break;
        if(i==n)
            cout<<"maybe";
        else
        cout<<"unrated";
    }
}
