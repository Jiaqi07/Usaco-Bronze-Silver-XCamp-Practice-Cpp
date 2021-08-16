/*
#include <iostream>
#include <algorithm>

//Date Done: 8/5/2021 at 3:11PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=665
using namespace std;

int main() {
    //freopen("cowsignal.in","r",stdin);
    //freopen("cowsignal.out","w",stdout);

    int M, N, K;
    string rows;
    cin >> M >> N >> K; //THINK OF THIS AS IMAGE ENLARGEMENT, FILLING 4 PIXELS FOR 1 PIXEL!

    for(int i = 0; i < M; i++) { //Every row of input
        cin >> rows; //Input current row
        for(int row = 0; row < K; ++row) { //2X2 so this does one side
            for(int j = 0; j < N; ++j) { //Get current character at current columm
                for(int column = 0; column < K; ++column) { //2x2 other side
                    cout << rows[j]; //The current pixel stated by 3rd loop above
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
*/