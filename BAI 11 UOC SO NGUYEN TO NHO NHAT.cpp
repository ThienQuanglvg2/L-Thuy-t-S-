#include<bits/stdc++.h>
using namespace std;
int uocso(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {

        while(n % i == 0)
        {
            n /= i;
            return i;
        }
    }
    if(n != 1)// n chua phan tich xong
        return n;



    return 1;
}
main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {

        cout<< uocso(i)<<endl;

    }
}
