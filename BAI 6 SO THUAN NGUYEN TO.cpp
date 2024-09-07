#include<bits/stdc++.h>
using namespace std;
int check(int n){
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        return 0;
    }
}
return n > 1;
}
int tong(int n){
    int sum = 0;
while(n != 0){
    int r = n % 10;
    if(r != 2 && r != 3 && r != 5 && r != 7){
        return false;
        sum += r;
    }

}
return check(sum);
}
main(){
int a, b; cin >> a >> b;
int ans = 0;
for(int i = a; i <= b; i++){
    if(tong(i) && check(i)){
        ++ans;
    }
}
cout << ans;
}
