/*
#include <iostream>
#include <algorithm>
using namespace std;

int N, M, T;

int **maze;
int **visited;

int Path_Row[4] = { 0, 0, 1, -1 }, Path_Col[4] = { 1, -1, 0, 0 };

bool CanWeMove(int rowNew, int colNew)
{
    if ((rowNew >= 0) && (rowNew < M) && (colNew >= 0) && (colNew < N) && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
        return true;
    return false;
}

void FindPathInMaze(int row, int col, int desRow, int desCol, int& paths)
{
    if ((row == desRow) && (col == desCol)){
        ++paths;
        return;
    }
    else{
        for (int index = 0; index < 4; index++)
        {
            int rowNew = row + Path_Row[index];
            int colNew = col + Path_Col[index];
            if (CanWeMove(rowNew, colNew))
            {
                visited[rowNew][colNew] = 1;
                FindPathInMaze(rowNew, colNew, desRow, desCol, paths);
                visited[rowNew][colNew] = 0;
            }
        }
    }
}

int main(){
    int SX, SY, FX, FY, paths = 0;
    cin >> N >> M >> T >> SX >> SY >> FX >> FY;

    if(N == 1 && M == 1){
        cout << paths;
    }
    else{
        maze = new int*[N];
        visited = new int*[N];


        for(int i = 0; i < N; ++i){
            maze[i] = new int[M];
            visited[i] = new int[M];
            for(int j = 0; j < N; ++j){
                maze[i][j] = 0;
                visited[i][j] = 0;
            }
        }

        for(int i = 0; i < T; ++i){
            int X, Y;
            cin >> X >> Y;

            maze[X-1][Y-1] = 1;
            visited[X-1][Y-1] = -1;
        }
        visited[SX-1][SY-1] = 1;

        FindPathInMaze(SX-1, SY-1, FX-1, FY-1, paths);
        cout << paths;
    }

    delete maze;
    delete visited;
    return 0;
}
*/