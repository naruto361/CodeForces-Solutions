#include <bits/stdc++.h>
using namespace std;
#define n 1000000
int main()
{
   vector<int> least_prime(n+1, 0); 
    least_prime[1] = 1; 
    for (int i = 2; i <= n; i++) 
    { 
        if (least_prime[i] == 0) 
        { 
            least_prime[i] = i; 
            for (int j = 2*i; j <= n; j += i) 
                if (least_prime[j] == 0) 
                   least_prime[j] = i; 
        } 
    }
    
    int t;
    cin>>t;
    
    while(t--)
    {
        long long int a,b;cin>>a>>b;
        long long int ans=a;
        for(int g=0;g<b;g++)
        {   
              int d = (b - g);       
      if (ans % 2 == 0) { ans += d*2; break; }
            ans=ans+least_prime[ans];
        }
        
   
        cout<<ans<<endl;
    }
}
