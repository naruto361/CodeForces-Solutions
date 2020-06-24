#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    v.push_back({0,0});
    v.push_back({0,1});
    v.push_back({1,0});
    v.push_back({1,1});
    while(n--)
    {   int x=v.back().first;
        int y=v.back().second;
        v.push_back({x+1,y });
        v.push_back({ x,y+1 });
        v.push_back({ x+1,y+1 });
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<< " " << v[i].second<<endl;
    
}
