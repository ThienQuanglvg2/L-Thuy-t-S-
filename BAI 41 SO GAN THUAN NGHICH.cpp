#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(char c[])
{
    int d = c[0] - '0', cuoi = c[strlen(c)-1] - '0';
    if(!(d == 2*cuoi || cuoi == 2*d))
        return 0;
    int l = 1, r = strlen(c) - 2;
    while(l < r)
    {
        if(c[l] != c[r]) return 0;
        ++l, r;
    }
    return 1;
}
main()
{
    char c[20];
    cin >> c;
    if(solve(c))
    {
        cout <<"YES";
    }
    else cout <<"NO";
    return 0;
}
