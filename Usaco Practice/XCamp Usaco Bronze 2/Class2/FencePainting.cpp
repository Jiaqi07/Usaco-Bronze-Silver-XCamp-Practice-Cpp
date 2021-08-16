/*
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/3/2021 at 1:26PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=567
using namespace std;

int main() {
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    int a, b, c, d, left, right;
    cin >> a >> b >> c >> d;

    if(b > c && a < d){
        left = min(a, c);
        right = max(b, d);
        cout << right-left;
    }
    else{
        cout << b - a + d - c;
    }
    return 0;
}
*/