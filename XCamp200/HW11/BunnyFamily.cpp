/*
#include <iostream>
//https://xjoi.net/contest/2987/problem/1
using namespace std;


int baby = 2, adult = 0, adulT = 0;

void seq(int n){
    if(n <= 0){
        return;
    }

    if(baby >= 2){
        adulT += baby;
        baby = 0;
    }

    if(adult >= 2){
        baby += adult;
    }

    adult = adulT;

    return seq(n-1);
}

int main() {
    int n;
    cin >> n;

    seq(n);

    cout << adult/2 << '\n' << baby/2;
    return 0;
}
*/