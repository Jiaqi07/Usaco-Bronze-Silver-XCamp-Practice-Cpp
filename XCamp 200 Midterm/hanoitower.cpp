/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *s;
    s = new int[n];

    s[0] = 1;
    for (int i = 1; i < n; ++i) {
        s[i] = 2 * s[i - 1] + 1;
    }
    cout << s[n-1];
}
*/