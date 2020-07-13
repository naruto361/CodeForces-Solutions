#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
int main()
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int one=0,two=0,three=0;
    vector<int> vone,vtwo,vthree;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {one++;
        vone.push_back(i+1);}
        else if(a[i]==2)
        {two++;
        vtwo.push_back(i+1);}
        else
        {three++;
        vthree.push_back(i+1);}
    }
    int mini=min(one,min(two,three));
    cout<<mini<<endl;
    if(mini>0)
    {
        for(int i=0;i<mini;i++)
        {
            cout<<vone[i]<<" "<<vtwo[i]<<" "<<vthree[i]<<endl;
        }
    }
    
}
