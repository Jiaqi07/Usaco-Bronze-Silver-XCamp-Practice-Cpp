/*
#include <iostream>
//Date Done: 8/9/2021 at 1:38PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1011
using namespace std;

int main(){
    //freopen("triangles.in","r",stdin);
    //freopen("triangles.out","w",stdout);

    int N, area, maxAns = 0;
    cin >> N;
    int x[101] = {0}, y[101] = {0}; //Array initilization

    for(int i = 0; i < N; ++i){ //Input
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(i == j){ //Check if two points same
                continue;
            }
            for(int k = 0; k < N; ++k){
                if(i == k || j == k){ //Check if two points same
                    continue;
                }

                if((x[i] == x[j] || x[j] == x[k] || x[k] == x[i]) && (y[i] == y[j] || y[j] == y[k] || y[k] == y[i])){
                    int lowY = min(y[i], min(y[j], y[k])), lowX = min(x[i], min(x[j], x[k])), highY = max(y[i], max(y[j], y[k])), highX = max(x[i], max(x[j], x[k]));
                    area = (highY-lowY) * (highX-lowX);
                    maxAns = max(area, maxAns);
                }
            }
        }
    }

    cout << maxAns;
    return 0;
}
*/