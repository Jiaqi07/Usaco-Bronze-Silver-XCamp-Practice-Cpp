/*
#include <iostream>
#include <set>
#include <algorithm>

//Date Done: 8/14/2021 at 1:53PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1108
using namespace std;

typedef pair<int, int> pairs;

int cows[1002][1002] = {{0}};
set<pairs> s;
pair<int, int> cow[100001];

void print2DArray (){
    for ( int x = 0; x < 10; ++x ) {
        for ( int y = 0; y < 10; ++y) {
            cout << cows[x][y] << " ";
        }
        cout << "\n";
    }
}

void printSet(set<pairs> const &s)
{
    for (auto const &i: s) {
        std::cout << i.first << ", " << i.second << " | ";
    }
    cout << '\n';
}


int isComfy(int i, int j){
    i += 3;
    j += 3;
    int count = 0, total = 0;
    if(cows[i+1][j] == 1){
        ++count;
    }
    if(cows[i-1][j] == 1){
        ++count;
    }
    if(cows[i][j+1] == 1){
        ++count;
    }
    if(cows[i][j-1] == 1){
        ++count;
    }
    if(count >= 3){
        s.insert(cow[i]);
        ++total;
    }
    count = 0;

    if(cows[i+2][j] == 1){
        ++count;
    }
    if(cows[i][j] == 1){
        ++count;
    }
    if(cows[i+1][j+1] == 1){
        ++count;
    }
    if(cows[i+1][j-1] == 1){
        ++count;
    }
    pair<int, int> a;
    if(count >= 3){
        a.first = i+1;
        a.second = j;
        s.insert(a);
        ++total;
    }
    count = 0;

    if(cows[i-2][j] == 1){
        ++count;
    }
    if(cows[i][j] == 1){
        ++count;
    }
    if(cows[i-1][j+1] == 1){
        ++count;
    }
    if(cows[i-1][j-1] == 1){
        ++count;
    }
    if(count >= 3){
        a.first = i-1;
        a.second = j;
        s.insert(a);
        ++total;
    }
    count = 0;

    if(cows[i][j+2] == 1){
        ++count;
    }
    if(cows[i][j] == 1){
        ++count;
    }
    if(cows[i+1][j+1] == 1){
        ++count;
    }
    if(cows[i-1][j+1] == 1){
        ++count;
    }
    if(count >= 3){
        a.first = i;
        a.second = j+1;
        s.insert(a);
        ++total;
    }
    count = 0;

    if(cows[i][j-2] == 1){
        ++count;
    }
    if(cows[i][j] == 1){
        ++count;
    }
    if(cows[i+1][j+1] == 1){
        ++count;
    }
    if(cows[i-1][j+1] == 1){
        ++count;
    }
    if(count >= 3){
        a.first = i;
        a.second = j-1;
        s.insert(a);
        ++total;
    }
    return total;
}

int main(){
    int N, maxX = 0, maxY = 0;
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> cow[i].first >> cow[i].second;
    }

    for(int i = 0; i < N; ++i){
        ++cows[cow[i].first+3][cow[i].second+3];

        //print2DArray();

        int old = s.size();

        int x = isComfy(cow[i].first, cow[i].second);

        int output = s.size() - old;

        printSet(s);

        cout << output << '\n';

    }
    return 0;
}
*/