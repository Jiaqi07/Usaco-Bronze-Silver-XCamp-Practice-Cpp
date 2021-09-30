/*
#include <iostream>

using namespace std;

int maze[4][4] = {{0,0,0,1 },
                  {1,1,0,0 },
                  {0,1,0,1 },
                  {0,0,1,0 } };

int visited[4][4] = {{0,0,0,0 },
                     {0,0,0,0 },
                     {0,0,0,0 },
                     {0,0,0,0 }};

int dirx[4] = { 1, -1, 0, 0 };
int diry[4] = { 0, 0, 1, -1 };
int filled = 0;

bool CanFill(int rowNew, int colNew)
{
    if ((rowNew >= 0) && (rowNew < 4) && (colNew >= 0) && (colNew < 4)
    && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
        return true;

    return false;
}

void fillMaze(int row, int col)
{
    visited[row][col] = 1;
    filled++;
    for (int index = 0; index < 4; index++)
    {
        int rowNew = row + dirx[index];
        int colNew = col + diry[index];
        if (CanFill(rowNew, colNew))
            fillMaze(rowNew, colNew);
    }
}

int main() {
    fillMaze(0, 2);
    cout << filled << endl;
}
*/