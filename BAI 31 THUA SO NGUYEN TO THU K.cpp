#include<bits/stdc++.h>
using namespace std;
int tsnt(int n, int k)
{
    int cnt = 0;
    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            ++cnt;
            if(cnt == k) return i;
            n /= i;
        }
    }
    if(n > 1) ++cnt;
    if(cnt == k) return n;
    return -1;
}
main()
{
    int n, k;
    cin >> n >> k;
    cout << tsnt(n, k);
}
