#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    int even=0,odd=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(n&1) odd++;
        else even++;
    }
    if(odd&1)
    cout<<odd;
    else cout<<even;
}
