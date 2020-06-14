#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{   
    int n;
    cin>>n;
    string s;
    cin>>s;
    int e=0;
    for(int i=0;i<n;i++)
    if(s[i]-'0'==8)
    e++;
    if(n<11 || e==0)
    cout<<0;
    else
    cout<<min(e,n/11);
    
    
}    

