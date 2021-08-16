/*
#include <iostream>
#include <algorithm>
#define ll long long
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1038
using namespace std;

int N, M;
pair<ll, ll> intervals[100001];

bool satisfyIntervals(ll D){
    ll x = intervals[0].first, j = 0;

    for(int i = 0; i < N-1; ++i){ //It doesn't matter what I is as long as its N-1 times instead of 0...N cuz we set x to first interval pair
        x += D;

        while(j < M && x > intervals[j].second){
            ++j;
        }
        if(j == M){
            return false;
        }
        if(intervals[j].first > x){
            x = intervals[j].first;
        }
    }
    return true;
}

int main(){
    //freopen("socdist.in","r",stdin);
    //freopen("socdist.out","w",stdout);

    cin >> N >> M;
    for(int i = 0; i < M; ++i){
        cin >> intervals[i].first >> intervals[i].second; //Store info in pairs cuz yea
    }
    sort(intervals, intervals + M); //Sort pairs to binary search

    ll left = 1, right = 1e18 + 1, D;

    while (left < right) {
        ll mid = (left + right)/2;
        //cout << left << " " << right << '\n'; //Debugging
        if (satisfyIntervals(mid)) {
            D = mid;
            left = mid+1;
        }
        else {
            right = mid;
        }
    }

    cout << D;
    return 0;
}
*/