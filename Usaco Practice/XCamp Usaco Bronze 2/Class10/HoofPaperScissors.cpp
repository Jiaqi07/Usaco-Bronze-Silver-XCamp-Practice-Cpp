/*
#include <iostream>
#include <map>
#include <algorithm>
//Date Done: 8/13/2021 at 12:42PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=688
using namespace std;

int N, curr;
int s[101][2];
map<int, string> choices;

int hoofPaperScissors(){
    int count = 0;
    for(int i = curr; i < N+curr; ++i){
        if(choices[s[i][0]] == "Paper" && choices[s[i][1]] == "Hoof"){
            ++count;
        }
        else if(choices[s[i][0]] == "Scissors" && choices[s[i][1]] == "Paper"){
            ++count;
        }
        else if(choices[s[i][0]] == "Hoof" && choices[s[i][1]] == "Scissors"){
            ++count;
        }
    }
    curr += 3;
    return count;
}

int main(){
    //freopen("hps.in","r",stdin);
    //freopen("hps.out","w",stdout);

    int maxAns = -999;
    cin >> N;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> s[i][j];
        }
    }

    choices[0] = "Hoof";
    choices[1] = "Paper";
    choices[2] = "Scissors";

    choices[3] = "Hoof";
    choices[5] = "Paper";
    choices[4] = "Scissors";

    choices[7] = "Hoof";
    choices[6] = "Paper";
    choices[8] = "Scissors";

    choices[10] = "Hoof";
    choices[11] = "Paper";
    choices[9] = "Scissors";

    choices[14] = "Hoof";
    choices[12] = "Paper";
    choices[13] = "Scissors";

    choices[17] = "Hoof";
    choices[16] = "Paper";
    choices[15] = "Scissors";

    for(int i = 0; i < 6; ++i){
        maxAns = max(hoofPaperScissors(), maxAns);
    }

    cout << maxAns;
    return 0;
}
*/