#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    int a,b,c;
	cin >> a >> b >> c;
	for (ll i = 0; i < b; i++) 
	{
		if (((a * 10) / b) % 10 == c) 
		{
			cout << i + 1;
			exit(0);
		}
		a *= 10;
		a = a % b;
	}
	cout << -1;
}
