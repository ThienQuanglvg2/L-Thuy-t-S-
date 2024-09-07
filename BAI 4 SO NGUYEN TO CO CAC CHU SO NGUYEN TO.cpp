#include<bits/stdc++.h>
using namespace std;
int prime[10000001];
void sangso(){
for(int i = 1; i <= 10000001; i++){
    prime[i] = 1;
}
prime[0] = prime[1] = 0;
for(int i = 2; i <= sqrt(10000001); i++){
    if(prime[i]){
        for(int j = i*i; j <= 10000001; j+=i){
        prime[j] = 0;
    }
}
}
}
int check(int n){
while(n != 0){
    int r = n % 10;
    if(r != 2 && r != 3 && r != 5 && r != 7){
        return false;
    }
    n/=10;
}
return true;
}
main(){
    int a, b; cin >> a >> b;
    sangso();
    int ans = 0;
    for(int i = a; i <= b; i++){
        if(prime[i] && check(i)){
            ++ans;
        }
    }
    cout << ans;
}
