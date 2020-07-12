#include <bits/stdc++.h>
using namespace std;
int main() 
{
	string s;
	cin>>s;
	int c=1;
	for(int i=0;i<s.size();i++)
	{
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
	    {
	        i+=2;
	        if(!c)
	            cout<<" ";
	        continue;
	    }
	    else 
	    {
	        c=0;
	        cout<<s[i];
	    }
	}
}
