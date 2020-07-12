#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n>26)
    cout<<-1;
    else
    {
        int f[26]={0};
        for(int i=0;i<s.length();i++)
        f[s[i]-'a']++;
        int sum=0;
        for(int i=0;i<26;i++)
        {
            if(f[i]>1) sum+=f[i]-1;
        }
        cout<<sum;
    }
}
