/*
#include <iostream>
//Date Done: 8/9/2021 at 5:26PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=736
using namespace std;

bool locate(int j, int N, string spotty[101], string plain[101]){
    int s[2][4] = {{0}};

    for(int i = 0; i < N; ++i) {
        if (spotty[i][j] == 'A'){
            s[0][0] = 1;
        }
        if (spotty[i][j] == 'C'){
            s[0][1] = 1;
        }
        if (spotty[i][j] == 'G'){
            s[0][2] = 1;
        }
        if (spotty[i][j] == 'T'){
            s[0][3] = 1;
        }
    }

    for(int i = 0; i < N; ++i) {
        if (plain[i][j] == 'A'){
            s[1][0] = 1;
        }
        if (plain[i][j] == 'C'){
            s[1][1] = 1;
        }
        if (plain[i][j] == 'G'){
            s[1][2] = 1;
        }
        if (plain[i][j] == 'T'){
            s[1][3] = 1;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (s[0][i] == 1 && s[1][i] == 1){
            return false;
        }
    }
    return true;
}

int main(){
    //freopen("cownomics.in","r",stdin);
    //freopen("cownomics.out","w",stdout);

    int N, M;
    string spotty[101], plain[101];

    cin >> N >> M;

    for(int i = 0; i < N; ++i){
        cin >> spotty[i];
    }

    for(int i = 0; i < N; ++i){
        cin >> plain[i];
    }
    int answer = 0;

    for (int i = 0; i < M; ++i) {
        if (locate(i, N, spotty, plain)){
            ++answer;
        }
    }

    cout << answer;
    return 0;
}
/* Wrong/bad Solution
string plain[101]; //Plain cows
string spot[101]; //Spotted Cows
for(int i = 0; i < N; ++i){ //Input plain cows
    cin >> plain[i];
}
for(int i = 0; i < N; ++i){ //Input spotted cows
    cin >> spot[i];
}

for(int i = 0; i < M; ++i){
    int plain2d[101][4] = {0};
    int spot2d[101][4] = {0};
    for(int j = 0; j < N; ++j){
        if(plain[j][i] == 'A'){ //Get index J string and the current I index/char of the string from J
            plain2d[i][0] = 1;
        }
        else if(plain[j][i] == 'G'){
            plain2d[i][1] = 1;
        }
        else if(plain[j][i] == 'C'){
            plain2d[i][2] = 1;
        }
        else if(plain[j][i] == 'T'){
            plain2d[i][2] = 1;
        }

        if(spot[j][i] == 'A'){ //Get index J string and the current I index of the string from J
            spot2d[i][0] = 1;
        }
        else if(spot[j][i] == 'G'){
            spot2d[i][1] = 1;
        }
        else if(spot[j][i] == 'C'){
            spot2d[i][2] = 1;
        }
        else if(spot[j][i] == 'T'){
            spot2d[i][3] = 1;
        }
    }
    if((plain2d[i][0] == 1 && spot2d[i][0] == 1) || (plain2d[i][1] == 1 && spot2d[i][1] == 1) || (plain2d[i][2] == 1 && spot2d[i][2] == 1) || (plain2d[i][3] == 1 && spot2d[i][3] == 1)){
        continue;
    }
    else{
        ++count;
    }
}
*/