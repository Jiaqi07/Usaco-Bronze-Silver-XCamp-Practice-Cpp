/*
#include <iostream>
#include <algorithm>
using namespace std;

int X, Y, ans = 0;

int **maze;
int **visited;

int dirX[4] = { 0, 0, 1, -1 }, dirY[4] = { 1, -1, 0, 0 };

bool CanFill(int rowNew, int colNew){
    if ((rowNew >= 0) && (rowNew < Y) && (colNew >= 0) && (colNew < X) && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
        return true;
    return false;
}

void fillMaze(int row, int col, int& count){
    visited[row][col] = 1;
    ++count;
    for (int index = 0; index < 4; index++){
        int rowNew = row + dirX[index];
        int colNew = col + dirY[index];
        if (CanFill(rowNew, colNew))
            fillMaze(rowNew, colNew, count);
    }
}


int main() {
    int startX, startY;

    while(true){
        cin >> X >> Y;

        if(X == 0 && Y == 0){
            break;
        }

        maze = new int*[Y];
        visited = new int*[Y];

        for(int i = 0; i < Y; i++)
        {
            maze[i] = new int[X];
            visited[i] = new int[X];
        }

        int blackTiles = 0;
        char in;
        for(int i = 0; i < Y; ++i){
            for(int j = 0; j < X; ++j){
                cin >> in;
                if(in == '.'){ //Black Tiles
                    maze[i][j] = 0;
                    ++blackTiles;
                }
                else if(in == '#'){
                    maze[i][j] = 1; //Red Tiles
                }
                else if(in == '@'){
                    maze[i][j] = 0; //Start
                    startX = i;
                    startY = j;
                    ++blackTiles;
                }
                visited[i][j] = 0;
            }
        }
        /*
        for(int i = 0; i < Y; ++i){
            for(int j = 0; j < X; ++j){
                cout << maze[i][j] << " ";
            }
            cout << '\n';
        }
        *//*
        int count = 0;
        fillMaze(startX, startY, count);

        //cout << "Black Tiles Count: " << blackTiles << '\n';
        cout << count << '\n';
    }
    delete maze, visited;

    return 0;
}
*/