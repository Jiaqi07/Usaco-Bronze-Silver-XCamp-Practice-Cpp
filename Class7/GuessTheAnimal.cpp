/*
#include <iostream>
//Date Done: 8/10/2021 at 1:46PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=893
using namespace std;

int attributes(string x[], string y[]) {
    int count = 0;
    for(int i = 0; i < 101; ++i){
        for(int j = 0; j < 101; ++j){
            if(x[i] == "STOP" || y[j] == "STOP"){
                break;
            }
            else if(x[i] == y[j]){
                ++count;
            }
        }
    }
    return count;
}

void print2DArray (string s[101][101],int sizeOfRow, int sizeOfCol){
    for ( int x = 0; x < sizeOfRow; ++x ) {
        for ( int y = 0; y < sizeOfCol; ++y) {
            cout << s[x][y] << " ";
        }
        cout << "\n";
    }
}

int main(){
    //freopen("guess.in","r",stdin);
    //freopen("guess.out","w",stdout);

    int N, s, maxShift = -999, shiftTime = 0;
    cin >> N;
    string trash;
    string cows[101][101] = {{"0"}};

    for(int i = 0; i < N; ++i){
        cin >> trash;
        cin >> s;
        for(int j = 0; j < s; ++j){
            cin >> cows[i][j];
        }
        cows[i][s] = "STOP";
    }
    int maxAns = 0;

    //print2DArray(cows, 5, 5);

    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            maxAns = max(maxAns, attributes(cows[i], cows[j]));
        }
    }

    cout << maxAns+1;
    return 0;
}
*/