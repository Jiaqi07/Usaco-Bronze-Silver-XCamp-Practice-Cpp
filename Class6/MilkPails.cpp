/*
#include <iostream>
//Date Done: 8/9/2021 at 11:50PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=615
using namespace std;

int main()
{
    //freopen("pails.in","r",stdin);
    //freopen("pails.out","w",stdout);

    int X, Y, M, maxAns, multiple1 = 0, multiple2 = 0;
    cin >> X >> Y >> M;

    while(true){
        if(multiple1 * X + multiple2 * Y > M){
            break;
        }
        while(true){
            if(multiple1 * X + multiple2 * Y > M){
                break;
            }
            maxAns = max(maxAns, multiple1 * X + multiple2 * Y);
            ++multiple2;
        }
        multiple2 = 0;
        ++multiple1;
    }

    cout << maxAns;

    return 0;
}
*/