#include <iostream>
using namespace std;
#define ll long long int
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(!(abs(a[i]-a[i-1])==1 || (a[i]==1 && a[i-1]==n) || (a[i-1]==1 && a[i]==n)))
            {k=0;NO;break;}
        }
        if(k) YES
        //else NO
    }
}
