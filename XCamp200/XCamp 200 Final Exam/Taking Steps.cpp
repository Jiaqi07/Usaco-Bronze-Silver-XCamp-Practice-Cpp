#include <iostream>
//https://xjoi.net/contest/3014/problem/2
using namespace std;

typedef long long ll;

ll ways(ll n, ll m){
    ll s[100000];
    s[0] = 1;
    s[1] = 1;
    s[2] = 2;

    for (ll i = 3; i <= n; i++){
        s[i] = 0;
        for (ll j = 1; j <= m; j++) {
            s[i] += s[i - j] % 1000000007;
        }
    }
    return s[n];
}

int main(){
    ll n, k;
    cin >> n >> k;

    cout << ways(n, k) % 1000000007;

    return 0;
}