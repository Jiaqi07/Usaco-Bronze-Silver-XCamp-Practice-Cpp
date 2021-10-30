/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() { 
    int n, adult = 0;
    cin >> n;

    int *baby = new int[n];
    baby[0] = 1;

    for (int i = 1; i < n; ++i){
        baby[i] = adult * 3;
        adult += baby[i-1];
    }

    cout << adult << '\n' << baby[n-1];
    delete baby;
}
*/