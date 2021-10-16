/*
#include <iostream>
using namespace std;

int chessboard[401][401]={-1};
int n, m, row, col;

int Path_Row[8] = { 2, 1, -1, -2, -2, -1,  1,  2 };
int Path_Col[8] = { 1, 2,  2,  1, -1, -2, -2, -1 };

void print_chessboard()
{
    cout << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << chessboard[i][j] << "\t";
        cout << endl;
    }
}

bool CanWeMove(int rowNew, int colNew, int move)
{
    if(rowNew<0 ||rowNew>=n || colNew<0 || colNew>=m)
        return false;

    if(chessboard[rowNew][colNew]<0)
        return true;
    else if(chessboard[rowNew][colNew]<=move)
        return false;

    return true;
}

void FindPathInMaze(int row, int col, int move)
{
    //if(move%199==0)
    //  print_chessboard();

    //cout << row << "\t" << col << "\t:" << move << endl;

    if(move>200)
        return;

    chessboard[row][col] = move;

    for(int i=0; i<sizeof(Path_Row)/sizeof(int); i++)
    {
        int rowNew = row + Path_Row[i];
        int colNew = col + Path_Col[i];
        if(CanWeMove(rowNew, colNew, move+1))
        {
            FindPathInMaze(rowNew, colNew, move+1);
        }
    }

    return;
}

int main() {
    cin >> n >> m >> row >> col;
    row--; col--;  // 0 based
    memset(chessboard, -1, sizeof chessboard);
    FindPathInMaze(row, col, 0);

    print_chessboard();
}

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