/*
#include <iostream>
#include <vector>
#include <algorithm>
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1085
//https://www.youtube.com/watch?v=w89ku-wpE9I
//
using namespace std;

typedef long long ll;

int main() { //Correct Solution
    int N;
    cin >> N;

    ll ans = 1; //THERE HAS TO BE ONE ANSWER FROM BEGINNING basically the starting case
    ll heights[21], stalls[21];

    for(int i = 0; i < N; ++i){
        cin >> heights[i];
    }
    for(int i = 0; i < N; ++i){
        cin >> stalls[i];
    }

    ll s[21] = {0};

    sort(heights, heights+N);
    sort(stalls, stalls+N);

    reverse(heights, heights+N); //You have to reverse it so you can deal with the smaller cases such as cow 4 only fitting in two stalls so you don't run out of stalls.
    reverse(stalls, stalls+N); //Same ^

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(heights[i] <= stalls[j]){ //Check each stall to see if the cow can fit in each stall and store that.
                ++s[i];
            }
        }
    }

    for(int i = 0; i < N; ++i){
        ans *= s[i]-i; //You have to subtract i to get rid of the choices ahead of the value because it's sorted and if it's index 2 with 3 choices, then there's only 1 remaining cow than can be fit in there.
    }
    cout << ans;
    return 0;
}
 */