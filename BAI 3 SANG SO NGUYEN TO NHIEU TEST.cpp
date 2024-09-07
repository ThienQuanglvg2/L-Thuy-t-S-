#include<bits/stdc++.h>
using namespace std;
int prime[10000001];
void sanso(){
for(int i = 1; i <= 10000001; i++){
    prime[i] = 1;
}
prime[0] = prime[1] = 0;
for(int i = 2; i <= sqrt(10000001); i++){
    if(prime[i]){
        for(int j = i*i; j<= 10000001; j+=i){
            prime[j] = 0;
        }
    }
}
}
main(){
//int n; cin >> n;
sanso();
int q; cin >> q;
while(q--){
        int n; cin >> n;
    if(prime[n]){
        cout << "YES";
    }
    else cout <<"NO";

}
}
