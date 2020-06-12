#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int t=__gcd(a,b);
  vector <int> v;
  for(int i=1;i*i<=t;i++)
  {
      if(t%i==0)
      { if(t/i==i)
        v.push_back(i);
        else
        {v.push_back(i);v.push_back(t/i);}
      }    
  }
  sort(v.begin(),v.end());
 int n;
  cin>>n;
  while(n--)
  {
    int l,r;
    cin>>l>>r;
    int mid=upper_bound(v.begin(),v.end(),r) -v.begin();
    if(mid> 0 && l<=v[mid-1])
    cout<<v[mid-1];
    else
    cout<<-1;
    cout<<endl;
  }
  
}
