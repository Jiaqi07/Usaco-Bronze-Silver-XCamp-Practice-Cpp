/*
#include <iostream>
#include <algorithm>
#include <unordered_set>
//Date Done: 8/4/2021 at 1:54PM Finished: 8/5/2021 7:17PM   //https://xjoi.net/contest/2902
//http://www.usaco.org/index.php?page=viewproblem2&cpid=831
using namespace std;

int main() {
    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);

    string input;
    char cowTicTacToe[3][3];
    unordered_set<char> individualCowWinner, tagTeamCowWinner;

    for(int i = 0; i < 3; ++i){
        cin >> input;
        for(int j = 0; j < 3; ++j){
            cowTicTacToe[i][j] = input[j];
        }
    }

    //INDIVIDUAL WINS
    for(int i = 0; i < 3; ++i){ //This is every Column/Row depends on situation
        if(cowTicTacToe[i][0] == cowTicTacToe[i][1] && cowTicTacToe[i][1] == cowTicTacToe[i][2]){ //Row Individual Win
            individualCowWinner.insert(cowTicTacToe[i][0]);
        }
        if(cowTicTacToe[0][i] == cowTicTacToe[1][i] && cowTicTacToe[1][i] == cowTicTacToe[2][i]){ //Column Individual Win
            individualCowWinner.insert(cowTicTacToe[0][i]);
        }
    }

    if(cowTicTacToe[0][0] == cowTicTacToe[1][1] && cowTicTacToe[1][1] == cowTicTacToe[2][2]){ //Diagonal Individual Win Downwards slope
        individualCowWinner.insert(cowTicTacToe[0][0]);
    }

    if(cowTicTacToe[0][2] == cowTicTacToe[1][1] && cowTicTacToe[1][1] == cowTicTacToe[2][0]){ //Diagonal Individual Win Upwards slope
        individualCowWinner.insert(cowTicTacToe[0][2]);
    }

    //TEAM WINS
    unordered_set<char> sRow;
    unordered_set<char> sColumn;
    unordered_set<char> sUpDiag;
    unordered_set<char> sDownDiag;


    int xDown = 0, yDown = 0, xUp = 2, yUp = 0;
    for(int i = 0; i < 3; ++i){ //Every row or column depending on situation
        for(int j = 0; j < 3; ++j){ //Every Row
            sRow.insert(cowTicTacToe[i][j]);
        }
        if(sRow.size() == 2){ //if there is two cows
            tagTeamCowWinner.insert(sRow.begin(), sRow.end());
        }
        for(int j = 0; j < 3; ++j){ //Every Column
            sColumn.insert(cowTicTacToe[j][i]);
        }
        if(sColumn.size() == 2){ //if there is two cows
            tagTeamCowWinner.insert(sColumn.begin(), sColumn.end());
        }

        sDownDiag.insert(cowTicTacToe[yDown][xDown]);
        sUpDiag.insert(cowTicTacToe[yUp][xUp]);
        --xUp;
        ++yUp;
        ++yDown;
        ++xDown;

        sRow.clear();
        sColumn.clear();
    }

    if(sUpDiag.size() == 2){
        tagTeamCowWinner.insert(sUpDiag.begin(), sUpDiag.end());
    }
    if(sDownDiag.size() == 2){
        tagTeamCowWinner.insert(sDownDiag.begin(), sDownDiag.end());
    }

    int ans = tagTeamCowWinner.size()/1.3;
    cout << individualCowWinner.size() << "\n" << ans;

    return 0;
}*/