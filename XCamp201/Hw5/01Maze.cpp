/*
#include <cstdio>
#include <vector>

using namespace std;
int n, m;
int a[1001][1001] = {0};
int visited[1001][1001] = {0};
int x_dir[4]={1,-1,0,0};
int y_dir[4]={0,0,1,-1};
char mystr[1001];

struct PNT {
    int x, y;
    PNT (int x0, int y0) : x(x0), y(y0){};
};

vector<PNT > vec;

// search cells within same zone of this cell
void SearchCell(PNT pt) {
    vec.push_back(pt);
    visited[pt.x][pt.y] = -1;
    for(int i = 0; i < 4; i++)
    {
        PNT neighbor(pt.x+x_dir[i], pt.y+y_dir[i]);
        if(neighbor.x >= 0 && neighbor.x < n && neighbor.y >= 0 && neighbor.y < n && !visited[neighbor.x][neighbor.y]
        && a[pt.x][pt.y] + a[neighbor.x][neighbor.y] == 1)
            SearchCell(neighbor);
    }
}

// search the zone where pt is in
// assign value to cells in this zone
void FloodFill(PNT pt) {
    if (visited[pt.x][pt.y] > 0) {
        printf("%d\n", visited[pt.x][pt.y]);
        return;
    }
    vec.clear();
    SearchCell(pt);

    int size = vec.size();
    for(int i = 0; i < size; i++)
        visited[vec[i].x][vec[i].y] = size;

    printf("%d\n", size);
}

int main() {
    scanf("%d %d",&n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", mystr); // since there is no space between 0, 1
        for (int j = 0; j < n; j++) {
            a[i][j] = mystr[j] - '0';
        }
    }

    int x, y;
    for (int i = 0; i < m; i++) {
        scanf("%d %d",&x, &y);
        PNT pt(x-1, y-1);
        FloodFill(pt);
    }
}

/*
#include<cstdio>
#include <iostream>
#include <vector>

using namespace std;

int n, m;
int maze[1001][1001]; // if global variable, it is initialized to be 0
int visited[1001][1001]; // also store value of cells in this zone
int x_dir[4] = {1,-1,0,0};
int y_dir[4] = {0,0,1,-1};
char mystr[1001];

// define cell struct for (x, y)
struct CELL {
    int x, y;
    CELL (int x0, int y0) : x(x0), y(y0){};
};

vector<CELL> vec; // to store cells in same zone

bool CanWeMove(int rowNew, int colNew)
{
    if ((rowNew >= -1) && (rowNew < n) && (colNew >= -1) && (colNew < n) && (maze[rowNew][colNew] == -1))
        return true;
    return false;
}

// search cells within same zone of this cell
void SearchCell(CELL pt) {
    // push cell to vector
    vec.push_back(pt);
    // mark visited
    visited[pt.x][pt.y] = 1;

    // check 4 neighbors, if available
    for (int index = 0; index < 4; index++)
    {
        int rowNew = pt.x + x_dir[index];
        int colNew = pt.y + y_dir[index];
        if (CanWeMove(rowNew, colNew))
        {
            CELL ptt(rowNew, colNew);
            SearchCell(ptt);
        }
    }
    // call SearchCell recursively
}

// fill the zone where pt is in
// assign value to cells in this zone
void FloodFill(CELL pt) {
    // if visited has been assigned
    // no need to search, print answer and return
    if(visited[pt.x][pt.y] == 1){
        cout << vec.size();
        return;
    }
    else{
        vec.clear();
        SearchCell();
    }
    // otherwise, clear vector and
    // start maze new search


    // after finish searching, assign value
    // to all cells stored in vector
    // print result for this cell
}

int main() {
    scanf("%d %d",&n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", mystr); // since there is no space between 0, 1
        for (int j = 0; j < n; j++) {
            maze[i][j] = mystr[j] - '0'; // convert char to int
        }
    }

    int x, y;
    for (int i = 0; i < m; i++) {
        scanf("%d %d",&x, &y);
        CELL pt(x-1, y-1); // adjust index, create pt
        FloodFill(pt);
    }
}
*/