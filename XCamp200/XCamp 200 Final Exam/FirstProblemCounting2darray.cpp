/*
#include <iostream>
//https://xjoi.net/contest/3014/problem/1
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int s[501][501] = {0};

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < M; ++i){
        int count = 0;
        for(int j = 0; j < N; ++j){
            if(s[j][i] == 1){
                ++count;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
*/