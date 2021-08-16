/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

//Date Done: 8/4/2021 at 4:31PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=667
//https://www.youtube.com/watch?v=eZoq_PBFERs&ab_channel=Coach355
using namespace std;

int main() {
    //freopen("citystate.in","r",stdin);
    //freopen("citystate.out","w",stdout);


    int N, answer = 0;
    cin >> N;

    map<string, int> states;


    for(int i = 0; i < N; ++i){
        string convertedStateCode, stateCode, state;
        cin >> state >> stateCode;
        convertedStateCode = state.substr(0, 2);
        if(convertedStateCode != stateCode){
            answer += states[stateCode + convertedStateCode];
        }
        states[convertedStateCode + stateCode] += 1;
    }

    cout << answer;

    return 0;
}
*/