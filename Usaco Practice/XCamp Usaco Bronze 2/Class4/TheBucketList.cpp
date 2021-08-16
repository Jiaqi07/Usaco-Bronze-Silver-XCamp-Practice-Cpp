/*
#include <iostream>
#include <algorithm>
#include <vector>
//Date Done: 8/5/2021 at 3:29PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=856
using namespace std;

int main() {
    //freopen("blist.in","r",stdin);
    //freopen("blist.out","w",stdout);

    int N, begin, end, buckets, count = 0;

    cin >> N;

    int bucketList[1001] = {0};

    for(int i = 0; i < N; ++i){
        cin >> begin >> end >> buckets;

        for(int i = begin; i <= end; ++i){
            bucketList[i] += buckets;
        }
    }

    //for(int i = 0; i < 15; ++i){
    //    cout << bucketList[i] << ", ";
    //}

    int maxAns = 0;

    for(int i : bucketList){
        maxAns = max(maxAns, i);
    }

    cout << maxAns;

    return 0;
}
*/