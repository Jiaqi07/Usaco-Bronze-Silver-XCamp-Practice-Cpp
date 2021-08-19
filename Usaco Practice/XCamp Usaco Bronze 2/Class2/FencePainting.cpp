/* Alternate Solution Fence Painting Slow
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/18/2021 at 8:42PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=567
using namespace std;

int main() {
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;

    int s[101] = {0};

    for(int i = a; i < b; ++i){
        ++s[i];
    }

    for(int i = c; i < d; ++i){
        ++s[i];
    }

    for(int x : s){
        if(x > 0){
            ++ans;
        }
    }

    cout << ans;
    return 0;
}
*/
/* Alternate Solution For Fence Painting Fast
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/18/2021 at 8:38PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=567
using namespace std;

int main() {
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    int a, b, c, d, left, right;
    cin >> a >> b >> c >> d;

    if(b < c || a > d){
        cout << b - a + d - c;
    }
    else{
        left = min(a, c);
        right = max(b, d);
        cout << right-left;
    }
    return 0;
}
/*
/* Alternate Solution For Fence Painting Fast
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