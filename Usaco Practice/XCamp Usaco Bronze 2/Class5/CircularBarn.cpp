/*
#include <iostream>
//Date Done: 8/6/2021 at 1:53PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=616

using namespace std;

int main()
{
    //freopen("cbarn.in","r",stdin);
    //freopen("cbarn.out","w",stdout);

    int N, minAns = INT32_MAX;
    cin >> N;

    int *cowRooms;
    cowRooms = new int[N];

    for(int i = 0; i < N; ++i){
        cin >> cowRooms[i];
    }

    for(int i = 0; i < N; ++i){
        int count = 0;
        int loop = 0;
        int total = 0;
        for(int j = 0; j < N; ++j){
            int index = j+i;

            if(index > N-1){
                index = loop;
                ++loop;
            }
            total += cowRooms[index] * count;
            ++count;
        }
        minAns = min(total, minAns);
    }
    cout << minAns;

    delete cowRooms;
    return 0;
}
*/