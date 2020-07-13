#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c; 
    int  row[r] = {0}, col[c] ={0};
    string s;
    for (int i = 0; i < r; ++i)
    {
        cin >> s;
        for (int j = 0; j < c; ++j)
        {
            if (s[j] == 'S')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int ans=0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (row[i] == 0 || col[j] == 0) ans++;
        }
    }
    cout <<ans<< endl;
}
