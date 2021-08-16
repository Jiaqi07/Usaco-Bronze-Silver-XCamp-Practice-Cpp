/*
#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/5/2021 at 12:32/33PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=855
using namespace std;

void pourMilk(int from, int where, int c[3], int m[3]){
    int x, y;
    x = m[from];
    y = m[where];
    int z = x+y;

    if(x + y > c[where]){
        m[from] = z - c[where];
        m[where] = c[where];
    }
    else{
        m[from] = 0;
        m[where] = z;
    }
}

int main() {
    //freopen("mixmilk.in","r",stdin);
    //freopen("mixmilk.out","w",stdout);

    int capacity[3];
    int milk[3];

    for(int i = 0; i < 3; ++i){
        cin >> capacity[i] >> milk[i];
    }

    for(int i = 0; i < 4; ++i){
        if( i % 3 == 0){
            pourMilk(0, 1, capacity, milk);
        }
        else if( i % 3 == 1){
            pourMilk(1, 2, capacity, milk);
        }
        else if( i % 3 == 2){
            pourMilk(2, 0, capacity, milk);
        }
    }


    for(int i : milk){
        cout << i << "\n";
    }

    return 0;
}
*/