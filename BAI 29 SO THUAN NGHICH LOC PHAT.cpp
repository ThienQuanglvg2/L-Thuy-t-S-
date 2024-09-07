#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n)
{
    int sum=0, res=0, ans=0, temp=n;
    while(n)
    {
        int sodu=n%10;
        res+=sodu;
        sum=sum*10+sodu;
        if(sodu==6) ++ans;
        n/=10;
    }
    return ans>=1 && (res%10==8) && sum==temp;
}
main()
{
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        if(check(i))
        {
            cout<<i<<" ";
        }
    }
}
