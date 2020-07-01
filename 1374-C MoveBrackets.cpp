#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack <char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else { if(st.size()>0) st.pop();}
        }
        cout<<st.size()<<endl;
    }
}
