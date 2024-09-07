#include<bits/stdc++.h>
using namespace std;
using ll = long long;
main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        ll res = i * i*(i * i - 1)/2 - 4*(i-1)*(i-2);
        cout << res << endl;
    }
}
