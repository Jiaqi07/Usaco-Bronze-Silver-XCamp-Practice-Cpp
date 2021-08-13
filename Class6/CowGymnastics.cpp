/*
#include <iostream>
#include <vector>
//Date Done: 8/9/2021 at 1:21PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=963
using namespace std;

int main(){
    //freopen("gymnastics.in","r",stdin);
    //freopen("gymnastics.out","w",stdout);

    int n, k, count = 0, oneLine = 0;
    cin >> k >> n;

    int cows[k][n];
    vector<int> constpairs;
    vector<int> pairs;

    for(int i = 0; i < k; ++i){
        for(int j = 0; j < n; ++j) { // Each Cow Input
            cin >> cows[i][j];
        }
    }

    for(int i = 0; i < k; ++i){ //Sessions
        for(int j = 0; j < n; ++j){ // Each Cow
            for(int x = j+1; x < n; ++x){ // Basically Factorial picture that
                if(i == 0){
                    constpairs.push_back(cows[i][j]);
                    constpairs.push_back(cows[i][x]);
                    ++oneLine;
                }
                else{
                    pairs.push_back(cows[i][j]);
                    pairs.push_back(cows[i][x]);
                }
            }
        }
    }

    int index = 0, ans = 0;

    for(int x = 0; x < constpairs.size()/2; ++x){
        int xpair = constpairs[index++];
        int ypair = constpairs[index++];
        for(int i = 0; i < pairs.size(); i+=2){
            if(pairs[i] == xpair && pairs[i+1] == ypair){
                ++count;
            }
            if(count == k-1){
                ans++;
                break;
            }
        }
        count = 0;
    }

    if(k == 1){
        cout << oneLine;
    }
    else{
        cout << ans;
    }
}
*/