/* Incorrect Solution 5/12 test cases
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1085
using namespace std;

typedef long long ll;

int N;
ll heights[21], stalls[21];

bool validPerm(){
    for(int i = 0; i < N; ++i){
        if(heights[i] > stalls[i]){
            return false;
        }
    }
    return true;
}

void printArray(){
    for ( int i = 0; i < 4; ++i) {
        cout << heights[i] << " ";
    }
    cout << "\n";

    for ( int i = 0; i < 4; ++i) {
        cout << stalls[i] << " ";
    }
    cout << "\n" << '\n';
}

int main() {
    int duplicates;
    cin >> N;

    ll ans = 0;

    unordered_set<ll> s; //We only need to check duplicates once cuz if we check both at same time, it will create more duplicates that aren't needed.

    for(int i = 0; i < N; ++i){
        cin >> heights[i];
    }
    for(int i = 0; i < N; ++i){
        cin >> stalls[i];
        s.insert(stalls[i]);
    }

    duplicates = N-s.size();

    sort(heights, heights+N);
    sort(stalls, stalls+N);

    //printArray();

    if(validPerm()){
        ans += duplicates + 1;
    }

    while(next_permutation(stalls, stalls+N)){
        //printArray();

        if(validPerm()){
            ans += duplicates+1;
        }
    }

    cout << ans;
    return 0;
}
*/