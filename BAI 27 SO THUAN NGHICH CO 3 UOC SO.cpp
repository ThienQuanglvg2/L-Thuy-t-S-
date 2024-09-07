#include<bits/stdc++.h>
using namespace std;
int sodao(int n)
{
    int sd = 0;
    int tmp = n;
    while(n != 0)
    {
        sd = sd * 10 + n % 10;
        n /= 10;
    }
    return sd == tmp;
}
int check(int n)
{
    int ans = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {

            while(n % i == 0)
            {

                n /= i;
            }
            ++ans;
        }
    }
    if(n != 1) ++ans;
    return ans >= 3;
}
main()
{
    int a, b;
    cin >> a >> b;
    int ok = 0;
    for(int i = a; i <= b; i++)
    {
        if(sodao(i) && check(i))
        {
            cout << i <<" ";
            ok = 1;
        }
    }
    if(ok == 0) cout <<-1;
}
