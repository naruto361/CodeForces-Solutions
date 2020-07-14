#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int steps=0;
    steps=n/5;
    n=n%5;
    steps+=n/4;
    n=n%4;
    steps+=n/3;
    n=n%3;
    steps+=n/2;
    n=n%2;
    steps+=n/1;
    cout<<steps;
    
}
