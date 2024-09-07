#include<bits/stdc++.h>
using namespace std;
int prime[10000001];
void sangso(){
for(int i = 1; i <= 10000001; i++){
    prime[i] = 1;
}
prime[0] = prime[1] = 0;
for(int i = 2; i <= sqrt(10000001);i++){
    if(prime[i]){
        for(int j = i*i; j <= 10000001; j+=i){
            prime[j] = 0;
        }
    }
}
}
main(){
int n; cin >> n;
sangso();
for(int i = 2; i <= n; i++){
    if(prime[i]){
        cout << i <<" ";
    }
}
}
