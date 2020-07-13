#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    string ss[5];
    for(int i=0;i<5;i++)
        cin>>ss[i];
    int ans=0;
    for(int i=0;i<5;i++)
    {
        if(ss[i][0]==s[0] || ss[i][1]==s[1])   
            {ans=1;break;}
    }    
    if(ans==1)
    cout<<"YES";
    else
    cout<<"NO";
}
