#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool pfts(long double x) 
{    
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 
int main()
{
    int n;
    cin>>n;
    long double ans1=INT_MIN,ans2=INT_MIN;
    while(n--)
    {
        long double x;
        cin>>x;
        if(x>=0 && !pfts(x))
        {
            if(x>ans1) ans1=x;
        }
        if(x<0)
        {
            if(x>ans2)
            ans2=x;
        }
    }
    cout<<(int)max(ans1,ans2);
}
