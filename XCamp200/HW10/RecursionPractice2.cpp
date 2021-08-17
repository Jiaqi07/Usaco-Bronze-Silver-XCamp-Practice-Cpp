#include <iostream>
#include <cmath>
using namespace std;
//https://xjoi.net/contest/2960/problem/2

void seq(int n){
    if(n == 1){
        cout << 1;
        return;
    }

    seq(floor(n/2));
    cout << " " << n << " ";
    seq(n - floor(n/2));
}

int main(){
    int N;
    cin >> N;

    seq(N);
    return 0;
}