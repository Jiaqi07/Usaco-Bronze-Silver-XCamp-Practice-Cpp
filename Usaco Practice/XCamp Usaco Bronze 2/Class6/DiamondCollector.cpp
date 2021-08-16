/*
#include <iostream>
//Date Done: 8/9/2021 at 12:09PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=639
using namespace std;

int main()
{
    //freopen("diamond.in","r",stdin);
    //freopen("diamond.out","w",stdout);

    int N, K, count = 0, maxAns = 0;
    cin >> N >> K;

    int *s;
    s = new int[N];

    for(int i = 0; i < N; ++i){
        cin >> s[i];
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(abs(s[i] - s[j]) <= K && s[j] >= s[i]){
                //cout << s[i] << " " << s[j] << "\n";
                ++count;
            }
        }
        maxAns = max(count, maxAns);
        count = 0;
    }

    cout << maxAns;

    delete s;
    return 0;
}
*/