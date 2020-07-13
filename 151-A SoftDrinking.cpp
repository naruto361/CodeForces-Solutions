#include <bits/stdc++.h>
using namespace std;
int main() 
{   
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a1,a2,a3;
    a1=(k*l)/nl;
    a2=c*d;
    a3=p/np;
    int mini=min(a1,min(a2,a3));
    cout<<mini/n;
}
