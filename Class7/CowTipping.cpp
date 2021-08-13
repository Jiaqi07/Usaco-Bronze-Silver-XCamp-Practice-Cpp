/*
#include <iostream>
//Date Done: 8/10/2021 at 4:30PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=689
using namespace std;

string cows[11];

int main(){
    //freopen("cowtip.in","r",stdin);
    //freopen("cowtip.out","w",stdout);

    int N;
    cin >> N;

    for(int i = 0; i < N; ++i){ //Input strings into an array
        cin >> cows[i];
    }

    int answer = 0;
    for(int i = N-1; i >= 0; --i){
        for(int j = N-1; j >= 0; --j){
            if(cows[i][j] == '1'){
                ++answer;
                for(int x = 0; x <= i; ++x){
                    for(int y = 0; y <= j; ++y){
                        if(cows[x][y] == '0'){
                            cows[x][y] = '1';
                        }
                        else{
                            cows[x][y] = '0';
                        }
                    }
                }
            }
        }
    }
    cout << answer;
    return 0;
}
*/