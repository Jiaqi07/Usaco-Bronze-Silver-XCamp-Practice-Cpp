/*
#include <iostream>
#include <algorithm>
using namespace std;

int **maze, **visited;

int Path_Row[4] = { 0, 0, 1, -1 };
int Path_Col[4] = { 1, -1, 0, 0 };

int rows, cols, curNum, ans = 0;

bool CanWeMove(int rowNew, int colNew)
{
    if ((rowNew >= 0) && (rowNew < rows) && (colNew >= 0) && (colNew < cols) && (curNum > maze[rowNew][colNew]) && (visited[rowNew][colNew] == 0) )
        return true;

    return false;
}

void FindPathInMaze(int row, int col, int desRow, int desCol, int move)
{
    curNum = maze[row][col];

    if ((row == desRow) && (col == desCol))
    {
        if(ans < move){
            ans = move;
        }
        cout << move << endl;
        cout << "//////////////////////////////////////////////////" << endl;
    }
    else
        for (int index = 0; index < 4; index++)
        {
            int rowNew = row + Path_Row[index];
            int colNew = col + Path_Col[index];

            cout << curNum << '\n';
            if (CanWeMove(rowNew, colNew)){
                move++;
                visited[rowNew][colNew] = move;
                FindPathInMaze(rowNew, colNew, desRow, desCol, move);
                move--;
                visited[rowNew][colNew] = 0;
            }
        }
}

int main() {
    cin >> rows >> cols;

    int desX, desY;

    maze = new int*[cols];
    visited = new int*[cols];

    for(int i = 0; i < cols; ++i){ //Input
        maze[i] = new int[rows];
        visited[i] = new int[rows];
        for(int j = 0; j < rows; ++j){
            cin >> maze[i][j];
            if(maze[i][j] == 1){
                desX = j;
                desY = i;
            }
            visited[i][j] = 0;
        }
    }

    for(int i = 0; i < cols; ++i){
        for(int j = 0; j < rows; ++j){
            FindPathInMaze(i, j, desX, desY, 0);
        }
    }

    cout << ans;
    return 0;
}
 */