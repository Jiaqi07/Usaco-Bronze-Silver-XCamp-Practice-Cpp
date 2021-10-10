/*
#include <iostream>
using namespace std;

int N, maze[501][501] = {{0}}, visited[501][501] = {{0}}, dirx[4] = { -1, 1, -1, 1 }, diry[4] = { 0, 0, -1, 1 }, filled = 0;

bool CanFill(int rowNew, int colNew){
    if ((rowNew >= 0) && (rowNew < N) && (colNew >= 0) && (colNew < N) && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
        return true;
    return false;
}

void fillMaze(int row, int col){
    visited[row][col] = 1;
    ++filled;
    for (int index = 0; index < 4; index++){
        int rowNew = row + dirx[index];
        int colNew = col + diry[index];
        if (CanFill(rowNew, colNew))
            fillMaze(rowNew, colNew);
    }
}

int main() {
    int X, Y;
    cin >> N >> X >> Y;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> maze[i][j];
        }
    }

    fillMaze(Y, X);
    cout << filled;
}
*/