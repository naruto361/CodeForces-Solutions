#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    int row=0,column=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='B')
            {   c++;
                row+=i+1;
                column+=j+1;
            }
        }
    }
    cout<<row/c << " "<<column/c;
    
    
}
