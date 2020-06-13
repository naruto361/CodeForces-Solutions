#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        if((a*b)%2==0)
        sum=(a*b)/2;
        else
        sum=(a*b)/2 + 1;
        cout<<sum<<endl;
    }
}
