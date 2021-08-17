#include <iostream>
#include <cmath>
using namespace std;
//https://xjoi.net/contest/2960/problem/1?locale=zh
int currAdd = 4, start = 2;
double sum = 0;

void fraction(int n){
    sum += 1.0/start;

    if(n == 1){
        return;
    }

    start += currAdd;
    currAdd += 2;
    //cout << start << '\n';

    return fraction(n-1);
}

int main(){
    int N;
    cin >> N;

    fraction(N);

    cout << floor(sum*100+0.5)/100;
    return 0;
}