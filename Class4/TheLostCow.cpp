/*
#include <iostream>
#include <algorithm>
#include <vector>
//Date Done: 8/5/2021 at 12:32/33PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=855
using namespace std;
typedef long long ll;

int main() {
    //freopen("lostcow.in","r",stdin);
    //freopen("lostcow.out","w",stdout);

    ll x, y;
    cin >> x >> y;

    ll direction = 1, ans = 0, multiple = 1;
    while(true) {
        if((direction > 0 && x <= y && y <= x+multiple) || (direction < 0 && y<=x && y >= x-multiple)){
            ans += abs(y-x); //Distance between two cows
            cout << ans;
            break;
        }
        else{
            multiple *= 2; //ZigZag, 1, -2, 4, -8, 16 except no neg cuz handeled by direction
            ans += multiple; //Distance travelled
            direction *= -1; //Changing direction
        }
    }
    return 0;
}
*/