/*
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll N, curIndex = 0;

int factorial(ll sum){
    ++curIndex;
    sum *= curIndex;
    sum %= 998244353;

    if(curIndex == N){
        return sum;
    }

    return factorial(sum);
}

int main() {
    cin >> N;

    cout << factorial(1);
}
*/