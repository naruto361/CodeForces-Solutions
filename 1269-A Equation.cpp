#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int num;
    cin>>num;
    if(num & 1)
        cout << num + 9 << " " << 9 << endl;
    
    else 
        cout << num + 4 << " " << 4 << endl;
}
