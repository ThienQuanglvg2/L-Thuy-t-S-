#include<bits/stdc++.h>
using namespace std;
int prime[10000001];
void sangso()
{
    for(int i = 1; i <= 10000001; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(10000001); i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 10000001; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
}
bool check(int n)
{
    int tmp = n % 10;
    n /= 10;
    while(n)
    {
        int r = n % 10;
        if(r > tmp)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
main()
{
    int n;
    cin >> n;
    sangso();
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(prime[i] && check(i))
        {
            ++ans;
        }
    }
    cout << ans;
}
