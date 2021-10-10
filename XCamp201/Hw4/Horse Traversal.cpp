/*
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
int n, m;
vector<vector<int>> dir = { {-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2} };

void bfs(vector<vector<int>> &chess,int x, int y) {
    int step = 0;
    chess[x][y] = 0;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()) {
        int size = q.size();
        step++;
        for(int i = 0; i < size; i++) {
            pair<int, int> temp = q.front();
            q.pop();
            for(int j = 0; j < 8; j++) {
                int newx = temp.first+dir[j][0];
                int newy = temp.second+dir[j][1];
                if(newx<0 || newx>=n || newy < 0 || newy >= m)
                    continue;
                if(chess[newx][newy] >= 0)
                    continue;
                chess[newx][newy] = step;
                q.push({newx,newy});
            }
        }
    }
}
int main() {
    int x,y;
    cin >> n >> m >> x >> y;
    vector<vector<int>> chess(n, vector<int>(m,-1));
    bfs(chess, x-1, y-1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/