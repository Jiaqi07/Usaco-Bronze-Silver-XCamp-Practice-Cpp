/*
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/3/2021 at 1:54PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=663
using namespace std;

int main() {
    //freopen("square.in","r",stdin);
    //freopen("square.out","w",stdout);

    int x[4], y[4];
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];

    sort(x, x+4);
    sort(y, y+4);

    int maxSide = max(x[3] - x[0], y[3] - y[0]);
    cout << maxSide * maxSide;

    return 0;
}
*/