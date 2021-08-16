/*
#include <iostream>
#include <vector>
#include <algorithm>
//http://www.usaco.org/index.php?page=viewproblem2&cpid=594
using namespace std;

int N, K;
int haybales[50001];

bool blastRadius(int r){
    int shots = 1;
    int lowest = haybales[0];

    for(int i = 0; i < N; ++i){
        if(haybales[i] - lowest > 2*r){
            ++shots;
            lowest = haybales[i];
        }
    }
    return shots <= K; //K is total possible shots given
}

int main(){
    //freopen("angry.in","r",stdin);
    //freopen("angry.out","w",stdout);

    cin >> N >> K;
    for(int i = 0; i < N; ++i){
        cin >> haybales[i];
    }
    sort(haybales, haybales+N);

    int left = 0, right = N-1, minAns = 1e9;

    while(left < right){
        int middle = (left+right)/2;

        if(blastRadius(middle)){
            minAns = min(minAns, middle);
            right = middle;
        }
        else{
            left = middle+1;
        }
    }

    if(minAns == 1e9){
        minAns = 999;
    }
    cout << minAns;
    return 0;
}
 */