/*
#include <iostream>
#include <unordered_map>
//https://xjoi.net/contest/2987/problem/2?locale=en
using namespace std;

int w, p, a, b;
unordered_map<int, int> s;

int seq(int N){
    if(s[N] != 0){
        return s[N];
    }

    if(N == p){
        return 1;
    }
    if(N < p){
        return 0;
    }

    int ways = seq(N-a) + seq(N-b);
    s[N] = ways;

    return ways;
}

int main() {
    cin >> w >> p >> a >> b;

    cout << seq(w);
    return 0;
}
*/