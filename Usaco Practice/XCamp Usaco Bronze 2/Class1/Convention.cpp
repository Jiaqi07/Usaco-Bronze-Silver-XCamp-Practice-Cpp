/*
//http://www.usaco.org/index.php?page=viewproblem2&cpid=858 //https://xjoi.net/contest/2889
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N, M, C;
int cows[100000];

bool satisfyBus(int time){
    int lowest = cows[0];
    int passengers = 0;
    int bussesUsed = 1;

    for(int i = 0; i < N; ++i){
        if(passengers >= C || cows[i] - lowest > time){
            ++bussesUsed;
            passengers = 0;
            lowest = cows[i];
        }
        ++passengers;
    }


    return bussesUsed <= M;
}

int main(){

    freopen("convention.in","r",stdin);
    freopen("convention.out","w",stdout);

    cin >> N >> M >> C;
    for(int i = 0; i < N; ++i){
        cin >> cows[i];
    }
    sort(cows, cows+N);

    int left = 0, right = cows[N-1];

    while(left < right){
        int middle = (left+right)/2;

        if(satisfyBus(middle)){
            //right = middle-1;
            right = middle;
        }
        else{
            left = middle+1;
        }
    }

    cout << left;
    return 0;
}*/