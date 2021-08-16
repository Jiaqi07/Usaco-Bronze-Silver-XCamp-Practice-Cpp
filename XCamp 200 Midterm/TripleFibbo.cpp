/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, out;
    cin >> n;

    int *s;
    s = new int[n];
    s[0] = 1;
    s[1] = 1;
    s[2] = 1;

    for(int i = 3; i < n; ++i){ //1: M, 2: O, 3: O, 4: D
        s[i] = s[i - 1] + s[i-2] + s[i-3];
    }
    cout << s[n-1];
    return 0;
}
 */