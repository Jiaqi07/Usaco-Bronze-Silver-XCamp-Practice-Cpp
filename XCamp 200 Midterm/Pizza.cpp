/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *s;
    s = new int[n];

    s[0] = 1;
    s[1] = 2;
    s[2] = 4;
    s[3] = 7;

    for (int i = 4; i <= n; ++i) {
        s[i] = s[i-1] + i;
    }
    cout << s[n];
}
 */