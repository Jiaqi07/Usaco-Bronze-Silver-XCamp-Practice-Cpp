/*
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin >> N;

    ll s[100001] = {0}, d[100001] = {0}, u[100001] = {0};
    s[1] = 1, s[2] = 5, d[1] = 0, d[2] = 1, u[1] = 1, u[2] = 4;

    for(ll i = 3; i <= N; ++i){
        u[i] = u[i-1] + (i*(i+1))/2;
        d[i] = d[i-2] + (i*(i-1))/2;
        s[i] = u[i] + d[i];
    }

    cout << s[N];
    return 0;
}
*/