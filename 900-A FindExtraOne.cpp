#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x >=0) a++;
        else b++;
    }
    if(a<=1 || b<=1)
    cout<<"Yes";
    else 
    cout<<"No";
}
