#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int digits=0;
int t=n;
while(t>0){
    digits++;
    t/=10;
}
int a=pow(10,digits-1);
cout<<a-n%a;
}    
