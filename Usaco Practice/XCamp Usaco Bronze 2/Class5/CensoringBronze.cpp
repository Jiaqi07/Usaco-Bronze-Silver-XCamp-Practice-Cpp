/*
#include <iostream>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=526
int main(){
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string word, seg, ans;
    cin >> word >> seg;

    for (char i : word){
        ans += i;
        if (ans.size() > seg.size() && ans.substr(ans.size() - seg.size()) == seg){
            ans.resize(ans.size() - seg.size());
        }
    }
    cout << ans;
}
*/