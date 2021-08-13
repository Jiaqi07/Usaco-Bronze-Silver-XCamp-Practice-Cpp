/*
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