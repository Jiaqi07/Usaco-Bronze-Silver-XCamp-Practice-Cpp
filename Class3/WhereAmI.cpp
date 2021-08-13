/*
#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/4/2021 at 1:54PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=964
using namespace std;

string subString(string s, int indexA, int indexB){
    string ans;
    for(int i = indexA; i < indexB; ++i){
        ans.push_back(s[i]);
    }
    return ans;
}

int main() {
    //freopen("whereami.in","r",stdin);
    //freopen("whereami.out","w",stdout);

    int N, count = 0;
    cin >> N;

    string mail, s, f;
    bool go = false;
    cin >> mail;

    for(int k = 1; k <= N; ++k){
        for(int i = 0; i < N-k+1; ++i){
            s = subString(mail, i, k+i);
            for(int j = 0; j < N-k+1; ++j){
                if(i == j){
                    continue;
                }
                f = subString(mail, j, k+j);
                if(s == f){
                    go = false;
                    break;
                }
                else{
                    go = true;
                }
            }
            if(!go){
                break;
            }
        }
        if(go){
            count = k;
            break;
        }
    }

    cout << count;

    return 0;
}
*/