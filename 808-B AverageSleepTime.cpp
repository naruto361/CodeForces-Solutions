#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double n,k;
    cin>>n>>k;
    int z=(int)k;
    int y=(int)n;
    long double a[y+1];
    for(int i=1;i<=y;i++)
    cin>>a[i];
    long double sum=0;
    int s=0;
    for(int i=1;i<=y/2;i++)
    {   if(i+z-1<=y)
        s++;
        if(s<=z)
        sum=sum+a[i]*s;
        else
        sum+=a[i]*z;
        
    }

     s=0;
    for(int i=y;i>y/2;i--)
    {   if(y-i+z-1<y)
        s++;
        if(s<=z)
        sum=sum+a[i]*s;
        else
        sum+=a[i]*z;
    }
    
    cout << fixed << setprecision(8);
    cout<<(double) sum/(double)(y-z+1);

}    
