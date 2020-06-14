#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
int t;
cin>>t;
ll sum=0;
int minprice=INT_MAX;
while(t--)
{
    int x,y;
    cin>>x>>y;
    if(y<minprice)
    {sum+=x*y;
    minprice=y;}
    else
    sum+=x*minprice;

}
cout<<sum;
    
}
