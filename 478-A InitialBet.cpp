#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int a[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {cin>>a[i];sum+=a[i];}
    int avg=sum/5;
    int diff=0;
    for(int i=0;i<5;i++)
    {
        diff+=a[i]-avg;
    }
    if(avg==0)
    {cout<<-1;exit(0);}
    if(diff==0)
    cout<<avg;
    else
    cout<<-1;
    
    
    
    
}
