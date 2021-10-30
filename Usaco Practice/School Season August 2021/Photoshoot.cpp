/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=988
typedef long long ll;
typedef pair<int, int> pairs;

int N, final[1001];
vector<int> cows, perm;
//Given an end result, find the smallest permutation basically 1 2 3 instead of 2 1 3

int main(){
    cin >> N;
    int ans = 1e5;

    for(int i = 0; i < N-1; ++i){
        int x;
        cin >> x;
        cows.push_back(x);
    }

    for(int i = 0; i <= cows[0]; ++i){ //Start the pattern off with a number(0, 1, 2, 3, 4) From left to right!
        perm.push_back(i);
        perm.push_back(cows[0]-i);
        cout << perm[0] << " ";
        bool contin = false;
        for(int j = 2; j < N-1; ++j){
            perm.push_back(cows[j-1]-perm[j-1]);
            if(perm[j] < 0){
                perm.clear();
                contin = true;
                break;
            }
            cout << perm[j-2] << " ";
        }


        cout << '\n';
        if(contin){
            continue;
        }

        int maxVal = -999;
        for(int j = 0; j < N; ++j){
            int occurences = count(perm.begin(), perm.end(), perm[i]);
            maxVal = max(maxVal, occurences);
        }

        if(ans > maxVal){
            ans = maxVal;
            for(int j = 0; j <= N; ++j){
                final[j] = perm[j];
                //cout << final[i] << " ";
            }
        }
    }

    for(int i = 0; i < N; ++i){
        cout << final[i] << " ";
    }
    return 0;
}
*/