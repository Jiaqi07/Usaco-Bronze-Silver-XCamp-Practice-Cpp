/*#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/6/2021 at 12:13pm
//http://www.usaco.org/index.php?page=viewproblem2&cpid=593
using namespace std;

int main() {
    //freopen("mowing.in","r",stdin);
    //freopen("mowing.out","w",stdout);


    int lastTime[2001][2001];
    for(int i = 0; i < 2001; i++) {
        for(int j = 0; j < 2001; j++) {
            lastTime[i][j] = -1;
        }
    }

    int N, numSteps, currX = 1000, currY = 1000, currentTime = 0, answer = 100000;
    lastTime[currX][currY] = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
        string direction;
        cin >> direction;
        int dirX = 0;
        int dirY = 0;
        if(direction == ("N")) {
            dirX = -1;
        }
        else if(direction == ("S")) {
            dirX = 1;
        }
        else if(direction == ("W")) {
            dirY = -1;
        }
        else {
            dirY = 1;
        }

        cin >> numSteps;

        for(int j = 1; j <= numSteps; j++) {
            currX += dirX;
            currY += dirY;
            currentTime++;
            if(lastTime[currX][currY] >= 0 && currentTime - lastTime[currX][currY] < answer) {
                answer = currentTime - lastTime[currX][currY];
            }
            lastTime[currX][currY] = currentTime;
        }
    }

    if(answer == 100000) {
        answer = -1;
    }

    cout << answer;
    return 0;
}
/* PREVIOUS SOLUTION FOR SOME REASAON LAST THREE TEST CASES DON'T WORK AEUHGHGHGHGHGHHGHGGHHGHGHG
#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/6/2021 at 12:13pm
//http://www.usaco.org/index.php?page=viewproblem2&cpid=593
using namespace std;

int x = 1000, y = 1000, t = 0;
int lawn[2001][2001] = {{0}};

int plotPoints(char direction, int distance){
    for(int i = 0; i < distance; ++i){
        ++t;
        lawn[y][x] += t;
        if(lawn[y][x]-t > 0){
            int temp = lawn[y][x] - t;
            return t - temp;
        }
        else if(direction == 'N'){
            ++y;
        }
        else if(direction == 'E'){
            ++x;
        }
        else if(direction == 'S'){
            --y;
        }
        else if(direction == 'W'){
            --x;
        }
    }
    return 0;
}


int main() {
    //freopen("mowing.in","r",stdin);
    //freopen("mowing.out","w",stdout);

    int N, dist, minAns = 100000;
    cin >> N;

    char dir;
    int collide;

    for(int i = 0; i < N; ++i){
        cin >> dir >> dist;

        collide = plotPoints(dir, dist);

        if(collide > 0){
            //cout << collide << '\n';
            minAns = min(minAns, collide);
        }
    }

    if(minAns == 100000){
        minAns = -1;
    }

    cout << minAns;

    return 0;
}*/