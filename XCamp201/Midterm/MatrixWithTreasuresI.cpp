/*
#include <iostream>
#include <algorithm>
using namespace std;

int X, Y, treasures = 0;

int **maze;
int **visited;

int Path_Row[4] = { 0, 0, 1, -1 }, Path_Col[4] = { 1, -1, 0, 0 };

bool CanWeMove(int rowNew, int colNew)
{
    if ((rowNew >= 0) && (rowNew < Y) && (colNew >= 0) && (colNew < X) && (maze[colNew][rowNew] != -1) && (visited[rowNew][colNew] == 0))
        return true;
    return false;
}

void FindPathInMaze(int row, int col, int& count)
{
    if ((row == Y) && (col == X))
    {
        if(count < treasures){
            count = treasures;
        }
    }
    else if(row == 0 && col == 0 && treasures != 0){
        visited = {{0}};
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
                treasures += maze[rowNew][colNew];
                for (int i = 0; i < X; i++)
                {
                    for (int j = 0; j < Y; j++)
                        cout << visited[i][j] << " ";
                    cout << endl;
                }
                cout << treasures << endl;
                visited[rowNew][colNew] = 1;
                FindPathInMaze(rowNew, colNew, count);
                treasures -= maze[rowNew][colNew];
                visited[rowNew][colNew] = 0;
            }
        }
    }
}


int main() {
    cin >> X >> Y;

    maze = new int*[X];
    visited = new int*[X];

    for(int i = 0; i < X; i++){
        maze[i] = new int[Y];
        visited[i] = new int[Y];
    }

    char in;
    for(int i = 0; i < X; ++i){
        for(int j = 0; j < Y; ++j){
            cin >> in;
            if(in == '*'){ //Paths
                maze[i][j] = 0;
            }
            else if(in == '#'){
                maze[i][j] = -1; //Traps
            }
            else{
                maze[i][j] = in-'0'; //Treasure
            }
            visited[i][j] = 0;
        }
    }

    int count = 0;
    visited[0][0] = 1;
    FindPathInMaze(0, 0, count);
    count += maze[0][0];
    cout << count;

    delete maze;
    delete visited;
    return 0;
}
*/