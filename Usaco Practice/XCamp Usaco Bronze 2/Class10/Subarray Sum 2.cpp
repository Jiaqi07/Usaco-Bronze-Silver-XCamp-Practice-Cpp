/*
#include <iostream>
#include <vector>
#include <map>
#define ll long long
//https://cses.fi/problemset/task/1661
using namespace std;

int main(){
    int N, X, V;
    cin >> N >> X;

    map<ll, int> sums;
    vector<int> s;

    for(int i = 0; i < N; ++i){
        cin >> V;
        s.push_back(V);
    }
    ll prefix = 0, ans = 0;
    sums[0] = 1;

    for(int i : s){
        prefix += i;
        ans += sums[prefix - X];
        ++sums[prefix];
    }
    cout << ans;
}
*/