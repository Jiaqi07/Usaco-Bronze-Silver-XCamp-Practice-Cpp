/*
#include <iostream>
#include <algorithm>
using namespace std;

int **maze, **visited;

int Path_Row[4] = { 0, 0, 1, -1 };
int Path_Col[4] = { 1, -1, 0, 0 };

int rows, cols, ans = 0;

bool CanWeMove(int rowNew, int colNew, int curNum)
{
    if ((rowNew >= 0) && (rowNew < rows) && (colNew >= 0) && (colNew < cols) && (curNum > maze[rowNew][colNew]) && (visited[rowNew][colNew] == 0) )
        return true;

    return false;
}

void FindPathInMaze(int row, int col, int move)
{
    int curNum = maze[row][col];
    if(ans < move){
        ans = move;
    }
    for (int index = 0; index < 4; index++)
    {
        int rowNew = row + Path_Row[index];
        int colNew = col + Path_Col[index];

        if (CanWeMove(rowNew, colNew, curNum)){
            move++;
            visited[rowNew][colNew] = move;
            FindPathInMaze(rowNew, colNew, move);
            move--;
            visited[rowNew][colNew] = 0;
        }
    }
}

int main() {
    cin >> rows >> cols;

    maze = new int*[rows];
    visited = new int*[rows];

    for(int i = 0; i < rows; ++i){ //Input
        maze[i] = new int[cols];
        visited[i] = new int[cols];
        for(int j = 0; j < cols; ++j){
            cin >> maze[i][j];
            visited[i][j] = 0;
        }
    }

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if(maze[i][j] > ans){
                FindPathInMaze(i, j, 1);
                for(int x = 0; x < rows; ++x){
                    for(int y = 0; y < cols; ++y){
                        visited[x][y] = 0;
                    }
                }
            }
        }
    }

    cout << ans;
    return 0;
}
*/