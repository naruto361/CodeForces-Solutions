#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<k)
        NO
        else if( (n-k + 1)&1 )
        {
            YES
            for(int i = 1 ; i < k ; i++)
                cout << 1 << " ";
            cout << n - k + 1 << endl ;
        }
        else if( (n - 2*(k-1) )%2 ==0 && (n - 2*(k-1))> 0 )
        {
            YES
            for(int i = 1 ; i < k ; i++)
                cout << 2 << " ";
            cout << n - 2*(k-1) << endl ;
        }
        else NO
        
    }
}
