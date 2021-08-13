/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long *f;
    f = new unsigned long long[n];
    f[0] = 1;
    f[1] = 2;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]);
    }
    cout << f[n-1];
}
*/