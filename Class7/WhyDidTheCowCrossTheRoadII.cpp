/*
#include <iostream>
#include <string>
#include <algorithm>
//Date Done: 8/10/2021 at 12:41PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=712
using namespace std;

int main(){
    //freopen("circlecross.in","r",stdin);
    //freopen("circlecross.out","w",stdout);

    string cowLog, subCowLog;
    cin >> cowLog;

    int dist, pairs = 0;

    for(int i = 0; i < 26; ++i){
        char start = cowLog[0];
        dist = 1;
        while(true){
            if(start == cowLog[dist]){
                break;
            }
            ++dist;
        }
        subCowLog = cowLog.substr(1, dist-1);

        for(char x : subCowLog){
            int count = 0;
            for (int j = 0; (j = subCowLog.find(x, j)) != std::string::npos; j++) {
                ++count;
            }
            if(count == 1){
                ++pairs;
            }
        }

        //cout << cowLog << '\n';
        cowLog.erase(dist, 1);
        cowLog.erase(0, 1);
    }

    cout << pairs;

    return 0;
}
*/