#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=988
typedef long long ll;
typedef pair<int, int> pairs;

int N;
vector<int> cows, perm;
//Given an end result, find the smallest permutation basically 1 2 3 instead of 2 1 3

int main(){
    freopen("photo.in","r",stdin);
    freopen("photo.out","w",stdout);

    cin >> N;

    for(int i = 0; i < N-1; ++i){
        int x;
        cin >> x;
        cows.push_back(x);
    }

    int firstNum = cows[0];

    for(int i = 1; i <= firstNum; ++i){ //Start the pattern off with a number(0, 1, 2, 3, 4) From left to right!
        perm.push_back(i);
        //perm.push_back(cows[0]-i);
        //cout << perm[0] << " ";
        bool contin = false;
        for(int j = 0; j < N-1; ++j){
            perm.push_back(cows[j]-perm[j]);
            if(perm[j+1] <= 0){
                perm.clear();
                contin = true;
                break;
            }
            //cout << perm[j+1] << " ";
        }

        //cout << '\n';
        if(contin){
            continue;
        }

        int maxVal = -999;
        for(int j = 0; j < N; ++j){
            int occurences = count(perm.begin(), perm.end(), perm[j]);
            maxVal = max(maxVal, occurences);

        }
        if(maxVal == 1){
            for(int k = 0; k < perm.size(); ++k){
                if(k == perm.size()-1){
                    cout << perm[k];
                }
                else{
                    cout << perm[k] << " ";
                }
            }
            break;
        }

        perm.clear();
    }
    return 0;
}
