#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool isPrime(ll n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 

bool check(ll n) 
{ 
    int sq = (int)sqrt(n); 
    if (1LL * sq * sq != n) 
        return false; 
    return isPrime(sq) ? true : false; 
} 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        if(check(x))
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}
