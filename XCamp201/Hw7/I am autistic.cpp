/*
//Actual name of problem, don't sue...
#include <iostream>

using namespace std;

int rows, cols, ans = 0;

int **maze, **visited;

int dirx[4] = { 1, -1, 0, 0 };
int diry[4] = { 0, 0, 1, -1 };
int filled = 0;

bool CanFill(int rowNew, int colNew)
{
    if ((rowNew >= 0) && (rowNew < rows) && (colNew >= 0) && (colNew < cols)
    && (maze[rowNew][colNew] == 1) && (visited[rowNew][colNew] == 0))
        return true;
    return false;
}

void fillMaze(int row, int col)
{
    visited[row][col] = 1;
    filled++;
    for (int index = 0; index < 4; index++){
        int rowNew = row + dirx[index];
        int colNew = col + diry[index];
        if (CanFill(rowNew, colNew))
            fillMaze(rowNew, colNew);
    }
}

int main() {
    cin >> cols >> rows;

    maze = new int*[cols];
    visited = new int*[cols];

    for(int i = 0; i < cols; ++i){ //Input
        maze[i] = new int[rows];
        visited[i] = new int[rows];

        string s;
        cin >> s;
        for(int j = 0; j < rows; ++j){

            maze[i][j] = s[j] - '0';
            //cout << maze[i][j] << " ";
            visited[i][j] = 0;
        }
        //cout << '\n';
    }

    for(int i = 0; i < cols; ++i){
        for(int j = 0; j < rows; ++j){
            if(maze[i][j] == 1){
                fillMaze(i, j);
                ans = max(filled, ans);
                filled = 0;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
*/