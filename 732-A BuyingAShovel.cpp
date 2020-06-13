#include <bits/stdc++.h>
using namespace std;
int main()
{
int k,r;
cin>>k>>r;
int i=1;
int x=k;
while(true)
{
    k=x*i;
    if(k%10==r || k%10==0)
    break;
    i++;
}
cout<<i;
}    
