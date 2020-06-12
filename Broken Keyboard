#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin>>s;
      
        int n=s.length();
        char a[n];
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1] && i!=n-1)
            {a[i]=-1;a[i+1]=-1;
                i++;continue;
            }
            else
            a[i]=s[i];
        }
        int f[26]={0};
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {   if(a[i]>=97 && a[i]<=122)
            {f[a[i]-97]++;
            
            if(a[i]>='a' && a[i]<='z' && f[a[i]-97]==1)
            cout<<a[i];
            }
        }
        cout<<endl;
        
    }


}
