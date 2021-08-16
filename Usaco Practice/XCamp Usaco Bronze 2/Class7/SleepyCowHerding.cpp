/*
#include <iostream>
#include <algorithm>
//Date Done: 8/10/2021 at 1:09PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=915
using namespace std;

bool isConsecutive(int s[3]){
    if(s[0] + 1 == s[1] && s[1] + 1 == s[2] && s[2] - 2 == s[0]){
        return true;
    }
    return false;
}

int main(){
    //freopen("herding.in","r",stdin);
    //freopen("herding.out","w",stdout);

    int b, e, m;
    cin >> b >> e >> m;

    int maxMovesCow[3] = {b, e, m};
    sort(maxMovesCow, maxMovesCow + 3);

    int maxDiff, minCount = 2, maxCount;

    maxDiff = max(e - b, m - e);
    if(maxMovesCow[0] + 1 == maxMovesCow[1] && maxMovesCow[1] + 1 == maxMovesCow[2]){
        minCount = 0;
        maxCount = 0;
    }
    else{
        if(m - 2 == e || b + 2 == e){ //Min First
            minCount = 1;
        }
        maxCount = maxDiff-1;
    }

    cout << minCount << "\n" << maxCount;
    return 0;
}
*/
//THIS METHOD IS TOO SLOW UNFORTUNATELY, TIME LIMIT EXCEEDED
/*while(!isConsecutive(minMovesCow)){
    if(minMovesCow[2] - minMovesCow[1] >= minMovesCow[1] - minMovesCow[0]){
        minMovesCow[2] = minMovesCow[1] - 1;
    }
    else if(minMovesCow[2] - minMovesCow[1] < minMovesCow[1] - minMovesCow[0]){
        minMovesCow[0] = minMovesCow[1] + 1;
    }
    ++minMoves;
    sort(minMovesCow, minMovesCow + 3);
}

while(!isConsecutive(maxMovesCow)){
    if(maxMovesCow[2] - maxMovesCow[1] >= maxMovesCow[1] - maxMovesCow[0]){
        maxMovesCow[0] = maxMovesCow[1] + 1;
    }
    else if(maxMovesCow[2] - maxMovesCow[1] < maxMovesCow[1] - maxMovesCow[0]){
        maxMovesCow[2] = maxMovesCow[1] - 1;
    }
    ++maxMoves;
    sort(maxMovesCow, maxMovesCow + 3);
}

cout << minMoves << "\n" << maxMoves;
*/