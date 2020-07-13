#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    int lower=0,capital=0;
    for(int i=0;i<s.length();i++)
    if(s[i]>='a' && s[i]<='z') lower++;
    else capital++;
    if(capital>lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
}
