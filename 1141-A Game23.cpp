#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,res=-1;
    cin>>n>>m;
    if (m % n == 0) 
    {
        res = 0;
        d = m / n;
        while (d % 2 == 0)
            {d /= 2; res++;}
        while (d % 3 == 0)
            {d /= 3; res++;}
        if (d != 1)
            res = -1;
    }
    cout<<res;
}
