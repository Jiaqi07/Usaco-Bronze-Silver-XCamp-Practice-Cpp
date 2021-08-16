/*
#include <iostream>
using namespace std;
//https://xjoi.net/contest/2910/problem/6
int tot = 0;

void move(int n, char src_peg, char mid_peg, char dst_peg){
    ++tot;
    if(n == 1){
        cout << src_peg << "->" << dst_peg << '\n';
        return;
    }
    move(n-1, src_peg, dst_peg, mid_peg);
    cout << src_peg << "->" << dst_peg << '\n';
    move(n-1, mid_peg, src_peg, dst_peg);
}

int main(){
    int N;
    cin >> N;
    move(N, '1', '2', '3');

    cout << "tot=" << tot;
    return 0;
}
*/