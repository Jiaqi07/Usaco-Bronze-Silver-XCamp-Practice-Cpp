#include <iostream>
#include <algorithm>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1109
typedef long long ll;
typedef pair<int, int> pairs;

int N, cows[1002][1002];
pairs cow[10001], alrComfy[10001];

int main(){
    cin >> N;
    int comfortableCows, count, hist = 0;

    for(int i = 0; i < N; ++i){
        comfortableCows = 0;
        cin >> cow[i].first >> cow[i].second;
        cows[cow[i].first][cow[i].second] = 1;

        if(i <= 2){
            cout << comfortableCows-hist << '\n';
            continue;
        }

        for(int j = 0; j <= i; ++j){
            count = 0;
            if(cows[cow[j].first+1][cow[j].second] == 1){
                ++count;
            }
            if(cows[cow[j].first-1][cow[j].second] == 1){
                ++count;
            }
            if(cows[cow[j].first][cow[j].second+1] == 1){
                ++count;
            }
            if(cows[cow[j].first][cow[j].second-1] == 1){
                ++count;
            }
            if(count >= 3){
                ++comfortableCows;
            }
        }
        cout << comfortableCows-hist << '\n';
        hist = comfortableCows;
    }
}