#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
#define YES cout<<"YES";
#define NO cout<<"NO";
bool check(char c)
{   if(c>=33 && c<=126)
    if(c=='H' || c=='Q' || c=='9')
    return true;
    else return false;
    return false;
}
int main()
{ 
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(check(s[i])) {ans=1;break;}
    }
    if(ans) YES
    else NO    
}
