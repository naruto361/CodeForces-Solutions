#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(i==0)
            cout<<s[i];
            else
            {cout<<s[i];i++;}
        }
        cout<<endl;
    }
}
