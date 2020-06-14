#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
bool sortbyth(const tuple<int, int, int>& a,  
              const tuple<int, int, int>& b) 
{ 
    return (get<2>(a) < get<2>(b)); 
}
int main()
{   
    int n;
    cin>>n;
    vector <tuple<int,int,int>> v;
    int a1[n],a2[n],d[n];
    for(int i=0;i<n;i++)
    cin>>a1[i]>>a2[i];
    for(int i=0;i<n;i++)
    {
        d[i]=a2[i]-a1[i];
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(make_tuple(d[i],a1[i],a2[i]));
    }
    sort(v.begin(),v.end(),sortbyth);
    /*for(int i=0;i<n;i++)
    {
        cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
    }*/
    int ans=1;
    int low=get<1>(v[0]),high=get<2>(v[0]);
    for(int i=1;i<n;i++)
    {
        if(get<1>(v[i])<low  && get<2>(v[i])<low )
        {low=min(get<1>(v[i]),low) ;
        high=max(get<2>(v[i]),high) ;    
        ans++;}
        else if(get<1>(v[i])>high  && get<2>(v[i])>high )
        {low=min(get<1>(v[i]),low) ;
        high=max(get<2>(v[i]),high) ;    
        ans++;}
    }
    cout<<ans;
}    

