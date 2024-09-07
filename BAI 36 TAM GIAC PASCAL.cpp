#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
ll c[105][105];
void banhcanh()
{
    for(int i = 0; i <= 100; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0|| i == j) c[i][j] = 1;
            else c[i][j] = (c[i - 1][j - 1] + (c[i-1][j])) % mod;
        }
    }
}
main()
{
    int n;
    cin >> n;
    banhcanh();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << c[i][j]<<" ";
        }
        cout << endl;
    }
}
