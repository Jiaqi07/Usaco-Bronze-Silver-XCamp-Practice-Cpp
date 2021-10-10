/*
#include <iostream>
#include <algorithm>
using namespace std;

int N, min_move = 1e9, ans = 0, min_move_count = 0;

int maze[50][50];
int visited[50][50] = {{0}};

int Path_Row[4] = { 0, 0, 1, -1 }, Path_Col[4] = { 1, -1, 0, 0 };

bool CanWeMove(int rowNew, int colNew)
{
    if ((rowNew >= 0) && (rowNew < N) && (colNew >= 0) && (colNew < N)
    && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
        return true;

    return false;
}

void FindPathInMaze(int row, int col, int desRow, int desCol, int move)
{
    if ((row == desRow) && (col == desCol))
    {
        if(min_move == move){
            ++min_move_count;
        }
        if(min_move > move){
            min_move_count = 1;
            min_move = move;
        }
    }

    // ans = 0;
    //cout << "//////////////////////////////////////////////////" << endl;

    else{
        for (int index = 0; index < 4; index++)
        {
            int rowNew = row + Path_Row[index];
            int colNew = col + Path_Col[index];
            if (CanWeMove(rowNew, colNew))
            {
                move++;
                visited[rowNew][colNew] = move;
                FindPathInMaze(rowNew, colNew, desRow, desCol, move);
                move--;
                visited[rowNew][colNew] = 0;

            }
        }
        //ans = max(move, ans);
    }
}

int main() {
    cin >> N;
    visited[0][0] = 1;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> maze[i][j];
        }
    }

    FindPathInMaze(0, 0, N-1, N-1, 1);
    cout << min_move_count << '\n' << min_move;
}
/*
 * #include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int N, labyrinth[16][16] = {{-1}}, min_move, num_min;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void dfs(int x, int y, int move_count) {
    if(x == N-1 && y == N-1) {
        if(move_count < min_move) {min_move = move_count; num_min = 1;}
        if (move_count == min_move) num_min++;
    }
    for each in neighbors {
        if (visited[location] == true) continue;
        if (neighbor out of bound) continue;
        if (neighbor blocked) continue;
        visited[neighbor] = true;
        move_count++;
        dfs(neighbor_location);
        visited[neighbor] = false;
        move_count--;
    }
}

int main(){
    cin >> N;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){

        }
    }


    return 0;
}*/