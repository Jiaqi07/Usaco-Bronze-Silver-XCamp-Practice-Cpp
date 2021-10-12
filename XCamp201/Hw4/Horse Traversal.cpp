/*
#include <iostream>
using namespace std;

int n, m;
int Path_Row[8] = { -2, -2, 2, 2, -1, -1, 1, 1 };//Horse moves
int Path_Col[8] = { 1, -1, 1, -1, 2, -2, 2, -2 };//Horse Moves
int **board;



bool CanWeMove(int rowNew, int colNew)
{
    if ((rowNew >= -1) && (rowNew < n) && (colNew >= -1) && (colNew < n) && (board[rowNew][colNew] == -1))
        return true;
    return false;
}

void FindPathInMaze(int desRow, int desCol, int move)
{
    if(move > 20){

    }
    else{
        for (int index = 0; index < 8; index++)
        {
            int rowNew = desRow + Path_Row[index];
            int colNew = desCol +Path_Col[index];
            if (CanWeMove(rowNew, colNew))
            {
                move++;
                board[rowNew][colNew] = move;
                FindPathInMaze(desRow, desCol, move);
                move = 0;

                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < m; j++) {
                        cout << board[i][j] << " ";
                    }
                    cout<<endl;
                }
            }
        }
    }
}
int main() {
    int x, y, z = 0;
    cin >> n >> m >> x >> y;

    for(int i = 0; i < n; ++i){
        board = new int*[m];
        for(int j = 0; j < m; ++j){
            board[i][j] = -1;
        }
    }

    FindPathInMaze(x-1, y-1, z);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << board[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
*/