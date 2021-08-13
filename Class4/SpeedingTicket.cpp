/*
#include <iostream>
#include <algorithm>
#include <vector>
//Date Done: 8/5/2021 at 1:47PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=568
using namespace std;

int main() {
    //freopen("speeding.in","r",stdin);
    //freopen("speeding.out","w",stdout);

    int N, M, x, y, count = 0;

    cin >> N >> M;

    int road[100];
    int bessie[100];
    int maxAns = -111;


    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        for(int j = 0; j < x; j++) {
            road[count] = y;
            ++count;
        }
    }

    count = 0;
    for(int i = 0; i < M; ++i){
        cin >> x >> y;
        for(int j = 0; j < x; j++) {
            bessie[count] = y;
            ++count;
        }
    }

    for(int i = 0; i < 100; ++i){
        if(road[i] < bessie[i]){
            maxAns = max(bessie[i] - road[i], maxAns);
        }
    }

    if(maxAns <= 0){
        maxAns = 0;
    }

    cout << maxAns;

    return 0;
}*/